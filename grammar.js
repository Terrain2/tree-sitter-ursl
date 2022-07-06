const convert = (map, obj) => Object.fromEntries(Object.entries(obj).map(([key, val]) => [key, map(key, val)]))

const instructions = convert((opcode, operand) => $ => operand == null ? opcode : seq(opcode, field("operand", operand($))), {
    height: $ => $.number,
    const: $ => $._literal,
    perm: $ => $.permutation,
    halt: null,

    in: $ => $.port,
    out: $ => $.port,

    label: $ => $.inst_label,
    jump: $ => $.inst_label,
    branch: $ => $.inst_label,

    ret: null,
    call: $ => $.function_name,
    icall: $ => $.stack_behaviour,

    ref: $ => $.number,
    get: $ => $.number,
    set: $ => $.number,
});

const headers = convert((header, value) => $ => seq(header, field("value", value($))), {
    bits: $ => $.number,
    minstack: $ => $.number,
    minheap: $ => $.number,
});

module.exports = grammar({
    name: "URSL",
    extras: $ => [/\s+/, $.comment],

    rules: {
        source_file: $ => seq(
            field("headers", repeat($._header)),
            field("data", repeat($.definition)),
            field("code", repeat(choice($.func, $.inst, $.inst_branch, $.inst_permutation))),
        ),
        _header: $ => choice(
            ...Object.keys(headers).map(key => $[key]),
        ),
        ...headers,
        // These can really have whatever since they are erased in compilation and do not correspond to emitted labels
        // I allow dots because i like it, and it's useful to represent compiler-generated variations of instructions
        // \d shouldn't be allowed as the first char to disambiguate .0 from labels and fixed/floating point in the future (if that is ever added to URCL, URSL will have equivalents)
        identifier: $ => /([A-Za-z_][\d\.]*)+/,
        imm_ident: $ => token.immediate(/([A-Za-z_][\d\.]*)+/),
        index: $ => token.immediate(/[1-9]0*|0/),

        comment: $ => choice(
            // these weren't working properly, so i copied the ones from C# grammar.1
            // i think they're written this weirdly because of LR parsing limitations
            // (no backtracking ever, so the regex has to make sure it can't consume past the */, or else it'd never ever match and produces error nodes)
            seq("//", /[^\r\n]*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),

        // Cannot start with a digit like if it had \w+, because it would be ambiguous with regs for URCL blocks (how did tree-sitter not catch that?)
        function_name: $ => seq("$", field("name", $.imm_ident)),

        array: $ => seq("[", field("items", repeat($._literal)), "]"),
        _literal: $ => choice($.number, $.char_literal, $.macro, $.mem, $.data_label, $.function_name),

        number: $ => choice(
            /0b[0-1]+/,
            /0o[0-7]+/,
            /\d+/,
            /0x[A-Fa-f\d]+/,
        ),

        char_literal: $ => seq(
            "'",
            field("value", choice($.char, $.char_escape)),
            "'",
        ),
        char: $ => /[^\\'\r\n]/,
        char_escape: $ => /\\['\\nrt0]/,

        macro: $ => seq("@", field("name", $.imm_ident)),
        mem: $ => seq("#", field("addr", $.index)),
        port: $ => seq("%", field("name", $.imm_ident)),

        inst_label: $ => seq(":", field("name", $.imm_ident)),
        end_label: $ => ":$",
        _any_inst_label: $ => choice($.inst_label, $.end_label),
        data_label: $ => seq(".", field("name", $.imm_ident)),
        definition: $ => seq(
            field("label", $.data_label),
            field("value", choice($._literal, $.array)),
        ),

        stack_behaviour: $ => seq(
            field("params", $.number),
            "->",
            field("returns", $.number),
        ),
        func: $ => seq(
            "func",
            field("name", $.function_name),
            optional(field("stack", $.stack_behaviour)),
            optional(seq(
                "+",
                field("locals", $.number)
            )),
            "{",
            field("instructions", repeat($._instruction)),
            "}",
        ),
        inst: $ => seq(
            "inst",
            field("name", $.identifier),
            repeat(field("input", $._reg)),
            optional(seq(
                "->",
                repeat(field("output", $._reg)),
            )),
            field("instructions", $.urcl_instructions),
        ),
        inst_branch: $ => seq(
            "branch",
            field("name", $.identifier),
            repeat(field("input", $._reg)),
            "->",
            field("label", $.inst_label),
            field("instructions", $.urcl_instructions),
        ),
        inst_permutation: $ => seq(
            "inst",
            field("name", $.identifier),
            field("permutation", $.permutation),
        ),
        dunder_binary: $ => seq(
            "__binary__",
            field("name", $.identifier),
            field("instruction", $.identifier),
            ";",
        ),
        dunder_branching: $ => seq(
            "__branching__",
            field("name", $.identifier),
            field("instruction", $.identifier),
            "+",
            field("branch", $.identifier),
            ";",
        ),
        permutation: $ => seq(
            field("input", $.stack_frame),
            "->",
            field("output", $.stack_frame),
        ),
        stack_frame: $ => seq(
            "[",
            field("items", repeat($.identifier)),
            "]",
        ),
        _instruction: $ => choice(
            ...Object.keys(instructions).map(op => $[op]),
            $.branch,
            $.custom_instruction
        ),

        urcl_instructions: $ => seq(
            "{",
            repeat(field("instruction", $.urcl_instruction)),
            // the optional() is required here, because no backtracking, so the \n will consume newline and cause error otherwise
            // repeat(seq("\n", optional(field("instruction", $.urcl_instruction)))),
            "}"
        ),

        ...instructions,

        custom_instruction: $ => seq(field("opcode", $.identifier)),

        urcl_instruction: $ => seq(
            repeat(field("label", $.inst_label)),
            field("instruction", choice(
                $.urcl_jmp,
                $.urcl_in,
                $.urcl_out,
                $.urcl_generic,
            )),
        ),

        index_register: $ => seq("$", field("index", $.index)),
        named_register: $ => seq("&", field("name", $.imm_ident)),
        input_register: $ => seq("<", field("name", $.imm_ident), ">"),
        _reg: $ => choice($.index_register, $.named_register, $.input_register),

        _urcl_value: $ => choice($._reg, $._literal),

        urcl_jmp: $ => seq(
            "JMP",
            field("dest", $._any_inst_label),
        ),

        urcl_in: $ => seq(
            "IN",
            field("dest", $._reg),
            field("source", $.port),
        ),

        urcl_out: $ => seq(
            "OUT",
            field("dest", $.port),
            field("source", $._urcl_value),
        ),

        urcl_generic: $ => seq(
            field("op", $.identifier), // no validation is performed on URCL instruction names so allowing extra stuff (.) in the grammar is not an issue
            field("dest", choice($._reg, $._any_inst_label)),
            repeat1(field("source", $._urcl_value)),
        ),
    },
})