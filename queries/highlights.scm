(comment) @comment
(multiline_comment) @comment
(number) @number
(function_name) @function
(def_label) @label
(char) @string
(char_escape) @string.special
(port) @port
(instruction
    (identifier) @instruction
)
[
    "'"
    "\""
] @string
[
    ".defs"
    ".entrypoint"
    "func"
] @keyword
[
    "label"
    "const"
    "heap"
    "call"
    "get"
    "set"
    "in"
    "out"
] @instruction
[
    ":"
    "->"
    "+"
] @punctuation.delimiter
[
    "{"
    "}"
] @punctuation.bracket