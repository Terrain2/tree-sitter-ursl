const inst_convert = (insts) => Object.fromEntries(
    Object.entries(insts).map(([opcode, operand]) => [
        opcode,
        $ => seq(optional(field("label", $.inst_label)), opcode, field("operand", operand($))),
    ]),
);

const instructions = inst_convert({
    height: $ => $.number,
    const: $ => $._literal,
    call: $ => $.function_name,
    get: $ => $.number,
    set: $ => $.number,
    out: $ => $.port,
    in: $ => $.port,
    jump: $ => $.inst_label,
    branch: $ => $.inst_label,
});

module.exports = grammar({
    name: "URSL",
    extras: $ => [/\s+/, $.comment],
    word: $ => $.identifier,

    rules: {
        source_file: $ => seq(
            repeat($.definition),
            repeat($._func),
        ),

        comment: $ => choice(
            // these weren't working properly, so i copied the ones from C# grammar.
            // i think they're written this weirdly because of LR parsing limitations
            // (no backtracking ever, so the regex has to make sure it can't consume past the */, or else it'd never ever match and produces error nodes)
            seq("//", /[^\r\n]*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),

        // when \d can be at the start, for some reason this overwrites numbers and inserts an error node with an identifier.
        // probably something to do with keyword extraction, i.e. the ``word`` first above the rules
        // but i genuinely have no fucking clue how to fix that without changing the semantics of everything else
        // so labels and functions cannot start with a digit
        identifier: $ => /([A-Za-z_]\d*)+/,

        function_name: $ => token(seq("$", /\w+/)),

        array: $ => seq("[", repeat($._const_literal), "]"),
        _const_literal: $ => choice($.number, $.char_literal, $.macro),
        _literal: $ => choice($._const_literal, $.mem, $.data_label),

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

        macro: $ => seq("@", field("name", $.identifier)),

        mem: $ => seq("#", field("address", /([1-9]0*)+|0/)),

        port: $ => seq("%", field("name", $.identifier)),

        inst_label: $ => seq(":", field("name", $.identifier)),
        data_label: $ => seq(".", field("name", $.identifier)),
        definition: $ => seq(
            field("label", $.data_label),
            field("value", choice($._const_literal, $.array)),
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
        _func: $ => choice(
            $.func,
            $.inst,
            $.urcl,
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
            field("name", $.identifier),
            optional(field("stack", $.stack_behaviour)),
            optional(seq(
                "+",
                field("locals", $.number)
            )),
            field("instructions", $.instruction_list),
        ),
        urcl: $ => seq(
            "urcl",
            field("name", $.identifier),
            optional(field("stack", $.stack_behaviour)),
            field("instructions", $.urcl_instruction_list),
        ),
        _instruction: $ => choice(
            ...Object.keys(instructions).map(op => $[op]),
            $.instruction
        ),

        ...instructions,

        // all zero-param instructions like add, mult, are up to the compiler and not parser lol.
        // that's because there's not much semantic meaning to add here, as stack transitional behaviour isn't significant in the parser
        instruction: $ => seq(optional(field("label", $.inst_label)), field("opcode", $.identifier)),

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

        register: $ => seq("$", field("idx", /([1-9]0*)+|0/)),

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
            field("dest", $.register),
            choice(
                field("source", $._value),
                seq(
                    field("source1", $._value),
                    field("source2", $._value),
                ),
            ),
        ),
    },
})