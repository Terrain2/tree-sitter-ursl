(comment) @comment
(number) @number
(port) @port
[(inst_label) (end_label)] @label
(data_label) @label.data
(function_name) @function
(macro) @macro
(mem) @address
(index_register) @register
(named_register) @register
(input_register) @register.special

"'" @string
(char) @string
(char_escape) @string.special

(custom_instruction opcode: (identifier) @instruction)
(urcl_generic op: (identifier) @instruction)

(inst_head name: (identifier) @instruction)
(branch_head name: (identifier) @instruction)
(inst_permutation name: (identifier) @instruction)
(stack_frame (identifier) @property)

[
    "->"
    "+"
] @punctuation.delimiter
[
    "[" "]" ; data arrays, permutations
    "{" "}" ; instruction lists
] @punctuation.bracket

[ ; actual keywords
    "bits"
    "minstack"
    "minheap"
    
    "inst"
    "func"
] @keyword

[ ; intrinsics
    "height"
    "const"
    "perm"
    (halt)

    "in"
    "out"

    "label"
    "jump"
    "branch"

    (ret)
    "call"
    "icall"

    "ref"
    "get"
    "set"
] @keyword
[
    "JMP"
    "IN"
    "OUT"
] @instruction