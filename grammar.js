const inst_convert = (insts) => Object.fromEntries(
    Object.entries(insts).map(([opcode, operand]) => [
        opcode,
        $ => seq(optional($.inst_label), opcode, operand($)),
    ]),
);

const instructions = inst_convert({
    height: $ => $.number,
    label: $ => $.data_label,
    const: $ => $._literal,
    heap: $ => $.number,
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
    extras: $ => [/\s+/, $.comment, $.multiline_comment],
    word: $ => $.identifier,

    rules: {
        source_file: $ => seq(repeat($.definition), repeat($.inline), $.entrypoint, repeat(choice($.func, $.inline))),

        comment: $ => seq("//", /.*[\r\n]/),
        multiline_comment: $ => seq("/*", /.*/, "*/"),

        identifier: $ => /[A-Za-z0-9_]+/, // can't use \w because that's not a "terminal symbol" or something, but this is??

        function_name: $ => token(seq("$", /\w+/)),

        array: $ => seq("[", repeat($._literal), "]"),
        _literal: $ => choice($.number, $.char_literal),

        number: $ => token(seq(
            /[+-]?/,
            choice(
                /0b[0-1]+/,
                /0o[0-7]+/,
                /\d+/,
                /0x[A-Fa-f\d]+/,
            ),
        )),

        char_literal: $ => seq(
            "'",
            field("value", choice($.char, $.char_escape)),
            "'",
        ),
        char: $ => /[^\\'\r\n]/,
        char_escape: $ => /\\['\\bfnrtv0]/,

        port: $ => seq("%", field("name", $.identifier)),

        inst_label: $ => seq(":", $.identifier),
        data_label: $ => seq(".", $.identifier),
        definition: $ => seq(
            field("label", $.data_label),
            field("value", choice($._literal, $.array)),
        ),

        stack_behaviour: $ => seq(
            ":",
            field("params", $.number),
            "->",
            field("returns", $.number),
        ),
        instruction_list: $ => seq(
            "{",
            repeat($.instruction),
            "}",
        ),

        entrypoint: $ => seq(
            "entrypoint",
            optional(field("locals", $.number)),
            "{",
            repeat($._instruction),
            "}",
        ),
        func: $ => seq(
            "func",
            field("name", $.function_name),
            $.stack_behaviour,
            optional(seq(
                "+",
                field("locals", $.number)
            )),
            "{",
            repeat($._instruction),
            "}",
        ),
        inline: $ => seq(
            "inline",
            optional("always"),
            field("name", $.function_name),
            $.stack_behaviour,
            "{",
            repeat($._instruction),
            "}",
        ),
        _instruction: $ => choice(
            ...Object.keys(instructions).map(op => $[op]),
            $.instruction
        ),

        ...instructions,

        // all zero-param instructions like add, mult, are up to the compiler and not parser lol.
        // that's because there's not much semantic meaning to add here, as stack transitional behaviour isn't significant in the parser
        instruction: $ => seq(optional($.inst_label), $.identifier),
    },
})