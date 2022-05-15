(comment) @comment
(number) @number
(port) @port
(inst_label) @label
(data_label) @label.data
(function_name) @function
(macro) @macro
(mem) @address
(register) @register

"'" @string
(char) @string
(char_escape) @string.special

; two separate things so that it doesn't require a branch clause
(inst name: (identifier) @instruction)
(inst "branch" @keyword)

(instruction (identifier) @instruction)
(urcl_instruction op: (identifier) @instruction)
(branch "branch" @instruction)

[
    "->"
    "+"
] @punctuation.delimiter
[
    "[" "]" ; data arrays
    "{" "}" ; instruction lists
] @punctuation.bracket

[
    "inst"
    "func"
    "height"
] @keyword
[
    "const"
    "call"
    "get"
    "set"
    "in"
    "out"
    "jump"
    "JMP"
    "IN"
    "OUT"
] @instruction