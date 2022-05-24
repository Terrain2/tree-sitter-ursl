#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 25

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
  sym_register = 39,
  anon_sym_JMP = 40,
  anon_sym_IN = 41,
  anon_sym_OUT = 42,
  sym_source_file = 43,
  sym_comment = 44,
  sym_array = 45,
  sym__literal = 46,
  sym_number = 47,
  sym_char_literal = 48,
  sym_definition = 49,
  sym_stack_behaviour = 50,
  sym_instruction_list = 51,
  sym_func = 52,
  sym_inst = 53,
  sym_branch_block = 54,
  sym__instruction = 55,
  sym_height = 56,
  sym_const = 57,
  sym_call = 58,
  sym_icall = 59,
  sym_get = 60,
  sym_set = 61,
  sym_out = 62,
  sym_in = 63,
  sym_jump = 64,
  sym_branch = 65,
  sym_instruction = 66,
  sym_urcl_instruction_list = 67,
  sym__urcl_instruction = 68,
  sym__value = 69,
  sym_jmp = 70,
  sym_urcl_in = 71,
  sym_urcl_out = 72,
  sym_urcl_instruction = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_source_file_repeat2 = 75,
  aux_sym_array_repeat1 = 76,
  aux_sym_instruction_list_repeat1 = 77,
  aux_sym_urcl_instruction_list_repeat1 = 78,
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
  [sym_get] = "get",
  [sym_set] = "set",
  [sym_out] = "out",
  [sym_in] = "in",
  [sym_jump] = "jump",
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
  [sym_get] = sym_get,
  [sym_set] = sym_set,
  [sym_out] = sym_out,
  [sym_in] = sym_in,
  [sym_jump] = sym_jump,
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
  [21] = {.index = 45, .length = 4},
  [22] = {.index = 49, .length = 4},
  [23] = {.index = 53, .length = 3},
  [24] = {.index = 56, .length = 5},
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
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
  [49] =
    {field_dest, 2},
    {field_label, 0},
    {field_op, 1},
    {field_source, 3},
  [53] =
    {field_dest, 2},
    {field_label, 0},
    {field_source, 3},
  [56] =
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
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'J') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'j') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(84);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'j') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'j') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(162);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(166);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(164);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'g') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_instruction_name);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '0') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_mem);
      if (lookahead == '0') ADVANCE(132);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(163);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_IN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 62},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 62},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 62},
  [107] = {.lex_state = 62},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 79},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 62},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 62},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {(TSStateId)(-1)},
  [151] = {(TSStateId)(-1)},
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
    [sym_register] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(141),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(91),
    [sym_func] = STATE(100),
    [sym_inst] = STATE(100),
    [aux_sym_source_file_repeat1] = STATE(58),
    [aux_sym_source_file_repeat2] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_data_label] = ACTIONS(9),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_inst] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_instruction_list_repeat1,
    STATE(46), 1,
      sym__instruction,
    STATE(41), 11,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_branch,
      sym_instruction,
  [65] = 18,
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
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_instruction_list_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(46), 1,
      sym__instruction,
    STATE(41), 11,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_branch,
      sym_instruction,
  [130] = 17,
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
    STATE(46), 1,
      sym__instruction,
    STATE(4), 2,
      sym_comment,
      aux_sym_instruction_list_repeat1,
    STATE(41), 11,
      sym_height,
      sym_const,
      sym_call,
      sym_icall,
      sym_get,
      sym_set,
      sym_out,
      sym_in,
      sym_jump,
      sym_branch,
      sym_instruction,
  [193] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_register,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      sym__literal,
    STATE(64), 1,
      sym__value,
    ACTIONS(84), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(76), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(78), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(80), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [241] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_register,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      sym__literal,
    STATE(76), 1,
      sym__value,
    ACTIONS(90), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(78), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(80), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    ACTIONS(88), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(94), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(92), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [319] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(98), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(96), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(102), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(100), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [379] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(106), 7,
      sym_function_name,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_inst_label,
      sym_data_label,
      anon_sym_RBRACE,
    ACTIONS(104), 9,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      sym_register,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [409] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      aux_sym_number_token3,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_register,
    STATE(5), 1,
      sym__value,
    STATE(10), 1,
      sym__literal,
    STATE(11), 1,
      sym_comment,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(78), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [449] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      aux_sym_number_token3,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_register,
    STATE(10), 1,
      sym__literal,
    STATE(12), 1,
      sym_comment,
    STATE(71), 1,
      sym__value,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(78), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [489] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      aux_sym_number_token3,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_register,
    STATE(10), 1,
      sym__literal,
    STATE(13), 1,
      sym_comment,
    STATE(73), 1,
      sym__value,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(78), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [529] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(89), 2,
      sym_array,
      sym__literal,
    STATE(92), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(110), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [567] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(126), 1,
      aux_sym_number_token3,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_array_repeat1,
    STATE(55), 1,
      sym__literal,
    STATE(56), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(120), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [607] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(138), 1,
      aux_sym_number_token3,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym__literal,
    STATE(16), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(56), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(135), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(130), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [645] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      aux_sym_number_token3,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_array_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(55), 1,
      sym__literal,
    STATE(56), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(120), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [685] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      aux_sym_number_token3,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_register,
    STATE(6), 1,
      sym__value,
    STATE(10), 1,
      sym__literal,
    STATE(18), 1,
      sym_comment,
    STATE(9), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(78), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [725] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(148), 4,
      sym_inst_label,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
    ACTIONS(146), 10,
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
  [753] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      anon_sym_branch,
    STATE(20), 1,
      sym_comment,
    ACTIONS(152), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(150), 10,
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
  [782] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      anon_sym_branch,
    STATE(21), 1,
      sym_comment,
    ACTIONS(158), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(156), 10,
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
  [811] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_inst_label,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_JMP,
    ACTIONS(173), 1,
      anon_sym_IN,
    ACTIONS(176), 1,
      anon_sym_OUT,
    STATE(65), 1,
      sym__urcl_instruction,
    STATE(22), 2,
      sym_comment,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(66), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(179), 10,
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
  [875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(185), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(183), 10,
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
  [901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(98), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(96), 10,
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
  [927] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(50), 1,
      sym__literal,
    STATE(27), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(187), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [961] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(100), 10,
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
  [987] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(197), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(195), 10,
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
  [1013] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(199), 10,
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
  [1039] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(203), 10,
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
  [1065] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(207), 10,
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
  [1091] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_inst_label,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_JMP,
    ACTIONS(219), 1,
      anon_sym_IN,
    ACTIONS(221), 1,
      anon_sym_OUT,
    STATE(22), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(65), 1,
      sym__urcl_instruction,
    STATE(66), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1131] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(223), 10,
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
  [1157] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(229), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(227), 10,
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
  [1183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(231), 10,
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
  [1209] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(237), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(235), 10,
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
  [1235] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(239), 10,
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
  [1261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(94), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(92), 10,
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
  [1287] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_inst_label,
    ACTIONS(217), 1,
      anon_sym_JMP,
    ACTIONS(219), 1,
      anon_sym_IN,
    ACTIONS(221), 1,
      anon_sym_OUT,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_urcl_instruction_list_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(65), 1,
      sym__urcl_instruction,
    STATE(66), 4,
      sym_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_instruction,
  [1327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(247), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(245), 10,
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
  [1353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(249), 10,
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
  [1379] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(255), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(253), 10,
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
  [1405] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(257), 10,
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
  [1431] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__literal,
    STATE(44), 1,
      sym_comment,
    STATE(27), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(187), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(261), 10,
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
  [1491] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(265), 10,
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
  [1517] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(269), 10,
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
  [1543] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(275), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(273), 10,
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
  [1569] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(279), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(277), 10,
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
  [1595] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(281), 10,
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
  [1621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(285), 10,
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
  [1647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      aux_sym_number_token3,
    STATE(52), 1,
      sym_comment,
    ACTIONS(94), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1671] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      sym_instruction_name,
    ACTIONS(291), 1,
      anon_sym_height,
    ACTIONS(293), 1,
      anon_sym_const,
    ACTIONS(295), 1,
      anon_sym_call,
    ACTIONS(297), 1,
      anon_sym_icall,
    ACTIONS(299), 1,
      anon_sym_get,
    ACTIONS(301), 1,
      anon_sym_set,
    ACTIONS(303), 1,
      anon_sym_out,
    ACTIONS(305), 1,
      anon_sym_in,
    ACTIONS(307), 1,
      anon_sym_jump,
    STATE(53), 1,
      sym_comment,
  [1711] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      aux_sym_number_token3,
    STATE(54), 1,
      sym_comment,
    ACTIONS(98), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      aux_sym_number_token3,
    STATE(55), 1,
      sym_comment,
    ACTIONS(309), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1759] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      aux_sym_number_token3,
    STATE(56), 1,
      sym_comment,
    ACTIONS(102), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1783] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_PLUS,
    STATE(57), 1,
      sym_comment,
    STATE(104), 1,
      sym_stack_behaviour,
    STATE(107), 1,
      sym_instruction_list,
    STATE(127), 1,
      sym_number,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [1816] = 11,
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
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_source_file_repeat2,
    STATE(69), 1,
      aux_sym_source_file_repeat1,
    STATE(91), 1,
      sym_definition,
    STATE(100), 2,
      sym_func,
      sym_inst,
  [1851] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(83), 1,
      sym_urcl_instruction_list,
    STATE(118), 1,
      sym_stack_behaviour,
    STATE(127), 1,
      sym_number,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [1881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_inst,
  [1900] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(323), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(321), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [1920] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    STATE(29), 1,
      sym_stack_behaviour,
    STATE(62), 1,
      sym_comment,
    STATE(146), 1,
      sym_number,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [1944] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 2,
      sym_func,
      sym_inst,
  [1970] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(327), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(325), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [1990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(331), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(329), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2010] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(335), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(333), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2030] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 1,
      anon_sym_func,
    ACTIONS(342), 1,
      anon_sym_inst,
    STATE(67), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    STATE(100), 2,
      sym_func,
      sym_inst,
  [2054] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(13), 1,
      anon_sym_inst,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    STATE(68), 1,
      sym_comment,
    STATE(100), 2,
      sym_func,
      sym_inst,
  [2080] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      sym_data_label,
    STATE(91), 1,
      sym_definition,
    STATE(69), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(347), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(354), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(352), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(356), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(362), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(360), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2162] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(366), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(364), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2182] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    STATE(48), 1,
      sym_stack_behaviour,
    STATE(74), 1,
      sym_comment,
    STATE(146), 1,
      sym_number,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2206] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(370), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(368), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2226] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(374), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(372), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [2246] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(47), 1,
      sym_number,
    STATE(77), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2267] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    STATE(78), 1,
      sym_comment,
    STATE(117), 1,
      sym_number,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2288] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(19), 1,
      sym_number,
    STATE(79), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2309] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(45), 1,
      sym_number,
    STATE(80), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2330] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    STATE(81), 1,
      sym_comment,
    STATE(116), 1,
      sym_number,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2351] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(51), 1,
      sym_number,
    STATE(82), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2372] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_branch,
    STATE(83), 1,
      sym_comment,
    STATE(105), 1,
      sym_branch_block,
    ACTIONS(376), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2393] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(24), 1,
      sym_number,
    STATE(84), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2414] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(30), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2435] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_number_token3,
    STATE(31), 1,
      sym_number,
    STATE(86), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2456] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    STATE(19), 1,
      sym_number,
    STATE(87), 1,
      sym_comment,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2477] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_branch,
    STATE(88), 1,
      sym_comment,
    STATE(102), 1,
      sym_branch_block,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(382), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2514] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(386), 1,
      anon_sym_JMP,
    ACTIONS(388), 1,
      anon_sym_IN,
    ACTIONS(390), 1,
      anon_sym_OUT,
    STATE(90), 1,
      sym_comment,
  [2536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(392), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(394), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(396), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2600] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(398), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2632] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(400), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(402), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(404), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(406), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(408), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(412), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2738] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    STATE(98), 1,
      sym_instruction_list,
    STATE(104), 1,
      sym_comment,
  [2757] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(416), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(418), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2787] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(420), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [2817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(424), 2,
      sym_inst_label,
      sym_register,
  [2831] = 4,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_char,
      sym_char_escape,
  [2845] = 4,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(432), 2,
      sym_char,
      sym_char_escape,
  [2859] = 4,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(434), 2,
      sym_char,
      sym_char_escape,
  [2873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(436), 2,
      sym_inst_label,
      sym_register,
  [2887] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_urcl_instruction_list,
    STATE(114), 1,
      sym_comment,
  [2903] = 4,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(438), 2,
      sym_char,
      sym_char_escape,
  [2917] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_instruction_list,
    STATE(116), 1,
      sym_comment,
  [2933] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_instruction_list,
    STATE(117), 1,
      sym_comment,
  [2949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_urcl_instruction_list,
    STATE(118), 1,
      sym_comment,
  [2965] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      sym_port,
    STATE(119), 1,
      sym_comment,
  [2978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      sym_comment,
  [2991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      sym_function_name,
    STATE(121), 1,
      sym_comment,
  [3004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      sym_inst_label,
    STATE(122), 1,
      sym_comment,
  [3017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      sym_port,
    STATE(123), 1,
      sym_comment,
  [3030] = 4,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
  [3043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(452), 1,
      sym_port,
    STATE(125), 1,
      sym_comment,
  [3056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      sym_inst_label,
    STATE(126), 1,
      sym_comment,
  [3069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(456), 1,
      anon_sym_DASH_GT,
    STATE(127), 1,
      sym_comment,
  [3082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(458), 1,
      sym_port,
    STATE(128), 1,
      sym_comment,
  [3095] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      sym_function_name,
    STATE(129), 1,
      sym_comment,
  [3108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym_comment,
  [3121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(464), 1,
      sym_inst_label,
    STATE(131), 1,
      sym_comment,
  [3134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(466), 1,
      sym_register,
    STATE(132), 1,
      sym_comment,
  [3147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      sym_inst_label,
    STATE(133), 1,
      sym_comment,
  [3160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(470), 1,
      sym_inst_label,
    STATE(134), 1,
      sym_comment,
  [3173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(472), 1,
      sym_inst_label,
    STATE(135), 1,
      sym_comment,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 1,
      sym_port,
    STATE(136), 1,
      sym_comment,
  [3199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(476), 1,
      sym_port,
    STATE(137), 1,
      sym_comment,
  [3212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      sym_port,
    STATE(138), 1,
      sym_comment,
  [3225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(480), 1,
      sym_inst_label,
    STATE(139), 1,
      sym_comment,
  [3238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(482), 1,
      sym_register,
    STATE(140), 1,
      sym_comment,
  [3251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_comment,
  [3264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      sym_instruction_name,
    STATE(142), 1,
      sym_comment,
  [3277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      sym_function_name,
    STATE(143), 1,
      sym_comment,
  [3290] = 4,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      aux_sym_comment_token2,
    STATE(144), 1,
      sym_comment,
  [3303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym_comment,
  [3316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 1,
      anon_sym_DASH_GT,
    STATE(146), 1,
      sym_comment,
  [3329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    STATE(147), 1,
      sym_comment,
  [3342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      sym_comment,
  [3355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(500), 1,
      sym_port,
    STATE(149), 1,
      sym_comment,
  [3368] = 1,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
  [3372] = 1,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 193,
  [SMALL_STATE(6)] = 241,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 449,
  [SMALL_STATE(13)] = 489,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 645,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 725,
  [SMALL_STATE(20)] = 753,
  [SMALL_STATE(21)] = 782,
  [SMALL_STATE(22)] = 811,
  [SMALL_STATE(23)] = 849,
  [SMALL_STATE(24)] = 875,
  [SMALL_STATE(25)] = 901,
  [SMALL_STATE(26)] = 927,
  [SMALL_STATE(27)] = 961,
  [SMALL_STATE(28)] = 987,
  [SMALL_STATE(29)] = 1013,
  [SMALL_STATE(30)] = 1039,
  [SMALL_STATE(31)] = 1065,
  [SMALL_STATE(32)] = 1091,
  [SMALL_STATE(33)] = 1131,
  [SMALL_STATE(34)] = 1157,
  [SMALL_STATE(35)] = 1183,
  [SMALL_STATE(36)] = 1209,
  [SMALL_STATE(37)] = 1235,
  [SMALL_STATE(38)] = 1261,
  [SMALL_STATE(39)] = 1287,
  [SMALL_STATE(40)] = 1327,
  [SMALL_STATE(41)] = 1353,
  [SMALL_STATE(42)] = 1379,
  [SMALL_STATE(43)] = 1405,
  [SMALL_STATE(44)] = 1431,
  [SMALL_STATE(45)] = 1465,
  [SMALL_STATE(46)] = 1491,
  [SMALL_STATE(47)] = 1517,
  [SMALL_STATE(48)] = 1543,
  [SMALL_STATE(49)] = 1569,
  [SMALL_STATE(50)] = 1595,
  [SMALL_STATE(51)] = 1621,
  [SMALL_STATE(52)] = 1647,
  [SMALL_STATE(53)] = 1671,
  [SMALL_STATE(54)] = 1711,
  [SMALL_STATE(55)] = 1735,
  [SMALL_STATE(56)] = 1759,
  [SMALL_STATE(57)] = 1783,
  [SMALL_STATE(58)] = 1816,
  [SMALL_STATE(59)] = 1851,
  [SMALL_STATE(60)] = 1881,
  [SMALL_STATE(61)] = 1900,
  [SMALL_STATE(62)] = 1920,
  [SMALL_STATE(63)] = 1944,
  [SMALL_STATE(64)] = 1970,
  [SMALL_STATE(65)] = 1990,
  [SMALL_STATE(66)] = 2010,
  [SMALL_STATE(67)] = 2030,
  [SMALL_STATE(68)] = 2054,
  [SMALL_STATE(69)] = 2080,
  [SMALL_STATE(70)] = 2102,
  [SMALL_STATE(71)] = 2122,
  [SMALL_STATE(72)] = 2142,
  [SMALL_STATE(73)] = 2162,
  [SMALL_STATE(74)] = 2182,
  [SMALL_STATE(75)] = 2206,
  [SMALL_STATE(76)] = 2226,
  [SMALL_STATE(77)] = 2246,
  [SMALL_STATE(78)] = 2267,
  [SMALL_STATE(79)] = 2288,
  [SMALL_STATE(80)] = 2309,
  [SMALL_STATE(81)] = 2330,
  [SMALL_STATE(82)] = 2351,
  [SMALL_STATE(83)] = 2372,
  [SMALL_STATE(84)] = 2393,
  [SMALL_STATE(85)] = 2414,
  [SMALL_STATE(86)] = 2435,
  [SMALL_STATE(87)] = 2456,
  [SMALL_STATE(88)] = 2477,
  [SMALL_STATE(89)] = 2498,
  [SMALL_STATE(90)] = 2514,
  [SMALL_STATE(91)] = 2536,
  [SMALL_STATE(92)] = 2552,
  [SMALL_STATE(93)] = 2568,
  [SMALL_STATE(94)] = 2584,
  [SMALL_STATE(95)] = 2600,
  [SMALL_STATE(96)] = 2616,
  [SMALL_STATE(97)] = 2632,
  [SMALL_STATE(98)] = 2648,
  [SMALL_STATE(99)] = 2663,
  [SMALL_STATE(100)] = 2678,
  [SMALL_STATE(101)] = 2693,
  [SMALL_STATE(102)] = 2708,
  [SMALL_STATE(103)] = 2723,
  [SMALL_STATE(104)] = 2738,
  [SMALL_STATE(105)] = 2757,
  [SMALL_STATE(106)] = 2772,
  [SMALL_STATE(107)] = 2787,
  [SMALL_STATE(108)] = 2802,
  [SMALL_STATE(109)] = 2817,
  [SMALL_STATE(110)] = 2831,
  [SMALL_STATE(111)] = 2845,
  [SMALL_STATE(112)] = 2859,
  [SMALL_STATE(113)] = 2873,
  [SMALL_STATE(114)] = 2887,
  [SMALL_STATE(115)] = 2903,
  [SMALL_STATE(116)] = 2917,
  [SMALL_STATE(117)] = 2933,
  [SMALL_STATE(118)] = 2949,
  [SMALL_STATE(119)] = 2965,
  [SMALL_STATE(120)] = 2978,
  [SMALL_STATE(121)] = 2991,
  [SMALL_STATE(122)] = 3004,
  [SMALL_STATE(123)] = 3017,
  [SMALL_STATE(124)] = 3030,
  [SMALL_STATE(125)] = 3043,
  [SMALL_STATE(126)] = 3056,
  [SMALL_STATE(127)] = 3069,
  [SMALL_STATE(128)] = 3082,
  [SMALL_STATE(129)] = 3095,
  [SMALL_STATE(130)] = 3108,
  [SMALL_STATE(131)] = 3121,
  [SMALL_STATE(132)] = 3134,
  [SMALL_STATE(133)] = 3147,
  [SMALL_STATE(134)] = 3160,
  [SMALL_STATE(135)] = 3173,
  [SMALL_STATE(136)] = 3186,
  [SMALL_STATE(137)] = 3199,
  [SMALL_STATE(138)] = 3212,
  [SMALL_STATE(139)] = 3225,
  [SMALL_STATE(140)] = 3238,
  [SMALL_STATE(141)] = 3251,
  [SMALL_STATE(142)] = 3264,
  [SMALL_STATE(143)] = 3277,
  [SMALL_STATE(144)] = 3290,
  [SMALL_STATE(145)] = 3303,
  [SMALL_STATE(146)] = 3316,
  [SMALL_STATE(147)] = 3329,
  [SMALL_STATE(148)] = 3342,
  [SMALL_STATE(149)] = 3355,
  [SMALL_STATE(150)] = 3368,
  [SMALL_STATE(151)] = 3372,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(84),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(44),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(121),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(62),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(85),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(86),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(128),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(119),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 2), SHIFT_REPEAT(134),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 3, .production_id = 16),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 3, .production_id = 16),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 22),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(54),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(54),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(112),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 10),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 10),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 7),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 7),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(113),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(90),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(131),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(140),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 2), SHIFT_REPEAT(123),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 8),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 8),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 8),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 8),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 8),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 8),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 8),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 8),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 20),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 20),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 13),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 13),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 14),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 14),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 14),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 14),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 14),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 14),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 14),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_list_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 14),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 14),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 14),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 14),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 14),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 14),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 14),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 14),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 14),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 14),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 2, .production_id = 11),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 2, .production_id = 11),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 4, .production_id = 21),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 4, .production_id = 21),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_list_repeat1, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_instruction, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_instruction, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(143),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(142),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jmp, 3, .production_id = 17),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 3, .production_id = 17),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 18),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 18),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 4, .production_id = 23),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 4, .production_id = 23),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 4, .production_id = 23),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 4, .production_id = 23),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 18),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 18),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 5, .production_id = 24),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 5, .production_id = 24),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction_list, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 15),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 12),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 3, .production_id = 19),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 9),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_list, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [484] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
