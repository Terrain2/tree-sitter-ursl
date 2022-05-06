module.exports = grammar({
    name: "URSL",
    extras: $ => [/\s+/, $.comment, $.multiline_comment],
    word: $ => $.identifier,

    rules: {
        source_file: $ => seq(optional($.defs), $.entrypoint, repeat($.func)),

        comment: $ => seq("//", /.*[\r\n]/),
        multiline_comment: $ => seq("/*", /.*/, "*/"),

        identifier: $ => /[A-Za-z0-9_]+/,

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
        
        string: $ => seq('"', repeat($._char), '"'),
        char_literal: $ => seq(
            "'",
            field("value", $._char),
            "'",
        ),
        _char: $ => choice($.char, $.char_escape),
        char: $ => /[^\\'\r\n]/,
        char_escape: $ => /\\['\\bfnrtv0]/,

        port: $ => seq("%", field("name", $.identifier)),

        def_label: $ => seq(".", $.identifier),
        definition: $ => seq(
            field("label", $.def_label),
            field("value", choice($._literal, $.string, $.array)),
        ),
        
        defs: $ => seq(
            ".defs",
            "{",
            repeat($.definition),
            "}",
        ),
        entrypoint: $ => seq(
            ".entrypoint",
            field("locals", $.number),
            "{",
            repeat($._instruction),
            "}",
        ),
        func: $ => seq(
            "func",
            field("name", $.function_name),
            ":",
            field("params", $.number),
            "->",
            field("returns", $.number),
            "+",
            field("locals", $.number),
            "{",
            repeat($._instruction),
            "}",
        ),
        _instruction: $ => choice(
            $.label,
            $.const,
            $.heap,
            $.call,
            $.get,
            $.set,
            $.in,
            $.out,
            $.instruction
        ),
        
        label: $ => seq("label", $.def_label),
        const: $ => seq("const", $._literal),
        heap: $ => seq("heap", $.number),
        call: $ => seq("call", $.function_name),
        get: $ => seq("get", $.number),
        set: $ => seq("set", $.number),
        in: $ => seq("in", $.port),
        out: $ => seq("out", $.port),
        // all zero-param instructions like add, mult, are up to the compiler and not parser lol.
        // that's because there's not much semantic meaning to add here, as stack transitional behaviour isn't significant in the parser
        instruction: $ => $.identifier,
    },
})