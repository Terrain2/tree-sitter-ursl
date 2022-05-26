#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 41

enum {
  anon_sym_bits = 1,
  sym_identifier = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_SLASH_STAR = 5,
  aux_sym_comment_token2 = 6,
  anon_sym_SLASH = 7,
  sym_function_name = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  aux_sym_number_token1 = 11,
  aux_sym_number_token2 = 12,
  aux_sym_number_token3 = 13,
  aux_sym_number_token4 = 14,
  anon_sym_SQUOTE = 15,
  sym_char = 16,
  sym_char_escape = 17,
  sym_macro = 18,
  sym_mem = 19,
  sym_port = 20,
  sym_inst_label = 21,
  sym_data_label = 22,
  anon_sym_DASH_GT = 23,
  anon_sym_func = 24,
  anon_sym_PLUS = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_inst = 28,
  anon_sym_branch = 29,
  anon_sym_height = 30,
  anon_sym_jump = 31,
  anon_sym_halt = 32,
  anon_sym_perm = 33,
  anon_sym_const = 34,
  anon_sym_in = 35,
  anon_sym_out = 36,
  anon_sym_call = 37,
  anon_sym_icall = 38,
  anon_sym_ret = 39,
  anon_sym_ref = 40,
  anon_sym_get = 41,
  anon_sym_set = 42,
  sym_register = 43,
  anon_sym_JMP = 44,
  anon_sym_IN = 45,
  anon_sym_OUT = 46,
  sym_source_file = 47,
  sym_headers = 48,
  sym_comment = 49,
  sym_array = 50,
  sym__literal = 51,
  sym_number = 52,
  sym_char_literal = 53,
  sym_definition = 54,
  sym_stack_behaviour = 55,
  sym_func = 56,
  sym_inst = 57,
  sym_inst_permutation = 58,
  sym_permutation = 59,
  sym_stack_frame = 60,
  sym_branch_block = 61,
  sym__instruction = 62,
  sym_height = 63,
  sym_jump = 64,
  sym_halt = 65,
  sym_perm = 66,
  sym_const = 67,
  sym_in = 68,
  sym_out = 69,
  sym_call = 70,
  sym_icall = 71,
  sym_ret = 72,
  sym_ref = 73,
  sym_get = 74,
  sym_set = 75,
  sym_branch = 76,
  sym_custom_instruction = 77,
  sym__urcl_instruction = 78,
  sym__value = 79,
  sym_jmp = 80,
  sym_urcl_in = 81,
  sym_urcl_out = 82,
  sym_urcl_instruction = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_source_file_repeat2 = 85,
  aux_sym_array_repeat1 = 86,
  aux_sym_func_repeat1 = 87,
  aux_sym_inst_repeat1 = 88,
  aux_sym_stack_frame_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bits] = "bits",
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
  field_name = 12,
  field_op = 13,
  field_opcode = 14,
  field_operand = 15,
  field_output = 16,
  field_params = 17,
  field_permutation = 18,
  field_returns = 19,
  field_source = 20,
  field_stack = 21,
  field_value = 22,
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 3},
  [25] = {.index = 41, .length = 3},
  [26] = {.index = 44, .length = 2},
  [27] = {.index = 46, .length = 2},
  [28] = {.index = 48, .length = 3},
  [29] = {.index = 51, .length = 3},
  [30] = {.index = 54, .length = 3},
  [31] = {.index = 57, .length = 3},
  [32] = {.index = 60, .length = 3},
  [33] = {.index = 63, .length = 4},
  [34] = {.index = 67, .length = 4},
  [35] = {.index = 71, .length = 3},
  [36] = {.index = 74, .length = 4},
  [37] = {.index = 78, .length = 4},
  [38] = {.index = 82, .length = 5},
  [39] = {.index = 87, .length = 1},
  [40] = {.index = 88, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_headers, 0},
  [1] =
    {field_bits, 1},
  [2] =
    {field_data, 1},
    {field_headers, 0},
  [4] =
    {field_code, 1},
    {field_headers, 0},
  [6] =
    {field_label, 0},
    {field_value, 1},
  [8] =
    {field_code, 2},
    {field_data, 1},
    {field_headers, 0},
  [11] =
    {field_name, 1},
    {field_permutation, 2},
  [13] =
    {field_items, 1},
  [14] =
    {field_value, 1},
  [15] =
    {field_opcode, 0},
  [16] =
    {field_name, 1},
  [17] =
    {field_label, 0},
    {field_opcode, 1},
  [19] =
    {field_label, 0},
  [20] =
    {field_operand, 1},
  [21] =
    {field_instructions, 3},
    {field_name, 1},
  [23] =
    {field_params, 0},
    {field_returns, 2},
  [25] =
    {field_name, 1},
    {field_stack, 2},
  [27] =
    {field_branch, 4},
    {field_name, 1},
  [29] =
    {field_dest, 1},
  [30] =
    {field_input, 0},
    {field_output, 2},
  [32] =
    {field_locals, 3},
    {field_name, 1},
  [34] =
    {field_opcode, 0},
    {field_operand, 2},
  [36] =
    {field_label, 0},
    {field_operand, 2},
  [38] =
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [41] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [44] =
    {field_dest, 2},
    {field_label, 0},
  [46] =
    {field_dest, 1},
    {field_source, 2},
  [48] =
    {field_branch, 5},
    {field_instructions, 3},
    {field_name, 1},
  [51] =
    {field_branch, 5},
    {field_name, 1},
    {field_stack, 2},
  [54] =
    {field_instructions, 5},
    {field_locals, 3},
    {field_name, 1},
  [57] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [60] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [63] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [67] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [71] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [74] =
    {field_branch, 6},
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [78] =
    {field_instructions, 6},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [82] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
    {field_source, 4},
  [87] =
    {field_label, 1},
  [88] =
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
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(14);
      if (lookahead == 'J') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'j') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'J') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(126);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'j') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'j') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(181);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(185);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(183);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(132);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 68:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 69:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 70:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 71:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_mem);
      if (lookahead == '0') ADVANCE(143);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
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
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 72},
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
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 72},
  [83] = {.lex_state = 72},
  [84] = {.lex_state = 72},
  [85] = {.lex_state = 72},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 72},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 72},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 72},
  [119] = {.lex_state = 72},
  [120] = {.lex_state = 72},
  [121] = {.lex_state = 72},
  [122] = {.lex_state = 72},
  [123] = {.lex_state = 72},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 72},
  [129] = {.lex_state = 72},
  [130] = {.lex_state = 72},
  [131] = {.lex_state = 72},
  [132] = {.lex_state = 72},
  [133] = {.lex_state = 72},
  [134] = {.lex_state = 72},
  [135] = {.lex_state = 72},
  [136] = {.lex_state = 72},
  [137] = {.lex_state = 72},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 72},
  [140] = {.lex_state = 72},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 72},
  [143] = {.lex_state = 72},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 72},
  [146] = {.lex_state = 72},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
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
  [169] = {.lex_state = 121},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {(TSStateId)(-1)},
  [193] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
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
    [sym_source_file] = STATE(182),
    [sym_headers] = STATE(77),
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
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
    STATE(9), 1,
      aux_sym_func_repeat1,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
    STATE(8), 1,
      aux_sym_func_repeat1,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
    STATE(9), 1,
      aux_sym_func_repeat1,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
    STATE(3), 1,
      aux_sym_func_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
  [405] = 22,
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
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_func_repeat1,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
  [486] = 22,
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
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_func_repeat1,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
  [567] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_inst_label,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_height,
    ACTIONS(64), 1,
      anon_sym_jump,
    ACTIONS(67), 1,
      anon_sym_halt,
    ACTIONS(70), 1,
      anon_sym_perm,
    ACTIONS(73), 1,
      anon_sym_const,
    ACTIONS(76), 1,
      anon_sym_in,
    ACTIONS(79), 1,
      anon_sym_out,
    ACTIONS(82), 1,
      anon_sym_call,
    ACTIONS(85), 1,
      anon_sym_icall,
    ACTIONS(88), 1,
      anon_sym_ret,
    ACTIONS(91), 1,
      anon_sym_ref,
    ACTIONS(94), 1,
      anon_sym_get,
    ACTIONS(97), 1,
      anon_sym_set,
    STATE(43), 1,
      sym__instruction,
    STATE(9), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(42), 15,
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
    STATE(5), 1,
      aux_sym_func_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(43), 1,
      sym__instruction,
    STATE(42), 15,
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
    STATE(44), 1,
      sym__literal,
    STATE(94), 1,
      sym__value,
    ACTIONS(112), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(47), 2,
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
    STATE(44), 1,
      sym__literal,
    STATE(95), 1,
      sym__value,
    ACTIONS(118), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(47), 2,
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
    STATE(13), 1,
      sym_comment,
    ACTIONS(122), 4,
      sym_inst_label,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(120), 14,
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
  [859] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_branch,
    STATE(14), 1,
      sym_comment,
    ACTIONS(126), 2,
      sym_inst_label,
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
  [892] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_branch,
    STATE(15), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(130), 14,
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
  [925] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym_inst_label,
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
  [955] = 5,
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
  [985] = 5,
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
  [1015] = 5,
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
  [1045] = 5,
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
  [1075] = 5,
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
  [1105] = 5,
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
  [1135] = 5,
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
  [1165] = 5,
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
  [1195] = 5,
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
  [1225] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(176), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(178), 11,
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
  [1255] = 5,
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
  [1285] = 5,
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
  [1315] = 5,
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
  [1345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
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
  [1375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(198), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(196), 14,
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
  [1405] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
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
  [1435] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      aux_sym_number_token3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(138), 15,
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
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_inst,
  [1465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
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
  [1495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
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
  [1525] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
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
  [1555] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
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
  [1585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
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
  [1615] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
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
  [1645] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
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
  [1675] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
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
  [1705] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
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
  [1735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
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
  [1765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(240), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(242), 11,
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
  [1795] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(136), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(138), 11,
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
  [1825] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
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
  [1855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(188), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(190), 11,
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
  [1885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
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
  [1915] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
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
  [1945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
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
  [1975] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
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
  [2005] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
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
  [2035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
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
  [2065] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
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
  [2095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
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
  [2125] = 5,
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
  [2155] = 11,
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
    STATE(44), 1,
      sym__literal,
    STATE(57), 1,
      sym_comment,
    STATE(47), 2,
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
  [2195] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_array_repeat1,
    STATE(79), 1,
      sym__literal,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(284), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2235] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_comment,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    STATE(121), 2,
      sym_array,
      sym__literal,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(284), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2273] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_height,
    ACTIONS(300), 1,
      anon_sym_jump,
    ACTIONS(302), 1,
      anon_sym_halt,
    ACTIONS(304), 1,
      anon_sym_perm,
    ACTIONS(306), 1,
      anon_sym_const,
    ACTIONS(308), 1,
      anon_sym_in,
    ACTIONS(310), 1,
      anon_sym_out,
    ACTIONS(312), 1,
      anon_sym_call,
    ACTIONS(314), 1,
      anon_sym_icall,
    ACTIONS(316), 1,
      anon_sym_ret,
    ACTIONS(318), 1,
      anon_sym_ref,
    ACTIONS(320), 1,
      anon_sym_get,
    ACTIONS(322), 1,
      anon_sym_set,
    STATE(60), 1,
      sym_comment,
  [2325] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    ACTIONS(332), 1,
      aux_sym_number_token3,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym__literal,
    STATE(61), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(329), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(324), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2363] = 11,
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
    STATE(44), 1,
      sym__literal,
    STATE(62), 1,
      sym_comment,
    STATE(47), 2,
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
  [2403] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(63), 1,
      sym_comment,
    STATE(79), 1,
      sym__literal,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(284), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2443] = 11,
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
    STATE(44), 1,
      sym__literal,
    STATE(64), 1,
      sym_comment,
    STATE(87), 1,
      sym__value,
    STATE(47), 2,
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
  [2483] = 11,
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
    STATE(44), 1,
      sym__literal,
    STATE(65), 1,
      sym_comment,
    STATE(96), 1,
      sym__value,
    STATE(47), 2,
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
  [2523] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      aux_sym_number_token3,
    STATE(66), 1,
      sym_comment,
    ACTIONS(190), 12,
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
  [2550] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      aux_sym_number_token3,
    STATE(67), 1,
      sym_comment,
    ACTIONS(178), 12,
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
  [2577] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__literal,
    STATE(68), 1,
      sym_comment,
    STATE(29), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(340), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2611] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_inst_label,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      anon_sym_JMP,
    ACTIONS(356), 1,
      anon_sym_IN,
    ACTIONS(358), 1,
      anon_sym_OUT,
    STATE(69), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_inst_repeat1,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2651] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_inst_label,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      anon_sym_JMP,
    ACTIONS(371), 1,
      anon_sym_IN,
    ACTIONS(374), 1,
      anon_sym_OUT,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(70), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2689] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_inst_label,
    ACTIONS(354), 1,
      anon_sym_JMP,
    ACTIONS(356), 1,
      anon_sym_IN,
    ACTIONS(358), 1,
      anon_sym_OUT,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_inst_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2729] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_inst_label,
    ACTIONS(354), 1,
      anon_sym_JMP,
    ACTIONS(356), 1,
      anon_sym_IN,
    ACTIONS(358), 1,
      anon_sym_OUT,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_inst_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2769] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym__literal,
    STATE(73), 1,
      sym_comment,
    STATE(29), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(340), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2803] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_inst_label,
    ACTIONS(354), 1,
      anon_sym_JMP,
    ACTIONS(356), 1,
      anon_sym_IN,
    ACTIONS(358), 1,
      anon_sym_OUT,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_inst_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2843] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_inst_label,
    ACTIONS(354), 1,
      anon_sym_JMP,
    ACTIONS(356), 1,
      anon_sym_IN,
    ACTIONS(358), 1,
      anon_sym_OUT,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_inst_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2883] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_inst_label,
    ACTIONS(354), 1,
      anon_sym_JMP,
    ACTIONS(356), 1,
      anon_sym_IN,
    ACTIONS(358), 1,
      anon_sym_OUT,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_inst_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(93), 1,
      sym__urcl_instruction,
    STATE(91), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2923] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      sym_data_label,
    ACTIONS(391), 1,
      anon_sym_func,
    ACTIONS(393), 1,
      anon_sym_inst,
    STATE(77), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(122), 1,
      sym_definition,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2959] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      sym_data_label,
    ACTIONS(391), 1,
      anon_sym_func,
    ACTIONS(393), 1,
      anon_sym_inst,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_source_file_repeat2,
    STATE(85), 1,
      aux_sym_source_file_repeat1,
    STATE(122), 1,
      sym_definition,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2995] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      aux_sym_number_token3,
    STATE(79), 1,
      sym_comment,
    ACTIONS(397), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [3019] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_comment,
    STATE(142), 1,
      sym_permutation,
    STATE(160), 1,
      sym_stack_behaviour,
    STATE(165), 1,
      sym_number,
    STATE(189), 1,
      sym_stack_frame,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3055] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    ACTIONS(405), 1,
      anon_sym_PLUS,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_comment,
    STATE(147), 1,
      sym_stack_behaviour,
    STATE(165), 1,
      sym_number,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3085] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_func,
    ACTIONS(393), 1,
      anon_sym_inst,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_source_file_repeat2,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3112] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      anon_sym_func,
    ACTIONS(416), 1,
      anon_sym_inst,
    STATE(83), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3137] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_func,
    ACTIONS(393), 1,
      anon_sym_inst,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      aux_sym_source_file_repeat2,
    STATE(84), 1,
      sym_comment,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3164] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 1,
      sym_data_label,
    STATE(122), 1,
      sym_definition,
    STATE(85), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(428), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(426), 4,
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
    ACTIONS(432), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(430), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3226] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_stack_behaviour,
    STATE(88), 1,
      sym_comment,
    STATE(186), 1,
      sym_number,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3250] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(436), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(434), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(440), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(438), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(444), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(442), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3310] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    STATE(52), 1,
      sym_stack_behaviour,
    STATE(92), 1,
      sym_comment,
    STATE(186), 1,
      sym_number,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3334] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(448), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(446), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3354] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(452), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(450), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3374] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(456), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(454), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3394] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(460), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(458), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3414] = 5,
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
  [3434] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(49), 1,
      sym_number,
    STATE(98), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3455] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(99), 1,
      sym_comment,
    STATE(140), 1,
      sym_branch_block,
    ACTIONS(466), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3476] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(48), 1,
      sym_number,
    STATE(100), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3497] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    STATE(101), 1,
      sym_comment,
    STATE(118), 1,
      sym_number,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3518] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(25), 1,
      sym_number,
    STATE(102), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3539] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(13), 1,
      sym_number,
    STATE(103), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3560] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    STATE(13), 1,
      sym_number,
    STATE(104), 1,
      sym_comment,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3581] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(51), 1,
      sym_number,
    STATE(105), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3602] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    STATE(106), 1,
      sym_comment,
    STATE(163), 1,
      sym_number,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3623] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(38), 1,
      sym_number,
    STATE(107), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3644] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(23), 1,
      sym_number,
    STATE(108), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3665] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      aux_sym_number_token3,
    STATE(109), 1,
      sym_comment,
    STATE(171), 1,
      sym_number,
    ACTIONS(288), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3686] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(110), 1,
      sym_comment,
    STATE(123), 1,
      sym_branch_block,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3707] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(111), 1,
      sym_comment,
    STATE(139), 1,
      sym_branch_block,
    ACTIONS(472), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3728] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(27), 1,
      sym_number,
    STATE(112), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3749] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(24), 1,
      sym_number,
    STATE(113), 1,
      sym_comment,
    ACTIONS(342), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3770] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(114), 1,
      sym_comment,
    STATE(132), 1,
      sym_branch_block,
    ACTIONS(474), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(476), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3823] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_JMP,
    ACTIONS(482), 1,
      anon_sym_IN,
    ACTIONS(484), 1,
      anon_sym_OUT,
    STATE(117), 1,
      sym_comment,
  [3845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(486), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3861] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(488), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(490), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(492), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3925] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      sym_comment,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3940] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_permutation,
    STATE(124), 1,
      sym_comment,
    STATE(181), 1,
      sym_stack_frame,
  [3959] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(125), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [3976] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_stack_frame_repeat1,
    STATE(126), 1,
      sym_comment,
  [3995] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      aux_sym_stack_frame_repeat1,
    STATE(127), 1,
      sym_comment,
  [4014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(507), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4029] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(509), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(511), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(513), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(515), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(517), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(521), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_comment,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4164] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_stack_frame_repeat1,
    STATE(138), 1,
      sym_comment,
  [4183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4213] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_stack_frame_repeat1,
    STATE(141), 1,
      sym_comment,
  [4232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(533), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(535), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4262] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_permutation,
    STATE(144), 1,
      sym_comment,
    STATE(181), 1,
      sym_stack_frame,
  [4281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(537), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(539), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      anon_sym_PLUS,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_comment,
  [4327] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(549), 2,
      sym_char,
      sym_char_escape,
  [4341] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_comment,
    ACTIONS(551), 2,
      sym_char,
      sym_char_escape,
  [4355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_stack_frame,
    STATE(150), 1,
      sym_comment,
  [4371] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(555), 2,
      sym_inst_label,
      sym_register,
  [4385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(557), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [4399] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    STATE(136), 1,
      sym_stack_frame,
    STATE(153), 1,
      sym_comment,
  [4415] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(559), 2,
      sym_char,
      sym_char_escape,
  [4429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_inst_label,
      sym_register,
  [4443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      sym_inst_label,
    STATE(156), 1,
      sym_comment,
  [4456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(565), 1,
      sym_port,
    STATE(157), 1,
      sym_comment,
  [4469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(567), 1,
      sym_port,
    STATE(158), 1,
      sym_comment,
  [4482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_comment,
  [4495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_comment,
  [4508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      sym_function_name,
    STATE(161), 1,
      sym_comment,
  [4521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      sym_inst_label,
    STATE(162), 1,
      sym_comment,
  [4534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
  [4547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      sym_port,
    STATE(164), 1,
      sym_comment,
  [4560] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_DASH_GT,
    STATE(165), 1,
      sym_comment,
  [4573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_comment,
  [4586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      sym_inst_label,
    STATE(167), 1,
      sym_comment,
  [4599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      sym_inst_label,
    STATE(168), 1,
      sym_comment,
  [4612] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      aux_sym_comment_token1,
    STATE(169), 1,
      sym_comment,
  [4625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      sym_inst_label,
    STATE(170), 1,
      sym_comment,
  [4638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_comment,
  [4651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      sym_port,
    STATE(172), 1,
      sym_comment,
  [4664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      sym_register,
    STATE(173), 1,
      sym_comment,
  [4677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      sym_inst_label,
    STATE(174), 1,
      sym_comment,
  [4690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      sym_port,
    STATE(175), 1,
      sym_comment,
  [4703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(176), 1,
      sym_comment,
  [4716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      sym_function_name,
    STATE(177), 1,
      sym_comment,
  [4729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      sym_port,
    STATE(178), 1,
      sym_comment,
  [4742] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      sym_port,
    STATE(179), 1,
      sym_comment,
  [4755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      anon_sym_SLASH,
    STATE(180), 1,
      sym_comment,
  [4768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_DASH_GT,
    STATE(181), 1,
      sym_comment,
  [4781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      sym_function_name,
    STATE(183), 1,
      sym_comment,
  [4807] = 4,
    ACTIONS(545), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      aux_sym_comment_token2,
    STATE(184), 1,
      sym_comment,
  [4820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_comment,
  [4833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      anon_sym_DASH_GT,
    STATE(186), 1,
      sym_comment,
  [4846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      sym_inst_label,
    STATE(187), 1,
      sym_comment,
  [4859] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      sym_register,
    STATE(188), 1,
      sym_comment,
  [4872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      anon_sym_DASH_GT,
    STATE(189), 1,
      sym_comment,
  [4885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_comment,
  [4898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      sym_port,
    STATE(191), 1,
      sym_comment,
  [4911] = 1,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
  [4915] = 1,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 567,
  [SMALL_STATE(10)] = 646,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 777,
  [SMALL_STATE(13)] = 827,
  [SMALL_STATE(14)] = 859,
  [SMALL_STATE(15)] = 892,
  [SMALL_STATE(16)] = 925,
  [SMALL_STATE(17)] = 955,
  [SMALL_STATE(18)] = 985,
  [SMALL_STATE(19)] = 1015,
  [SMALL_STATE(20)] = 1045,
  [SMALL_STATE(21)] = 1075,
  [SMALL_STATE(22)] = 1105,
  [SMALL_STATE(23)] = 1135,
  [SMALL_STATE(24)] = 1165,
  [SMALL_STATE(25)] = 1195,
  [SMALL_STATE(26)] = 1225,
  [SMALL_STATE(27)] = 1255,
  [SMALL_STATE(28)] = 1285,
  [SMALL_STATE(29)] = 1315,
  [SMALL_STATE(30)] = 1345,
  [SMALL_STATE(31)] = 1375,
  [SMALL_STATE(32)] = 1405,
  [SMALL_STATE(33)] = 1435,
  [SMALL_STATE(34)] = 1465,
  [SMALL_STATE(35)] = 1495,
  [SMALL_STATE(36)] = 1525,
  [SMALL_STATE(37)] = 1555,
  [SMALL_STATE(38)] = 1585,
  [SMALL_STATE(39)] = 1615,
  [SMALL_STATE(40)] = 1645,
  [SMALL_STATE(41)] = 1675,
  [SMALL_STATE(42)] = 1705,
  [SMALL_STATE(43)] = 1735,
  [SMALL_STATE(44)] = 1765,
  [SMALL_STATE(45)] = 1795,
  [SMALL_STATE(46)] = 1825,
  [SMALL_STATE(47)] = 1855,
  [SMALL_STATE(48)] = 1885,
  [SMALL_STATE(49)] = 1915,
  [SMALL_STATE(50)] = 1945,
  [SMALL_STATE(51)] = 1975,
  [SMALL_STATE(52)] = 2005,
  [SMALL_STATE(53)] = 2035,
  [SMALL_STATE(54)] = 2065,
  [SMALL_STATE(55)] = 2095,
  [SMALL_STATE(56)] = 2125,
  [SMALL_STATE(57)] = 2155,
  [SMALL_STATE(58)] = 2195,
  [SMALL_STATE(59)] = 2235,
  [SMALL_STATE(60)] = 2273,
  [SMALL_STATE(61)] = 2325,
  [SMALL_STATE(62)] = 2363,
  [SMALL_STATE(63)] = 2403,
  [SMALL_STATE(64)] = 2443,
  [SMALL_STATE(65)] = 2483,
  [SMALL_STATE(66)] = 2523,
  [SMALL_STATE(67)] = 2550,
  [SMALL_STATE(68)] = 2577,
  [SMALL_STATE(69)] = 2611,
  [SMALL_STATE(70)] = 2651,
  [SMALL_STATE(71)] = 2689,
  [SMALL_STATE(72)] = 2729,
  [SMALL_STATE(73)] = 2769,
  [SMALL_STATE(74)] = 2803,
  [SMALL_STATE(75)] = 2843,
  [SMALL_STATE(76)] = 2883,
  [SMALL_STATE(77)] = 2923,
  [SMALL_STATE(78)] = 2959,
  [SMALL_STATE(79)] = 2995,
  [SMALL_STATE(80)] = 3019,
  [SMALL_STATE(81)] = 3055,
  [SMALL_STATE(82)] = 3085,
  [SMALL_STATE(83)] = 3112,
  [SMALL_STATE(84)] = 3137,
  [SMALL_STATE(85)] = 3164,
  [SMALL_STATE(86)] = 3186,
  [SMALL_STATE(87)] = 3206,
  [SMALL_STATE(88)] = 3226,
  [SMALL_STATE(89)] = 3250,
  [SMALL_STATE(90)] = 3270,
  [SMALL_STATE(91)] = 3290,
  [SMALL_STATE(92)] = 3310,
  [SMALL_STATE(93)] = 3334,
  [SMALL_STATE(94)] = 3354,
  [SMALL_STATE(95)] = 3374,
  [SMALL_STATE(96)] = 3394,
  [SMALL_STATE(97)] = 3414,
  [SMALL_STATE(98)] = 3434,
  [SMALL_STATE(99)] = 3455,
  [SMALL_STATE(100)] = 3476,
  [SMALL_STATE(101)] = 3497,
  [SMALL_STATE(102)] = 3518,
  [SMALL_STATE(103)] = 3539,
  [SMALL_STATE(104)] = 3560,
  [SMALL_STATE(105)] = 3581,
  [SMALL_STATE(106)] = 3602,
  [SMALL_STATE(107)] = 3623,
  [SMALL_STATE(108)] = 3644,
  [SMALL_STATE(109)] = 3665,
  [SMALL_STATE(110)] = 3686,
  [SMALL_STATE(111)] = 3707,
  [SMALL_STATE(112)] = 3728,
  [SMALL_STATE(113)] = 3749,
  [SMALL_STATE(114)] = 3770,
  [SMALL_STATE(115)] = 3791,
  [SMALL_STATE(116)] = 3807,
  [SMALL_STATE(117)] = 3823,
  [SMALL_STATE(118)] = 3845,
  [SMALL_STATE(119)] = 3861,
  [SMALL_STATE(120)] = 3877,
  [SMALL_STATE(121)] = 3893,
  [SMALL_STATE(122)] = 3909,
  [SMALL_STATE(123)] = 3925,
  [SMALL_STATE(124)] = 3940,
  [SMALL_STATE(125)] = 3959,
  [SMALL_STATE(126)] = 3976,
  [SMALL_STATE(127)] = 3995,
  [SMALL_STATE(128)] = 4014,
  [SMALL_STATE(129)] = 4029,
  [SMALL_STATE(130)] = 4044,
  [SMALL_STATE(131)] = 4059,
  [SMALL_STATE(132)] = 4074,
  [SMALL_STATE(133)] = 4089,
  [SMALL_STATE(134)] = 4104,
  [SMALL_STATE(135)] = 4119,
  [SMALL_STATE(136)] = 4134,
  [SMALL_STATE(137)] = 4149,
  [SMALL_STATE(138)] = 4164,
  [SMALL_STATE(139)] = 4183,
  [SMALL_STATE(140)] = 4198,
  [SMALL_STATE(141)] = 4213,
  [SMALL_STATE(142)] = 4232,
  [SMALL_STATE(143)] = 4247,
  [SMALL_STATE(144)] = 4262,
  [SMALL_STATE(145)] = 4281,
  [SMALL_STATE(146)] = 4296,
  [SMALL_STATE(147)] = 4311,
  [SMALL_STATE(148)] = 4327,
  [SMALL_STATE(149)] = 4341,
  [SMALL_STATE(150)] = 4355,
  [SMALL_STATE(151)] = 4371,
  [SMALL_STATE(152)] = 4385,
  [SMALL_STATE(153)] = 4399,
  [SMALL_STATE(154)] = 4415,
  [SMALL_STATE(155)] = 4429,
  [SMALL_STATE(156)] = 4443,
  [SMALL_STATE(157)] = 4456,
  [SMALL_STATE(158)] = 4469,
  [SMALL_STATE(159)] = 4482,
  [SMALL_STATE(160)] = 4495,
  [SMALL_STATE(161)] = 4508,
  [SMALL_STATE(162)] = 4521,
  [SMALL_STATE(163)] = 4534,
  [SMALL_STATE(164)] = 4547,
  [SMALL_STATE(165)] = 4560,
  [SMALL_STATE(166)] = 4573,
  [SMALL_STATE(167)] = 4586,
  [SMALL_STATE(168)] = 4599,
  [SMALL_STATE(169)] = 4612,
  [SMALL_STATE(170)] = 4625,
  [SMALL_STATE(171)] = 4638,
  [SMALL_STATE(172)] = 4651,
  [SMALL_STATE(173)] = 4664,
  [SMALL_STATE(174)] = 4677,
  [SMALL_STATE(175)] = 4690,
  [SMALL_STATE(176)] = 4703,
  [SMALL_STATE(177)] = 4716,
  [SMALL_STATE(178)] = 4729,
  [SMALL_STATE(179)] = 4742,
  [SMALL_STATE(180)] = 4755,
  [SMALL_STATE(181)] = 4768,
  [SMALL_STATE(182)] = 4781,
  [SMALL_STATE(183)] = 4794,
  [SMALL_STATE(184)] = 4807,
  [SMALL_STATE(185)] = 4820,
  [SMALL_STATE(186)] = 4833,
  [SMALL_STATE(187)] = 4846,
  [SMALL_STATE(188)] = 4859,
  [SMALL_STATE(189)] = 4872,
  [SMALL_STATE(190)] = 4885,
  [SMALL_STATE(191)] = 4898,
  [SMALL_STATE(192)] = 4911,
  [SMALL_STATE(193)] = 4915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(60),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(112),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(187),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(50),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(144),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(73),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(191),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(158),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(161),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(88),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(55),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(108),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(113),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(102),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 25),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 34),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 34),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 16),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 16),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 2, .production_id = 12),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 2, .production_id = 12),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 10),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 10),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 8),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 14),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 14),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 14),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 14),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 14),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 14),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 14),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 14),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, .production_id = 13),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, .production_id = 13),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 14),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 14),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 14),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 14),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 14),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 14),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 14),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 14),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 23),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 23),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 14),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 14),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 14),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 14),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 31),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 31),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 22),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 22),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2, .production_id = 13),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2, .production_id = 13),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 23),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 23),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 23),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 23),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 14),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 20),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 20),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 23),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 23),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 23),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 23),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 23),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 23),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 23),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 23),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 23),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 23),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 23),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 23),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 23),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 23),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 23),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 23),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(154),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(155),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(117),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(168),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(188),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2), SHIFT_REPEAT(157),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(177),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(176),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 35),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 35),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 35),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 35),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 27),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 27),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 26),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 26),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 33),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 33),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 38),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 38),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 27),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 27),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 19),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 19),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 15),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 24),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 17),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 11),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 8),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 7, .production_id = 36),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(152),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 5, .production_id = 40),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 4, .production_id = 39),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 37),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 18),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 15),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 32),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 30),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 21),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 29),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 28),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 17),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 11),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 24),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [615] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
