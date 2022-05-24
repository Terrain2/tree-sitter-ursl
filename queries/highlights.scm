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

(inst name: (identifier) @instruction)

(instruction (identifier) @instruction)
(urcl_instruction op: (identifier) @instruction)
(branch (identifier) @instruction "branch" @keyword)
(branch_block "branch" @keyword)

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
    "get"
    "set"
    "in"
    "out"
    "jump"
    "inst"
    "func"
    "height"
] @keyword
[
    "JMP"
    "IN"
    "OUT"
] @instruction