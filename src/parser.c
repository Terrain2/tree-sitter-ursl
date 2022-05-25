#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 28

enum {
  sym_identifier = 1,
  anon_sym_SLASH_SLASH = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_SLASH_STAR = 4,
  aux_sym_comment_token2 = 5,
  anon_sym_SLASH = 6,
  sym_instruction_name = 7,
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
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_func = 26,
  anon_sym_PLUS = 27,
  anon_sym_inst = 28,
  anon_sym_branch = 29,
  anon_sym_height = 30,
  anon_sym_const = 31,
  anon_sym_call = 32,
  anon_sym_icall = 33,
  anon_sym_get = 34,
  anon_sym_set = 35,
  anon_sym_out = 36,
  anon_sym_in = 37,
  anon_sym_jump = 38,
  anon_sym_perm = 39,
  sym_register = 40,
  anon_sym_JMP = 41,
  anon_sym_IN = 42,
  anon_sym_OUT = 43,
  sym_source_file = 44,
  sym_comment = 45,
  sym_array = 46,
  sym__literal = 47,
  sym_number = 48,
  sym_char_literal = 49,
  sym_definition = 50,
  sym_stack_behaviour = 51,
  sym_instruction_list = 52,
  sym_func = 53,
  sym_inst = 54,
  sym_inst_permutation = 55,
  sym_permutation = 56,
  sym_stack_frame = 57,
  sym_branch_block = 58,
  sym__instruction = 59,
  sym_height = 60,
  sym_const = 61,
  sym_call = 62,
  sym_icall = 63,
  sym_get = 64,
  sym_set = 65,
  sym_out = 66,
  sym_in = 67,
  sym_jump = 68,
  sym_perm = 69,
  sym_branch = 70,
  sym_instruction = 71,
  sym_urcl_instruction_list = 72,
  sym__urcl_instruction = 73,
  sym__value = 74,
  sym_jmp = 75,
  sym_urcl_in = 76,
  sym_urcl_out = 77,
  sym_urcl_instruction = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_source_file_repeat2 = 80,
  aux_sym_array_repeat1 = 81,
  aux_sym_instruction_list_repeat1 = 82,
  aux_sym_stack_frame_repeat1 = 83,
  aux_sym_urcl_instruction_list_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_instruction_name] = "instruction_name",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_func] = "func",
  [anon_sym_PLUS] = "+",
  [anon_sym_inst] = "inst",
  [anon_sym_branch] = "branch",
  [anon_sym_height] = "height",
  [anon_sym_const] = "const",
  [anon_sym_call] = "call",
  [anon_sym_icall] = "icall",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_out] = "out",
  [anon_sym_in] = "in",
  [anon_sym_jump] = "jump",
  [anon_sym_perm] = "perm",
  [sym_register] = "register",
  [anon_sym_JMP] = "JMP",
  [anon_sym_IN] = "IN",
  [anon_sym_OUT] = "OUT",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_array] = "array",
  [sym__literal] = "_literal",
  [sym_number] = "number",
  [sym_char_literal] = "char_literal",
  [sym_definition] = "definition",
  [sym_stack_behaviour] = "stack_behaviour",
  [sym_instruction_list] = "instruction_list",
  [sym_func] = "func",
  [sym_inst] = "inst",
  [sym_inst_permutation] = "inst_permutation",
  [sym_permutation] = "permutation",
  [sym_stack_frame] = "stack_frame",
  [sym_branch_block] = "branch_block",
  [sym__instruction] = "_instruction",
  [sym_height] = "height",
  [sym_const] = "const",
  [sym_call] = "call",
  [sym_icall] = "icall",
  [sym_get] = "get",
  [sym_set] = "set",
  [sym_out] = "out",
  [sym_in] = "in",
  [sym_jump] = "jump",
  [sym_perm] = "perm",
  [sym_branch] = "branch",
  [sym_instruction] = "instruction",
  [sym_urcl_instruction_list] = "urcl_instruction_list",
  [sym__urcl_instruction] = "_urcl_instruction",
  [sym__value] = "_value",
  [sym_jmp] = "jmp",
  [sym_urcl_in] = "urcl_in",
  [sym_urcl_out] = "urcl_out",
  [sym_urcl_instruction] = "urcl_instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_instruction_list_repeat1] = "instruction_list_repeat1",
  [aux_sym_stack_frame_repeat1] = "stack_frame_repeat1",
  [aux_sym_urcl_instruction_list_repeat1] = "urcl_instruction_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_instruction_name] = sym_instruction_name,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_inst] = anon_sym_inst,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_icall] = anon_sym_icall,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_perm] = anon_sym_perm,
  [sym_register] = sym_register,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_OUT] = anon_sym_OUT,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_array] = sym_array,
  [sym__literal] = sym__literal,
  [sym_number] = sym_number,
  [sym_char_literal] = sym_char_literal,
  [sym_definition] = sym_definition,
  [sym_stack_behaviour] = sym_stack_behaviour,
  [sym_instruction_list] = sym_instruction_list,
  [sym_func] = sym_func,
  [sym_inst] = sym_inst,
  [sym_inst_permutation] = sym_inst_permutation,
  [sym_permutation] = sym_permutation,
  [sym_stack_frame] = sym_stack_frame,
  [sym_branch_block] = sym_branch_block,
  [sym__instruction] = sym__instruction,
  [sym_height] = sym_height,
  [sym_const] = sym_const,
  [sym_call] = sym_call,
  [sym_icall] = sym_icall,
  [sym_get] = sym_get,
  [sym_set] = sym_set,
  [sym_out] = sym_out,
  [sym_in] = sym_in,
  [sym_jump] = sym_jump,
  [sym_perm] = sym_perm,
  [sym_branch] = sym_branch,
  [sym_instruction] = sym_instruction,
  [sym_urcl_instruction_list] = sym_urcl_instruction_list,
  [sym__urcl_instruction] = sym__urcl_instruction,
  [sym__value] = sym__value,
  [sym_jmp] = sym_jmp,
  [sym_urcl_in] = sym_urcl_in,
  [sym_urcl_out] = sym_urcl_out,
  [sym_urcl_instruction] = sym_urcl_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_instruction_list_repeat1] = aux_sym_instruction_list_repeat1,
  [aux_sym_stack_frame_repeat1] = aux_sym_stack_frame_repeat1,
  [aux_sym_urcl_instruction_list_repeat1] = aux_sym_urcl_instruction_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_instruction_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_const] = {
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
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_perm] = {
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
  [sym_instruction_list] = {
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
  [sym_const] = {
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
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_out] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_perm] = {
    .visible = true,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_instruction_list] = {
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
  [aux_sym_instruction_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_urcl_instruction_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_branch = 1,
  field_dest = 2,
  field_input = 3,
  field_instructions = 4,
  field_items = 5,
  field_label = 6,
  field_locals = 7,
  field_name = 8,
  field_op = 9,
  field_opcode = 10,
  field_operand = 11,
  field_output = 12,
  field_params = 13,
  field_permutation = 14,
  field_returns = 15,
  field_source = 16,
  field_stack = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_branch] = "branch",
  [field_dest] = "dest",
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 4},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 4},
  [19] = {.index = 38, .length = 3},
  [20] = {.index = 41, .length = 2},
  [21] = {.index = 43, .length = 2},
  [22] = {.index = 45, .length = 2},
  [23] = {.index = 47, .length = 3},
  [24] = {.index = 50, .length = 4},
  [25] = {.index = 54, .length = 4},
  [26] = {.index = 58, .length = 3},
  [27] = {.index = 61, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
    {field_value, 1},
  [2] =
    {field_instructions, 2},
    {field_name, 1},
  [4] =
    {field_name, 1},
    {field_permutation, 2},
  [6] =
    {field_value, 1},
  [7] =
    {field_opcode, 0},
  [8] =
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [11] =
    {field_branch, 3},
    {field_instructions, 2},
    {field_name, 1},
  [14] =
    {field_label, 0},
    {field_opcode, 1},
  [16] =
    {field_operand, 1},
  [17] =
    {field_instructions, 4},
    {field_locals, 3},
    {field_name, 1},
  [20] =
    {field_params, 0},
    {field_returns, 2},
  [22] =
    {field_items, 1},
  [23] =
    {field_dest, 1},
  [24] =
    {field_branch, 4},
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [28] =
    {field_input, 0},
    {field_output, 2},
  [30] =
    {field_opcode, 0},
    {field_operand, 2},
  [32] =
    {field_label, 0},
    {field_operand, 2},
  [34] =
    {field_instructions, 5},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [38] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [41] =
    {field_dest, 2},
    {field_label, 0},
  [43] =
    {field_dest, 1},
    {field_source, 2},
  [45] =
    {field_instructions, 2},
    {field_label, 1},
  [47] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [50] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [54] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [58] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [61] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
    {field_source, 4},
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
      if (eof) ADVANCE(67);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '+') ADVANCE(147);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'J') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'j') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'J') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(147);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'j') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'j') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(171);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(128);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '+') ADVANCE(147);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '0') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_mem);
      if (lookahead == '0') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_IN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
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
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 66},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 66},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 66},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 66},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 66},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 66},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 66},
  [95] = {.lex_state = 66},
  [96] = {.lex_state = 66},
  [97] = {.lex_state = 66},
  [98] = {.lex_state = 66},
  [99] = {.lex_state = 66},
  [100] = {.lex_state = 66},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 66},
  [104] = {.lex_state = 66},
  [105] = {.lex_state = 66},
  [106] = {.lex_state = 66},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 66},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 66},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 66},
  [114] = {.lex_state = 66},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 66},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 66},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 66},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 66},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 66},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 66},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 83},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {(TSStateId)(-1)},
  [172] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_inst] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_icall] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_perm] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(158),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(102),
    [sym_func] = STATE(105),
    [sym_inst] = STATE(105),
    [sym_inst_permutation] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(59),
    [aux_sym_source_file_repeat2] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_data_label] = ACTIONS(9),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_inst] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_instruction_name,
    ACTIONS(17), 1,
      sym_inst_label,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_height,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_icall,
    ACTIONS(29), 1,
      anon_sym_get,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_out,
    ACTIONS(35), 1,
      anon_sym_in,
    ACTIONS(37), 1,
      anon_sym_jump,
    ACTIONS(39), 1,
      anon_sym_perm,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_instruction_list_repeat1,
    STATE(33), 1,
      sym__instruction,
    STATE(29), 12,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_perm,
      sym_branch,
      sym_instruction,
  [69] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      sym_instruction_name,
    ACTIONS(44), 1,
      sym_inst_label,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_height,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(55), 1,
      anon_sym_call,
    ACTIONS(58), 1,
      anon_sym_icall,
    ACTIONS(61), 1,
      anon_sym_get,
    ACTIONS(64), 1,
      anon_sym_set,
    ACTIONS(67), 1,
      anon_sym_out,
    ACTIONS(70), 1,
      anon_sym_in,
    ACTIONS(73), 1,
      anon_sym_jump,
    ACTIONS(76), 1,
      anon_sym_perm,
    STATE(33), 1,
      sym__instruction,
    STATE(3), 2,
      sym_comment,
      aux_sym_instruction_list_repeat1,
    STATE(29), 12,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_perm,
      sym_branch,
      sym_instruction,
  [136] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_instruction_name,
    ACTIONS(17), 1,
      sym_inst_label,
    ACTIONS(21), 1,
      anon_sym_height,
    ACTIONS(23), 1,
      anon_sym_const,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_icall,
    ACTIONS(29), 1,
      anon_sym_get,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_out,
    ACTIONS(35), 1,
      anon_sym_in,
    ACTIONS(37), 1,
      anon_sym_jump,
    ACTIONS(39), 1,
      anon_sym_perm,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_instruction_list_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(33), 1,
      sym__instruction,
    STATE(29), 12,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_perm,
      sym_branch,
      sym_instruction,
  [205] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_register,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      sym__literal,
    STATE(79), 1,
      sym__value,
    ACTIONS(89), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(81), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(83), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(85), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [253] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_register,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      sym__literal,
    STATE(69), 1,
      sym__value,
    ACTIONS(95), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(83), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(85), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    ACTIONS(93), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(99), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(97), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [331] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(103), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(101), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [361] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(107), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(105), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [391] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(111), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(109), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [421] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(115), 4,
      sym_inst_label,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(113), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [450] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 1,
      aux_sym_number_token3,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_array_repeat1,
    STATE(60), 1,
      sym__literal,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(121), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(117), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [490] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      aux_sym_number_token3,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_register,
    STATE(10), 1,
      sym__literal,
    STATE(13), 1,
      sym_comment,
    STATE(71), 1,
      sym__value,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(127), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(83), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [530] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_branch,
    STATE(14), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(129), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [560] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_branch,
    STATE(15), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(135), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [590] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      aux_sym_number_token3,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_register,
    STATE(10), 1,
      sym__literal,
    STATE(16), 1,
      sym_comment,
    STATE(78), 1,
      sym__value,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(127), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(83), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [630] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      aux_sym_number_token3,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_array_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(60), 1,
      sym__literal,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(121), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(117), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [670] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      aux_sym_number_token3,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_register,
    STATE(5), 1,
      sym__value,
    STATE(10), 1,
      sym__literal,
    STATE(18), 1,
      sym_comment,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(127), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(83), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [710] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      aux_sym_number_token3,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__literal,
    STATE(19), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(148), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(143), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [748] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      aux_sym_number_token3,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_register,
    STATE(6), 1,
      sym__value,
    STATE(10), 1,
      sym__literal,
    STATE(20), 1,
      sym_comment,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(127), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(83), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [788] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_comment,
    STATE(94), 2,
      sym_number,
      sym_char_literal,
    STATE(96), 2,
      sym_array,
      sym__literal,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(157), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [826] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(169), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(167), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [853] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(171), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [880] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(175), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(179), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [934] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(185), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(183), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [961] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(187), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(193), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(191), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1015] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(197), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(195), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1042] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(199), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1069] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(203), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1096] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(207), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(211), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1150] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(217), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(215), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(221), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(219), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(223), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(105), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1258] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(229), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(227), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(231), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1312] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(237), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(235), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1339] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(239), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(245), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(243), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1393] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(247), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1420] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(101), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1447] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(251), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1474] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(255), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(97), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1528] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(259), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1555] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(263), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1582] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(267), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1609] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(273), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(271), 11,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_perm,
  [1636] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym__literal,
    STATE(52), 1,
      sym_comment,
    STATE(37), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(275), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1670] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym__literal,
    STATE(53), 1,
      sym_comment,
    STATE(37), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(275), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1704] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_inst_label,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      anon_sym_JMP,
    ACTIONS(291), 1,
      anon_sym_IN,
    ACTIONS(293), 1,
      anon_sym_OUT,
    STATE(54), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(74), 1,
      sym__urcl_instruction,
    STATE(75), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1744] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_inst_label,
    ACTIONS(289), 1,
      anon_sym_JMP,
    ACTIONS(291), 1,
      anon_sym_IN,
    ACTIONS(293), 1,
      anon_sym_OUT,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(74), 1,
      sym__urcl_instruction,
    STATE(75), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1784] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(300), 1,
      sym_inst_label,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      anon_sym_JMP,
    ACTIONS(308), 1,
      anon_sym_IN,
    ACTIONS(311), 1,
      anon_sym_OUT,
    STATE(74), 1,
      sym__urcl_instruction,
    STATE(56), 2,
      sym_comment,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(75), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1822] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      sym_instruction_name,
    ACTIONS(316), 1,
      anon_sym_height,
    ACTIONS(318), 1,
      anon_sym_const,
    ACTIONS(320), 1,
      anon_sym_call,
    ACTIONS(322), 1,
      anon_sym_icall,
    ACTIONS(324), 1,
      anon_sym_get,
    ACTIONS(326), 1,
      anon_sym_set,
    ACTIONS(328), 1,
      anon_sym_out,
    ACTIONS(330), 1,
      anon_sym_in,
    ACTIONS(332), 1,
      anon_sym_jump,
    ACTIONS(334), 1,
      anon_sym_perm,
    STATE(57), 1,
      sym_comment,
  [1865] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_comment,
    STATE(90), 1,
      sym_urcl_instruction_list,
    STATE(106), 1,
      sym_permutation,
    STATE(132), 1,
      sym_stack_behaviour,
    STATE(155), 1,
      sym_number,
    STATE(164), 1,
      sym_stack_frame,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [1904] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_data_label,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    STATE(80), 1,
      aux_sym_source_file_repeat1,
    STATE(102), 1,
      sym_definition,
    STATE(105), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [1940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      aux_sym_number_token3,
    STATE(60), 1,
      sym_comment,
    ACTIONS(342), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1964] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      aux_sym_number_token3,
    STATE(61), 1,
      sym_comment,
    ACTIONS(99), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      aux_sym_number_token3,
    STATE(62), 1,
      sym_comment,
    ACTIONS(103), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2012] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      aux_sym_number_token3,
    STATE(63), 1,
      sym_comment,
    ACTIONS(107), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2036] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_PLUS,
    STATE(64), 1,
      sym_comment,
    STATE(117), 1,
      sym_instruction_list,
    STATE(121), 1,
      sym_stack_behaviour,
    STATE(155), 1,
      sym_number,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2069] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      anon_sym_func,
    ACTIONS(355), 1,
      anon_sym_inst,
    STATE(65), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(105), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2094] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      aux_sym_source_file_repeat2,
    STATE(66), 1,
      sym_comment,
    STATE(105), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2121] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      aux_sym_source_file_repeat2,
    STATE(67), 1,
      sym_comment,
    STATE(105), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_inst,
  [2167] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(362), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(360), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(366), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(364), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(370), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(368), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(372), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(378), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(376), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(382), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(380), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(386), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(384), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2307] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    STATE(48), 1,
      sym_stack_behaviour,
    STATE(76), 1,
      sym_comment,
    STATE(163), 1,
      sym_number,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2331] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(390), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(388), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2351] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(394), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(392), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2371] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(396), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2391] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(402), 1,
      sym_data_label,
    STATE(102), 1,
      sym_definition,
    STATE(80), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(400), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2413] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    STATE(27), 1,
      sym_stack_behaviour,
    STATE(81), 1,
      sym_comment,
    STATE(163), 1,
      sym_number,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2437] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_branch,
    STATE(82), 1,
      sym_comment,
    STATE(118), 1,
      sym_branch_block,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2458] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(31), 1,
      sym_number,
    STATE(83), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2479] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(11), 1,
      sym_number,
    STATE(84), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2500] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(26), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2521] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(25), 1,
      sym_number,
    STATE(86), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2542] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    STATE(87), 1,
      sym_comment,
    STATE(131), 1,
      sym_number,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2563] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    STATE(88), 1,
      sym_comment,
    STATE(134), 1,
      sym_number,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2584] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_number_token3,
    STATE(11), 1,
      sym_number,
    STATE(89), 1,
      sym_comment,
    ACTIONS(161), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_branch,
    STATE(90), 1,
      sym_comment,
    STATE(123), 1,
      sym_branch_block,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2626] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(51), 1,
      sym_number,
    STATE(91), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2647] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(45), 1,
      sym_number,
    STATE(92), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2668] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(22), 1,
      sym_number,
    STATE(93), 1,
      sym_comment,
    ACTIONS(277), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2705] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(411), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2721] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(413), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(415), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(417), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2801] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_JMP,
    ACTIONS(425), 1,
      anon_sym_IN,
    ACTIONS(427), 1,
      anon_sym_OUT,
    STATE(101), 1,
      sym_comment,
  [2823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2839] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [2855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [2871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(431), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(107), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [2918] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_permutation,
    STATE(108), 1,
      sym_comment,
    STATE(170), 1,
      sym_stack_frame,
  [2937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2952] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_permutation,
    STATE(110), 1,
      sym_comment,
    STATE(170), 1,
      sym_stack_frame,
  [2971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2986] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_stack_frame_repeat1,
    STATE(112), 1,
      sym_comment,
  [3005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3020] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3035] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_stack_frame_repeat1,
    STATE(115), 1,
      sym_comment,
  [3054] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_stack_frame_repeat1,
  [3073] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(460), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3133] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(462), 1,
      anon_sym_PLUS,
    STATE(109), 1,
      sym_instruction_list,
    STATE(121), 1,
      sym_comment,
  [3152] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_stack_frame_repeat1,
    STATE(122), 1,
      sym_comment,
  [3171] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      sym_comment,
    ACTIONS(466), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(470), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [3215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(472), 2,
      sym_inst_label,
      sym_register,
  [3229] = 4,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(478), 2,
      sym_char,
      sym_char_escape,
  [3243] = 4,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(480), 2,
      sym_char,
      sym_char_escape,
  [3257] = 4,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(482), 2,
      sym_char,
      sym_char_escape,
  [3271] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_stack_frame,
    STATE(130), 1,
      sym_comment,
  [3287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_instruction_list,
    STATE(131), 1,
      sym_comment,
  [3303] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_urcl_instruction_list,
    STATE(132), 1,
      sym_comment,
  [3319] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(486), 2,
      sym_inst_label,
      sym_register,
  [3333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_instruction_list,
    STATE(134), 1,
      sym_comment,
  [3349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      sym_stack_frame,
    STATE(135), 1,
      sym_comment,
  [3365] = 4,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(488), 2,
      sym_char,
      sym_char_escape,
  [3379] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_urcl_instruction_list,
    STATE(137), 1,
      sym_comment,
  [3395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      sym_inst_label,
    STATE(138), 1,
      sym_comment,
  [3408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(492), 1,
      sym_inst_label,
    STATE(139), 1,
      sym_comment,
  [3421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      sym_comment,
  [3434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      sym_port,
    STATE(141), 1,
      sym_comment,
  [3447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      sym_port,
    STATE(142), 1,
      sym_comment,
  [3460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(500), 1,
      sym_register,
    STATE(143), 1,
      sym_comment,
  [3473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(502), 1,
      sym_inst_label,
    STATE(144), 1,
      sym_comment,
  [3486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(504), 1,
      sym_port,
    STATE(145), 1,
      sym_comment,
  [3499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      sym_inst_label,
    STATE(146), 1,
      sym_comment,
  [3512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      sym_comment,
  [3525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(510), 1,
      sym_port,
    STATE(148), 1,
      sym_comment,
  [3538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(512), 1,
      sym_inst_label,
    STATE(149), 1,
      sym_comment,
  [3551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(514), 1,
      sym_port,
    STATE(150), 1,
      sym_comment,
  [3564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      sym_register,
    STATE(151), 1,
      sym_comment,
  [3577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(518), 1,
      sym_inst_label,
    STATE(152), 1,
      sym_comment,
  [3590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(520), 1,
      sym_port,
    STATE(153), 1,
      sym_comment,
  [3603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(522), 1,
      sym_port,
    STATE(154), 1,
      sym_comment,
  [3616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(524), 1,
      anon_sym_DASH_GT,
    STATE(155), 1,
      sym_comment,
  [3629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      sym_port,
    STATE(156), 1,
      sym_comment,
  [3642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(528), 1,
      sym_inst_label,
    STATE(157), 1,
      sym_comment,
  [3655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_comment,
  [3668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(532), 1,
      sym_instruction_name,
    STATE(159), 1,
      sym_comment,
  [3681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(534), 1,
      sym_function_name,
    STATE(160), 1,
      sym_comment,
  [3694] = 4,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(536), 1,
      aux_sym_comment_token2,
    STATE(161), 1,
      sym_comment,
  [3707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(538), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_comment,
  [3720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(540), 1,
      anon_sym_DASH_GT,
    STATE(163), 1,
      sym_comment,
  [3733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(542), 1,
      anon_sym_DASH_GT,
    STATE(164), 1,
      sym_comment,
  [3746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(544), 1,
      sym_function_name,
    STATE(165), 1,
      sym_comment,
  [3759] = 4,
    ACTIONS(474), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(476), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(546), 1,
      aux_sym_comment_token1,
    STATE(166), 1,
      sym_comment,
  [3772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(548), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      sym_comment,
  [3785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_comment,
  [3798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(552), 1,
      sym_function_name,
    STATE(169), 1,
      sym_comment,
  [3811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(554), 1,
      anon_sym_DASH_GT,
    STATE(170), 1,
      sym_comment,
  [3824] = 1,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
  [3828] = 1,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 205,
  [SMALL_STATE(6)] = 253,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 331,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 391,
  [SMALL_STATE(11)] = 421,
  [SMALL_STATE(12)] = 450,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 560,
  [SMALL_STATE(16)] = 590,
  [SMALL_STATE(17)] = 630,
  [SMALL_STATE(18)] = 670,
  [SMALL_STATE(19)] = 710,
  [SMALL_STATE(20)] = 748,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 853,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 907,
  [SMALL_STATE(26)] = 934,
  [SMALL_STATE(27)] = 961,
  [SMALL_STATE(28)] = 988,
  [SMALL_STATE(29)] = 1015,
  [SMALL_STATE(30)] = 1042,
  [SMALL_STATE(31)] = 1069,
  [SMALL_STATE(32)] = 1096,
  [SMALL_STATE(33)] = 1123,
  [SMALL_STATE(34)] = 1150,
  [SMALL_STATE(35)] = 1177,
  [SMALL_STATE(36)] = 1204,
  [SMALL_STATE(37)] = 1231,
  [SMALL_STATE(38)] = 1258,
  [SMALL_STATE(39)] = 1285,
  [SMALL_STATE(40)] = 1312,
  [SMALL_STATE(41)] = 1339,
  [SMALL_STATE(42)] = 1366,
  [SMALL_STATE(43)] = 1393,
  [SMALL_STATE(44)] = 1420,
  [SMALL_STATE(45)] = 1447,
  [SMALL_STATE(46)] = 1474,
  [SMALL_STATE(47)] = 1501,
  [SMALL_STATE(48)] = 1528,
  [SMALL_STATE(49)] = 1555,
  [SMALL_STATE(50)] = 1582,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1636,
  [SMALL_STATE(53)] = 1670,
  [SMALL_STATE(54)] = 1704,
  [SMALL_STATE(55)] = 1744,
  [SMALL_STATE(56)] = 1784,
  [SMALL_STATE(57)] = 1822,
  [SMALL_STATE(58)] = 1865,
  [SMALL_STATE(59)] = 1904,
  [SMALL_STATE(60)] = 1940,
  [SMALL_STATE(61)] = 1964,
  [SMALL_STATE(62)] = 1988,
  [SMALL_STATE(63)] = 2012,
  [SMALL_STATE(64)] = 2036,
  [SMALL_STATE(65)] = 2069,
  [SMALL_STATE(66)] = 2094,
  [SMALL_STATE(67)] = 2121,
  [SMALL_STATE(68)] = 2148,
  [SMALL_STATE(69)] = 2167,
  [SMALL_STATE(70)] = 2187,
  [SMALL_STATE(71)] = 2207,
  [SMALL_STATE(72)] = 2227,
  [SMALL_STATE(73)] = 2247,
  [SMALL_STATE(74)] = 2267,
  [SMALL_STATE(75)] = 2287,
  [SMALL_STATE(76)] = 2307,
  [SMALL_STATE(77)] = 2331,
  [SMALL_STATE(78)] = 2351,
  [SMALL_STATE(79)] = 2371,
  [SMALL_STATE(80)] = 2391,
  [SMALL_STATE(81)] = 2413,
  [SMALL_STATE(82)] = 2437,
  [SMALL_STATE(83)] = 2458,
  [SMALL_STATE(84)] = 2479,
  [SMALL_STATE(85)] = 2500,
  [SMALL_STATE(86)] = 2521,
  [SMALL_STATE(87)] = 2542,
  [SMALL_STATE(88)] = 2563,
  [SMALL_STATE(89)] = 2584,
  [SMALL_STATE(90)] = 2605,
  [SMALL_STATE(91)] = 2626,
  [SMALL_STATE(92)] = 2647,
  [SMALL_STATE(93)] = 2668,
  [SMALL_STATE(94)] = 2689,
  [SMALL_STATE(95)] = 2705,
  [SMALL_STATE(96)] = 2721,
  [SMALL_STATE(97)] = 2737,
  [SMALL_STATE(98)] = 2753,
  [SMALL_STATE(99)] = 2769,
  [SMALL_STATE(100)] = 2785,
  [SMALL_STATE(101)] = 2801,
  [SMALL_STATE(102)] = 2823,
  [SMALL_STATE(103)] = 2839,
  [SMALL_STATE(104)] = 2855,
  [SMALL_STATE(105)] = 2871,
  [SMALL_STATE(106)] = 2886,
  [SMALL_STATE(107)] = 2901,
  [SMALL_STATE(108)] = 2918,
  [SMALL_STATE(109)] = 2937,
  [SMALL_STATE(110)] = 2952,
  [SMALL_STATE(111)] = 2971,
  [SMALL_STATE(112)] = 2986,
  [SMALL_STATE(113)] = 3005,
  [SMALL_STATE(114)] = 3020,
  [SMALL_STATE(115)] = 3035,
  [SMALL_STATE(116)] = 3054,
  [SMALL_STATE(117)] = 3073,
  [SMALL_STATE(118)] = 3088,
  [SMALL_STATE(119)] = 3103,
  [SMALL_STATE(120)] = 3118,
  [SMALL_STATE(121)] = 3133,
  [SMALL_STATE(122)] = 3152,
  [SMALL_STATE(123)] = 3171,
  [SMALL_STATE(124)] = 3186,
  [SMALL_STATE(125)] = 3201,
  [SMALL_STATE(126)] = 3215,
  [SMALL_STATE(127)] = 3229,
  [SMALL_STATE(128)] = 3243,
  [SMALL_STATE(129)] = 3257,
  [SMALL_STATE(130)] = 3271,
  [SMALL_STATE(131)] = 3287,
  [SMALL_STATE(132)] = 3303,
  [SMALL_STATE(133)] = 3319,
  [SMALL_STATE(134)] = 3333,
  [SMALL_STATE(135)] = 3349,
  [SMALL_STATE(136)] = 3365,
  [SMALL_STATE(137)] = 3379,
  [SMALL_STATE(138)] = 3395,
  [SMALL_STATE(139)] = 3408,
  [SMALL_STATE(140)] = 3421,
  [SMALL_STATE(141)] = 3434,
  [SMALL_STATE(142)] = 3447,
  [SMALL_STATE(143)] = 3460,
  [SMALL_STATE(144)] = 3473,
  [SMALL_STATE(145)] = 3486,
  [SMALL_STATE(146)] = 3499,
  [SMALL_STATE(147)] = 3512,
  [SMALL_STATE(148)] = 3525,
  [SMALL_STATE(149)] = 3538,
  [SMALL_STATE(150)] = 3551,
  [SMALL_STATE(151)] = 3564,
  [SMALL_STATE(152)] = 3577,
  [SMALL_STATE(153)] = 3590,
  [SMALL_STATE(154)] = 3603,
  [SMALL_STATE(155)] = 3616,
  [SMALL_STATE(156)] = 3629,
  [SMALL_STATE(157)] = 3642,
  [SMALL_STATE(158)] = 3655,
  [SMALL_STATE(159)] = 3668,
  [SMALL_STATE(160)] = 3681,
  [SMALL_STATE(161)] = 3694,
  [SMALL_STATE(162)] = 3707,
  [SMALL_STATE(163)] = 3720,
  [SMALL_STATE(164)] = 3733,
  [SMALL_STATE(165)] = 3746,
  [SMALL_STATE(166)] = 3759,
  [SMALL_STATE(167)] = 3772,
  [SMALL_STATE(168)] = 3785,
  [SMALL_STATE(169)] = 3798,
  [SMALL_STATE(170)] = 3811,
  [SMALL_STATE(171)] = 3824,
  [SMALL_STATE(172)] = 3828,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(15),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(91),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(53),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(165),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(76),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(93),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(92),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(156),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(145),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(149),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(108),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 25),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 25),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 19),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 19),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(129),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 9),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 9),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 17),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 17),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 17),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 17),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 17),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 17),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 17),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 17),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 17),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 17),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 17),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 17),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 17),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 16),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 16),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 23),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 23),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 15),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 15),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 9),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 17),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 17),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 9),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 9),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 17),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 17),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 17),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 17),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 9),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 12),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 9),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 9),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 9),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(126),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(101),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(146),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(143),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(142),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(160),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(159),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 24),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 24),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 26),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 26),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 21),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 21),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 21),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 21),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 13),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 20),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 20),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 26),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 26),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 27),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 27),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 6),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 3),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(125),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 10),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 14),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 3, .production_id = 22),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 7),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 18),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [530] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
