#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 27

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
  sym_branch_block = 57,
  sym__instruction = 58,
  sym_height = 59,
  sym_const = 60,
  sym_call = 61,
  sym_icall = 62,
  sym_get = 63,
  sym_set = 64,
  sym_out = 65,
  sym_in = 66,
  sym_jump = 67,
  sym_perm = 68,
  sym_branch = 69,
  sym_instruction = 70,
  sym_urcl_instruction_list = 71,
  sym__urcl_instruction = 72,
  sym__value = 73,
  sym_jmp = 74,
  sym_urcl_in = 75,
  sym_urcl_out = 76,
  sym_urcl_instruction = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_source_file_repeat2 = 79,
  aux_sym_array_repeat1 = 80,
  aux_sym_instruction_list_repeat1 = 81,
  aux_sym_permutation_repeat1 = 82,
  aux_sym_urcl_instruction_list_repeat1 = 83,
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
  [aux_sym_permutation_repeat1] = "permutation_repeat1",
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
  [aux_sym_permutation_repeat1] = aux_sym_permutation_repeat1,
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
  [aux_sym_permutation_repeat1] = {
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
  field_instructions = 3,
  field_label = 4,
  field_locals = 5,
  field_name = 6,
  field_op = 7,
  field_opcode = 8,
  field_operand = 9,
  field_params = 10,
  field_permutation = 11,
  field_returns = 12,
  field_source = 13,
  field_stack = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_branch] = "branch",
  [field_dest] = "dest",
  [field_instructions] = "instructions",
  [field_label] = "label",
  [field_locals] = "locals",
  [field_name] = "name",
  [field_op] = "op",
  [field_opcode] = "opcode",
  [field_operand] = "operand",
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
  [13] = {.index = 23, .length = 4},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 2},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 3},
  [18] = {.index = 38, .length = 2},
  [19] = {.index = 40, .length = 2},
  [20] = {.index = 42, .length = 2},
  [21] = {.index = 44, .length = 3},
  [22] = {.index = 47, .length = 4},
  [23] = {.index = 51, .length = 4},
  [24] = {.index = 55, .length = 3},
  [25] = {.index = 58, .length = 5},
  [26] = {.index = 63, .length = 1},
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
    {field_dest, 1},
  [23] =
    {field_branch, 4},
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [27] =
    {field_opcode, 0},
    {field_operand, 2},
  [29] =
    {field_label, 0},
    {field_operand, 2},
  [31] =
    {field_instructions, 5},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [35] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [38] =
    {field_dest, 2},
    {field_label, 0},
  [40] =
    {field_dest, 1},
    {field_source, 2},
  [42] =
    {field_instructions, 2},
    {field_label, 1},
  [44] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [47] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [51] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [55] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [58] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
    {field_source, 4},
  [63] =
    {field_label, 0},
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
      if (lookahead == '[') ADVANCE(125);
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
      if (lookahead == '[') ADVANCE(125);
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
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 66},
  [69] = {.lex_state = 66},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 66},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 66},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 66},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 66},
  [96] = {.lex_state = 66},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 66},
  [99] = {.lex_state = 66},
  [100] = {.lex_state = 66},
  [101] = {.lex_state = 66},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 66},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 66},
  [106] = {.lex_state = 66},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 66},
  [116] = {.lex_state = 66},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 66},
  [125] = {.lex_state = 66},
  [126] = {.lex_state = 66},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 66},
  [129] = {.lex_state = 66},
  [130] = {.lex_state = 66},
  [131] = {.lex_state = 66},
  [132] = {.lex_state = 66},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 66},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 66},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 83},
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
  [168] = {.lex_state = 66},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
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
  [188] = {.lex_state = 66},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {(TSStateId)(-1)},
  [192] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(169),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(99),
    [sym_func] = STATE(129),
    [sym_inst] = STATE(129),
    [sym_inst_permutation] = STATE(129),
    [aux_sym_source_file_repeat1] = STATE(60),
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
  [0] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_instruction_name,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_inst_label,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_height,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_icall,
    ACTIONS(31), 1,
      anon_sym_get,
    ACTIONS(33), 1,
      anon_sym_set,
    ACTIONS(35), 1,
      anon_sym_out,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_jump,
    ACTIONS(41), 1,
      anon_sym_perm,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_instruction_list_repeat1,
    STATE(47), 1,
      sym__instruction,
    STATE(49), 13,
      sym_permutation,
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
  [73] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_instruction_name,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_inst_label,
    ACTIONS(23), 1,
      anon_sym_height,
    ACTIONS(25), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_icall,
    ACTIONS(31), 1,
      anon_sym_get,
    ACTIONS(33), 1,
      anon_sym_set,
    ACTIONS(35), 1,
      anon_sym_out,
    ACTIONS(37), 1,
      anon_sym_in,
    ACTIONS(39), 1,
      anon_sym_jump,
    ACTIONS(41), 1,
      anon_sym_perm,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_instruction_list_repeat1,
    STATE(47), 1,
      sym__instruction,
    STATE(49), 13,
      sym_permutation,
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
  [146] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      sym_instruction_name,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      sym_inst_label,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_height,
    ACTIONS(59), 1,
      anon_sym_const,
    ACTIONS(62), 1,
      anon_sym_call,
    ACTIONS(65), 1,
      anon_sym_icall,
    ACTIONS(68), 1,
      anon_sym_get,
    ACTIONS(71), 1,
      anon_sym_set,
    ACTIONS(74), 1,
      anon_sym_out,
    ACTIONS(77), 1,
      anon_sym_in,
    ACTIONS(80), 1,
      anon_sym_jump,
    ACTIONS(83), 1,
      anon_sym_perm,
    STATE(47), 1,
      sym__instruction,
    STATE(4), 2,
      sym_comment,
      aux_sym_instruction_list_repeat1,
    STATE(49), 13,
      sym_permutation,
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
  [217] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_register,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      sym__literal,
    STATE(80), 1,
      sym__value,
    ACTIONS(94), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(86), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(88), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(90), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [265] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_register,
    STATE(6), 1,
      sym_comment,
    STATE(11), 1,
      sym__literal,
    STATE(74), 1,
      sym__value,
    ACTIONS(100), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(88), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(90), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    ACTIONS(98), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(104), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(102), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(108), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(106), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [373] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(112), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(110), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [403] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(114), 11,
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
  [433] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(120), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(118), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [463] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      anon_sym_branch,
    STATE(12), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(122), 11,
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
  [494] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_branch,
    STATE(13), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(128), 11,
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
  [525] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      aux_sym_number_token3,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_register,
    STATE(6), 1,
      sym__value,
    STATE(11), 1,
      sym__literal,
    STATE(14), 1,
      sym_comment,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(134), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(88), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [565] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(110), 11,
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
  [593] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(136), 11,
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
  [621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(140), 11,
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
  [649] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(144), 11,
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
  [677] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(154), 1,
      aux_sym_number_token3,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_array_repeat1,
    STATE(61), 1,
      sym__literal,
    STATE(62), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(152), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(148), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(102), 11,
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
  [745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(158), 11,
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
  [773] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(162), 11,
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
  [801] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(166), 11,
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
  [829] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(170), 11,
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
  [857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(174), 11,
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
  [885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(178), 11,
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
  [913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(182), 11,
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
  [941] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(186), 11,
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
  [969] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(190), 11,
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
  [997] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      aux_sym_number_token3,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_array_repeat1,
    STATE(61), 1,
      sym__literal,
    STATE(62), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(152), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(148), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1037] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      aux_sym_number_token3,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_register,
    STATE(11), 1,
      sym__literal,
    STATE(31), 1,
      sym_comment,
    STATE(82), 1,
      sym__value,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(134), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(88), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1077] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      aux_sym_number_token3,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_register,
    STATE(5), 1,
      sym__value,
    STATE(11), 1,
      sym__literal,
    STATE(32), 1,
      sym_comment,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(134), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(88), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1117] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(196), 11,
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
  [1145] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(200), 11,
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
  [1173] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(204), 11,
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
  [1201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(208), 11,
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
  [1229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(212), 11,
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
  [1257] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(218), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(216), 11,
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
    ACTIONS(222), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(220), 11,
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
  [1313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(224), 11,
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
  [1341] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(236), 1,
      aux_sym_number_token3,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym__literal,
    STATE(41), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(62), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(233), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(228), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1379] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(242), 11,
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
  [1407] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym_comment,
    STATE(100), 2,
      sym_array,
      sym__literal,
    STATE(103), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(246), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(106), 11,
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
  [1473] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(256), 11,
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
    STATE(46), 1,
      sym_comment,
    ACTIONS(262), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(260), 11,
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
  [1529] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(264), 11,
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
  [1557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(268), 11,
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
  [1585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(272), 11,
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
  [1613] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(276), 11,
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
  [1641] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      aux_sym_number_token3,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_register,
    STATE(11), 1,
      sym__literal,
    STATE(51), 1,
      sym_comment,
    STATE(71), 1,
      sym__value,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(134), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(88), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1681] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_LBRACK,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(280), 11,
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
  [1709] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym__literal,
    STATE(53), 1,
      sym_comment,
    STATE(15), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(284), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1743] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_inst_label,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      anon_sym_JMP,
    ACTIONS(303), 1,
      anon_sym_IN,
    ACTIONS(306), 1,
      anon_sym_OUT,
    STATE(75), 1,
      sym__urcl_instruction,
    STATE(54), 2,
      sym_comment,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(76), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1781] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym__literal,
    STATE(55), 1,
      sym_comment,
    STATE(15), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(284), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1815] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_instruction_name,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      anon_sym_height,
    ACTIONS(315), 1,
      anon_sym_const,
    ACTIONS(317), 1,
      anon_sym_call,
    ACTIONS(319), 1,
      anon_sym_icall,
    ACTIONS(321), 1,
      anon_sym_get,
    ACTIONS(323), 1,
      anon_sym_set,
    ACTIONS(325), 1,
      anon_sym_out,
    ACTIONS(327), 1,
      anon_sym_in,
    ACTIONS(329), 1,
      anon_sym_jump,
    ACTIONS(331), 1,
      anon_sym_perm,
    STATE(56), 1,
      sym_comment,
  [1861] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      sym_inst_label,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_JMP,
    ACTIONS(341), 1,
      anon_sym_IN,
    ACTIONS(343), 1,
      anon_sym_OUT,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(75), 1,
      sym__urcl_instruction,
    STATE(76), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1901] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      sym_inst_label,
    ACTIONS(339), 1,
      anon_sym_JMP,
    ACTIONS(341), 1,
      anon_sym_IN,
    ACTIONS(343), 1,
      anon_sym_OUT,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(75), 1,
      sym__urcl_instruction,
    STATE(76), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1941] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      sym_inst_label,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(93), 1,
      sym_urcl_instruction_list,
    STATE(128), 1,
      sym_permutation,
    STATE(138), 1,
      sym_stack_behaviour,
    STATE(161), 1,
      sym_number,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [1980] = 11,
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
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_source_file_repeat2,
    STATE(79), 1,
      aux_sym_source_file_repeat1,
    STATE(99), 1,
      sym_definition,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      aux_sym_number_token3,
    STATE(61), 1,
      sym_comment,
    ACTIONS(355), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2040] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      aux_sym_number_token3,
    STATE(62), 1,
      sym_comment,
    ACTIONS(112), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2064] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      aux_sym_number_token3,
    STATE(63), 1,
      sym_comment,
    ACTIONS(108), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2088] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      aux_sym_number_token3,
    STATE(64), 1,
      sym_comment,
    ACTIONS(104), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2112] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_PLUS,
    STATE(65), 1,
      sym_comment,
    STATE(132), 1,
      sym_instruction_list,
    STATE(133), 1,
      sym_stack_behaviour,
    STATE(161), 1,
      sym_number,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2145] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2172] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      anon_sym_func,
    ACTIONS(368), 1,
      anon_sym_inst,
    STATE(67), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2197] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    STATE(68), 1,
      sym_comment,
    STATE(129), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2224] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_inst,
  [2243] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    STATE(24), 1,
      sym_stack_behaviour,
    STATE(70), 1,
      sym_comment,
    STATE(174), 1,
      sym_number,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(375), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(373), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(379), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(377), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2307] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(381), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(387), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(385), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(389), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2367] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(395), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(393), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2387] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(397), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2407] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(403), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(401), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2427] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      sym_data_label,
    STATE(99), 1,
      sym_definition,
    STATE(79), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2449] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(410), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2469] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    STATE(40), 1,
      sym_stack_behaviour,
    STATE(81), 1,
      sym_comment,
    STATE(174), 1,
      sym_number,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2493] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(416), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(414), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2513] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(46), 1,
      sym_number,
    STATE(83), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2534] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(39), 1,
      sym_number,
    STATE(84), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2555] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(38), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2576] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_number,
    STATE(86), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2597] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      anon_sym_branch,
    STATE(87), 1,
      sym_comment,
    STATE(118), 1,
      sym_branch_block,
    ACTIONS(418), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2618] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(10), 1,
      sym_number,
    STATE(88), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2639] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    STATE(10), 1,
      sym_number,
    STATE(89), 1,
      sym_comment,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2660] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(25), 1,
      sym_number,
    STATE(90), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2681] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    STATE(91), 1,
      sym_comment,
    STATE(143), 1,
      sym_number,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2702] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      aux_sym_number_token3,
    STATE(26), 1,
      sym_number,
    STATE(92), 1,
      sym_comment,
    ACTIONS(286), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2723] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      anon_sym_branch,
    STATE(93), 1,
      sym_comment,
    STATE(131), 1,
      sym_branch_block,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2744] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    STATE(94), 1,
      sym_comment,
    STATE(149), 1,
      sym_number,
    ACTIONS(250), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(424), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2797] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_JMP,
    ACTIONS(430), 1,
      anon_sym_IN,
    ACTIONS(432), 1,
      anon_sym_OUT,
    STATE(97), 1,
      sym_comment,
  [2819] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(434), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(436), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(438), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(440), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(442), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2899] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2915] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      sym_inst_label,
    STATE(50), 1,
      sym_permutation,
    STATE(104), 1,
      sym_comment,
  [2934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(446), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2964] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
  [2983] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      sym_inst_label,
    STATE(33), 1,
      sym_permutation,
    STATE(108), 1,
      sym_comment,
  [3002] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(109), 2,
      sym_comment,
      aux_sym_permutation_repeat1,
  [3019] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(110), 1,
      sym_comment,
  [3038] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(111), 1,
      sym_comment,
  [3057] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_permutation_repeat1,
  [3076] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(113), 1,
      sym_comment,
  [3095] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_permutation_repeat1,
    STATE(114), 1,
      sym_comment,
  [3114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3144] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(117), 1,
      sym_comment,
  [3163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3178] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(119), 1,
      sym_comment,
  [3197] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_permutation_repeat1,
    STATE(120), 1,
      sym_comment,
  [3216] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(121), 1,
      sym_comment,
  [3235] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_permutation_repeat1,
    STATE(122), 1,
      sym_comment,
  [3254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      sym_comment,
    ACTIONS(481), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    ACTIONS(483), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3314] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_permutation_repeat1,
    STATE(127), 1,
      sym_comment,
  [3333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(491), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(493), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3378] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(495), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(497), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3408] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_PLUS,
    STATE(126), 1,
      sym_instruction_list,
    STATE(133), 1,
      sym_comment,
  [3427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3442] = 4,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(505), 2,
      sym_char,
      sym_char_escape,
  [3456] = 4,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(507), 2,
      sym_char,
      sym_char_escape,
  [3470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(119), 1,
      aux_sym_permutation_repeat1,
    STATE(137), 1,
      sym_comment,
  [3486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_urcl_instruction_list,
    STATE(138), 1,
      sym_comment,
  [3502] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_permutation_repeat1,
    STATE(139), 1,
      sym_comment,
  [3518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_permutation_repeat1,
    STATE(140), 1,
      sym_comment,
  [3534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(509), 2,
      sym_inst_label,
      sym_register,
  [3548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(511), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [3562] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_instruction_list,
    STATE(143), 1,
      sym_comment,
  [3578] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_urcl_instruction_list,
    STATE(144), 1,
      sym_comment,
  [3594] = 4,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(513), 2,
      sym_char,
      sym_char_escape,
  [3608] = 4,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(515), 2,
      sym_char,
      sym_char_escape,
  [3622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(517), 2,
      sym_inst_label,
      sym_register,
  [3636] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(113), 1,
      aux_sym_permutation_repeat1,
    STATE(148), 1,
      sym_comment,
  [3652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_instruction_list,
    STATE(149), 1,
      sym_comment,
  [3668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      sym_port,
    STATE(150), 1,
      sym_comment,
  [3681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      sym_function_name,
    STATE(151), 1,
      sym_comment,
  [3694] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(523), 1,
      sym_inst_label,
    STATE(152), 1,
      sym_comment,
  [3707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      sym_inst_label,
    STATE(153), 1,
      sym_comment,
  [3720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(527), 1,
      sym_function_name,
    STATE(154), 1,
      sym_comment,
  [3733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(155), 1,
      sym_comment,
  [3746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(156), 1,
      sym_comment,
  [3759] = 4,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      aux_sym_comment_token1,
    STATE(157), 1,
      sym_comment,
  [3772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(535), 1,
      sym_port,
    STATE(158), 1,
      sym_comment,
  [3785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_comment,
  [3798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      sym_inst_label,
    STATE(160), 1,
      sym_comment,
  [3811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(539), 1,
      anon_sym_DASH_GT,
    STATE(161), 1,
      sym_comment,
  [3824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      sym_inst_label,
    STATE(162), 1,
      sym_comment,
  [3837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(543), 1,
      anon_sym_DASH_GT,
    STATE(163), 1,
      sym_comment,
  [3850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      sym_port,
    STATE(164), 1,
      sym_comment,
  [3863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(547), 1,
      anon_sym_SLASH,
    STATE(165), 1,
      sym_comment,
  [3876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(549), 1,
      anon_sym_DASH_GT,
    STATE(166), 1,
      sym_comment,
  [3889] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    STATE(167), 1,
      sym_comment,
  [3902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 1,
      sym_register,
    STATE(168), 1,
      sym_comment,
  [3915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      sym_comment,
  [3928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      sym_instruction_name,
    STATE(170), 1,
      sym_comment,
  [3941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      sym_port,
    STATE(171), 1,
      sym_comment,
  [3954] = 4,
    ACTIONS(501), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(561), 1,
      aux_sym_comment_token2,
    STATE(172), 1,
      sym_comment,
  [3967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      anon_sym_SQUOTE,
    STATE(173), 1,
      sym_comment,
  [3980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(565), 1,
      anon_sym_DASH_GT,
    STATE(174), 1,
      sym_comment,
  [3993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(567), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      sym_comment,
  [4006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(569), 1,
      sym_function_name,
    STATE(176), 1,
      sym_comment,
  [4019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      sym_inst_label,
    STATE(177), 1,
      sym_comment,
  [4032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      sym_inst_label,
    STATE(178), 1,
      sym_comment,
  [4045] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_comment,
  [4058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym_comment,
  [4071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      sym_port,
    STATE(181), 1,
      sym_comment,
  [4084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    STATE(182), 1,
      sym_comment,
  [4097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      anon_sym_LBRACK,
    STATE(183), 1,
      sym_comment,
  [4110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      sym_port,
    STATE(184), 1,
      sym_comment,
  [4123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      sym_port,
    STATE(185), 1,
      sym_comment,
  [4136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_DASH_GT,
    STATE(186), 1,
      sym_comment,
  [4149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      anon_sym_DASH_GT,
    STATE(187), 1,
      sym_comment,
  [4162] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      sym_register,
    STATE(188), 1,
      sym_comment,
  [4175] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      sym_inst_label,
    STATE(189), 1,
      sym_comment,
  [4188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      sym_port,
    STATE(190), 1,
      sym_comment,
  [4201] = 1,
    ACTIONS(599), 1,
      ts_builtin_sym_end,
  [4205] = 1,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 217,
  [SMALL_STATE(6)] = 265,
  [SMALL_STATE(7)] = 313,
  [SMALL_STATE(8)] = 343,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 403,
  [SMALL_STATE(11)] = 433,
  [SMALL_STATE(12)] = 463,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 621,
  [SMALL_STATE(18)] = 649,
  [SMALL_STATE(19)] = 677,
  [SMALL_STATE(20)] = 717,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 773,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 829,
  [SMALL_STATE(25)] = 857,
  [SMALL_STATE(26)] = 885,
  [SMALL_STATE(27)] = 913,
  [SMALL_STATE(28)] = 941,
  [SMALL_STATE(29)] = 969,
  [SMALL_STATE(30)] = 997,
  [SMALL_STATE(31)] = 1037,
  [SMALL_STATE(32)] = 1077,
  [SMALL_STATE(33)] = 1117,
  [SMALL_STATE(34)] = 1145,
  [SMALL_STATE(35)] = 1173,
  [SMALL_STATE(36)] = 1201,
  [SMALL_STATE(37)] = 1229,
  [SMALL_STATE(38)] = 1257,
  [SMALL_STATE(39)] = 1285,
  [SMALL_STATE(40)] = 1313,
  [SMALL_STATE(41)] = 1341,
  [SMALL_STATE(42)] = 1379,
  [SMALL_STATE(43)] = 1407,
  [SMALL_STATE(44)] = 1445,
  [SMALL_STATE(45)] = 1473,
  [SMALL_STATE(46)] = 1501,
  [SMALL_STATE(47)] = 1529,
  [SMALL_STATE(48)] = 1557,
  [SMALL_STATE(49)] = 1585,
  [SMALL_STATE(50)] = 1613,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1681,
  [SMALL_STATE(53)] = 1709,
  [SMALL_STATE(54)] = 1743,
  [SMALL_STATE(55)] = 1781,
  [SMALL_STATE(56)] = 1815,
  [SMALL_STATE(57)] = 1861,
  [SMALL_STATE(58)] = 1901,
  [SMALL_STATE(59)] = 1941,
  [SMALL_STATE(60)] = 1980,
  [SMALL_STATE(61)] = 2016,
  [SMALL_STATE(62)] = 2040,
  [SMALL_STATE(63)] = 2064,
  [SMALL_STATE(64)] = 2088,
  [SMALL_STATE(65)] = 2112,
  [SMALL_STATE(66)] = 2145,
  [SMALL_STATE(67)] = 2172,
  [SMALL_STATE(68)] = 2197,
  [SMALL_STATE(69)] = 2224,
  [SMALL_STATE(70)] = 2243,
  [SMALL_STATE(71)] = 2267,
  [SMALL_STATE(72)] = 2287,
  [SMALL_STATE(73)] = 2307,
  [SMALL_STATE(74)] = 2327,
  [SMALL_STATE(75)] = 2347,
  [SMALL_STATE(76)] = 2367,
  [SMALL_STATE(77)] = 2387,
  [SMALL_STATE(78)] = 2407,
  [SMALL_STATE(79)] = 2427,
  [SMALL_STATE(80)] = 2449,
  [SMALL_STATE(81)] = 2469,
  [SMALL_STATE(82)] = 2493,
  [SMALL_STATE(83)] = 2513,
  [SMALL_STATE(84)] = 2534,
  [SMALL_STATE(85)] = 2555,
  [SMALL_STATE(86)] = 2576,
  [SMALL_STATE(87)] = 2597,
  [SMALL_STATE(88)] = 2618,
  [SMALL_STATE(89)] = 2639,
  [SMALL_STATE(90)] = 2660,
  [SMALL_STATE(91)] = 2681,
  [SMALL_STATE(92)] = 2702,
  [SMALL_STATE(93)] = 2723,
  [SMALL_STATE(94)] = 2744,
  [SMALL_STATE(95)] = 2765,
  [SMALL_STATE(96)] = 2781,
  [SMALL_STATE(97)] = 2797,
  [SMALL_STATE(98)] = 2819,
  [SMALL_STATE(99)] = 2835,
  [SMALL_STATE(100)] = 2851,
  [SMALL_STATE(101)] = 2867,
  [SMALL_STATE(102)] = 2883,
  [SMALL_STATE(103)] = 2899,
  [SMALL_STATE(104)] = 2915,
  [SMALL_STATE(105)] = 2934,
  [SMALL_STATE(106)] = 2949,
  [SMALL_STATE(107)] = 2964,
  [SMALL_STATE(108)] = 2983,
  [SMALL_STATE(109)] = 3002,
  [SMALL_STATE(110)] = 3019,
  [SMALL_STATE(111)] = 3038,
  [SMALL_STATE(112)] = 3057,
  [SMALL_STATE(113)] = 3076,
  [SMALL_STATE(114)] = 3095,
  [SMALL_STATE(115)] = 3114,
  [SMALL_STATE(116)] = 3129,
  [SMALL_STATE(117)] = 3144,
  [SMALL_STATE(118)] = 3163,
  [SMALL_STATE(119)] = 3178,
  [SMALL_STATE(120)] = 3197,
  [SMALL_STATE(121)] = 3216,
  [SMALL_STATE(122)] = 3235,
  [SMALL_STATE(123)] = 3254,
  [SMALL_STATE(124)] = 3269,
  [SMALL_STATE(125)] = 3284,
  [SMALL_STATE(126)] = 3299,
  [SMALL_STATE(127)] = 3314,
  [SMALL_STATE(128)] = 3333,
  [SMALL_STATE(129)] = 3348,
  [SMALL_STATE(130)] = 3363,
  [SMALL_STATE(131)] = 3378,
  [SMALL_STATE(132)] = 3393,
  [SMALL_STATE(133)] = 3408,
  [SMALL_STATE(134)] = 3427,
  [SMALL_STATE(135)] = 3442,
  [SMALL_STATE(136)] = 3456,
  [SMALL_STATE(137)] = 3470,
  [SMALL_STATE(138)] = 3486,
  [SMALL_STATE(139)] = 3502,
  [SMALL_STATE(140)] = 3518,
  [SMALL_STATE(141)] = 3534,
  [SMALL_STATE(142)] = 3548,
  [SMALL_STATE(143)] = 3562,
  [SMALL_STATE(144)] = 3578,
  [SMALL_STATE(145)] = 3594,
  [SMALL_STATE(146)] = 3608,
  [SMALL_STATE(147)] = 3622,
  [SMALL_STATE(148)] = 3636,
  [SMALL_STATE(149)] = 3652,
  [SMALL_STATE(150)] = 3668,
  [SMALL_STATE(151)] = 3681,
  [SMALL_STATE(152)] = 3694,
  [SMALL_STATE(153)] = 3707,
  [SMALL_STATE(154)] = 3720,
  [SMALL_STATE(155)] = 3733,
  [SMALL_STATE(156)] = 3746,
  [SMALL_STATE(157)] = 3759,
  [SMALL_STATE(158)] = 3772,
  [SMALL_STATE(159)] = 3785,
  [SMALL_STATE(160)] = 3798,
  [SMALL_STATE(161)] = 3811,
  [SMALL_STATE(162)] = 3824,
  [SMALL_STATE(163)] = 3837,
  [SMALL_STATE(164)] = 3850,
  [SMALL_STATE(165)] = 3863,
  [SMALL_STATE(166)] = 3876,
  [SMALL_STATE(167)] = 3889,
  [SMALL_STATE(168)] = 3902,
  [SMALL_STATE(169)] = 3915,
  [SMALL_STATE(170)] = 3928,
  [SMALL_STATE(171)] = 3941,
  [SMALL_STATE(172)] = 3954,
  [SMALL_STATE(173)] = 3967,
  [SMALL_STATE(174)] = 3980,
  [SMALL_STATE(175)] = 3993,
  [SMALL_STATE(176)] = 4006,
  [SMALL_STATE(177)] = 4019,
  [SMALL_STATE(178)] = 4032,
  [SMALL_STATE(179)] = 4045,
  [SMALL_STATE(180)] = 4058,
  [SMALL_STATE(181)] = 4071,
  [SMALL_STATE(182)] = 4084,
  [SMALL_STATE(183)] = 4097,
  [SMALL_STATE(184)] = 4110,
  [SMALL_STATE(185)] = 4123,
  [SMALL_STATE(186)] = 4136,
  [SMALL_STATE(187)] = 4149,
  [SMALL_STATE(188)] = 4162,
  [SMALL_STATE(189)] = 4175,
  [SMALL_STATE(190)] = 4188,
  [SMALL_STATE(191)] = 4201,
  [SMALL_STATE(192)] = 4205,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(148),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(86),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(55),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(176),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(70),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(90),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(92),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(181),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(190),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(152),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(104),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 23),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 17),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 11),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 8),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 7, .production_id = 26),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 7, .production_id = 26),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 6),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 9),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 9),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 9),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 9),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 9),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 9),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 9),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 9),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 21),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 21),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 9),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 9),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 15),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 15),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 15),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 15),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 15),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 15),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 9),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 9),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 15),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 15),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 15),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 15),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 15),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 15),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 15),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 15),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(135),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 15),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 15),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 15),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 15),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 15),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 15),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 14),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 14),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 9),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 8, .production_id = 26),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 8, .production_id = 26),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(141),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(97),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(178),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(168),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(164),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(151),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(170),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 19),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 19),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 18),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 18),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 19),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 19),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 22),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 22),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 12),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 24),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 24),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 25),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 25),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 24),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 24),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 3, .production_id = 20),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 10),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permutation_repeat1, 2), SHIFT_REPEAT(142),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permutation_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 13),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 16),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 7),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permutation_repeat1, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [555] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
