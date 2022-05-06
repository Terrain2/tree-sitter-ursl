(comment) @comment
(multiline_comment) @comment
(number) @number
(port) @port
(inst_label) @label
(data_label) @label.data
(function_name) @function

"'" @string
(char) @string
(char_escape) @string.special

(instruction
    (identifier) @instruction
)

(stack_behaviour
    ":" @punctuation.delimiter
)
[
    "->"
    "+"
] @punctuation.delimiter

[
    "[" "]" ; data arrays
    "{" "}" ; instruction lists
] @punctuation.bracket

[
    "entrypoint"
    "inline"
    "always"
    "func"
    "height"
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