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

(instruction_name) @instruction
(urcl_instruction op: (identifier) @instruction)
(let (identifier) @variable)
(get (identifier) @variable)
(set (identifier) @variable)

[
    "->"
    "+"
] @punctuation.delimiter
[
    "[" "]" ; data arrays
    "{" "}" ; instruction lists
] @punctuation.bracket

[
    "const"
    "call"
    "icall"
    "get"
    "set"
    "in"
    "out"
    "jump"
    "inst"
    "func"
    "height"
    "let"
    "branch"
] @keyword
[
    "JMP"
    "IN"
    "OUT"
] @instruction