#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 26

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
  anon_sym_stack = 34,
  anon_sym_get = 35,
  anon_sym_set = 36,
  anon_sym_out = 37,
  anon_sym_in = 38,
  anon_sym_jump = 39,
  anon_sym_let = 40,
  sym_register = 41,
  anon_sym_JMP = 42,
  anon_sym_IN = 43,
  anon_sym_OUT = 44,
  sym_source_file = 45,
  sym_comment = 46,
  sym_array = 47,
  sym__literal = 48,
  sym_number = 49,
  sym_char_literal = 50,
  sym_definition = 51,
  sym_stack_behaviour = 52,
  sym_instruction_list = 53,
  sym_func = 54,
  sym_inst = 55,
  sym_branch_block = 56,
  sym__instruction = 57,
  sym_height = 58,
  sym_const = 59,
  sym_call = 60,
  sym_icall = 61,
  sym_stack = 62,
  sym_get = 63,
  sym_set = 64,
  sym_out = 65,
  sym_in = 66,
  sym_jump = 67,
  sym_let = 68,
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
  aux_sym_let_repeat1 = 82,
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
  [anon_sym_stack] = "stack",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_out] = "out",
  [anon_sym_in] = "in",
  [anon_sym_jump] = "jump",
  [anon_sym_let] = "let",
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
  [sym_branch_block] = "branch_block",
  [sym__instruction] = "_instruction",
  [sym_height] = "height",
  [sym_const] = "const",
  [sym_call] = "call",
  [sym_icall] = "icall",
  [sym_stack] = "stack",
  [sym_get] = "get",
  [sym_set] = "set",
  [sym_out] = "out",
  [sym_in] = "in",
  [sym_jump] = "jump",
  [sym_let] = "let",
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
  [aux_sym_let_repeat1] = "let_repeat1",
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
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_let] = anon_sym_let,
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
  [sym_branch_block] = sym_branch_block,
  [sym__instruction] = sym__instruction,
  [sym_height] = sym_height,
  [sym_const] = sym_const,
  [sym_call] = sym_call,
  [sym_icall] = sym_icall,
  [sym_stack] = sym_stack,
  [sym_get] = sym_get,
  [sym_set] = sym_set,
  [sym_out] = sym_out,
  [sym_in] = sym_in,
  [sym_jump] = sym_jump,
  [sym_let] = sym_let,
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
  [aux_sym_let_repeat1] = aux_sym_let_repeat1,
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
  [anon_sym_stack] = {
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
  [anon_sym_let] = {
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
  [sym_stack] = {
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
  [sym_let] = {
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
  [aux_sym_let_repeat1] = {
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
  field_returns = 11,
  field_source = 12,
  field_stack = 13,
  field_value = 14,
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
  [field_returns] = "returns",
  [field_source] = "source",
  [field_stack] = "stack",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 4},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 4},
  [16] = {.index = 33, .length = 3},
  [17] = {.index = 36, .length = 2},
  [18] = {.index = 38, .length = 2},
  [19] = {.index = 40, .length = 2},
  [20] = {.index = 42, .length = 3},
  [21] = {.index = 45, .length = 1},
  [22] = {.index = 46, .length = 4},
  [23] = {.index = 50, .length = 4},
  [24] = {.index = 54, .length = 3},
  [25] = {.index = 57, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
    {field_value, 1},
  [2] =
    {field_instructions, 2},
    {field_name, 1},
  [4] =
    {field_value, 1},
  [5] =
    {field_opcode, 0},
  [6] =
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [9] =
    {field_branch, 3},
    {field_instructions, 2},
    {field_name, 1},
  [12] =
    {field_label, 0},
    {field_opcode, 1},
  [14] =
    {field_operand, 1},
  [15] =
    {field_instructions, 4},
    {field_locals, 3},
    {field_name, 1},
  [18] =
    {field_params, 0},
    {field_returns, 2},
  [20] =
    {field_dest, 1},
  [21] =
    {field_branch, 4},
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [25] =
    {field_opcode, 0},
    {field_operand, 2},
  [27] =
    {field_label, 0},
    {field_operand, 2},
  [29] =
    {field_instructions, 5},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [33] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [36] =
    {field_dest, 2},
    {field_label, 0},
  [38] =
    {field_dest, 1},
    {field_source, 2},
  [40] =
    {field_instructions, 2},
    {field_label, 1},
  [42] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [45] =
    {field_label, 0},
  [46] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [50] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [54] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [57] =
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
      if (eof) ADVANCE(69);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'J') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'j') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'J') ADVANCE(70);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'j') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'j') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(179);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(131);
      END_STATE();
    case 61:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(132);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(76);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'g') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'k') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '0') ADVANCE(127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(63);
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
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(81);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_stack);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(178);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_IN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
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
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 68},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 68},
  [75] = {.lex_state = 68},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 68},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 68},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 68},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 68},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 68},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 68},
  [116] = {.lex_state = 68},
  [117] = {.lex_state = 68},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 68},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 68},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 68},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 85},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 8},
  [166] = {(TSStateId)(-1)},
  [167] = {(TSStateId)(-1)},
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
    [anon_sym_stack] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(157),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(104),
    [sym_func] = STATE(116),
    [sym_inst] = STATE(116),
    [aux_sym_source_file_repeat1] = STATE(66),
    [aux_sym_source_file_repeat2] = STATE(84),
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
      anon_sym_stack,
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
      anon_sym_let,
    STATE(2), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_instruction_list_repeat1,
    STATE(54), 1,
      sym__instruction,
    STATE(26), 13,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_stack,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_let,
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
      anon_sym_stack,
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
      anon_sym_let,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_instruction_list_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(54), 1,
      sym__instruction,
    STATE(26), 13,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_stack,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_let,
      sym_branch,
      sym_instruction,
  [146] = 20,
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
      anon_sym_stack,
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
      anon_sym_let,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_instruction_list_repeat1,
    STATE(54), 1,
      sym__instruction,
    STATE(26), 13,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_stack,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_let,
      sym_branch,
      sym_instruction,
  [219] = 20,
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
      anon_sym_stack,
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
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_instruction_list_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(54), 1,
      sym__instruction,
    STATE(26), 13,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_stack,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_let,
      sym_branch,
      sym_instruction,
  [292] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      sym_instruction_name,
    ACTIONS(52), 1,
      sym_inst_label,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_height,
    ACTIONS(60), 1,
      anon_sym_const,
    ACTIONS(63), 1,
      anon_sym_call,
    ACTIONS(66), 1,
      anon_sym_icall,
    ACTIONS(69), 1,
      anon_sym_stack,
    ACTIONS(72), 1,
      anon_sym_get,
    ACTIONS(75), 1,
      anon_sym_set,
    ACTIONS(78), 1,
      anon_sym_out,
    ACTIONS(81), 1,
      anon_sym_in,
    ACTIONS(84), 1,
      anon_sym_jump,
    ACTIONS(87), 1,
      anon_sym_let,
    STATE(54), 1,
      sym__instruction,
    STATE(6), 2,
      sym_comment,
      aux_sym_instruction_list_repeat1,
    STATE(26), 13,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_stack,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_let,
      sym_branch,
      sym_instruction,
  [363] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_register,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      sym__literal,
    STATE(80), 1,
      sym__value,
    ACTIONS(98), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(90), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(92), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(94), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [411] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_register,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      sym__literal,
    STATE(72), 1,
      sym__value,
    ACTIONS(104), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(92), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(94), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [459] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
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
  [489] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
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
  [519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(116), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(114), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [549] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
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
  [579] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(124), 4,
      sym_inst_label,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(122), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [609] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_branch,
    STATE(14), 1,
      sym_comment,
    ACTIONS(128), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(126), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [640] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      anon_sym_branch,
    STATE(15), 1,
      sym_comment,
    ACTIONS(134), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(132), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [671] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_number_token3,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_register,
    STATE(7), 1,
      sym__value,
    STATE(9), 1,
      sym__literal,
    STATE(16), 1,
      sym_comment,
    STATE(12), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(138), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(92), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [711] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(142), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(140), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [739] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(150), 1,
      aux_sym_number_token3,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_array_repeat1,
    STATE(64), 1,
      sym__literal,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(148), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(144), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [779] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(156), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(154), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(160), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(158), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [835] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(164), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(162), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [863] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(166), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(170), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [919] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(176), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(174), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(178), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [975] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(184), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(182), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1003] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      aux_sym_number_token3,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_array_repeat1,
    STATE(64), 1,
      sym__literal,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(148), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(144), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1043] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_number_token3,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_register,
    STATE(9), 1,
      sym__literal,
    STATE(28), 1,
      sym_comment,
    STATE(81), 1,
      sym__value,
    STATE(12), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(138), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(92), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1083] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym_comment,
    STATE(98), 2,
      sym_number,
      sym_char_literal,
    STATE(103), 2,
      sym_array,
      sym__literal,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(188), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1121] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(198), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1149] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(204), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(202), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(208), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(206), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1205] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(212), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(210), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(216), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(214), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(218), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(222), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(228), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(226), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1345] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(238), 1,
      aux_sym_number_token3,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym__literal,
    STATE(38), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(235), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(230), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1383] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_number_token3,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_register,
    STATE(9), 1,
      sym__literal,
    STATE(39), 1,
      sym_comment,
    STATE(69), 1,
      sym__value,
    STATE(12), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(138), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(92), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(120), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(118), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1451] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(244), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1479] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(250), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(248), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1507] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(254), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(252), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(258), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(256), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1563] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_number_token3,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_register,
    STATE(8), 1,
      sym__value,
    STATE(9), 1,
      sym__literal,
    STATE(45), 1,
      sym_comment,
    STATE(12), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(138), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(92), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1603] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(262), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(260), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(116), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(114), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(112), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(110), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1687] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(266), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(264), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1715] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(270), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(268), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(274), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(272), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1771] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(278), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(276), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(282), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(280), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(286), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(284), 12,
      sym_instruction_name,
      anon_sym_height,
      anon_sym_const,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_stack,
      anon_sym_get,
      anon_sym_set,
      anon_sym_out,
      anon_sym_in,
      anon_sym_jump,
      anon_sym_let,
  [1855] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      sym_instruction_name,
    ACTIONS(290), 1,
      anon_sym_height,
    ACTIONS(292), 1,
      anon_sym_const,
    ACTIONS(294), 1,
      anon_sym_call,
    ACTIONS(296), 1,
      anon_sym_icall,
    ACTIONS(298), 1,
      anon_sym_stack,
    ACTIONS(300), 1,
      anon_sym_get,
    ACTIONS(302), 1,
      anon_sym_set,
    ACTIONS(304), 1,
      anon_sym_out,
    ACTIONS(306), 1,
      anon_sym_in,
    ACTIONS(308), 1,
      anon_sym_jump,
    ACTIONS(310), 1,
      anon_sym_let,
    STATE(55), 1,
      sym_comment,
  [1901] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      sym_inst_label,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      anon_sym_JMP,
    ACTIONS(320), 1,
      anon_sym_IN,
    ACTIONS(322), 1,
      anon_sym_OUT,
    STATE(56), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(73), 1,
      sym__urcl_instruction,
    STATE(71), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1941] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym__literal,
    STATE(57), 1,
      sym_comment,
    STATE(40), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(324), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1975] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      sym_inst_label,
    ACTIONS(318), 1,
      anon_sym_JMP,
    ACTIONS(320), 1,
      anon_sym_IN,
    ACTIONS(322), 1,
      anon_sym_OUT,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(73), 1,
      sym__urcl_instruction,
    STATE(71), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2015] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym_inst_label,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      anon_sym_JMP,
    ACTIONS(345), 1,
      anon_sym_IN,
    ACTIONS(348), 1,
      anon_sym_OUT,
    STATE(73), 1,
      sym__urcl_instruction,
    STATE(59), 2,
      sym_comment,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(71), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [2053] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__literal,
    STATE(60), 1,
      sym_comment,
    STATE(40), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(324), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2087] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      aux_sym_number_token3,
    STATE(61), 1,
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
  [2111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      aux_sym_number_token3,
    STATE(62), 1,
      sym_comment,
    ACTIONS(116), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2135] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      aux_sym_number_token3,
    STATE(63), 1,
      sym_comment,
    ACTIONS(120), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 1,
      aux_sym_number_token3,
    STATE(64), 1,
      sym_comment,
    ACTIONS(351), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2183] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_PLUS,
    STATE(65), 1,
      sym_comment,
    STATE(109), 1,
      sym_stack_behaviour,
    STATE(110), 1,
      sym_instruction_list,
    STATE(144), 1,
      sym_number,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2216] = 11,
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
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_source_file_repeat2,
    STATE(77), 1,
      aux_sym_source_file_repeat1,
    STATE(104), 1,
      sym_definition,
    STATE(116), 2,
      sym_func,
      sym_inst,
  [2251] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_comment,
    STATE(90), 1,
      sym_urcl_instruction_list,
    STATE(127), 1,
      sym_stack_behaviour,
    STATE(144), 1,
      sym_number,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_inst,
  [2300] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(365), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(363), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2320] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    STATE(41), 1,
      sym_stack_behaviour,
    STATE(70), 1,
      sym_comment,
    STATE(161), 1,
      sym_number,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(367), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(373), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(371), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2384] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(377), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(375), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2404] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 1,
      anon_sym_func,
    ACTIONS(384), 1,
      anon_sym_inst,
    STATE(74), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(116), 2,
      sym_func,
      sym_inst,
  [2428] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(75), 1,
      sym_comment,
    STATE(116), 2,
      sym_func,
      sym_inst,
  [2454] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(389), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2474] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(395), 1,
      sym_data_label,
    STATE(104), 1,
      sym_definition,
    STATE(77), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2496] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_stack_behaviour,
    STATE(78), 1,
      sym_comment,
    STATE(161), 1,
      sym_number,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2520] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(400), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(398), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2540] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(404), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(402), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(406), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2580] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(410), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2600] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(416), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(414), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2620] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(84), 1,
      sym_comment,
    STATE(116), 2,
      sym_func,
      sym_inst,
  [2646] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    STATE(19), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2667] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    STATE(32), 1,
      sym_number,
    STATE(86), 1,
      sym_comment,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2688] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    STATE(20), 1,
      sym_number,
    STATE(87), 1,
      sym_comment,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2709] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    STATE(13), 1,
      sym_number,
    STATE(88), 1,
      sym_comment,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2730] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    STATE(89), 1,
      sym_comment,
    STATE(118), 1,
      sym_number,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2751] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      anon_sym_branch,
    STATE(90), 1,
      sym_comment,
    STATE(107), 1,
      sym_branch_block,
    ACTIONS(418), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2772] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    STATE(13), 1,
      sym_number,
    STATE(91), 1,
      sym_comment,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2793] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      anon_sym_branch,
    STATE(92), 1,
      sym_comment,
    STATE(113), 1,
      sym_branch_block,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2814] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    STATE(42), 1,
      sym_number,
    STATE(93), 1,
      sym_comment,
    ACTIONS(326), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2835] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    STATE(94), 1,
      sym_comment,
    STATE(123), 1,
      sym_number,
    ACTIONS(192), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2856] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_instruction_list,
    STATE(95), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_let_repeat1,
  [2878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(428), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2894] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 1,
      anon_sym_JMP,
    ACTIONS(434), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_OUT,
    STATE(97), 1,
      sym_comment,
  [2916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(438), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2964] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(440), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(442), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2996] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(444), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(446), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3028] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_instruction_list,
    STATE(105), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_let_repeat1,
  [3050] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    STATE(106), 2,
      sym_comment,
      aux_sym_let_repeat1,
  [3067] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(453), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(455), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3097] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_PLUS,
    STATE(109), 1,
      sym_comment,
    STATE(117), 1,
      sym_instruction_list,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(459), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(463), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3191] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(465), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(467), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_instruction_list,
    STATE(118), 1,
      sym_comment,
  [3252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(471), 2,
      sym_inst_label,
      sym_register,
  [3266] = 4,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(477), 2,
      sym_char,
      sym_char_escape,
  [3280] = 4,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(479), 2,
      sym_char,
      sym_char_escape,
  [3294] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(105), 1,
      aux_sym_let_repeat1,
    STATE(122), 1,
      sym_comment,
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_instruction_list,
    STATE(123), 1,
      sym_comment,
  [3326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_let_repeat1,
    STATE(124), 1,
      sym_comment,
  [3342] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_urcl_instruction_list,
    STATE(125), 1,
      sym_comment,
  [3358] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(481), 2,
      sym_identifier,
      anon_sym_LBRACE,
  [3372] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_urcl_instruction_list,
    STATE(127), 1,
      sym_comment,
  [3388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(483), 2,
      sym_inst_label,
      sym_register,
  [3402] = 4,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(485), 2,
      sym_char,
      sym_char_escape,
  [3416] = 4,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(487), 2,
      sym_char,
      sym_char_escape,
  [3430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(489), 1,
      sym_register,
    STATE(131), 1,
      sym_comment,
  [3443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 1,
      sym_inst_label,
    STATE(132), 1,
      sym_comment,
  [3456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      sym_port,
    STATE(133), 1,
      sym_comment,
  [3469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      sym_function_name,
    STATE(134), 1,
      sym_comment,
  [3482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      sym_port,
    STATE(135), 1,
      sym_comment,
  [3495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(136), 1,
      sym_comment,
  [3508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      sym_port,
    STATE(137), 1,
      sym_comment,
  [3521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(503), 1,
      sym_port,
    STATE(138), 1,
      sym_comment,
  [3534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(505), 1,
      sym_inst_label,
    STATE(139), 1,
      sym_comment,
  [3547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(507), 1,
      sym_inst_label,
    STATE(140), 1,
      sym_comment,
  [3560] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      sym_inst_label,
    STATE(141), 1,
      sym_comment,
  [3573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(511), 1,
      sym_register,
    STATE(142), 1,
      sym_comment,
  [3586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      sym_port,
    STATE(143), 1,
      sym_comment,
  [3599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(515), 1,
      anon_sym_DASH_GT,
    STATE(144), 1,
      sym_comment,
  [3612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      sym_port,
    STATE(145), 1,
      sym_comment,
  [3625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      sym_comment,
  [3638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      sym_port,
    STATE(147), 1,
      sym_comment,
  [3651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(523), 1,
      sym_inst_label,
    STATE(148), 1,
      sym_comment,
  [3664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      sym_port,
    STATE(149), 1,
      sym_comment,
  [3677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(527), 1,
      sym_identifier,
    STATE(150), 1,
      sym_comment,
  [3690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      sym_inst_label,
    STATE(151), 1,
      sym_comment,
  [3703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      sym_inst_label,
    STATE(152), 1,
      sym_comment,
  [3716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_comment,
  [3729] = 4,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(535), 1,
      aux_sym_comment_token1,
    STATE(154), 1,
      sym_comment,
  [3742] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      sym_function_name,
    STATE(155), 1,
      sym_comment,
  [3755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(156), 1,
      sym_comment,
  [3768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_comment,
  [3781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(543), 1,
      sym_instruction_name,
    STATE(158), 1,
      sym_comment,
  [3794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      sym_comment,
  [3807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(547), 1,
      sym_function_name,
    STATE(160), 1,
      sym_comment,
  [3820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(549), 1,
      anon_sym_DASH_GT,
    STATE(161), 1,
      sym_comment,
  [3833] = 4,
    ACTIONS(473), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      aux_sym_comment_token2,
    STATE(162), 1,
      sym_comment,
  [3846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      sym_comment,
  [3859] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
    STATE(164), 1,
      sym_comment,
  [3872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(165), 1,
      sym_comment,
  [3885] = 1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [3889] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 363,
  [SMALL_STATE(8)] = 411,
  [SMALL_STATE(9)] = 459,
  [SMALL_STATE(10)] = 489,
  [SMALL_STATE(11)] = 519,
  [SMALL_STATE(12)] = 549,
  [SMALL_STATE(13)] = 579,
  [SMALL_STATE(14)] = 609,
  [SMALL_STATE(15)] = 640,
  [SMALL_STATE(16)] = 671,
  [SMALL_STATE(17)] = 711,
  [SMALL_STATE(18)] = 739,
  [SMALL_STATE(19)] = 779,
  [SMALL_STATE(20)] = 807,
  [SMALL_STATE(21)] = 835,
  [SMALL_STATE(22)] = 863,
  [SMALL_STATE(23)] = 891,
  [SMALL_STATE(24)] = 919,
  [SMALL_STATE(25)] = 947,
  [SMALL_STATE(26)] = 975,
  [SMALL_STATE(27)] = 1003,
  [SMALL_STATE(28)] = 1043,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1121,
  [SMALL_STATE(31)] = 1149,
  [SMALL_STATE(32)] = 1177,
  [SMALL_STATE(33)] = 1205,
  [SMALL_STATE(34)] = 1233,
  [SMALL_STATE(35)] = 1261,
  [SMALL_STATE(36)] = 1289,
  [SMALL_STATE(37)] = 1317,
  [SMALL_STATE(38)] = 1345,
  [SMALL_STATE(39)] = 1383,
  [SMALL_STATE(40)] = 1423,
  [SMALL_STATE(41)] = 1451,
  [SMALL_STATE(42)] = 1479,
  [SMALL_STATE(43)] = 1507,
  [SMALL_STATE(44)] = 1535,
  [SMALL_STATE(45)] = 1563,
  [SMALL_STATE(46)] = 1603,
  [SMALL_STATE(47)] = 1631,
  [SMALL_STATE(48)] = 1659,
  [SMALL_STATE(49)] = 1687,
  [SMALL_STATE(50)] = 1715,
  [SMALL_STATE(51)] = 1743,
  [SMALL_STATE(52)] = 1771,
  [SMALL_STATE(53)] = 1799,
  [SMALL_STATE(54)] = 1827,
  [SMALL_STATE(55)] = 1855,
  [SMALL_STATE(56)] = 1901,
  [SMALL_STATE(57)] = 1941,
  [SMALL_STATE(58)] = 1975,
  [SMALL_STATE(59)] = 2015,
  [SMALL_STATE(60)] = 2053,
  [SMALL_STATE(61)] = 2087,
  [SMALL_STATE(62)] = 2111,
  [SMALL_STATE(63)] = 2135,
  [SMALL_STATE(64)] = 2159,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2216,
  [SMALL_STATE(67)] = 2251,
  [SMALL_STATE(68)] = 2281,
  [SMALL_STATE(69)] = 2300,
  [SMALL_STATE(70)] = 2320,
  [SMALL_STATE(71)] = 2344,
  [SMALL_STATE(72)] = 2364,
  [SMALL_STATE(73)] = 2384,
  [SMALL_STATE(74)] = 2404,
  [SMALL_STATE(75)] = 2428,
  [SMALL_STATE(76)] = 2454,
  [SMALL_STATE(77)] = 2474,
  [SMALL_STATE(78)] = 2496,
  [SMALL_STATE(79)] = 2520,
  [SMALL_STATE(80)] = 2540,
  [SMALL_STATE(81)] = 2560,
  [SMALL_STATE(82)] = 2580,
  [SMALL_STATE(83)] = 2600,
  [SMALL_STATE(84)] = 2620,
  [SMALL_STATE(85)] = 2646,
  [SMALL_STATE(86)] = 2667,
  [SMALL_STATE(87)] = 2688,
  [SMALL_STATE(88)] = 2709,
  [SMALL_STATE(89)] = 2730,
  [SMALL_STATE(90)] = 2751,
  [SMALL_STATE(91)] = 2772,
  [SMALL_STATE(92)] = 2793,
  [SMALL_STATE(93)] = 2814,
  [SMALL_STATE(94)] = 2835,
  [SMALL_STATE(95)] = 2856,
  [SMALL_STATE(96)] = 2878,
  [SMALL_STATE(97)] = 2894,
  [SMALL_STATE(98)] = 2916,
  [SMALL_STATE(99)] = 2932,
  [SMALL_STATE(100)] = 2948,
  [SMALL_STATE(101)] = 2964,
  [SMALL_STATE(102)] = 2980,
  [SMALL_STATE(103)] = 2996,
  [SMALL_STATE(104)] = 3012,
  [SMALL_STATE(105)] = 3028,
  [SMALL_STATE(106)] = 3050,
  [SMALL_STATE(107)] = 3067,
  [SMALL_STATE(108)] = 3082,
  [SMALL_STATE(109)] = 3097,
  [SMALL_STATE(110)] = 3116,
  [SMALL_STATE(111)] = 3131,
  [SMALL_STATE(112)] = 3146,
  [SMALL_STATE(113)] = 3161,
  [SMALL_STATE(114)] = 3176,
  [SMALL_STATE(115)] = 3191,
  [SMALL_STATE(116)] = 3206,
  [SMALL_STATE(117)] = 3221,
  [SMALL_STATE(118)] = 3236,
  [SMALL_STATE(119)] = 3252,
  [SMALL_STATE(120)] = 3266,
  [SMALL_STATE(121)] = 3280,
  [SMALL_STATE(122)] = 3294,
  [SMALL_STATE(123)] = 3310,
  [SMALL_STATE(124)] = 3326,
  [SMALL_STATE(125)] = 3342,
  [SMALL_STATE(126)] = 3358,
  [SMALL_STATE(127)] = 3372,
  [SMALL_STATE(128)] = 3388,
  [SMALL_STATE(129)] = 3402,
  [SMALL_STATE(130)] = 3416,
  [SMALL_STATE(131)] = 3430,
  [SMALL_STATE(132)] = 3443,
  [SMALL_STATE(133)] = 3456,
  [SMALL_STATE(134)] = 3469,
  [SMALL_STATE(135)] = 3482,
  [SMALL_STATE(136)] = 3495,
  [SMALL_STATE(137)] = 3508,
  [SMALL_STATE(138)] = 3521,
  [SMALL_STATE(139)] = 3534,
  [SMALL_STATE(140)] = 3547,
  [SMALL_STATE(141)] = 3560,
  [SMALL_STATE(142)] = 3573,
  [SMALL_STATE(143)] = 3586,
  [SMALL_STATE(144)] = 3599,
  [SMALL_STATE(145)] = 3612,
  [SMALL_STATE(146)] = 3625,
  [SMALL_STATE(147)] = 3638,
  [SMALL_STATE(148)] = 3651,
  [SMALL_STATE(149)] = 3664,
  [SMALL_STATE(150)] = 3677,
  [SMALL_STATE(151)] = 3690,
  [SMALL_STATE(152)] = 3703,
  [SMALL_STATE(153)] = 3716,
  [SMALL_STATE(154)] = 3729,
  [SMALL_STATE(155)] = 3742,
  [SMALL_STATE(156)] = 3755,
  [SMALL_STATE(157)] = 3768,
  [SMALL_STATE(158)] = 3781,
  [SMALL_STATE(159)] = 3794,
  [SMALL_STATE(160)] = 3807,
  [SMALL_STATE(161)] = 3820,
  [SMALL_STATE(162)] = 3833,
  [SMALL_STATE(163)] = 3846,
  [SMALL_STATE(164)] = 3859,
  [SMALL_STATE(165)] = 3872,
  [SMALL_STATE(166)] = 3885,
  [SMALL_STATE(167)] = 3889,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(85),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(57),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(134),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(70),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(87),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(150),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(136),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(133),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(138),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(139),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(124),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 16),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 16),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 23),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 23),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 10),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 10),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 7),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 20),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 20),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 8),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack, 2, .production_id = 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack, 2, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 8),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 8),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 8),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 8),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 8),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 8),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 13),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 13),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_list, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 14),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 4, .production_id = 21),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 21),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 14),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 14),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_list, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 14),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 14),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 14),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(62),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(121),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 8),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack, 3, .production_id = 14),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack, 3, .production_id = 14),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 8),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 8),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 14),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 8),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 14),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 14),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 14),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 14),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 14),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 14),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 14),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 14),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(119),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(97),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(141),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(142),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(143),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 24),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 24),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 25),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 25),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(160),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(158),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 11),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 11),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 24),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 24),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 22),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 22),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 18),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 18),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 18),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 18),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 17),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 17),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2), SHIFT_REPEAT(126),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 12),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 3, .production_id = 19),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 15),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_repeat1, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [541] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
