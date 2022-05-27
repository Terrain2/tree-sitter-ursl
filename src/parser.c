#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 41

enum {
  anon_sym_bits = 1,
  anon_sym_minstack = 2,
  anon_sym_minheap = 3,
  sym_identifier = 4,
  anon_sym_SLASH_SLASH = 5,
  aux_sym_comment_token1 = 6,
  anon_sym_SLASH_STAR = 7,
  aux_sym_comment_token2 = 8,
  anon_sym_SLASH = 9,
  sym_function_name = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  aux_sym_number_token1 = 13,
  aux_sym_number_token2 = 14,
  aux_sym_number_token3 = 15,
  aux_sym_number_token4 = 16,
  anon_sym_SQUOTE = 17,
  sym_char = 18,
  sym_char_escape = 19,
  sym_macro = 20,
  sym_mem = 21,
  sym_port = 22,
  sym_inst_label = 23,
  sym_data_label = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_func = 26,
  anon_sym_PLUS = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_inst = 30,
  anon_sym_branch = 31,
  anon_sym_height = 32,
  anon_sym_jump = 33,
  anon_sym_halt = 34,
  anon_sym_perm = 35,
  anon_sym_const = 36,
  anon_sym_in = 37,
  anon_sym_out = 38,
  anon_sym_call = 39,
  anon_sym_icall = 40,
  anon_sym_ret = 41,
  anon_sym_ref = 42,
  anon_sym_get = 43,
  anon_sym_set = 44,
  sym_register = 45,
  anon_sym_JMP = 46,
  anon_sym_IN = 47,
  anon_sym_OUT = 48,
  sym_source_file = 49,
  sym_headers = 50,
  sym_comment = 51,
  sym_array = 52,
  sym__literal = 53,
  sym_number = 54,
  sym_char_literal = 55,
  sym_definition = 56,
  sym_stack_behaviour = 57,
  sym_func = 58,
  sym_inst = 59,
  sym_inst_permutation = 60,
  sym_permutation = 61,
  sym_stack_frame = 62,
  sym_branch_block = 63,
  sym__instruction = 64,
  sym_height = 65,
  sym_jump = 66,
  sym_halt = 67,
  sym_perm = 68,
  sym_const = 69,
  sym_in = 70,
  sym_out = 71,
  sym_call = 72,
  sym_icall = 73,
  sym_ret = 74,
  sym_ref = 75,
  sym_get = 76,
  sym_set = 77,
  sym_branch = 78,
  sym_custom_instruction = 79,
  sym__urcl_instruction = 80,
  sym__value = 81,
  sym_jmp = 82,
  sym_urcl_in = 83,
  sym_urcl_out = 84,
  sym_urcl_instruction = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_source_file_repeat2 = 87,
  aux_sym_array_repeat1 = 88,
  aux_sym_func_repeat1 = 89,
  aux_sym_inst_repeat1 = 90,
  aux_sym_stack_frame_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bits] = "bits",
  [anon_sym_minstack] = "minstack",
  [anon_sym_minheap] = "minheap",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_function_name] = "function_name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [anon_sym_SQUOTE] = "'",
  [sym_char] = "char",
  [sym_char_escape] = "char_escape",
  [sym_macro] = "macro",
  [sym_mem] = "mem",
  [sym_port] = "port",
  [sym_inst_label] = "inst_label",
  [sym_data_label] = "data_label",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_func] = "func",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_inst] = "inst",
  [anon_sym_branch] = "branch",
  [anon_sym_height] = "height",
  [anon_sym_jump] = "jump",
  [anon_sym_halt] = "halt",
  [anon_sym_perm] = "perm",
  [anon_sym_const] = "const",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_call] = "call",
  [anon_sym_icall] = "icall",
  [anon_sym_ret] = "ret",
  [anon_sym_ref] = "ref",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [sym_register] = "register",
  [anon_sym_JMP] = "JMP",
  [anon_sym_IN] = "IN",
  [anon_sym_OUT] = "OUT",
  [sym_source_file] = "source_file",
  [sym_headers] = "headers",
  [sym_comment] = "comment",
  [sym_array] = "array",
  [sym__literal] = "_literal",
  [sym_number] = "number",
  [sym_char_literal] = "char_literal",
  [sym_definition] = "definition",
  [sym_stack_behaviour] = "stack_behaviour",
  [sym_func] = "func",
  [sym_inst] = "inst",
  [sym_inst_permutation] = "inst_permutation",
  [sym_permutation] = "permutation",
  [sym_stack_frame] = "stack_frame",
  [sym_branch_block] = "branch_block",
  [sym__instruction] = "_instruction",
  [sym_height] = "height",
  [sym_jump] = "jump",
  [sym_halt] = "halt",
  [sym_perm] = "perm",
  [sym_const] = "const",
  [sym_in] = "in",
  [sym_out] = "out",
  [sym_call] = "call",
  [sym_icall] = "icall",
  [sym_ret] = "ret",
  [sym_ref] = "ref",
  [sym_get] = "get",
  [sym_set] = "set",
  [sym_branch] = "branch",
  [sym_custom_instruction] = "custom_instruction",
  [sym__urcl_instruction] = "_urcl_instruction",
  [sym__value] = "_value",
  [sym_jmp] = "jmp",
  [sym_urcl_in] = "urcl_in",
  [sym_urcl_out] = "urcl_out",
  [sym_urcl_instruction] = "urcl_instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_func_repeat1] = "func_repeat1",
  [aux_sym_inst_repeat1] = "inst_repeat1",
  [aux_sym_stack_frame_repeat1] = "stack_frame_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_minstack] = anon_sym_minstack,
  [anon_sym_minheap] = anon_sym_minheap,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_function_name] = sym_function_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_char] = sym_char,
  [sym_char_escape] = sym_char_escape,
  [sym_macro] = sym_macro,
  [sym_mem] = sym_mem,
  [sym_port] = sym_port,
  [sym_inst_label] = sym_inst_label,
  [sym_data_label] = sym_data_label,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_inst] = anon_sym_inst,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_halt] = anon_sym_halt,
  [anon_sym_perm] = anon_sym_perm,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_icall] = anon_sym_icall,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [sym_register] = sym_register,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_OUT] = anon_sym_OUT,
  [sym_source_file] = sym_source_file,
  [sym_headers] = sym_headers,
  [sym_comment] = sym_comment,
  [sym_array] = sym_array,
  [sym__literal] = sym__literal,
  [sym_number] = sym_number,
  [sym_char_literal] = sym_char_literal,
  [sym_definition] = sym_definition,
  [sym_stack_behaviour] = sym_stack_behaviour,
  [sym_func] = sym_func,
  [sym_inst] = sym_inst,
  [sym_inst_permutation] = sym_inst_permutation,
  [sym_permutation] = sym_permutation,
  [sym_stack_frame] = sym_stack_frame,
  [sym_branch_block] = sym_branch_block,
  [sym__instruction] = sym__instruction,
  [sym_height] = sym_height,
  [sym_jump] = sym_jump,
  [sym_halt] = sym_halt,
  [sym_perm] = sym_perm,
  [sym_const] = sym_const,
  [sym_in] = sym_in,
  [sym_out] = sym_out,
  [sym_call] = sym_call,
  [sym_icall] = sym_icall,
  [sym_ret] = sym_ret,
  [sym_ref] = sym_ref,
  [sym_get] = sym_get,
  [sym_set] = sym_set,
  [sym_branch] = sym_branch,
  [sym_custom_instruction] = sym_custom_instruction,
  [sym__urcl_instruction] = sym__urcl_instruction,
  [sym__value] = sym__value,
  [sym_jmp] = sym_jmp,
  [sym_urcl_in] = sym_urcl_in,
  [sym_urcl_out] = sym_urcl_out,
  [sym_urcl_instruction] = sym_urcl_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
  [aux_sym_inst_repeat1] = aux_sym_inst_repeat1,
  [aux_sym_stack_frame_repeat1] = aux_sym_stack_frame_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minstack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minheap] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_char_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_mem] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_label] = {
    .visible = true,
    .named = true,
  },
  [sym_data_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_perm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_behaviour] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_permutation] = {
    .visible = true,
    .named = true,
  },
  [sym_permutation] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_block] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_height] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [sym_perm] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_out] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_icall] = {
    .visible = true,
    .named = true,
  },
  [sym_ret] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__urcl_instruction] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_jmp] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_in] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_out] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inst_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_bits = 1,
  field_branch = 2,
  field_code = 3,
  field_data = 4,
  field_dest = 5,
  field_headers = 6,
  field_input = 7,
  field_instructions = 8,
  field_items = 9,
  field_label = 10,
  field_locals = 11,
  field_minheap = 12,
  field_minstack = 13,
  field_name = 14,
  field_op = 15,
  field_opcode = 16,
  field_operand = 17,
  field_output = 18,
  field_params = 19,
  field_permutation = 20,
  field_returns = 21,
  field_source = 22,
  field_stack = 23,
  field_value = 24,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bits] = "bits",
  [field_branch] = "branch",
  [field_code] = "code",
  [field_data] = "data",
  [field_dest] = "dest",
  [field_headers] = "headers",
  [field_input] = "input",
  [field_instructions] = "instructions",
  [field_items] = "items",
  [field_label] = "label",
  [field_locals] = "locals",
  [field_minheap] = "minheap",
  [field_minstack] = "minstack",
  [field_name] = "name",
  [field_op] = "op",
  [field_opcode] = "opcode",
  [field_operand] = "operand",
  [field_output] = "output",
  [field_params] = "params",
  [field_permutation] = "permutation",
  [field_returns] = "returns",
  [field_source] = "source",
  [field_stack] = "stack",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 1},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 3},
  [25] = {.index = 43, .length = 3},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 2},
  [28] = {.index = 50, .length = 3},
  [29] = {.index = 53, .length = 3},
  [30] = {.index = 56, .length = 3},
  [31] = {.index = 59, .length = 3},
  [32] = {.index = 62, .length = 3},
  [33] = {.index = 65, .length = 4},
  [34] = {.index = 69, .length = 4},
  [35] = {.index = 73, .length = 3},
  [36] = {.index = 76, .length = 4},
  [37] = {.index = 80, .length = 4},
  [38] = {.index = 84, .length = 5},
  [39] = {.index = 89, .length = 1},
  [40] = {.index = 90, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_headers, 0},
  [1] =
    {field_data, 1},
    {field_headers, 0},
  [3] =
    {field_code, 1},
    {field_headers, 0},
  [5] =
    {field_label, 0},
    {field_value, 1},
  [7] =
    {field_code, 2},
    {field_data, 1},
    {field_headers, 0},
  [10] =
    {field_name, 1},
    {field_permutation, 2},
  [12] =
    {field_items, 1},
  [13] =
    {field_value, 1},
  [14] =
    {field_opcode, 0},
  [15] =
    {field_name, 1},
  [16] =
    {field_bits, 1},
    {field_minheap, 5},
    {field_minstack, 3},
  [19] =
    {field_label, 0},
    {field_opcode, 1},
  [21] =
    {field_label, 0},
  [22] =
    {field_operand, 1},
  [23] =
    {field_instructions, 3},
    {field_name, 1},
  [25] =
    {field_params, 0},
    {field_returns, 2},
  [27] =
    {field_name, 1},
    {field_stack, 2},
  [29] =
    {field_branch, 4},
    {field_name, 1},
  [31] =
    {field_dest, 1},
  [32] =
    {field_input, 0},
    {field_output, 2},
  [34] =
    {field_locals, 3},
    {field_name, 1},
  [36] =
    {field_opcode, 0},
    {field_operand, 2},
  [38] =
    {field_label, 0},
    {field_operand, 2},
  [40] =
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [43] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [46] =
    {field_dest, 2},
    {field_label, 0},
  [48] =
    {field_dest, 1},
    {field_source, 2},
  [50] =
    {field_branch, 5},
    {field_instructions, 3},
    {field_name, 1},
  [53] =
    {field_branch, 5},
    {field_name, 1},
    {field_stack, 2},
  [56] =
    {field_instructions, 5},
    {field_locals, 3},
    {field_name, 1},
  [59] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [62] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [65] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [69] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [73] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [76] =
    {field_branch, 6},
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [80] =
    {field_instructions, 6},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [84] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
    {field_source, 4},
  [89] =
    {field_label, 1},
  [90] =
    {field_instructions, 3},
    {field_label, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'J') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'g') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'j') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'J') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(138);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'j') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'j') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(154);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(197);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(195);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(199);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(144);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 77:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 78:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 80:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 81:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_minstack);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_minheap);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(196);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_mem);
      if (lookahead == '0') ADVANCE(155);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(194);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 82},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 82},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 82},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 82},
  [108] = {.lex_state = 82},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 82},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 82},
  [119] = {.lex_state = 82},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 82},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 82},
  [125] = {.lex_state = 82},
  [126] = {.lex_state = 82},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 82},
  [131] = {.lex_state = 82},
  [132] = {.lex_state = 82},
  [133] = {.lex_state = 82},
  [134] = {.lex_state = 82},
  [135] = {.lex_state = 82},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 82},
  [138] = {.lex_state = 82},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 82},
  [141] = {.lex_state = 82},
  [142] = {.lex_state = 82},
  [143] = {.lex_state = 82},
  [144] = {.lex_state = 82},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 82},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 82},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 133},
  [196] = {(TSStateId)(-1)},
  [197] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_minstack] = ACTIONS(1),
    [anon_sym_minheap] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_function_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_char_escape] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym_mem] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
    [sym_inst_label] = ACTIONS(1),
    [sym_data_label] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_inst] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_halt] = ACTIONS(1),
    [anon_sym_perm] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_icall] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(186),
    [sym_headers] = STATE(80),
    [sym_comment] = STATE(1),
    [anon_sym_bits] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    STATE(2), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_func_repeat1,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [81] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_func_repeat1,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [162] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_func_repeat1,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [243] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [324] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_func_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [405] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      sym_inst_label,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_height,
    ACTIONS(60), 1,
      anon_sym_jump,
    ACTIONS(63), 1,
      anon_sym_halt,
    ACTIONS(66), 1,
      anon_sym_perm,
    ACTIONS(69), 1,
      anon_sym_const,
    ACTIONS(72), 1,
      anon_sym_in,
    ACTIONS(75), 1,
      anon_sym_out,
    ACTIONS(78), 1,
      anon_sym_call,
    ACTIONS(81), 1,
      anon_sym_icall,
    ACTIONS(84), 1,
      anon_sym_ret,
    ACTIONS(87), 1,
      anon_sym_ref,
    ACTIONS(90), 1,
      anon_sym_get,
    ACTIONS(93), 1,
      anon_sym_set,
    STATE(56), 1,
      sym__instruction,
    STATE(7), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [484] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [565] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [646] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_inst_label,
    ACTIONS(15), 1,
      anon_sym_height,
    ACTIONS(17), 1,
      anon_sym_jump,
    ACTIONS(19), 1,
      anon_sym_halt,
    ACTIONS(21), 1,
      anon_sym_perm,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_icall,
    ACTIONS(33), 1,
      anon_sym_ret,
    ACTIONS(35), 1,
      anon_sym_ref,
    ACTIONS(37), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(56), 1,
      sym__instruction,
    STATE(28), 15,
      sym_height,
      sym_jump,
      sym_halt,
      sym_perm,
      sym_const,
      sym_in,
      sym_out,
      sym_call,
      sym_icall,
      sym_ret,
      sym_ref,
      sym_get,
      sym_set,
      sym_branch,
      sym_custom_instruction,
  [727] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      aux_sym_number_token3,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym_register,
    STATE(11), 1,
      sym_comment,
    STATE(31), 1,
      sym__literal,
    STATE(90), 1,
      sym__value,
    ACTIONS(112), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(106), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(104), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [777] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      aux_sym_number_token3,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym_register,
    STATE(12), 1,
      sym_comment,
    STATE(31), 1,
      sym__literal,
    STATE(86), 1,
      sym__value,
    ACTIONS(118), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(106), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(104), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(116), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      aux_sym_number_token3,
    STATE(13), 1,
      sym_comment,
    ACTIONS(120), 17,
      ts_builtin_sym_end,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_inst,
  [859] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(126), 4,
      sym_inst_label,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(124), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [891] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_branch,
    STATE(15), 1,
      sym_comment,
    ACTIONS(130), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(128), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [924] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_branch,
    STATE(16), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(134), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [957] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(142), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(140), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [987] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(146), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(144), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1017] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(148), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(154), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(152), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1077] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(158), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(156), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(162), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(160), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1137] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(164), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1167] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(170), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(168), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1197] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(174), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(172), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(176), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1257] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(182), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(180), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(186), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(184), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(190), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(188), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(192), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(194), 11,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
  [1377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(196), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(198), 11,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
  [1407] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(202), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(200), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1437] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(120), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(122), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1467] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(206), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(204), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1497] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(210), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(208), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1527] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(214), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(212), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(218), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(216), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1587] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(222), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(220), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1617] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(226), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(224), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(230), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(228), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1677] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(234), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(232), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(238), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(236), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1737] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(240), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1767] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(244), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1797] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(250), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(248), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(254), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(252), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(194), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(192), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1887] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(258), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(256), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1917] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(262), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(260), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(266), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(264), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1977] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(270), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(268), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2007] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(274), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(272), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(278), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(276), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(122), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(120), 11,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
  [2097] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(208), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(210), 11,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
  [2127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(282), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(280), 14,
      sym_identifier,
      anon_sym_height,
      anon_sym_jump,
      anon_sym_halt,
      anon_sym_perm,
      anon_sym_const,
      anon_sym_in,
      anon_sym_out,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ret,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2157] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_height,
    ACTIONS(288), 1,
      anon_sym_jump,
    ACTIONS(290), 1,
      anon_sym_halt,
    ACTIONS(292), 1,
      anon_sym_perm,
    ACTIONS(294), 1,
      anon_sym_const,
    ACTIONS(296), 1,
      anon_sym_in,
    ACTIONS(298), 1,
      anon_sym_out,
    ACTIONS(300), 1,
      anon_sym_call,
    ACTIONS(302), 1,
      anon_sym_icall,
    ACTIONS(304), 1,
      anon_sym_ret,
    ACTIONS(306), 1,
      anon_sym_ref,
    ACTIONS(308), 1,
      anon_sym_get,
    ACTIONS(310), 1,
      anon_sym_set,
    STATE(57), 1,
      sym_comment,
  [2209] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    ACTIONS(320), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_array_repeat1,
    STATE(77), 1,
      sym__literal,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(312), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2249] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      aux_sym_number_token3,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym_register,
    STATE(31), 1,
      sym__literal,
    STATE(59), 1,
      sym_comment,
    STATE(87), 1,
      sym__value,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(106), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(104), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2289] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      aux_sym_number_token3,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym_register,
    STATE(31), 1,
      sym__literal,
    STATE(60), 1,
      sym_comment,
    STATE(85), 1,
      sym__value,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(106), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(104), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2329] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      aux_sym_number_token3,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym_register,
    STATE(11), 1,
      sym__value,
    STATE(31), 1,
      sym__literal,
    STATE(61), 1,
      sym_comment,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(106), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(104), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2369] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      aux_sym_number_token3,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      sym_register,
    STATE(12), 1,
      sym__value,
    STATE(31), 1,
      sym__literal,
    STATE(62), 1,
      sym_comment,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(106), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(104), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2409] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      aux_sym_number_token3,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym__literal,
    STATE(63), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(327), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(322), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2447] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    ACTIONS(320), 1,
      anon_sym_SQUOTE,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_comment,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    STATE(121), 2,
      sym_array,
      sym__literal,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(312), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2485] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    ACTIONS(320), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(77), 1,
      sym__literal,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(312), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2525] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_number_token3,
    STATE(66), 1,
      sym_comment,
    ACTIONS(210), 12,
      ts_builtin_sym_end,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2552] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      aux_sym_number_token3,
    STATE(67), 1,
      sym_comment,
    ACTIONS(194), 12,
      ts_builtin_sym_end,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2579] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_inst_label,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      anon_sym_JMP,
    ACTIONS(348), 1,
      anon_sym_IN,
    ACTIONS(350), 1,
      anon_sym_OUT,
    STATE(68), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_inst_repeat1,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2619] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_inst_label,
    ACTIONS(346), 1,
      anon_sym_JMP,
    ACTIONS(348), 1,
      anon_sym_IN,
    ACTIONS(350), 1,
      anon_sym_OUT,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_inst_repeat1,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2659] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_inst_label,
    ACTIONS(346), 1,
      anon_sym_JMP,
    ACTIONS(348), 1,
      anon_sym_IN,
    ACTIONS(350), 1,
      anon_sym_OUT,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_inst_repeat1,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2699] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(359), 1,
      sym_inst_label,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      anon_sym_JMP,
    ACTIONS(367), 1,
      anon_sym_IN,
    ACTIONS(370), 1,
      anon_sym_OUT,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(71), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2737] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_inst_label,
    ACTIONS(346), 1,
      anon_sym_JMP,
    ACTIONS(348), 1,
      anon_sym_IN,
    ACTIONS(350), 1,
      anon_sym_OUT,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_inst_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2777] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_inst_label,
    ACTIONS(346), 1,
      anon_sym_JMP,
    ACTIONS(348), 1,
      anon_sym_IN,
    ACTIONS(350), 1,
      anon_sym_OUT,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_inst_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2817] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      sym__literal,
    STATE(74), 1,
      sym_comment,
    STATE(35), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(377), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2851] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__literal,
    STATE(75), 1,
      sym_comment,
    STATE(35), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(377), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2885] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_inst_label,
    ACTIONS(346), 1,
      anon_sym_JMP,
    ACTIONS(348), 1,
      anon_sym_IN,
    ACTIONS(350), 1,
      anon_sym_OUT,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_inst_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(94), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2925] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      aux_sym_number_token3,
    STATE(77), 1,
      sym_comment,
    ACTIONS(387), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2949] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_comment,
    STATE(148), 1,
      sym_permutation,
    STATE(166), 1,
      sym_number,
    STATE(174), 1,
      sym_stack_behaviour,
    STATE(175), 1,
      sym_stack_frame,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2985] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      sym_data_label,
    ACTIONS(399), 1,
      anon_sym_func,
    ACTIONS(401), 1,
      anon_sym_inst,
    STATE(79), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_source_file_repeat2,
    STATE(95), 1,
      aux_sym_source_file_repeat1,
    STATE(119), 1,
      sym_definition,
    STATE(141), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3021] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      sym_data_label,
    ACTIONS(399), 1,
      anon_sym_func,
    ACTIONS(401), 1,
      anon_sym_inst,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      aux_sym_source_file_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_source_file_repeat2,
    STATE(119), 1,
      sym_definition,
    STATE(141), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3057] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_comment,
    STATE(150), 1,
      sym_stack_behaviour,
    STATE(166), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3087] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 1,
      anon_sym_func,
    ACTIONS(414), 1,
      anon_sym_inst,
    STATE(82), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(141), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3112] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      anon_sym_func,
    ACTIONS(401), 1,
      anon_sym_inst,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(83), 1,
      sym_comment,
    STATE(141), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3139] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      anon_sym_func,
    ACTIONS(401), 1,
      anon_sym_inst,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(84), 1,
      sym_comment,
    STATE(141), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3166] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(421), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(425), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3206] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(431), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(429), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3226] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(433), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3246] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(437), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3266] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(441), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3286] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(447), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(445), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3306] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(38), 1,
      sym_stack_behaviour,
    STATE(92), 1,
      sym_comment,
    STATE(190), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3330] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(449), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3350] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(455), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(453), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3370] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(459), 1,
      sym_data_label,
    STATE(119), 1,
      sym_definition,
    STATE(95), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(457), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3392] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_stack_behaviour,
    STATE(96), 1,
      sym_comment,
    STATE(190), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3416] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(464), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(462), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3436] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(98), 1,
      sym_comment,
    STATE(165), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3457] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_number,
    STATE(99), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3478] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(19), 1,
      sym_number,
    STATE(100), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3499] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(36), 1,
      sym_number,
    STATE(101), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3520] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(102), 1,
      sym_comment,
    STATE(144), 1,
      sym_branch_block,
    ACTIONS(466), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3541] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(45), 1,
      sym_number,
    STATE(103), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3562] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(104), 1,
      sym_comment,
    STATE(122), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3583] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(17), 1,
      sym_number,
    STATE(105), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3604] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(14), 1,
      sym_number,
    STATE(106), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3625] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(107), 1,
      sym_comment,
    STATE(125), 1,
      sym_branch_block,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3646] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(108), 1,
      sym_comment,
    STATE(146), 1,
      sym_branch_block,
    ACTIONS(472), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3667] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(109), 1,
      sym_comment,
    STATE(181), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3688] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(110), 1,
      sym_comment,
    STATE(172), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3709] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(111), 1,
      sym_comment,
    STATE(173), 1,
      sym_number,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3730] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    STATE(14), 1,
      sym_number,
    STATE(112), 1,
      sym_comment,
    ACTIONS(316), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3751] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(113), 1,
      sym_comment,
    STATE(138), 1,
      sym_branch_block,
    ACTIONS(474), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3772] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(34), 1,
      sym_number,
    STATE(114), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3793] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(20), 1,
      sym_number,
    STATE(115), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3814] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      aux_sym_number_token3,
    STATE(18), 1,
      sym_number,
    STATE(116), 1,
      sym_comment,
    ACTIONS(379), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(476), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(478), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3899] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(480), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(482), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3931] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_JMP,
    ACTIONS(488), 1,
      anon_sym_IN,
    ACTIONS(490), 1,
      anon_sym_OUT,
    STATE(123), 1,
      sym_comment,
  [3953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    ACTIONS(492), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(496), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3999] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_stack_frame_repeat1,
  [4018] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_stack_frame_repeat1,
    STATE(128), 1,
      sym_comment,
  [4037] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_permutation,
    STATE(129), 1,
      sym_comment,
    STATE(184), 1,
      sym_stack_frame,
  [4056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(504), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(506), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4086] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(508), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(510), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    STATE(136), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [4163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_comment,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4178] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(521), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4193] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_stack_frame_repeat1,
    STATE(139), 1,
      sym_comment,
  [4212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4227] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(533), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4287] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_stack_frame_repeat1,
    STATE(145), 1,
      sym_comment,
  [4306] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(537), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4321] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_permutation,
    STATE(147), 1,
      sym_comment,
    STATE(184), 1,
      sym_stack_frame,
  [4340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(539), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      sym_stack_frame,
    STATE(149), 1,
      sym_comment,
  [4371] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      anon_sym_PLUS,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_comment,
  [4387] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(549), 2,
      sym_char,
      sym_char_escape,
  [4401] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(551), 2,
      sym_char,
      sym_char_escape,
  [4415] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_stack_frame,
    STATE(153), 1,
      sym_comment,
  [4431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(555), 2,
      sym_inst_label,
      sym_register,
  [4445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(557), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [4459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_comment,
    ACTIONS(559), 2,
      sym_inst_label,
      sym_register,
  [4473] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_char,
      sym_char_escape,
  [4487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      sym_inst_label,
    STATE(158), 1,
      sym_comment,
  [4500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(565), 1,
      sym_function_name,
    STATE(159), 1,
      sym_comment,
  [4513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(567), 1,
      sym_port,
    STATE(160), 1,
      sym_comment,
  [4526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_comment,
  [4539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      sym_inst_label,
    STATE(162), 1,
      sym_comment,
  [4552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      sym_inst_label,
    STATE(163), 1,
      sym_comment,
  [4565] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      sym_register,
    STATE(164), 1,
      sym_comment,
  [4578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_comment,
  [4591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      anon_sym_DASH_GT,
    STATE(166), 1,
      sym_comment,
  [4604] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      sym_comment,
  [4617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_port,
    STATE(168), 1,
      sym_comment,
  [4630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      sym_register,
    STATE(169), 1,
      sym_comment,
  [4643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(170), 1,
      sym_comment,
  [4656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      sym_inst_label,
    STATE(171), 1,
      sym_comment,
  [4669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_comment,
  [4682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      anon_sym_minheap,
    STATE(173), 1,
      sym_comment,
  [4695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_comment,
  [4708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      sym_comment,
  [4721] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      sym_port,
    STATE(176), 1,
      sym_comment,
  [4734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      sym_port,
    STATE(177), 1,
      sym_comment,
  [4747] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      sym_inst_label,
    STATE(178), 1,
      sym_comment,
  [4760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      sym_function_name,
    STATE(179), 1,
      sym_comment,
  [4773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      sym_port,
    STATE(180), 1,
      sym_comment,
  [4786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      anon_sym_minstack,
    STATE(181), 1,
      sym_comment,
  [4799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      sym_port,
    STATE(182), 1,
      sym_comment,
  [4812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    STATE(183), 1,
      sym_comment,
  [4825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      anon_sym_DASH_GT,
    STATE(184), 1,
      sym_comment,
  [4838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      sym_inst_label,
    STATE(185), 1,
      sym_comment,
  [4851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_comment,
  [4864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_inst_label,
    STATE(187), 1,
      sym_comment,
  [4877] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      aux_sym_comment_token2,
    STATE(188), 1,
      sym_comment,
  [4890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym_comment,
  [4903] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      anon_sym_DASH_GT,
    STATE(190), 1,
      sym_comment,
  [4916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      sym_port,
    STATE(191), 1,
      sym_comment,
  [4929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      sym_port,
    STATE(192), 1,
      sym_comment,
  [4942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      sym_function_name,
    STATE(193), 1,
      sym_comment,
  [4955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_comment,
  [4968] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(637), 1,
      aux_sym_comment_token1,
    STATE(195), 1,
      sym_comment,
  [4981] = 1,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
  [4985] = 1,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 646,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 777,
  [SMALL_STATE(13)] = 827,
  [SMALL_STATE(14)] = 859,
  [SMALL_STATE(15)] = 891,
  [SMALL_STATE(16)] = 924,
  [SMALL_STATE(17)] = 957,
  [SMALL_STATE(18)] = 987,
  [SMALL_STATE(19)] = 1017,
  [SMALL_STATE(20)] = 1047,
  [SMALL_STATE(21)] = 1077,
  [SMALL_STATE(22)] = 1107,
  [SMALL_STATE(23)] = 1137,
  [SMALL_STATE(24)] = 1167,
  [SMALL_STATE(25)] = 1197,
  [SMALL_STATE(26)] = 1227,
  [SMALL_STATE(27)] = 1257,
  [SMALL_STATE(28)] = 1287,
  [SMALL_STATE(29)] = 1317,
  [SMALL_STATE(30)] = 1347,
  [SMALL_STATE(31)] = 1377,
  [SMALL_STATE(32)] = 1407,
  [SMALL_STATE(33)] = 1437,
  [SMALL_STATE(34)] = 1467,
  [SMALL_STATE(35)] = 1497,
  [SMALL_STATE(36)] = 1527,
  [SMALL_STATE(37)] = 1557,
  [SMALL_STATE(38)] = 1587,
  [SMALL_STATE(39)] = 1617,
  [SMALL_STATE(40)] = 1647,
  [SMALL_STATE(41)] = 1677,
  [SMALL_STATE(42)] = 1707,
  [SMALL_STATE(43)] = 1737,
  [SMALL_STATE(44)] = 1767,
  [SMALL_STATE(45)] = 1797,
  [SMALL_STATE(46)] = 1827,
  [SMALL_STATE(47)] = 1857,
  [SMALL_STATE(48)] = 1887,
  [SMALL_STATE(49)] = 1917,
  [SMALL_STATE(50)] = 1947,
  [SMALL_STATE(51)] = 1977,
  [SMALL_STATE(52)] = 2007,
  [SMALL_STATE(53)] = 2037,
  [SMALL_STATE(54)] = 2067,
  [SMALL_STATE(55)] = 2097,
  [SMALL_STATE(56)] = 2127,
  [SMALL_STATE(57)] = 2157,
  [SMALL_STATE(58)] = 2209,
  [SMALL_STATE(59)] = 2249,
  [SMALL_STATE(60)] = 2289,
  [SMALL_STATE(61)] = 2329,
  [SMALL_STATE(62)] = 2369,
  [SMALL_STATE(63)] = 2409,
  [SMALL_STATE(64)] = 2447,
  [SMALL_STATE(65)] = 2485,
  [SMALL_STATE(66)] = 2525,
  [SMALL_STATE(67)] = 2552,
  [SMALL_STATE(68)] = 2579,
  [SMALL_STATE(69)] = 2619,
  [SMALL_STATE(70)] = 2659,
  [SMALL_STATE(71)] = 2699,
  [SMALL_STATE(72)] = 2737,
  [SMALL_STATE(73)] = 2777,
  [SMALL_STATE(74)] = 2817,
  [SMALL_STATE(75)] = 2851,
  [SMALL_STATE(76)] = 2885,
  [SMALL_STATE(77)] = 2925,
  [SMALL_STATE(78)] = 2949,
  [SMALL_STATE(79)] = 2985,
  [SMALL_STATE(80)] = 3021,
  [SMALL_STATE(81)] = 3057,
  [SMALL_STATE(82)] = 3087,
  [SMALL_STATE(83)] = 3112,
  [SMALL_STATE(84)] = 3139,
  [SMALL_STATE(85)] = 3166,
  [SMALL_STATE(86)] = 3186,
  [SMALL_STATE(87)] = 3206,
  [SMALL_STATE(88)] = 3226,
  [SMALL_STATE(89)] = 3246,
  [SMALL_STATE(90)] = 3266,
  [SMALL_STATE(91)] = 3286,
  [SMALL_STATE(92)] = 3306,
  [SMALL_STATE(93)] = 3330,
  [SMALL_STATE(94)] = 3350,
  [SMALL_STATE(95)] = 3370,
  [SMALL_STATE(96)] = 3392,
  [SMALL_STATE(97)] = 3416,
  [SMALL_STATE(98)] = 3436,
  [SMALL_STATE(99)] = 3457,
  [SMALL_STATE(100)] = 3478,
  [SMALL_STATE(101)] = 3499,
  [SMALL_STATE(102)] = 3520,
  [SMALL_STATE(103)] = 3541,
  [SMALL_STATE(104)] = 3562,
  [SMALL_STATE(105)] = 3583,
  [SMALL_STATE(106)] = 3604,
  [SMALL_STATE(107)] = 3625,
  [SMALL_STATE(108)] = 3646,
  [SMALL_STATE(109)] = 3667,
  [SMALL_STATE(110)] = 3688,
  [SMALL_STATE(111)] = 3709,
  [SMALL_STATE(112)] = 3730,
  [SMALL_STATE(113)] = 3751,
  [SMALL_STATE(114)] = 3772,
  [SMALL_STATE(115)] = 3793,
  [SMALL_STATE(116)] = 3814,
  [SMALL_STATE(117)] = 3835,
  [SMALL_STATE(118)] = 3851,
  [SMALL_STATE(119)] = 3867,
  [SMALL_STATE(120)] = 3883,
  [SMALL_STATE(121)] = 3899,
  [SMALL_STATE(122)] = 3915,
  [SMALL_STATE(123)] = 3931,
  [SMALL_STATE(124)] = 3953,
  [SMALL_STATE(125)] = 3969,
  [SMALL_STATE(126)] = 3984,
  [SMALL_STATE(127)] = 3999,
  [SMALL_STATE(128)] = 4018,
  [SMALL_STATE(129)] = 4037,
  [SMALL_STATE(130)] = 4056,
  [SMALL_STATE(131)] = 4071,
  [SMALL_STATE(132)] = 4086,
  [SMALL_STATE(133)] = 4101,
  [SMALL_STATE(134)] = 4116,
  [SMALL_STATE(135)] = 4131,
  [SMALL_STATE(136)] = 4146,
  [SMALL_STATE(137)] = 4163,
  [SMALL_STATE(138)] = 4178,
  [SMALL_STATE(139)] = 4193,
  [SMALL_STATE(140)] = 4212,
  [SMALL_STATE(141)] = 4227,
  [SMALL_STATE(142)] = 4242,
  [SMALL_STATE(143)] = 4257,
  [SMALL_STATE(144)] = 4272,
  [SMALL_STATE(145)] = 4287,
  [SMALL_STATE(146)] = 4306,
  [SMALL_STATE(147)] = 4321,
  [SMALL_STATE(148)] = 4340,
  [SMALL_STATE(149)] = 4355,
  [SMALL_STATE(150)] = 4371,
  [SMALL_STATE(151)] = 4387,
  [SMALL_STATE(152)] = 4401,
  [SMALL_STATE(153)] = 4415,
  [SMALL_STATE(154)] = 4431,
  [SMALL_STATE(155)] = 4445,
  [SMALL_STATE(156)] = 4459,
  [SMALL_STATE(157)] = 4473,
  [SMALL_STATE(158)] = 4487,
  [SMALL_STATE(159)] = 4500,
  [SMALL_STATE(160)] = 4513,
  [SMALL_STATE(161)] = 4526,
  [SMALL_STATE(162)] = 4539,
  [SMALL_STATE(163)] = 4552,
  [SMALL_STATE(164)] = 4565,
  [SMALL_STATE(165)] = 4578,
  [SMALL_STATE(166)] = 4591,
  [SMALL_STATE(167)] = 4604,
  [SMALL_STATE(168)] = 4617,
  [SMALL_STATE(169)] = 4630,
  [SMALL_STATE(170)] = 4643,
  [SMALL_STATE(171)] = 4656,
  [SMALL_STATE(172)] = 4669,
  [SMALL_STATE(173)] = 4682,
  [SMALL_STATE(174)] = 4695,
  [SMALL_STATE(175)] = 4708,
  [SMALL_STATE(176)] = 4721,
  [SMALL_STATE(177)] = 4734,
  [SMALL_STATE(178)] = 4747,
  [SMALL_STATE(179)] = 4760,
  [SMALL_STATE(180)] = 4773,
  [SMALL_STATE(181)] = 4786,
  [SMALL_STATE(182)] = 4799,
  [SMALL_STATE(183)] = 4812,
  [SMALL_STATE(184)] = 4825,
  [SMALL_STATE(185)] = 4838,
  [SMALL_STATE(186)] = 4851,
  [SMALL_STATE(187)] = 4864,
  [SMALL_STATE(188)] = 4877,
  [SMALL_STATE(189)] = 4890,
  [SMALL_STATE(190)] = 4903,
  [SMALL_STATE(191)] = 4916,
  [SMALL_STATE(192)] = 4929,
  [SMALL_STATE(193)] = 4942,
  [SMALL_STATE(194)] = 4955,
  [SMALL_STATE(195)] = 4968,
  [SMALL_STATE(196)] = 4981,
  [SMALL_STATE(197)] = 4985,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(103),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(187),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(53),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(129),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(74),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(182),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(180),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(159),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(92),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(51),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(99),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(116),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(114),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 34),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 34),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 25),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 25),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 16),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 16),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 2, .production_id = 12),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 2, .production_id = 12),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 9),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 9),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 23),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 23),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 14),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 14),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 23),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 23),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 23),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 23),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 23),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 23),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 23),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 23),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 23),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 23),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 23),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 23),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 23),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 23),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 23),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 22),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 22),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 8),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 8),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 31),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 31),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 14),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 14),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 23),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 23),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 14),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 14),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 14),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 14),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 14),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 14),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 14),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 14),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 14),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 14),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 14),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 14),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 14),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 14),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 14),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 14),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2, .production_id = 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2, .production_id = 13),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, .production_id = 13),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, .production_id = 13),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 20),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 20),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(66),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(157),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(156),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(123),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(171),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(169),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(168),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(179),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(170),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 35),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 35),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 33),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 33),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 27),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 27),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 19),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 27),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 27),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 38),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 38),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 26),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 26),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 35),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 35),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 10),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 17),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 15),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 24),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 6, .production_id = 11),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 7),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 29),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 24),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 5, .production_id = 40),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 10),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 4, .production_id = 39),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 37),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 21),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(155),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 17),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 7, .production_id = 36),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 32),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 15),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 30),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 18),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 28),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [619] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_URSL(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
