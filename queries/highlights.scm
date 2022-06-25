(comment) @comment
(number) @number
(port) @port
[(inst_label) (end_label)] @label
(data_label) @label.data
(function_name) @function
(macro) @macro
(mem) @address
(register) @register
(input_register) @register.special

"'" @string
(char) @string
(char_escape) @string.special

(branch opcode: (identifier) @instruction)
(custom_instruction opcode: (identifier) @instruction)
(urcl_generic op: (identifier) @instruction)

(inst name: (identifier) @instruction)
(inst_permutation name: (identifier) @instruction)
(stack_frame (identifier) @property)

[
    "->"
    "+"
] @punctuation.delimiter
[
    "[" "]" ; data arrays
    "{" "}" ; instruction lists
] @punctuation.bracket

[ ; actual keywords
    "bits"
    "minstack"
    "minheap"
    
    "inst"
    "func"
] @keyword

[ ; core language instructions
    "perm"
    "const"
    "height"

    "in"
    "out"

    "jump"
    "branch"

    "halt"

    "call"
    "icall"
    "ret"

    "ref"
    "get"
    "set"
] @keyword
[
    "JMP"
    "IN"
    "OUT"
] @instruction