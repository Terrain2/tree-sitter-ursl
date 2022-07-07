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
            field("code", repeat(choice($.func, $.deferred_func, $.extern_func, $.inst, $.inst_branch, $.inst_permutation, $._internal))),
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

        _data_literal: $ => choice($.string, $.array, $._literal),
        array: $ => seq("[", field("item", repeat($._data_literal)), "]"),
        _literal: $ => choice($.number, $.char, $.macro, $.mem, $.data_label, $.function_name),

        number: $ => choice(
            /0b[0-1]+/,
            /0o[0-7]+/,
            /\d+/,
            /0x[A-Fa-f\d]+/,
        ),

        // string from C# grammar, allow its escape sequences because why not
        string: $ => seq(
            '"',
            repeat(field("content", choice(
                $.string_segment,
                $.escape_sequence,
            ))),
            '"'
        ),
        char: $ => seq(
            "'",
            field("content", choice($.char_value, $.escape_sequence)),
            "'"
        ),
        string_segment: $ => token.immediate(/[^\\"]+/),
        char_value: $ => token.immediate(/[^\\']/),
        escape_sequence: $ => choice(
            seq(token.immediate("\\x"), field("value", $.hex_escape)),
            seq(token.immediate("\\u"), field("value", alias($.unicode_escape_short, $.unicode_escape))),
            seq(token.immediate("\\u{"), field("value", $.unicode_escape), token.immediate("}")),
            seq(token.immediate("\\U"), field("value", alias($.unicode_escape_long, $.unicode_escape))),
            seq(token.immediate("\\U{"), field("value", $.unicode_escape), token.immediate("}")),
            seq(token.immediate("\\"), field("value", $.char_escape)),
        ),
        hex_escape: $ => token.immediate(/[0-9a-fA-F]{2}/),
        unicode_escape: $ => token.immediate(/[0-9a-fA-F]+/),
        unicode_escape_short: $ => token.immediate(/[0-9a-fA-F]{4}/),
        unicode_escape_long: $ => token.immediate(/[0-9a-fA-F]{8}/),
        char_escape: $ => token.immediate(/[^xuU]/),

        macro: $ => seq("@", field("name", $.imm_ident)),
        mem: $ => seq("#", field("addr", $.index)),
        port: $ => seq("%", field("name", $.imm_ident)),

        inst_label: $ => seq(":", field("name", $.imm_ident)),
        end_label: $ => ":$",
        _any_inst_label: $ => choice($.inst_label, $.end_label),
        data_label: $ => seq(".", field("name", $.imm_ident)),
        definition: $ => seq(
            field("label", $.data_label),
            field("value", $._data_literal, $.array),
        ),

        stack_behaviour: $ => seq(
            field("params", $.number),
            "->",
            field("returns", $.number),
        ),

        deferred_func: $ => seq(
            "func",
            field("name", $.function_name),
            optional(field("stack", $.stack_behaviour)),
            ";",
        ),

        extern_func: $ => seq(
            "extern",
            field("call_convention", $.string),
            "func",
            field("name", $.function_name),
            optional(field("stack", $.stack_behaviour)),
            optional(seq(
                "=",
                field("label", $.data_label),
            )),
            ";",
        ),

        func_head: $ => seq(
            "func",
            field("name", $.function_name),
            optional(field("stack", $.stack_behaviour)),
            optional(seq(
                "+",
                field("locals", $.number)
            )),
        ),
        func: $ => seq(
            field("head", $.func_head),
            "{",
            field("instructions", repeat($._instruction)),
            "}",
        ),

        inst_head: $ => seq(
            "inst",
            field("name", $.identifier),
            repeat(field("input", $._input_reg)),
            optional(seq(
                "->",
                repeat(field("output", $._reg)),
            )),
        ),
        inst: $ => seq(
            field("head", $.inst_head),
            "{",
            repeat(field("instruction", $.urcl_instruction)),
            "}"
        ),

        branch_head: $ => seq(
            "branch",
            field("name", $.identifier),
            repeat(field("input", $._reg)),
            "->",
            field("label", $.inst_label),
        ),
        inst_branch: $ => seq(
            field("head", $.branch_head),
            "{",
            repeat(field("instruction", $.urcl_instruction)),
            "}"
        ),

        inst_permutation: $ => seq(
            "inst",
            field("name", $.identifier),
            field("permutation", $.permutation),
        ),
        _internal: $ => choice($.dunder_binary, $.dunder_branching),
        dunder_binary: $ => seq(
            "__binary__",
            field("name", $.identifier),
            "->",
            field("instruction", $.identifier),
            ";",
        ),
        dunder_branching: $ => seq(
            "__branching__",
            field("name", $.identifier),
            "->",
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
        _reg: $ => choice($.index_register, $.named_register),

        input_register: $ => seq("<", field("reg", $._reg), ">"),
        _input_reg: $ => choice($._reg, $.input_register),

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