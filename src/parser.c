#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 43

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
  sym__header = 50,
  sym_bits = 51,
  sym_minstack = 52,
  sym_minheap = 53,
  sym_comment = 54,
  sym_array = 55,
  sym__literal = 56,
  sym_number = 57,
  sym_char_literal = 58,
  sym_definition = 59,
  sym_stack_behaviour = 60,
  sym_func = 61,
  sym_inst = 62,
  sym_inst_permutation = 63,
  sym_permutation = 64,
  sym_stack_frame = 65,
  sym_branch_block = 66,
  sym__instruction = 67,
  sym_height = 68,
  sym_jump = 69,
  sym_halt = 70,
  sym_perm = 71,
  sym_const = 72,
  sym_in = 73,
  sym_out = 74,
  sym_call = 75,
  sym_icall = 76,
  sym_ret = 77,
  sym_ref = 78,
  sym_get = 79,
  sym_set = 80,
  sym_branch = 81,
  sym_custom_instruction = 82,
  sym__urcl_instruction = 83,
  sym__value = 84,
  sym_jmp = 85,
  sym_urcl_in = 86,
  sym_urcl_out = 87,
  sym_urcl_instruction = 88,
  aux_sym_source_file_repeat1 = 89,
  aux_sym_source_file_repeat2 = 90,
  aux_sym_source_file_repeat3 = 91,
  aux_sym_array_repeat1 = 92,
  aux_sym_func_repeat1 = 93,
  aux_sym_inst_repeat1 = 94,
  aux_sym_stack_frame_repeat1 = 95,
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
  [sym__header] = "_header",
  [sym_bits] = "bits",
  [sym_minstack] = "minstack",
  [sym_minheap] = "minheap",
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
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
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
  [sym__header] = sym__header,
  [sym_bits] = sym_bits,
  [sym_minstack] = sym_minstack,
  [sym_minheap] = sym_minheap,
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
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
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
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_bits] = {
    .visible = true,
    .named = true,
  },
  [sym_minstack] = {
    .visible = true,
    .named = true,
  },
  [sym_minheap] = {
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
  [aux_sym_source_file_repeat3] = {
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
  field_branch = 1,
  field_code = 2,
  field_data = 3,
  field_dest = 4,
  field_headers = 5,
  field_input = 6,
  field_instructions = 7,
  field_items = 8,
  field_label = 9,
  field_locals = 10,
  field_name = 11,
  field_op = 12,
  field_opcode = 13,
  field_operand = 14,
  field_output = 15,
  field_params = 16,
  field_permutation = 17,
  field_returns = 18,
  field_source = 19,
  field_stack = 20,
  field_value = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 2},
  [25] = {.index = 39, .length = 2},
  [26] = {.index = 41, .length = 3},
  [27] = {.index = 44, .length = 3},
  [28] = {.index = 47, .length = 2},
  [29] = {.index = 49, .length = 2},
  [30] = {.index = 51, .length = 3},
  [31] = {.index = 54, .length = 3},
  [32] = {.index = 57, .length = 3},
  [33] = {.index = 60, .length = 3},
  [34] = {.index = 63, .length = 3},
  [35] = {.index = 66, .length = 4},
  [36] = {.index = 70, .length = 4},
  [37] = {.index = 74, .length = 3},
  [38] = {.index = 77, .length = 4},
  [39] = {.index = 81, .length = 4},
  [40] = {.index = 85, .length = 5},
  [41] = {.index = 90, .length = 1},
  [42] = {.index = 91, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_headers, 0},
  [1] =
    {field_data, 0},
  [2] =
    {field_code, 0},
  [3] =
    {field_value, 1},
  [4] =
    {field_label, 0},
    {field_value, 1},
  [6] =
    {field_data, 1},
    {field_headers, 0},
  [8] =
    {field_code, 1},
    {field_headers, 0},
  [10] =
    {field_code, 1},
    {field_data, 0},
  [12] =
    {field_name, 1},
    {field_permutation, 2},
  [14] =
    {field_code, 2},
    {field_data, 1},
    {field_headers, 0},
  [17] =
    {field_items, 1},
  [18] =
    {field_opcode, 0},
  [19] =
    {field_name, 1},
  [20] =
    {field_label, 0},
    {field_opcode, 1},
  [22] =
    {field_label, 0},
  [23] =
    {field_operand, 1},
  [24] =
    {field_instructions, 3},
    {field_name, 1},
  [26] =
    {field_params, 0},
    {field_returns, 2},
  [28] =
    {field_name, 1},
    {field_stack, 2},
  [30] =
    {field_branch, 4},
    {field_name, 1},
  [32] =
    {field_dest, 1},
  [33] =
    {field_input, 0},
    {field_output, 2},
  [35] =
    {field_locals, 3},
    {field_name, 1},
  [37] =
    {field_opcode, 0},
    {field_operand, 2},
  [39] =
    {field_label, 0},
    {field_operand, 2},
  [41] =
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [44] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [47] =
    {field_dest, 2},
    {field_label, 0},
  [49] =
    {field_dest, 1},
    {field_source, 2},
  [51] =
    {field_branch, 5},
    {field_instructions, 3},
    {field_name, 1},
  [54] =
    {field_branch, 5},
    {field_name, 1},
    {field_stack, 2},
  [57] =
    {field_instructions, 5},
    {field_locals, 3},
    {field_name, 1},
  [60] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [63] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [66] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [70] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [74] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [77] =
    {field_branch, 6},
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [81] =
    {field_instructions, 6},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [85] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
    {field_source, 4},
  [90] =
    {field_label, 1},
  [91] =
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
      if (eof) ADVANCE(82);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'J') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'g') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'j') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'J') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'j') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'j') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(153);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(192);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(194);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(198);
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
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 76:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 77:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 78:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 80:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_minstack);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_minheap);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_mem);
      if (lookahead == '0') ADVANCE(154);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(193);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 81},
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
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
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
  [42] = {.lex_state = 1},
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
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
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
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 81},
  [68] = {.lex_state = 81},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 81},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 81},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 81},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 81},
  [85] = {.lex_state = 81},
  [86] = {.lex_state = 81},
  [87] = {.lex_state = 81},
  [88] = {.lex_state = 81},
  [89] = {.lex_state = 81},
  [90] = {.lex_state = 81},
  [91] = {.lex_state = 81},
  [92] = {.lex_state = 81},
  [93] = {.lex_state = 81},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 81},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 81},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 81},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 81},
  [121] = {.lex_state = 81},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 81},
  [128] = {.lex_state = 81},
  [129] = {.lex_state = 81},
  [130] = {.lex_state = 81},
  [131] = {.lex_state = 81},
  [132] = {.lex_state = 81},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 81},
  [136] = {.lex_state = 81},
  [137] = {.lex_state = 81},
  [138] = {.lex_state = 81},
  [139] = {.lex_state = 81},
  [140] = {.lex_state = 81},
  [141] = {.lex_state = 81},
  [142] = {.lex_state = 81},
  [143] = {.lex_state = 81},
  [144] = {.lex_state = 81},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 81},
  [148] = {.lex_state = 81},
  [149] = {.lex_state = 81},
  [150] = {.lex_state = 81},
  [151] = {.lex_state = 81},
  [152] = {.lex_state = 81},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 81},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
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
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 132},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {(TSStateId)(-1)},
  [203] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(187),
    [sym__header] = STATE(87),
    [sym_bits] = STATE(88),
    [sym_minstack] = STATE(88),
    [sym_minheap] = STATE(88),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(129),
    [sym_func] = STATE(137),
    [sym_inst] = STATE(137),
    [sym_inst_permutation] = STATE(137),
    [aux_sym_source_file_repeat1] = STATE(15),
    [aux_sym_source_file_repeat2] = STATE(82),
    [aux_sym_source_file_repeat3] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_bits] = ACTIONS(9),
    [anon_sym_minstack] = ACTIONS(11),
    [anon_sym_minheap] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_data_label] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_inst] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_func_repeat1,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_func_repeat1,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
  [324] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym_inst_label,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_height,
    ACTIONS(70), 1,
      anon_sym_jump,
    ACTIONS(73), 1,
      anon_sym_halt,
    ACTIONS(76), 1,
      anon_sym_perm,
    ACTIONS(79), 1,
      anon_sym_const,
    ACTIONS(82), 1,
      anon_sym_in,
    ACTIONS(85), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_call,
    ACTIONS(91), 1,
      anon_sym_icall,
    ACTIONS(94), 1,
      anon_sym_ret,
    ACTIONS(97), 1,
      anon_sym_ref,
    ACTIONS(100), 1,
      anon_sym_get,
    ACTIONS(103), 1,
      anon_sym_set,
    STATE(39), 1,
      sym__instruction,
    STATE(6), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(38), 15,
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
  [403] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_func_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_inst_label,
    ACTIONS(27), 1,
      anon_sym_height,
    ACTIONS(29), 1,
      anon_sym_jump,
    ACTIONS(31), 1,
      anon_sym_halt,
    ACTIONS(33), 1,
      anon_sym_perm,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_out,
    ACTIONS(41), 1,
      anon_sym_call,
    ACTIONS(43), 1,
      anon_sym_icall,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      anon_sym_ref,
    ACTIONS(49), 1,
      anon_sym_get,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(39), 1,
      sym__instruction,
    STATE(38), 15,
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
    ACTIONS(120), 1,
      aux_sym_number_token3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_register,
    STATE(11), 1,
      sym_comment,
    STATE(24), 1,
      sym__literal,
    STATE(98), 1,
      sym__value,
    ACTIONS(124), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(118), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(114), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(116), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [777] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      aux_sym_number_token3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_register,
    STATE(12), 1,
      sym_comment,
    STATE(24), 1,
      sym__literal,
    STATE(95), 1,
      sym__value,
    ACTIONS(130), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(118), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(116), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(128), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      aux_sym_number_token3,
    STATE(13), 1,
      sym_comment,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      anon_sym_bits,
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
  [860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(138), 4,
      sym_inst_label,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(136), 14,
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
  [892] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_bits,
    ACTIONS(11), 1,
      anon_sym_minstack,
    ACTIONS(13), 1,
      anon_sym_minheap,
    ACTIONS(15), 1,
      sym_data_label,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_source_file_repeat1,
    STATE(80), 1,
      aux_sym_source_file_repeat2,
    STATE(87), 1,
      sym__header,
    STATE(90), 1,
      aux_sym_source_file_repeat3,
    STATE(129), 1,
      sym_definition,
    STATE(88), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [948] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_branch,
    STATE(16), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(142), 14,
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
  [981] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_branch,
    STATE(17), 1,
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
  [1014] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(156), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(154), 14,
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
  [1044] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(160), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(158), 14,
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
  [1074] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(164), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(162), 14,
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
  [1104] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(166), 14,
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
  [1134] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(170), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(172), 11,
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
  [1164] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(134), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(132), 11,
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
  [1194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(174), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(176), 11,
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
  [1224] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(178), 14,
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
  [1254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(184), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(182), 14,
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
  [1284] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(188), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(186), 14,
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
  [1314] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(192), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(190), 14,
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
  [1344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(194), 14,
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
  [1374] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(198), 14,
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
  [1404] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(204), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(202), 14,
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
  [1434] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(208), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(206), 14,
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
  [1464] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(212), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(210), 14,
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
  [1494] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(216), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(214), 14,
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
  [1524] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(218), 14,
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
  [1554] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(222), 14,
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
  [1584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(228), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(226), 14,
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
  [1614] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(232), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(230), 14,
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
  [1644] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(236), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(234), 14,
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
  [1674] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(240), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(238), 14,
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
  [1704] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(242), 14,
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
  [1734] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(246), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(248), 11,
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
  [1764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(250), 14,
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
  [1794] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(254), 14,
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
  [1824] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(260), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(258), 14,
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
  [1854] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(264), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(262), 14,
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
  [1884] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(268), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(266), 14,
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
  [1914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(272), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(270), 14,
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
  [1944] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(276), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(274), 14,
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
  [1974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(132), 2,
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
  [2004] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(280), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(278), 14,
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
  [2034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(284), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(282), 14,
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
  [2064] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(288), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(286), 14,
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
  [2094] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(292), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(290), 14,
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
  [2124] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(170), 14,
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
  [2154] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(296), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(294), 14,
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
  [2184] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      sym_comment,
    ACTIONS(248), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(246), 14,
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
  [2214] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_array_repeat1,
    STATE(79), 1,
      sym__literal,
    STATE(68), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(298), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2254] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_comment,
    STATE(68), 2,
      sym_number,
      sym_char_literal,
    STATE(130), 2,
      sym_array,
      sym__literal,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(298), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2292] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      aux_sym_number_token3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_register,
    STATE(11), 1,
      sym__value,
    STATE(24), 1,
      sym__literal,
    STATE(60), 1,
      sym_comment,
    STATE(22), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(118), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(116), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2332] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      aux_sym_number_token3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_register,
    STATE(24), 1,
      sym__literal,
    STATE(61), 1,
      sym_comment,
    STATE(106), 1,
      sym__value,
    STATE(22), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(118), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(116), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2372] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      aux_sym_number_token3,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym__literal,
    STATE(62), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(68), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(315), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(310), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2410] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      aux_sym_number_token3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_register,
    STATE(24), 1,
      sym__literal,
    STATE(63), 1,
      sym_comment,
    STATE(103), 1,
      sym__value,
    STATE(22), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(118), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(116), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2450] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      aux_sym_number_token3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_register,
    STATE(12), 1,
      sym__value,
    STATE(24), 1,
      sym__literal,
    STATE(64), 1,
      sym_comment,
    STATE(22), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(118), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(116), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2490] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(79), 1,
      sym__literal,
    STATE(68), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(298), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2530] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_height,
    ACTIONS(330), 1,
      anon_sym_jump,
    ACTIONS(332), 1,
      anon_sym_halt,
    ACTIONS(334), 1,
      anon_sym_perm,
    ACTIONS(336), 1,
      anon_sym_const,
    ACTIONS(338), 1,
      anon_sym_in,
    ACTIONS(340), 1,
      anon_sym_out,
    ACTIONS(342), 1,
      anon_sym_call,
    ACTIONS(344), 1,
      anon_sym_icall,
    ACTIONS(346), 1,
      anon_sym_ret,
    ACTIONS(348), 1,
      anon_sym_ref,
    ACTIONS(350), 1,
      anon_sym_get,
    ACTIONS(352), 1,
      anon_sym_set,
    STATE(66), 1,
      sym_comment,
  [2582] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(246), 1,
      aux_sym_number_token3,
    STATE(67), 1,
      sym_comment,
    ACTIONS(248), 12,
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
  [2609] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      aux_sym_number_token3,
    STATE(68), 1,
      sym_comment,
    ACTIONS(172), 12,
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
  [2636] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_inst_label,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      anon_sym_JMP,
    ACTIONS(362), 1,
      anon_sym_IN,
    ACTIONS(364), 1,
      anon_sym_OUT,
    STATE(69), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_inst_repeat1,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2676] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_inst_label,
    ACTIONS(360), 1,
      anon_sym_JMP,
    ACTIONS(362), 1,
      anon_sym_IN,
    ACTIONS(364), 1,
      anon_sym_OUT,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_inst_repeat1,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2716] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_inst_label,
    ACTIONS(360), 1,
      anon_sym_JMP,
    ACTIONS(362), 1,
      anon_sym_IN,
    ACTIONS(364), 1,
      anon_sym_OUT,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_inst_repeat1,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2756] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_bits,
    ACTIONS(375), 1,
      anon_sym_minstack,
    ACTIONS(378), 1,
      anon_sym_minheap,
    STATE(87), 1,
      sym__header,
    STATE(72), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(370), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2790] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym__literal,
    STATE(73), 1,
      sym_comment,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(381), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2824] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_inst_label,
    ACTIONS(360), 1,
      anon_sym_JMP,
    ACTIONS(362), 1,
      anon_sym_IN,
    ACTIONS(364), 1,
      anon_sym_OUT,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_inst_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2864] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym__literal,
    STATE(75), 1,
      sym_comment,
    STATE(55), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(381), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2898] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_inst_label,
    ACTIONS(360), 1,
      anon_sym_JMP,
    ACTIONS(362), 1,
      anon_sym_IN,
    ACTIONS(364), 1,
      anon_sym_OUT,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_inst_repeat1,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2938] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(396), 1,
      sym_inst_label,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_JMP,
    ACTIONS(404), 1,
      anon_sym_IN,
    ACTIONS(407), 1,
      anon_sym_OUT,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(77), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2976] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_inst_label,
    ACTIONS(360), 1,
      anon_sym_JMP,
    ACTIONS(362), 1,
      anon_sym_IN,
    ACTIONS(364), 1,
      anon_sym_OUT,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_inst_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(100), 1,
      sym__urcl_instruction,
    STATE(99), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [3016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      aux_sym_number_token3,
    STATE(79), 1,
      sym_comment,
    ACTIONS(412), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [3040] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_data_label,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_source_file_repeat3,
    STATE(101), 1,
      aux_sym_source_file_repeat2,
    STATE(129), 1,
      sym_definition,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3076] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_comment,
    STATE(142), 1,
      sym_permutation,
    STATE(166), 1,
      sym_stack_behaviour,
    STATE(168), 1,
      sym_number,
    STATE(176), 1,
      sym_stack_frame,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3112] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_data_label,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat3,
    STATE(101), 1,
      aux_sym_source_file_repeat2,
    STATE(129), 1,
      sym_definition,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3148] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    ACTIONS(424), 1,
      anon_sym_PLUS,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(159), 1,
      sym_stack_behaviour,
    STATE(168), 1,
      sym_number,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3178] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3224] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(436), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3289] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3316] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3343] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 1,
      anon_sym_func,
    ACTIONS(447), 1,
      anon_sym_inst,
    STATE(91), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(137), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(450), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3406] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(456), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(454), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3426] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(460), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(458), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3446] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(464), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(462), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3466] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(468), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(466), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(472), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(470), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3506] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(474), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3526] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(480), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(478), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3546] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      sym_data_label,
    STATE(129), 1,
      sym_definition,
    STATE(101), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(482), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3568] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(34), 1,
      sym_stack_behaviour,
    STATE(102), 1,
      sym_comment,
    STATE(196), 1,
      sym_number,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(489), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(487), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(493), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(491), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3632] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(49), 1,
      sym_stack_behaviour,
    STATE(105), 1,
      sym_comment,
    STATE(196), 1,
      sym_number,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(497), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(495), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3676] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(107), 1,
      sym_comment,
    STATE(183), 1,
      sym_number,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3697] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(93), 1,
      sym_number,
    STATE(108), 1,
      sym_comment,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3718] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym_branch,
    STATE(109), 1,
      sym_comment,
    STATE(143), 1,
      sym_branch_block,
    ACTIONS(499), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3739] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(14), 1,
      sym_number,
    STATE(110), 1,
      sym_comment,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3760] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(53), 1,
      sym_number,
    STATE(111), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3781] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(52), 1,
      sym_number,
    STATE(112), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3802] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(51), 1,
      sym_number,
    STATE(113), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3823] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(27), 1,
      sym_number,
    STATE(114), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3844] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(32), 1,
      sym_number,
    STATE(115), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3865] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(33), 1,
      sym_number,
    STATE(116), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3886] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym_branch,
    STATE(117), 1,
      sym_comment,
    STATE(144), 1,
      sym_branch_block,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3907] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(14), 1,
      sym_number,
    STATE(118), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3928] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(92), 1,
      sym_number,
    STATE(119), 1,
      sym_comment,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3949] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym_branch,
    STATE(120), 1,
      sym_comment,
    STATE(138), 1,
      sym_branch_block,
    ACTIONS(505), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3970] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym_branch,
    STATE(121), 1,
      sym_comment,
    STATE(136), 1,
      sym_branch_block,
    ACTIONS(507), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3991] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(122), 1,
      sym_comment,
    STATE(177), 1,
      sym_number,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(26), 1,
      sym_number,
    STATE(123), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4033] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_number_token3,
    STATE(44), 1,
      sym_number,
    STATE(124), 1,
      sym_comment,
    ACTIONS(383), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4054] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_number_token3,
    STATE(85), 1,
      sym_number,
    STATE(125), 1,
      sym_comment,
    ACTIONS(302), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4075] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      sym_identifier,
    ACTIONS(511), 1,
      anon_sym_JMP,
    ACTIONS(513), 1,
      anon_sym_IN,
    ACTIONS(515), 1,
      anon_sym_OUT,
    STATE(126), 1,
      sym_comment,
  [4097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(204), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [4113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(517), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [4129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(519), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [4145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(521), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [4161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [4177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(296), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [4193] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(133), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [4210] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_permutation,
    STATE(134), 1,
      sym_comment,
    STATE(173), 1,
      sym_stack_frame,
  [4229] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(532), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_comment,
    ACTIONS(534), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(536), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(538), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4319] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(540), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(542), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(544), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(546), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4379] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_stack_frame_repeat1,
  [4398] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_stack_frame_repeat1,
    STATE(146), 1,
      sym_comment,
  [4417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(554), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4432] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(556), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_comment,
    ACTIONS(558), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4462] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(560), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4477] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(562), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(564), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4507] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_stack_frame_repeat1,
    STATE(153), 1,
      sym_comment,
  [4526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(568), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4541] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_permutation,
    STATE(155), 1,
      sym_comment,
    STATE(173), 1,
      sym_stack_frame,
  [4560] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_stack_frame_repeat1,
    STATE(156), 1,
      sym_comment,
  [4579] = 4,
    ACTIONS(572), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(574), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(576), 2,
      sym_char,
      sym_char_escape,
  [4593] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(578), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [4607] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(580), 1,
      anon_sym_PLUS,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_comment,
  [4623] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(140), 1,
      sym_stack_frame,
    STATE(160), 1,
      sym_comment,
  [4639] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(584), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_stack_frame,
    STATE(161), 1,
      sym_comment,
  [4655] = 4,
    ACTIONS(572), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(574), 1,
      anon_sym_SLASH_STAR,
    STATE(162), 1,
      sym_comment,
    ACTIONS(586), 2,
      sym_char,
      sym_char_escape,
  [4669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(163), 1,
      sym_comment,
    ACTIONS(588), 2,
      sym_inst_label,
      sym_register,
  [4683] = 4,
    ACTIONS(572), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(574), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      sym_comment,
    ACTIONS(590), 2,
      sym_char,
      sym_char_escape,
  [4697] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(592), 2,
      sym_inst_label,
      sym_register,
  [4711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_comment,
  [4724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(596), 1,
      sym_port,
    STATE(167), 1,
      sym_comment,
  [4737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_DASH_GT,
    STATE(168), 1,
      sym_comment,
  [4750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_comment,
  [4763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(602), 1,
      sym_register,
    STATE(170), 1,
      sym_comment,
  [4776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(604), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_comment,
  [4789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym_comment,
  [4802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DASH_GT,
    STATE(173), 1,
      sym_comment,
  [4815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(610), 1,
      sym_inst_label,
    STATE(174), 1,
      sym_comment,
  [4828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(612), 1,
      sym_inst_label,
    STATE(175), 1,
      sym_comment,
  [4841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(614), 1,
      anon_sym_DASH_GT,
    STATE(176), 1,
      sym_comment,
  [4854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_comment,
  [4867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(618), 1,
      sym_port,
    STATE(178), 1,
      sym_comment,
  [4880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      sym_inst_label,
    STATE(179), 1,
      sym_comment,
  [4893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(622), 1,
      sym_port,
    STATE(180), 1,
      sym_comment,
  [4906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(624), 1,
      sym_register,
    STATE(181), 1,
      sym_comment,
  [4919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(626), 1,
      sym_inst_label,
    STATE(182), 1,
      sym_comment,
  [4932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [4945] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(630), 1,
      sym_inst_label,
    STATE(184), 1,
      sym_comment,
  [4958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(632), 1,
      sym_port,
    STATE(185), 1,
      sym_comment,
  [4971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(634), 1,
      sym_port,
    STATE(186), 1,
      sym_comment,
  [4984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_comment,
  [4997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(638), 1,
      sym_function_name,
    STATE(188), 1,
      sym_comment,
  [5010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(189), 1,
      sym_comment,
  [5023] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      sym_function_name,
    STATE(190), 1,
      sym_comment,
  [5036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(644), 1,
      sym_function_name,
    STATE(191), 1,
      sym_comment,
  [5049] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(646), 1,
      sym_port,
    STATE(192), 1,
      sym_comment,
  [5062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(648), 1,
      sym_port,
    STATE(193), 1,
      sym_comment,
  [5075] = 4,
    ACTIONS(572), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(574), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      aux_sym_comment_token2,
    STATE(194), 1,
      sym_comment,
  [5088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_comment,
  [5101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(654), 1,
      anon_sym_DASH_GT,
    STATE(196), 1,
      sym_comment,
  [5114] = 4,
    ACTIONS(572), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(574), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(656), 1,
      aux_sym_comment_token1,
    STATE(197), 1,
      sym_comment,
  [5127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(658), 1,
      sym_inst_label,
    STATE(198), 1,
      sym_comment,
  [5140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(660), 1,
      sym_inst_label,
    STATE(199), 1,
      sym_comment,
  [5153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(200), 1,
      sym_comment,
  [5166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(664), 1,
      sym_port,
    STATE(201), 1,
      sym_comment,
  [5179] = 1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
  [5183] = 1,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 646,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 777,
  [SMALL_STATE(13)] = 827,
  [SMALL_STATE(14)] = 860,
  [SMALL_STATE(15)] = 892,
  [SMALL_STATE(16)] = 948,
  [SMALL_STATE(17)] = 981,
  [SMALL_STATE(18)] = 1014,
  [SMALL_STATE(19)] = 1044,
  [SMALL_STATE(20)] = 1074,
  [SMALL_STATE(21)] = 1104,
  [SMALL_STATE(22)] = 1134,
  [SMALL_STATE(23)] = 1164,
  [SMALL_STATE(24)] = 1194,
  [SMALL_STATE(25)] = 1224,
  [SMALL_STATE(26)] = 1254,
  [SMALL_STATE(27)] = 1284,
  [SMALL_STATE(28)] = 1314,
  [SMALL_STATE(29)] = 1344,
  [SMALL_STATE(30)] = 1374,
  [SMALL_STATE(31)] = 1404,
  [SMALL_STATE(32)] = 1434,
  [SMALL_STATE(33)] = 1464,
  [SMALL_STATE(34)] = 1494,
  [SMALL_STATE(35)] = 1524,
  [SMALL_STATE(36)] = 1554,
  [SMALL_STATE(37)] = 1584,
  [SMALL_STATE(38)] = 1614,
  [SMALL_STATE(39)] = 1644,
  [SMALL_STATE(40)] = 1674,
  [SMALL_STATE(41)] = 1704,
  [SMALL_STATE(42)] = 1734,
  [SMALL_STATE(43)] = 1764,
  [SMALL_STATE(44)] = 1794,
  [SMALL_STATE(45)] = 1824,
  [SMALL_STATE(46)] = 1854,
  [SMALL_STATE(47)] = 1884,
  [SMALL_STATE(48)] = 1914,
  [SMALL_STATE(49)] = 1944,
  [SMALL_STATE(50)] = 1974,
  [SMALL_STATE(51)] = 2004,
  [SMALL_STATE(52)] = 2034,
  [SMALL_STATE(53)] = 2064,
  [SMALL_STATE(54)] = 2094,
  [SMALL_STATE(55)] = 2124,
  [SMALL_STATE(56)] = 2154,
  [SMALL_STATE(57)] = 2184,
  [SMALL_STATE(58)] = 2214,
  [SMALL_STATE(59)] = 2254,
  [SMALL_STATE(60)] = 2292,
  [SMALL_STATE(61)] = 2332,
  [SMALL_STATE(62)] = 2372,
  [SMALL_STATE(63)] = 2410,
  [SMALL_STATE(64)] = 2450,
  [SMALL_STATE(65)] = 2490,
  [SMALL_STATE(66)] = 2530,
  [SMALL_STATE(67)] = 2582,
  [SMALL_STATE(68)] = 2609,
  [SMALL_STATE(69)] = 2636,
  [SMALL_STATE(70)] = 2676,
  [SMALL_STATE(71)] = 2716,
  [SMALL_STATE(72)] = 2756,
  [SMALL_STATE(73)] = 2790,
  [SMALL_STATE(74)] = 2824,
  [SMALL_STATE(75)] = 2864,
  [SMALL_STATE(76)] = 2898,
  [SMALL_STATE(77)] = 2938,
  [SMALL_STATE(78)] = 2976,
  [SMALL_STATE(79)] = 3016,
  [SMALL_STATE(80)] = 3040,
  [SMALL_STATE(81)] = 3076,
  [SMALL_STATE(82)] = 3112,
  [SMALL_STATE(83)] = 3148,
  [SMALL_STATE(84)] = 3178,
  [SMALL_STATE(85)] = 3205,
  [SMALL_STATE(86)] = 3224,
  [SMALL_STATE(87)] = 3251,
  [SMALL_STATE(88)] = 3270,
  [SMALL_STATE(89)] = 3289,
  [SMALL_STATE(90)] = 3316,
  [SMALL_STATE(91)] = 3343,
  [SMALL_STATE(92)] = 3368,
  [SMALL_STATE(93)] = 3387,
  [SMALL_STATE(94)] = 3406,
  [SMALL_STATE(95)] = 3426,
  [SMALL_STATE(96)] = 3446,
  [SMALL_STATE(97)] = 3466,
  [SMALL_STATE(98)] = 3486,
  [SMALL_STATE(99)] = 3506,
  [SMALL_STATE(100)] = 3526,
  [SMALL_STATE(101)] = 3546,
  [SMALL_STATE(102)] = 3568,
  [SMALL_STATE(103)] = 3592,
  [SMALL_STATE(104)] = 3612,
  [SMALL_STATE(105)] = 3632,
  [SMALL_STATE(106)] = 3656,
  [SMALL_STATE(107)] = 3676,
  [SMALL_STATE(108)] = 3697,
  [SMALL_STATE(109)] = 3718,
  [SMALL_STATE(110)] = 3739,
  [SMALL_STATE(111)] = 3760,
  [SMALL_STATE(112)] = 3781,
  [SMALL_STATE(113)] = 3802,
  [SMALL_STATE(114)] = 3823,
  [SMALL_STATE(115)] = 3844,
  [SMALL_STATE(116)] = 3865,
  [SMALL_STATE(117)] = 3886,
  [SMALL_STATE(118)] = 3907,
  [SMALL_STATE(119)] = 3928,
  [SMALL_STATE(120)] = 3949,
  [SMALL_STATE(121)] = 3970,
  [SMALL_STATE(122)] = 3991,
  [SMALL_STATE(123)] = 4012,
  [SMALL_STATE(124)] = 4033,
  [SMALL_STATE(125)] = 4054,
  [SMALL_STATE(126)] = 4075,
  [SMALL_STATE(127)] = 4097,
  [SMALL_STATE(128)] = 4113,
  [SMALL_STATE(129)] = 4129,
  [SMALL_STATE(130)] = 4145,
  [SMALL_STATE(131)] = 4161,
  [SMALL_STATE(132)] = 4177,
  [SMALL_STATE(133)] = 4193,
  [SMALL_STATE(134)] = 4210,
  [SMALL_STATE(135)] = 4229,
  [SMALL_STATE(136)] = 4244,
  [SMALL_STATE(137)] = 4259,
  [SMALL_STATE(138)] = 4274,
  [SMALL_STATE(139)] = 4289,
  [SMALL_STATE(140)] = 4304,
  [SMALL_STATE(141)] = 4319,
  [SMALL_STATE(142)] = 4334,
  [SMALL_STATE(143)] = 4349,
  [SMALL_STATE(144)] = 4364,
  [SMALL_STATE(145)] = 4379,
  [SMALL_STATE(146)] = 4398,
  [SMALL_STATE(147)] = 4417,
  [SMALL_STATE(148)] = 4432,
  [SMALL_STATE(149)] = 4447,
  [SMALL_STATE(150)] = 4462,
  [SMALL_STATE(151)] = 4477,
  [SMALL_STATE(152)] = 4492,
  [SMALL_STATE(153)] = 4507,
  [SMALL_STATE(154)] = 4526,
  [SMALL_STATE(155)] = 4541,
  [SMALL_STATE(156)] = 4560,
  [SMALL_STATE(157)] = 4579,
  [SMALL_STATE(158)] = 4593,
  [SMALL_STATE(159)] = 4607,
  [SMALL_STATE(160)] = 4623,
  [SMALL_STATE(161)] = 4639,
  [SMALL_STATE(162)] = 4655,
  [SMALL_STATE(163)] = 4669,
  [SMALL_STATE(164)] = 4683,
  [SMALL_STATE(165)] = 4697,
  [SMALL_STATE(166)] = 4711,
  [SMALL_STATE(167)] = 4724,
  [SMALL_STATE(168)] = 4737,
  [SMALL_STATE(169)] = 4750,
  [SMALL_STATE(170)] = 4763,
  [SMALL_STATE(171)] = 4776,
  [SMALL_STATE(172)] = 4789,
  [SMALL_STATE(173)] = 4802,
  [SMALL_STATE(174)] = 4815,
  [SMALL_STATE(175)] = 4828,
  [SMALL_STATE(176)] = 4841,
  [SMALL_STATE(177)] = 4854,
  [SMALL_STATE(178)] = 4867,
  [SMALL_STATE(179)] = 4880,
  [SMALL_STATE(180)] = 4893,
  [SMALL_STATE(181)] = 4906,
  [SMALL_STATE(182)] = 4919,
  [SMALL_STATE(183)] = 4932,
  [SMALL_STATE(184)] = 4945,
  [SMALL_STATE(185)] = 4958,
  [SMALL_STATE(186)] = 4971,
  [SMALL_STATE(187)] = 4984,
  [SMALL_STATE(188)] = 4997,
  [SMALL_STATE(189)] = 5010,
  [SMALL_STATE(190)] = 5023,
  [SMALL_STATE(191)] = 5036,
  [SMALL_STATE(192)] = 5049,
  [SMALL_STATE(193)] = 5062,
  [SMALL_STATE(194)] = 5075,
  [SMALL_STATE(195)] = 5088,
  [SMALL_STATE(196)] = 5101,
  [SMALL_STATE(197)] = 5114,
  [SMALL_STATE(198)] = 5127,
  [SMALL_STATE(199)] = 5140,
  [SMALL_STATE(200)] = 5153,
  [SMALL_STATE(201)] = 5166,
  [SMALL_STATE(202)] = 5179,
  [SMALL_STATE(203)] = 5183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(66),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(123),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(184),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(54),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(134),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(73),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(167),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(186),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(188),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(105),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(19),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(113),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(112),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(111),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 27),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 36),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 36),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 18),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 18),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 2, .production_id = 14),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 2, .production_id = 14),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 12),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 12),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 25),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 25),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, .production_id = 15),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, .production_id = 15),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 33),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 33),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2, .production_id = 15),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2, .production_id = 15),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 16),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 16),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 25),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 25),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 22),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 22),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 16),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 16),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 16),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 11),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 11),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 25),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 25),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 25),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 25),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 25),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 25),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 25),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 25),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 25),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 25),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 25),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 25),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 25),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 25),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 16),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 16),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 25),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 25),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 25),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 24),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 24),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 16),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 16),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 16),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 16),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 16),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 16),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 16),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 16),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 16),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 16),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 16),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 16),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 16),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(68),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(157),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(163),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(126),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(174),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(170),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(201),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 10),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(190),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(189),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 29),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 29),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 40),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 40),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 37),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 37),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 28),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 28),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 35),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 35),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(59),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 29),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 29),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 21),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 21),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 37),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 37),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 19),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 17),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 13),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 26),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 11),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(158),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 39),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 7, .production_id = 38),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 20),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 32),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 23),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 9),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 31),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 30),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 34),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 19),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 4, .production_id = 41),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 13),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 17),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 5, .production_id = 42),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 26),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [636] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
