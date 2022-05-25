// keyword extraction was not working well with instruction_name, so i just removed it. URSL compilation isn't that performance sensitive anyways
// These are at the top because they're reused as terminal symbols
const IDENT = /[A-Za-z_\d]+/;
const INDEX = /([1-9]0*)+|0/;

const i = (f) => $ => seq(optional(field("label", $.inst_label)), f($));

const inst_convert = (insts) => Object.fromEntries(
    Object.entries(insts).map(([opcode, operand]) => [
        opcode,
        i($ => seq(opcode, field("operand", operand($)))),
    ]),
);

const instructions = inst_convert({
    height: $ => $.number,
    const: $ => $._literal,
    call: $ => $.function_name,
    icall: $ => $.stack_behaviour,
    stack: $ => $.number,
    get: $ => $.identifier,
    set: $ => $.identifier,
    out: $ => $.port,
    in: $ => $.port,
    jump: $ => $.inst_label,
});

module.exports = grammar({
    name: "URSL",
    extras: $ => [/\s+/, $.comment],

    rules: {
        source_file: $ => seq(
            repeat($.definition),
            repeat(choice($.func, $.inst)),
        ),
        identifier: $ => IDENT,

        comment: $ => choice(
            // these weren't working properly, so i copied the ones from C# grammar.
            // i think they're written this weirdly because of LR parsing limitations
            // (no backtracking ever, so the regex has to make sure it can't consume past the */, or else it'd never ever match and produces error nodes)
            seq("//", /[^\r\n]*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),

        // Instruction names can also have dots, which allow for a nicer representation of specializing for operand type, etc.
        // This is fine, because instructions are not translated to labels, they are inlined, so i have no obligation to give them unique URCL-compatible names
        // They cannot start with . because otherwise it might be ambiguous for data labels (though i don't think that would be an issue currently, or probably ever, but better safe than sorry)
        instruction_name: $ => /([A-Za-z_\d]\.*)+/,

        // Cannot start with a digit like if it had \w+, because it would be ambiguous with regs for URCL blocks (how did tree-sitter not catch that?)
        function_name: $ => token(seq("$", IDENT)),

        array: $ => seq("[", repeat($._literal), "]"),
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

        macro: $ => token(seq("@", IDENT)),
        mem: $ => token(seq("#", INDEX)),
        port: $ => token(seq("%", IDENT)),

        inst_label: $ => token(seq(":", IDENT)),
        data_label: $ => token(seq(".", IDENT)),
        definition: $ => seq(
            field("label", $.data_label),
            field("value", choice($._literal, $.array)),
        ),

        stack_behaviour: $ => seq(
            field("params", $.number),
            "->",
            field("returns", $.number),
        ),
        instruction_list: $ => seq(
            "{",
            repeat($._instruction),
            "}",
        ),
        func: $ => seq(
            "func",
            field("name", $.function_name),
            optional(field("stack", $.stack_behaviour)),
            optional(seq(
                "+",
                field("locals", $.number)
            )),
            field("instructions", $.instruction_list),
        ),
        inst: $ => seq(
            "inst",
            field("name", $.instruction_name),
            optional(field("stack", $.stack_behaviour)),
            field("instructions", $.urcl_instruction_list),
            optional(field("branch", $.branch_block))
        ),
        branch_block: $ => seq(
            "branch",
            field("label", $.inst_label),
            field("instructions", $.urcl_instruction_list),
        ),
        _instruction: $ => choice(
            ...Object.keys(instructions).map(op => $[op]),
            $.let,
            $.branch,
            $.instruction
        ),

        ...instructions,

        let: i($ => seq("let", repeat1($.identifier), $.instruction_list)),
        branch: i($ => seq(field("opcode", $.instruction_name), "branch", field("operand", $.inst_label))),
        // all zero-param instructions like add, mult, are up to the compiler and not parser lol.
        // that's because there's not much semantic meaning to add here, as stack transitional behaviour isn't significant in the parser
        instruction: i($ => seq(field("opcode", $.instruction_name))),

        urcl_instruction_list: $ => seq(
            "{",
            repeat($._urcl_instruction),
            "}",
        ),

        _urcl_instruction: $ => choice(
            $.jmp,
            $.urcl_in,
            $.urcl_out,
            $.urcl_instruction,
        ),

        register: $ => token(seq("$", INDEX)),

        _value: $ => choice($.register, $._literal),

        unary_source: $ => $.register,
        binary_source: $ => seq(
            field("src1", $.register),
            field("src2", $.register),
        ),

        jmp: $ => seq(
            optional(field("label", $.inst_label)),
            "JMP",
            field("dest", $.inst_label),
        ),

        urcl_in: $ => seq(
            optional(field("label", $.inst_label)),
            "IN",
            field("dest", $.register),
            field("source", $.port),
        ),

        urcl_out: $ => seq(
            optional(field("label", $.inst_label)),
            "OUT",
            field("dest", $.port),
            field("source", $._value),
        ),

        urcl_instruction: $ => seq(
            optional(field("label", $.inst_label)),
            field("op", $.identifier),
            field("dest", choice($.register, $.inst_label)),
            field("source", choice(
                $._value,
                seq($._value, $._value),
            )),
        ),
    },
})