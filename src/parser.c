#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 48

enum {
  anon_sym_bits = 1,
  anon_sym_minstack = 2,
  anon_sym_minheap = 3,
  sym_identifier = 4,
  sym_imm_ident = 5,
  sym_index = 6,
  anon_sym_SLASH_SLASH = 7,
  aux_sym_comment_token1 = 8,
  anon_sym_SLASH_STAR = 9,
  aux_sym_comment_token2 = 10,
  anon_sym_SLASH = 11,
  anon_sym_DOLLAR = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  aux_sym_number_token1 = 15,
  aux_sym_number_token2 = 16,
  aux_sym_number_token3 = 17,
  aux_sym_number_token4 = 18,
  anon_sym_SQUOTE = 19,
  sym_char = 20,
  sym_char_escape = 21,
  anon_sym_AT = 22,
  anon_sym_POUND = 23,
  anon_sym_PERCENT = 24,
  anon_sym_COLON = 25,
  sym_end_label = 26,
  anon_sym_DOT = 27,
  anon_sym_DASH_GT = 28,
  anon_sym_func = 29,
  anon_sym_PLUS = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  anon_sym_inst = 33,
  anon_sym_branch = 34,
  anon_sym___binary__ = 35,
  anon_sym_SEMI = 36,
  anon_sym___branching__ = 37,
  anon_sym_height = 38,
  anon_sym_const = 39,
  anon_sym_perm = 40,
  sym_halt = 41,
  anon_sym_in = 42,
  anon_sym_out = 43,
  anon_sym_label = 44,
  anon_sym_jump = 45,
  sym_ret = 46,
  anon_sym_call = 47,
  anon_sym_icall = 48,
  anon_sym_ref = 49,
  anon_sym_get = 50,
  anon_sym_set = 51,
  anon_sym_AMP = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  anon_sym_JMP = 55,
  anon_sym_IN = 56,
  anon_sym_OUT = 57,
  sym_source_file = 58,
  sym__header = 59,
  sym_bits = 60,
  sym_minstack = 61,
  sym_minheap = 62,
  sym_comment = 63,
  sym_function_name = 64,
  sym_array = 65,
  sym__literal = 66,
  sym_number = 67,
  sym_char_literal = 68,
  sym_macro = 69,
  sym_mem = 70,
  sym_port = 71,
  sym_inst_label = 72,
  sym__any_inst_label = 73,
  sym_data_label = 74,
  sym_definition = 75,
  sym_stack_behaviour = 76,
  sym_func = 77,
  sym_inst = 78,
  sym_inst_branch = 79,
  sym_inst_permutation = 80,
  sym_permutation = 81,
  sym_stack_frame = 82,
  sym__instruction = 83,
  sym_urcl_instructions = 84,
  sym_height = 85,
  sym_const = 86,
  sym_perm = 87,
  sym_in = 88,
  sym_out = 89,
  sym_label = 90,
  sym_jump = 91,
  sym_branch = 92,
  sym_call = 93,
  sym_icall = 94,
  sym_ref = 95,
  sym_get = 96,
  sym_set = 97,
  sym_custom_instruction = 98,
  sym_urcl_instruction = 99,
  sym_index_register = 100,
  sym_named_register = 101,
  sym_input_register = 102,
  sym__reg = 103,
  sym__urcl_value = 104,
  sym_urcl_jmp = 105,
  sym_urcl_in = 106,
  sym_urcl_out = 107,
  sym_urcl_generic = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_source_file_repeat2 = 110,
  aux_sym_source_file_repeat3 = 111,
  aux_sym_array_repeat1 = 112,
  aux_sym_func_repeat1 = 113,
  aux_sym_inst_repeat1 = 114,
  aux_sym_inst_repeat2 = 115,
  aux_sym_stack_frame_repeat1 = 116,
  aux_sym_urcl_instructions_repeat1 = 117,
  aux_sym_urcl_instruction_repeat1 = 118,
  aux_sym_urcl_generic_repeat1 = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bits] = "bits",
  [anon_sym_minstack] = "minstack",
  [anon_sym_minheap] = "minheap",
  [sym_identifier] = "identifier",
  [sym_imm_ident] = "imm_ident",
  [sym_index] = "index",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [anon_sym_SQUOTE] = "'",
  [sym_char] = "char",
  [sym_char_escape] = "char_escape",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_PERCENT] = "%",
  [anon_sym_COLON] = ":",
  [sym_end_label] = "end_label",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_func] = "func",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_inst] = "inst",
  [anon_sym_branch] = "branch",
  [anon_sym___binary__] = "__binary__",
  [anon_sym_SEMI] = ";",
  [anon_sym___branching__] = "__branching__",
  [anon_sym_height] = "height",
  [anon_sym_const] = "const",
  [anon_sym_perm] = "perm",
  [sym_halt] = "halt",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_label] = "label",
  [anon_sym_jump] = "jump",
  [sym_ret] = "ret",
  [anon_sym_call] = "call",
  [anon_sym_icall] = "icall",
  [anon_sym_ref] = "ref",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_AMP] = "&",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_JMP] = "JMP",
  [anon_sym_IN] = "IN",
  [anon_sym_OUT] = "OUT",
  [sym_source_file] = "source_file",
  [sym__header] = "_header",
  [sym_bits] = "bits",
  [sym_minstack] = "minstack",
  [sym_minheap] = "minheap",
  [sym_comment] = "comment",
  [sym_function_name] = "function_name",
  [sym_array] = "array",
  [sym__literal] = "_literal",
  [sym_number] = "number",
  [sym_char_literal] = "char_literal",
  [sym_macro] = "macro",
  [sym_mem] = "mem",
  [sym_port] = "port",
  [sym_inst_label] = "inst_label",
  [sym__any_inst_label] = "_any_inst_label",
  [sym_data_label] = "data_label",
  [sym_definition] = "definition",
  [sym_stack_behaviour] = "stack_behaviour",
  [sym_func] = "func",
  [sym_inst] = "inst",
  [sym_inst_branch] = "inst_branch",
  [sym_inst_permutation] = "inst_permutation",
  [sym_permutation] = "permutation",
  [sym_stack_frame] = "stack_frame",
  [sym__instruction] = "_instruction",
  [sym_urcl_instructions] = "urcl_instructions",
  [sym_height] = "height",
  [sym_const] = "const",
  [sym_perm] = "perm",
  [sym_in] = "in",
  [sym_out] = "out",
  [sym_label] = "label",
  [sym_jump] = "jump",
  [sym_branch] = "branch",
  [sym_call] = "call",
  [sym_icall] = "icall",
  [sym_ref] = "ref",
  [sym_get] = "get",
  [sym_set] = "set",
  [sym_custom_instruction] = "custom_instruction",
  [sym_urcl_instruction] = "urcl_instruction",
  [sym_index_register] = "index_register",
  [sym_named_register] = "named_register",
  [sym_input_register] = "input_register",
  [sym__reg] = "_reg",
  [sym__urcl_value] = "_urcl_value",
  [sym_urcl_jmp] = "urcl_jmp",
  [sym_urcl_in] = "urcl_in",
  [sym_urcl_out] = "urcl_out",
  [sym_urcl_generic] = "urcl_generic",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_func_repeat1] = "func_repeat1",
  [aux_sym_inst_repeat1] = "inst_repeat1",
  [aux_sym_inst_repeat2] = "inst_repeat2",
  [aux_sym_stack_frame_repeat1] = "stack_frame_repeat1",
  [aux_sym_urcl_instructions_repeat1] = "urcl_instructions_repeat1",
  [aux_sym_urcl_instruction_repeat1] = "urcl_instruction_repeat1",
  [aux_sym_urcl_generic_repeat1] = "urcl_generic_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_minstack] = anon_sym_minstack,
  [anon_sym_minheap] = anon_sym_minheap,
  [sym_identifier] = sym_identifier,
  [sym_imm_ident] = sym_imm_ident,
  [sym_index] = sym_index,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_char] = sym_char,
  [sym_char_escape] = sym_char_escape,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_end_label] = sym_end_label,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_inst] = anon_sym_inst,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym___binary__] = anon_sym___binary__,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym___branching__] = anon_sym___branching__,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_perm] = anon_sym_perm,
  [sym_halt] = sym_halt,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_jump] = anon_sym_jump,
  [sym_ret] = sym_ret,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_icall] = anon_sym_icall,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_OUT] = anon_sym_OUT,
  [sym_source_file] = sym_source_file,
  [sym__header] = sym__header,
  [sym_bits] = sym_bits,
  [sym_minstack] = sym_minstack,
  [sym_minheap] = sym_minheap,
  [sym_comment] = sym_comment,
  [sym_function_name] = sym_function_name,
  [sym_array] = sym_array,
  [sym__literal] = sym__literal,
  [sym_number] = sym_number,
  [sym_char_literal] = sym_char_literal,
  [sym_macro] = sym_macro,
  [sym_mem] = sym_mem,
  [sym_port] = sym_port,
  [sym_inst_label] = sym_inst_label,
  [sym__any_inst_label] = sym__any_inst_label,
  [sym_data_label] = sym_data_label,
  [sym_definition] = sym_definition,
  [sym_stack_behaviour] = sym_stack_behaviour,
  [sym_func] = sym_func,
  [sym_inst] = sym_inst,
  [sym_inst_branch] = sym_inst_branch,
  [sym_inst_permutation] = sym_inst_permutation,
  [sym_permutation] = sym_permutation,
  [sym_stack_frame] = sym_stack_frame,
  [sym__instruction] = sym__instruction,
  [sym_urcl_instructions] = sym_urcl_instructions,
  [sym_height] = sym_height,
  [sym_const] = sym_const,
  [sym_perm] = sym_perm,
  [sym_in] = sym_in,
  [sym_out] = sym_out,
  [sym_label] = sym_label,
  [sym_jump] = sym_jump,
  [sym_branch] = sym_branch,
  [sym_call] = sym_call,
  [sym_icall] = sym_icall,
  [sym_ref] = sym_ref,
  [sym_get] = sym_get,
  [sym_set] = sym_set,
  [sym_custom_instruction] = sym_custom_instruction,
  [sym_urcl_instruction] = sym_urcl_instruction,
  [sym_index_register] = sym_index_register,
  [sym_named_register] = sym_named_register,
  [sym_input_register] = sym_input_register,
  [sym__reg] = sym__reg,
  [sym__urcl_value] = sym__urcl_value,
  [sym_urcl_jmp] = sym_urcl_jmp,
  [sym_urcl_in] = sym_urcl_in,
  [sym_urcl_out] = sym_urcl_out,
  [sym_urcl_generic] = sym_urcl_generic,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
  [aux_sym_inst_repeat1] = aux_sym_inst_repeat1,
  [aux_sym_inst_repeat2] = aux_sym_inst_repeat2,
  [aux_sym_stack_frame_repeat1] = aux_sym_stack_frame_repeat1,
  [aux_sym_urcl_instructions_repeat1] = aux_sym_urcl_instructions_repeat1,
  [aux_sym_urcl_instruction_repeat1] = aux_sym_urcl_instruction_repeat1,
  [aux_sym_urcl_generic_repeat1] = aux_sym_urcl_generic_repeat1,
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
  [sym_imm_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_end_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym___binary__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___branching__] = {
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
  [anon_sym_perm] = {
    .visible = true,
    .named = false,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [sym_ret] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icall] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
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
  [sym_function_name] = {
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
  [sym__any_inst_label] = {
    .visible = false,
    .named = true,
  },
  [sym_data_label] = {
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
  [sym_inst_branch] = {
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
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_urcl_instructions] = {
    .visible = true,
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
  [sym_perm] = {
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
  [sym_label] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_icall] = {
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
  [sym_custom_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_index_register] = {
    .visible = true,
    .named = true,
  },
  [sym_named_register] = {
    .visible = true,
    .named = true,
  },
  [sym_input_register] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym__urcl_value] = {
    .visible = false,
    .named = true,
  },
  [sym_urcl_jmp] = {
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
  [sym_urcl_generic] = {
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
  [aux_sym_inst_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_urcl_instructions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_urcl_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_urcl_generic_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_addr = 1,
  field_code = 2,
  field_data = 3,
  field_dest = 4,
  field_headers = 5,
  field_index = 6,
  field_input = 7,
  field_instruction = 8,
  field_instructions = 9,
  field_items = 10,
  field_label = 11,
  field_locals = 12,
  field_name = 13,
  field_op = 14,
  field_opcode = 15,
  field_operand = 16,
  field_output = 17,
  field_params = 18,
  field_permutation = 19,
  field_returns = 20,
  field_source = 21,
  field_stack = 22,
  field_value = 23,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_addr] = "addr",
  [field_code] = "code",
  [field_data] = "data",
  [field_dest] = "dest",
  [field_headers] = "headers",
  [field_index] = "index",
  [field_input] = "input",
  [field_instruction] = "instruction",
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
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 1},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 1},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 2},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
  [28] = {.index = 43, .length = 2},
  [29] = {.index = 45, .length = 1},
  [30] = {.index = 46, .length = 1},
  [31] = {.index = 47, .length = 2},
  [32] = {.index = 49, .length = 2},
  [33] = {.index = 51, .length = 2},
  [34] = {.index = 53, .length = 2},
  [35] = {.index = 55, .length = 3},
  [36] = {.index = 58, .length = 3},
  [37] = {.index = 61, .length = 2},
  [38] = {.index = 63, .length = 3},
  [39] = {.index = 66, .length = 1},
  [40] = {.index = 67, .length = 3},
  [41] = {.index = 70, .length = 2},
  [42] = {.index = 72, .length = 4},
  [43] = {.index = 76, .length = 4},
  [44] = {.index = 80, .length = 3},
  [45] = {.index = 83, .length = 3},
  [46] = {.index = 86, .length = 2},
  [47] = {.index = 88, .length = 4},
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
    {field_name, 1},
  [5] =
    {field_label, 0},
    {field_value, 1},
  [7] =
    {field_data, 1},
    {field_headers, 0},
  [9] =
    {field_code, 1},
    {field_headers, 0},
  [11] =
    {field_code, 1},
    {field_data, 0},
  [13] =
    {field_name, 1},
    {field_permutation, 2},
  [15] =
    {field_instructions, 2},
    {field_name, 1},
  [17] =
    {field_input, 0},
  [18] =
    {field_addr, 1},
  [19] =
    {field_code, 2},
    {field_data, 1},
    {field_headers, 0},
  [22] =
    {field_opcode, 0},
  [23] =
    {field_index, 1},
  [24] =
    {field_instructions, 3},
    {field_name, 1},
  [26] =
    {field_output, 0},
  [27] =
    {field_label, 0},
  [28] =
    {field_instruction, 0},
  [29] =
    {field_input, 2, .inherited = true},
    {field_instructions, 3},
    {field_name, 1},
  [32] =
    {field_input, 0, .inherited = true},
    {field_input, 1, .inherited = true},
  [34] =
    {field_items, 1},
  [35] =
    {field_operand, 1},
  [36] =
    {field_params, 0},
    {field_returns, 2},
  [38] =
    {field_name, 1},
    {field_stack, 2},
  [40] =
    {field_instructions, 4},
    {field_name, 1},
    {field_output, 3, .inherited = true},
  [43] =
    {field_output, 0, .inherited = true},
    {field_output, 1, .inherited = true},
  [45] =
    {field_dest, 1},
  [46] =
    {field_instruction, 1, .inherited = true},
  [47] =
    {field_instruction, 0, .inherited = true},
    {field_instruction, 1, .inherited = true},
  [49] =
    {field_instruction, 1},
    {field_label, 0, .inherited = true},
  [51] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [53] =
    {field_input, 0},
    {field_output, 2},
  [55] =
    {field_input, 2, .inherited = true},
    {field_instructions, 4},
    {field_name, 1},
  [58] =
    {field_instructions, 4},
    {field_label, 3},
    {field_name, 1},
  [61] =
    {field_locals, 3},
    {field_name, 1},
  [63] =
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [66] =
    {field_source, 0},
  [67] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2, .inherited = true},
  [70] =
    {field_dest, 1},
    {field_source, 2},
  [72] =
    {field_input, 2, .inherited = true},
    {field_instructions, 5},
    {field_name, 1},
    {field_output, 4, .inherited = true},
  [76] =
    {field_input, 2, .inherited = true},
    {field_instructions, 5},
    {field_label, 4},
    {field_name, 1},
  [80] =
    {field_instructions, 5},
    {field_locals, 3},
    {field_name, 1},
  [83] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [86] =
    {field_source, 0, .inherited = true},
    {field_source, 1, .inherited = true},
  [88] =
    {field_instructions, 6},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
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
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'J') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(16);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'J') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '&') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'j') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(183);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(227);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(225);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 93:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(166);
      END_STATE();
    case 94:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 97:
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '&') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'J') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(16);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '}') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '&') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_minstack);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_minheap);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_imm_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '0') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(172);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '$') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_end_label);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym___binary__);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym___branching__);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ret);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 98},
  [66] = {.lex_state = 98},
  [67] = {.lex_state = 98},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 98},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 98},
  [75] = {.lex_state = 98},
  [76] = {.lex_state = 98},
  [77] = {.lex_state = 98},
  [78] = {.lex_state = 98},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 98},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 98},
  [90] = {.lex_state = 98},
  [91] = {.lex_state = 98},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 98},
  [95] = {.lex_state = 98},
  [96] = {.lex_state = 98},
  [97] = {.lex_state = 98},
  [98] = {.lex_state = 98},
  [99] = {.lex_state = 98},
  [100] = {.lex_state = 98},
  [101] = {.lex_state = 98},
  [102] = {.lex_state = 98},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 98},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 98},
  [118] = {.lex_state = 98},
  [119] = {.lex_state = 98},
  [120] = {.lex_state = 98},
  [121] = {.lex_state = 98},
  [122] = {.lex_state = 98},
  [123] = {.lex_state = 98},
  [124] = {.lex_state = 98},
  [125] = {.lex_state = 98},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 98},
  [128] = {.lex_state = 98},
  [129] = {.lex_state = 98},
  [130] = {.lex_state = 98},
  [131] = {.lex_state = 98},
  [132] = {.lex_state = 98},
  [133] = {.lex_state = 98},
  [134] = {.lex_state = 98},
  [135] = {.lex_state = 98},
  [136] = {.lex_state = 98},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 98},
  [139] = {.lex_state = 98},
  [140] = {.lex_state = 98},
  [141] = {.lex_state = 98},
  [142] = {.lex_state = 98},
  [143] = {.lex_state = 98},
  [144] = {.lex_state = 98},
  [145] = {.lex_state = 98},
  [146] = {.lex_state = 98},
  [147] = {.lex_state = 98},
  [148] = {.lex_state = 98},
  [149] = {.lex_state = 98},
  [150] = {.lex_state = 98},
  [151] = {.lex_state = 98},
  [152] = {.lex_state = 98},
  [153] = {.lex_state = 98},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 98},
  [156] = {.lex_state = 98},
  [157] = {.lex_state = 98},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
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
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 156},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {(TSStateId)(-1)},
  [220] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_minstack] = ACTIONS(1),
    [anon_sym_minheap] = ACTIONS(1),
    [sym_index] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_char_escape] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_end_label] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_inst] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym___binary__] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym___branching__] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_perm] = ACTIONS(1),
    [sym_halt] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [sym_ret] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_icall] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(197),
    [sym__header] = STATE(97),
    [sym_bits] = STATE(99),
    [sym_minstack] = STATE(99),
    [sym_minheap] = STATE(99),
    [sym_comment] = STATE(1),
    [sym_data_label] = STATE(27),
    [sym_definition] = STATE(132),
    [sym_func] = STATE(142),
    [sym_inst] = STATE(142),
    [sym_inst_branch] = STATE(142),
    [sym_inst_permutation] = STATE(142),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(76),
    [aux_sym_source_file_repeat3] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_bits] = ACTIONS(9),
    [anon_sym_minstack] = ACTIONS(11),
    [anon_sym_minheap] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_inst] = ACTIONS(19),
    [anon_sym_branch] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_branch,
    ACTIONS(31), 1,
      anon_sym_height,
    ACTIONS(34), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_perm,
    ACTIONS(43), 1,
      anon_sym_in,
    ACTIONS(46), 1,
      anon_sym_out,
    ACTIONS(49), 1,
      anon_sym_label,
    ACTIONS(52), 1,
      anon_sym_jump,
    ACTIONS(55), 1,
      anon_sym_call,
    ACTIONS(58), 1,
      anon_sym_icall,
    ACTIONS(61), 1,
      anon_sym_ref,
    ACTIONS(64), 1,
      anon_sym_get,
    ACTIONS(67), 1,
      anon_sym_set,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(40), 2,
      sym_halt,
      sym_ret,
    STATE(2), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [79] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [160] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_func_repeat1,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [241] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_func_repeat1,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [322] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [403] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_func_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [484] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [565] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [646] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_branch,
    ACTIONS(76), 1,
      anon_sym_height,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(80), 1,
      anon_sym_perm,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(92), 1,
      anon_sym_call,
    ACTIONS(94), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ref,
    ACTIONS(98), 1,
      anon_sym_get,
    ACTIONS(100), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(63), 1,
      sym__instruction,
    ACTIONS(82), 2,
      sym_halt,
      sym_ret,
    STATE(64), 14,
      sym_height,
      sym_const,
      sym_perm,
      sym_in,
      sym_out,
      sym_label,
      sym_jump,
      sym_branch,
      sym_call,
      sym_icall,
      sym_ref,
      sym_get,
      sym_set,
      sym_custom_instruction,
  [727] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      aux_sym_number_token3,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(141), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_LT,
    STATE(28), 1,
      sym__urcl_value,
    ACTIONS(136), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_comment,
      aux_sym_urcl_generic_repeat1,
    STATE(51), 2,
      sym__literal,
      sym__reg,
    ACTIONS(121), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
    ACTIONS(116), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(58), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [797] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      aux_sym_number_token3,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(11), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(28), 1,
      sym__urcl_value,
    ACTIONS(161), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym__literal,
      sym__reg,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
    ACTIONS(147), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(58), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [869] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(171), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
    ACTIONS(169), 17,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [911] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      aux_sym_number_token3,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(28), 1,
      sym__urcl_value,
    STATE(51), 2,
      sym__literal,
      sym__reg,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
    STATE(58), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [973] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      aux_sym_number_token3,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    STATE(15), 1,
      sym_comment,
    STATE(108), 1,
      sym__urcl_value,
    STATE(51), 2,
      sym__literal,
      sym__reg,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
    STATE(58), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1032] = 19,
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
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_comment,
    STATE(27), 1,
      sym_data_label,
    STATE(77), 1,
      aux_sym_source_file_repeat1,
    STATE(78), 1,
      aux_sym_source_file_repeat2,
    STATE(89), 1,
      aux_sym_source_file_repeat3,
    STATE(97), 1,
      sym__header,
    STATE(132), 1,
      sym_definition,
    STATE(99), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [1095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(175), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(177), 15,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_PERCENT,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1129] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(179), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(181), 15,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_PERCENT,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(185), 15,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_PERCENT,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1197] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(187), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(189), 15,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_PERCENT,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_comment,
    ACTIONS(191), 19,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_inst,
      anon_sym_branch,
  [1265] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(195), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1298] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(207), 1,
      aux_sym_number_token3,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_AT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(84), 1,
      sym__literal,
    STATE(23), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(204), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1346] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(234), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(84), 1,
      sym__literal,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(236), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(238), 13,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1428] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_array_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(84), 1,
      sym__literal,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1478] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(234), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(122), 2,
      sym_array,
      sym__literal,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1526] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(244), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(246), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(248), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1588] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(236), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1619] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(252), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(254), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1650] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(256), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(258), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1681] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(260), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1712] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(264), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(266), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [1743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(268), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1774] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(272), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1805] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(276), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(280), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1867] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(264), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1898] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(284), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1929] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(288), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1960] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(292), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [1991] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(296), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2022] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(300), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(304), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(308), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2115] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(312), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(316), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(320), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(252), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2239] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(324), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(326), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [2270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(328), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(330), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [2301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(328), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(332), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2363] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(336), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2394] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(340), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2425] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      sym_comment,
    ACTIONS(332), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(334), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [2456] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(336), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(338), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [2487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(193), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(344), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2549] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(340), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(342), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [2580] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(193), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(191), 12,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [2611] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(348), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2642] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_comment,
    ACTIONS(352), 16,
      sym_identifier,
      anon_sym_branch,
      anon_sym_height,
      anon_sym_const,
      anon_sym_perm,
      sym_halt,
      anon_sym_in,
      anon_sym_out,
      anon_sym_label,
      anon_sym_jump,
      sym_ret,
      anon_sym_call,
      anon_sym_icall,
      anon_sym_ref,
      anon_sym_get,
      anon_sym_set,
  [2673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(332), 1,
      aux_sym_number_token3,
    STATE(65), 1,
      sym_comment,
    ACTIONS(334), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_inst,
      anon_sym_branch,
  [2703] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(29), 1,
      sym__literal,
    STATE(66), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(55), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2747] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      aux_sym_number_token3,
    STATE(67), 1,
      sym_comment,
    ACTIONS(342), 14,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2776] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_JMP,
    ACTIONS(378), 1,
      anon_sym_IN,
    ACTIONS(380), 1,
      anon_sym_OUT,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_urcl_instructions_repeat1,
    STATE(79), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(109), 1,
      sym_urcl_instruction,
    STATE(126), 1,
      sym_inst_label,
    STATE(110), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2822] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      aux_sym_number_token3,
    STATE(69), 1,
      sym_comment,
    ACTIONS(330), 13,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2850] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      aux_sym_number_token3,
    STATE(70), 1,
      sym_comment,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [2878] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_JMP,
    ACTIONS(378), 1,
      anon_sym_IN,
    ACTIONS(380), 1,
      anon_sym_OUT,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_urcl_instructions_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(109), 1,
      sym_urcl_instruction,
    STATE(126), 1,
      sym_inst_label,
    STATE(110), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2924] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_JMP,
    ACTIONS(395), 1,
      anon_sym_IN,
    ACTIONS(398), 1,
      anon_sym_OUT,
    STATE(79), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(109), 1,
      sym_urcl_instruction,
    STATE(126), 1,
      sym_inst_label,
    STATE(72), 2,
      sym_comment,
      aux_sym_urcl_instructions_repeat1,
    STATE(110), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2968] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_DASH_GT,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_inst_repeat1,
    STATE(116), 1,
      sym__reg,
    STATE(147), 1,
      sym_permutation,
    STATE(157), 1,
      sym_urcl_instructions,
    STATE(208), 1,
      sym_stack_frame,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(264), 1,
      aux_sym_number_token3,
    STATE(74), 1,
      sym_comment,
    ACTIONS(266), 13,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3044] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      aux_sym_number_token3,
    STATE(75), 1,
      sym_comment,
    ACTIONS(338), 13,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3072] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_data_label,
    STATE(76), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_source_file_repeat3,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
    STATE(132), 1,
      sym_definition,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3115] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(413), 1,
      anon_sym_bits,
    ACTIONS(416), 1,
      anon_sym_minstack,
    ACTIONS(419), 1,
      anon_sym_minheap,
    STATE(97), 1,
      sym__header,
    STATE(77), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(99), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(411), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3150] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_data_label,
    STATE(78), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_source_file_repeat3,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
    STATE(132), 1,
      sym_definition,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3193] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_JMP,
    ACTIONS(378), 1,
      anon_sym_IN,
    ACTIONS(380), 1,
      anon_sym_OUT,
    STATE(79), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(106), 1,
      sym_urcl_in,
    STATE(111), 1,
      sym_urcl_generic,
    STATE(114), 1,
      sym_urcl_jmp,
    STATE(115), 1,
      sym_urcl_out,
    STATE(126), 1,
      sym_inst_label,
  [3236] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      sym_end_label,
    STATE(32), 1,
      sym_inst_label,
    STATE(80), 1,
      sym_comment,
    STATE(14), 2,
      sym__any_inst_label,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3273] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      anon_sym_DASH_GT,
    STATE(81), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_inst_repeat1,
    STATE(116), 1,
      sym__reg,
    STATE(138), 1,
      sym_urcl_instructions,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3312] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_inst_repeat2,
    STATE(154), 1,
      sym__reg,
    STATE(155), 1,
      sym_urcl_instructions,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3348] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_inst_repeat2,
    STATE(143), 1,
      sym_urcl_instructions,
    STATE(154), 1,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3384] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(432), 1,
      aux_sym_number_token3,
    STATE(84), 1,
      sym_comment,
    ACTIONS(430), 9,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
  [3408] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(439), 1,
      anon_sym_AMP,
    ACTIONS(442), 1,
      anon_sym_LT,
    STATE(116), 1,
      sym__reg,
    ACTIONS(437), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    STATE(85), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3440] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_inst_repeat2,
    STATE(153), 1,
      sym_urcl_instructions,
    STATE(154), 1,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3476] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_inst_repeat2,
    STATE(144), 1,
      sym_urcl_instructions,
    STATE(154), 1,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3512] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(453), 1,
      anon_sym_LT,
    STATE(154), 1,
      sym__reg,
    STATE(88), 2,
      sym_comment,
      aux_sym_inst_repeat2,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3543] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3574] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3605] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 1,
      anon_sym_func,
    ACTIONS(465), 1,
      anon_sym_inst,
    ACTIONS(468), 1,
      anon_sym_branch,
    STATE(91), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3634] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      anon_sym_DASH_GT,
    STATE(92), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_inst_repeat1,
    STATE(116), 1,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3667] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(473), 1,
      anon_sym_DASH_GT,
    STATE(85), 1,
      aux_sym_inst_repeat1,
    STATE(93), 1,
      sym_comment,
    STATE(116), 1,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3700] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(94), 1,
      sym_comment,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3731] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(21), 1,
      anon_sym_branch,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      aux_sym_source_file_repeat3,
    STATE(95), 1,
      sym_comment,
    STATE(142), 4,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
  [3762] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_data_label,
    STATE(132), 1,
      sym_definition,
    STATE(96), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(479), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(484), 8,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3808] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(486), 8,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(488), 8,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3868] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    ACTIONS(492), 1,
      anon_sym_PLUS,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(184), 1,
      sym_stack_behaviour,
    STATE(190), 1,
      sym_number,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(496), 8,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3918] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(500), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_inst_label,
    STATE(103), 2,
      sym_comment,
      aux_sym_urcl_instruction_repeat1,
    ACTIONS(498), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3941] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_comment,
    STATE(178), 1,
      sym__reg,
    STATE(20), 3,
      sym_index_register,
      sym_named_register,
      sym_input_register,
  [3968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(503), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(507), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4008] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(169), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4028] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(511), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4048] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(515), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(519), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4088] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(507), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4108] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(38), 1,
      sym_stack_behaviour,
    STATE(112), 1,
      sym_comment,
    STATE(207), 1,
      sym_number,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(523), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4152] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(507), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4172] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(507), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(527), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [4209] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(117), 1,
      sym_comment,
    STATE(196), 1,
      sym_number,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4230] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4247] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(119), 1,
      sym_comment,
    STATE(218), 1,
      sym_number,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4268] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(22), 1,
      sym_number,
    STATE(120), 1,
      sym_comment,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4289] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(33), 1,
      sym_number,
    STATE(121), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(529), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4327] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(36), 1,
      sym_number,
    STATE(123), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4348] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(22), 1,
      sym_number,
    STATE(124), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4369] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_number,
    STATE(125), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4390] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_comment,
    ACTIONS(531), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(535), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4426] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(102), 1,
      sym_number,
    STATE(128), 1,
      sym_comment,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4447] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(100), 1,
      sym_number,
    STATE(129), 1,
      sym_comment,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4468] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_number_token3,
    STATE(98), 1,
      sym_number,
    STATE(130), 1,
      sym_comment,
    ACTIONS(226), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(537), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4523] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(539), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4540] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(48), 1,
      sym_number,
    STATE(134), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(541), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(543), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4593] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      sym_end_label,
    STATE(32), 1,
      sym_inst_label,
    STATE(105), 1,
      sym__any_inst_label,
    STATE(137), 1,
      sym_comment,
  [4615] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(545), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4631] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(547), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(551), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(553), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(555), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(557), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(346), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(559), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4775] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(563), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_comment,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(567), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4839] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(571), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(153), 1,
      sym_comment,
    ACTIONS(573), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(575), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [4887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(577), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4903] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_comment,
    ACTIONS(579), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(581), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [4935] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_permutation,
    STATE(158), 1,
      sym_comment,
    STATE(195), 1,
      sym_stack_frame,
  [4954] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_stack_frame_repeat1,
  [4973] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_stack_frame_repeat1,
    STATE(160), 1,
      sym_comment,
  [4992] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      sym_identifier,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(161), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [5009] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_stack_frame_repeat1,
  [5028] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_stack_frame_repeat1,
    STATE(163), 1,
      sym_comment,
  [5047] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      sym_comment,
    ACTIONS(598), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [5061] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(604), 2,
      sym_char,
      sym_char_escape,
  [5075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(606), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym_inst_label,
    STATE(166), 1,
      sym_comment,
  [5091] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_urcl_instructions,
    STATE(167), 1,
      sym_comment,
  [5107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_PERCENT,
    STATE(44), 1,
      sym_port,
    STATE(168), 1,
      sym_comment,
  [5123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_PERCENT,
    STATE(45), 1,
      sym_port,
    STATE(169), 1,
      sym_comment,
  [5139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(606), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_inst_label,
    STATE(170), 1,
      sym_comment,
  [5155] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(610), 1,
      sym_imm_ident,
    ACTIONS(612), 1,
      sym_index,
    STATE(171), 1,
      sym_comment,
  [5171] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    STATE(172), 1,
      sym_comment,
    ACTIONS(614), 2,
      sym_char,
      sym_char_escape,
  [5185] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    STATE(173), 1,
      sym_comment,
    ACTIONS(616), 2,
      sym_char,
      sym_char_escape,
  [5199] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comment,
    STATE(179), 1,
      sym_inst_label,
  [5215] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(618), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_stack_frame,
    STATE(175), 1,
      sym_comment,
  [5231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_function_name,
    STATE(176), 1,
      sym_comment,
  [5247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_PERCENT,
    STATE(15), 1,
      sym_port,
    STATE(177), 1,
      sym_comment,
  [5263] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      anon_sym_PERCENT,
    STATE(113), 1,
      sym_port,
    STATE(178), 1,
      sym_comment,
  [5279] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_urcl_instructions,
    STATE(179), 1,
      sym_comment,
  [5295] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_function_name,
    STATE(180), 1,
      sym_comment,
  [5311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(145), 1,
      sym_stack_frame,
    STATE(181), 1,
      sym_comment,
  [5327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_inst_label,
    STATE(182), 1,
      sym_comment,
  [5343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(606), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_inst_label,
    STATE(183), 1,
      sym_comment,
  [5359] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(622), 1,
      anon_sym_PLUS,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_comment,
  [5375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(626), 1,
      sym_imm_ident,
    STATE(185), 1,
      sym_comment,
  [5388] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(628), 1,
      aux_sym_comment_token2,
    STATE(186), 1,
      sym_comment,
  [5401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(630), 1,
      sym_imm_ident,
    STATE(187), 1,
      sym_comment,
  [5414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(632), 1,
      anon_sym_GT,
    STATE(188), 1,
      sym_comment,
  [5427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(612), 1,
      sym_index,
    STATE(189), 1,
      sym_comment,
  [5440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
    STATE(190), 1,
      sym_comment,
  [5453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym_comment,
  [5466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(638), 1,
      sym_index,
    STATE(192), 1,
      sym_comment,
  [5479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      sym_imm_ident,
    STATE(193), 1,
      sym_comment,
  [5492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    STATE(194), 1,
      sym_comment,
  [5505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(644), 1,
      anon_sym_DASH_GT,
    STATE(195), 1,
      sym_comment,
  [5518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_comment,
  [5531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_comment,
  [5544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(198), 1,
      sym_comment,
  [5557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(199), 1,
      sym_comment,
  [5570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(654), 1,
      sym_imm_ident,
    STATE(200), 1,
      sym_comment,
  [5583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(656), 1,
      sym_imm_ident,
    STATE(201), 1,
      sym_comment,
  [5596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(658), 1,
      sym_imm_ident,
    STATE(202), 1,
      sym_comment,
  [5609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(660), 1,
      sym_imm_ident,
    STATE(203), 1,
      sym_comment,
  [5622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(662), 1,
      sym_imm_ident,
    STATE(204), 1,
      sym_comment,
  [5635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(664), 1,
      sym_imm_ident,
    STATE(205), 1,
      sym_comment,
  [5648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(666), 1,
      sym_index,
    STATE(206), 1,
      sym_comment,
  [5661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(668), 1,
      anon_sym_DASH_GT,
    STATE(207), 1,
      sym_comment,
  [5674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(670), 1,
      anon_sym_DASH_GT,
    STATE(208), 1,
      sym_comment,
  [5687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
      sym_comment,
  [5700] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(674), 1,
      aux_sym_comment_token1,
    STATE(210), 1,
      sym_comment,
  [5713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      sym_imm_ident,
    STATE(211), 1,
      sym_comment,
  [5726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(678), 1,
      sym_imm_ident,
    STATE(212), 1,
      sym_comment,
  [5739] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(680), 1,
      sym_imm_ident,
    STATE(213), 1,
      sym_comment,
  [5752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(682), 1,
      sym_imm_ident,
    STATE(214), 1,
      sym_comment,
  [5765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(684), 1,
      sym_imm_ident,
    STATE(215), 1,
      sym_comment,
  [5778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(686), 1,
      sym_index,
    STATE(216), 1,
      sym_comment,
  [5791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(688), 1,
      anon_sym_SQUOTE,
    STATE(217), 1,
      sym_comment,
  [5804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym_comment,
  [5817] = 1,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
  [5821] = 1,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 241,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 646,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 797,
  [SMALL_STATE(13)] = 869,
  [SMALL_STATE(14)] = 911,
  [SMALL_STATE(15)] = 973,
  [SMALL_STATE(16)] = 1032,
  [SMALL_STATE(17)] = 1095,
  [SMALL_STATE(18)] = 1129,
  [SMALL_STATE(19)] = 1163,
  [SMALL_STATE(20)] = 1197,
  [SMALL_STATE(21)] = 1231,
  [SMALL_STATE(22)] = 1265,
  [SMALL_STATE(23)] = 1298,
  [SMALL_STATE(24)] = 1346,
  [SMALL_STATE(25)] = 1396,
  [SMALL_STATE(26)] = 1428,
  [SMALL_STATE(27)] = 1478,
  [SMALL_STATE(28)] = 1526,
  [SMALL_STATE(29)] = 1557,
  [SMALL_STATE(30)] = 1588,
  [SMALL_STATE(31)] = 1619,
  [SMALL_STATE(32)] = 1650,
  [SMALL_STATE(33)] = 1681,
  [SMALL_STATE(34)] = 1712,
  [SMALL_STATE(35)] = 1743,
  [SMALL_STATE(36)] = 1774,
  [SMALL_STATE(37)] = 1805,
  [SMALL_STATE(38)] = 1836,
  [SMALL_STATE(39)] = 1867,
  [SMALL_STATE(40)] = 1898,
  [SMALL_STATE(41)] = 1929,
  [SMALL_STATE(42)] = 1960,
  [SMALL_STATE(43)] = 1991,
  [SMALL_STATE(44)] = 2022,
  [SMALL_STATE(45)] = 2053,
  [SMALL_STATE(46)] = 2084,
  [SMALL_STATE(47)] = 2115,
  [SMALL_STATE(48)] = 2146,
  [SMALL_STATE(49)] = 2177,
  [SMALL_STATE(50)] = 2208,
  [SMALL_STATE(51)] = 2239,
  [SMALL_STATE(52)] = 2270,
  [SMALL_STATE(53)] = 2301,
  [SMALL_STATE(54)] = 2332,
  [SMALL_STATE(55)] = 2363,
  [SMALL_STATE(56)] = 2394,
  [SMALL_STATE(57)] = 2425,
  [SMALL_STATE(58)] = 2456,
  [SMALL_STATE(59)] = 2487,
  [SMALL_STATE(60)] = 2518,
  [SMALL_STATE(61)] = 2549,
  [SMALL_STATE(62)] = 2580,
  [SMALL_STATE(63)] = 2611,
  [SMALL_STATE(64)] = 2642,
  [SMALL_STATE(65)] = 2673,
  [SMALL_STATE(66)] = 2703,
  [SMALL_STATE(67)] = 2747,
  [SMALL_STATE(68)] = 2776,
  [SMALL_STATE(69)] = 2822,
  [SMALL_STATE(70)] = 2850,
  [SMALL_STATE(71)] = 2878,
  [SMALL_STATE(72)] = 2924,
  [SMALL_STATE(73)] = 2968,
  [SMALL_STATE(74)] = 3016,
  [SMALL_STATE(75)] = 3044,
  [SMALL_STATE(76)] = 3072,
  [SMALL_STATE(77)] = 3115,
  [SMALL_STATE(78)] = 3150,
  [SMALL_STATE(79)] = 3193,
  [SMALL_STATE(80)] = 3236,
  [SMALL_STATE(81)] = 3273,
  [SMALL_STATE(82)] = 3312,
  [SMALL_STATE(83)] = 3348,
  [SMALL_STATE(84)] = 3384,
  [SMALL_STATE(85)] = 3408,
  [SMALL_STATE(86)] = 3440,
  [SMALL_STATE(87)] = 3476,
  [SMALL_STATE(88)] = 3512,
  [SMALL_STATE(89)] = 3543,
  [SMALL_STATE(90)] = 3574,
  [SMALL_STATE(91)] = 3605,
  [SMALL_STATE(92)] = 3634,
  [SMALL_STATE(93)] = 3667,
  [SMALL_STATE(94)] = 3700,
  [SMALL_STATE(95)] = 3731,
  [SMALL_STATE(96)] = 3762,
  [SMALL_STATE(97)] = 3788,
  [SMALL_STATE(98)] = 3808,
  [SMALL_STATE(99)] = 3828,
  [SMALL_STATE(100)] = 3848,
  [SMALL_STATE(101)] = 3868,
  [SMALL_STATE(102)] = 3898,
  [SMALL_STATE(103)] = 3918,
  [SMALL_STATE(104)] = 3941,
  [SMALL_STATE(105)] = 3968,
  [SMALL_STATE(106)] = 3988,
  [SMALL_STATE(107)] = 4008,
  [SMALL_STATE(108)] = 4028,
  [SMALL_STATE(109)] = 4048,
  [SMALL_STATE(110)] = 4068,
  [SMALL_STATE(111)] = 4088,
  [SMALL_STATE(112)] = 4108,
  [SMALL_STATE(113)] = 4132,
  [SMALL_STATE(114)] = 4152,
  [SMALL_STATE(115)] = 4172,
  [SMALL_STATE(116)] = 4192,
  [SMALL_STATE(117)] = 4209,
  [SMALL_STATE(118)] = 4230,
  [SMALL_STATE(119)] = 4247,
  [SMALL_STATE(120)] = 4268,
  [SMALL_STATE(121)] = 4289,
  [SMALL_STATE(122)] = 4310,
  [SMALL_STATE(123)] = 4327,
  [SMALL_STATE(124)] = 4348,
  [SMALL_STATE(125)] = 4369,
  [SMALL_STATE(126)] = 4390,
  [SMALL_STATE(127)] = 4409,
  [SMALL_STATE(128)] = 4426,
  [SMALL_STATE(129)] = 4447,
  [SMALL_STATE(130)] = 4468,
  [SMALL_STATE(131)] = 4489,
  [SMALL_STATE(132)] = 4506,
  [SMALL_STATE(133)] = 4523,
  [SMALL_STATE(134)] = 4540,
  [SMALL_STATE(135)] = 4561,
  [SMALL_STATE(136)] = 4577,
  [SMALL_STATE(137)] = 4593,
  [SMALL_STATE(138)] = 4615,
  [SMALL_STATE(139)] = 4631,
  [SMALL_STATE(140)] = 4647,
  [SMALL_STATE(141)] = 4663,
  [SMALL_STATE(142)] = 4679,
  [SMALL_STATE(143)] = 4695,
  [SMALL_STATE(144)] = 4711,
  [SMALL_STATE(145)] = 4727,
  [SMALL_STATE(146)] = 4743,
  [SMALL_STATE(147)] = 4759,
  [SMALL_STATE(148)] = 4775,
  [SMALL_STATE(149)] = 4791,
  [SMALL_STATE(150)] = 4807,
  [SMALL_STATE(151)] = 4823,
  [SMALL_STATE(152)] = 4839,
  [SMALL_STATE(153)] = 4855,
  [SMALL_STATE(154)] = 4871,
  [SMALL_STATE(155)] = 4887,
  [SMALL_STATE(156)] = 4903,
  [SMALL_STATE(157)] = 4919,
  [SMALL_STATE(158)] = 4935,
  [SMALL_STATE(159)] = 4954,
  [SMALL_STATE(160)] = 4973,
  [SMALL_STATE(161)] = 4992,
  [SMALL_STATE(162)] = 5009,
  [SMALL_STATE(163)] = 5028,
  [SMALL_STATE(164)] = 5047,
  [SMALL_STATE(165)] = 5061,
  [SMALL_STATE(166)] = 5075,
  [SMALL_STATE(167)] = 5091,
  [SMALL_STATE(168)] = 5107,
  [SMALL_STATE(169)] = 5123,
  [SMALL_STATE(170)] = 5139,
  [SMALL_STATE(171)] = 5155,
  [SMALL_STATE(172)] = 5171,
  [SMALL_STATE(173)] = 5185,
  [SMALL_STATE(174)] = 5199,
  [SMALL_STATE(175)] = 5215,
  [SMALL_STATE(176)] = 5231,
  [SMALL_STATE(177)] = 5247,
  [SMALL_STATE(178)] = 5263,
  [SMALL_STATE(179)] = 5279,
  [SMALL_STATE(180)] = 5295,
  [SMALL_STATE(181)] = 5311,
  [SMALL_STATE(182)] = 5327,
  [SMALL_STATE(183)] = 5343,
  [SMALL_STATE(184)] = 5359,
  [SMALL_STATE(185)] = 5375,
  [SMALL_STATE(186)] = 5388,
  [SMALL_STATE(187)] = 5401,
  [SMALL_STATE(188)] = 5414,
  [SMALL_STATE(189)] = 5427,
  [SMALL_STATE(190)] = 5440,
  [SMALL_STATE(191)] = 5453,
  [SMALL_STATE(192)] = 5466,
  [SMALL_STATE(193)] = 5479,
  [SMALL_STATE(194)] = 5492,
  [SMALL_STATE(195)] = 5505,
  [SMALL_STATE(196)] = 5518,
  [SMALL_STATE(197)] = 5531,
  [SMALL_STATE(198)] = 5544,
  [SMALL_STATE(199)] = 5557,
  [SMALL_STATE(200)] = 5570,
  [SMALL_STATE(201)] = 5583,
  [SMALL_STATE(202)] = 5596,
  [SMALL_STATE(203)] = 5609,
  [SMALL_STATE(204)] = 5622,
  [SMALL_STATE(205)] = 5635,
  [SMALL_STATE(206)] = 5648,
  [SMALL_STATE(207)] = 5661,
  [SMALL_STATE(208)] = 5674,
  [SMALL_STATE(209)] = 5687,
  [SMALL_STATE(210)] = 5700,
  [SMALL_STATE(211)] = 5713,
  [SMALL_STATE(212)] = 5726,
  [SMALL_STATE(213)] = 5739,
  [SMALL_STATE(214)] = 5752,
  [SMALL_STATE(215)] = 5765,
  [SMALL_STATE(216)] = 5778,
  [SMALL_STATE(217)] = 5791,
  [SMALL_STATE(218)] = 5804,
  [SMALL_STATE(219)] = 5817,
  [SMALL_STATE(220)] = 5821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(47),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(170),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(134),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(66),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(158),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(64),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(169),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(168),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(166),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(183),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(176),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(112),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(125),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(123),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(121),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(171),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(62),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(62),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(172),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(215),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(216),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(214),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(187),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 46), SHIFT_REPEAT(202),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 3, .production_id = 40),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 3, .production_id = 40),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_register, 2, .production_id = 16),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_register, 2, .production_id = 16),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_register, 3, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_register, 3, .production_id = 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 25),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 25),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(185),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(21),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(21),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(165),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(193),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(192),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(201),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 39),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 39),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 24),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 24),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mem, 2, .production_id = 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem, 2, .production_id = 13),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_inst_label, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_inst_label, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 24),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 24),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 23),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 23),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 24),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 24),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 24),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 24),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 24),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 24),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 24),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 24),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 24),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 24),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 24),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 24),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 24),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 24),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 24),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 24),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 24),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 24),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 15),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 15),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 24),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 24),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 2, .production_id = 24),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2, .production_id = 24),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_value, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_value, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, .production_id = 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 5),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 34),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 34),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 31), SHIFT_REPEAT(80),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 31), SHIFT_REPEAT(212),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 31),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 31), SHIFT_REPEAT(137),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 31), SHIFT_REPEAT(104),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 31), SHIFT_REPEAT(177),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 22), SHIFT_REPEAT(189),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 22),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 22), SHIFT_REPEAT(187),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 22), SHIFT_REPEAT(202),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat2, 2, .production_id = 28), SHIFT_REPEAT(189),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat2, 2, .production_id = 28),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat2, 2, .production_id = 28), SHIFT_REPEAT(187),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat2, 2, .production_id = 28), SHIFT_REPEAT(202),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 9),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(180),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(199),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(198),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 14),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(201),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 33),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 33), SHIFT_REPEAT(212),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_jmp, 2, .production_id = 29),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_jmp, 2, .production_id = 29),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 2, .production_id = 32),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 2, .production_id = 32),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 41),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 41),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 1, .production_id = 20),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 1, .production_id = 20),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 1, .production_id = 20),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 1, .production_id = 20),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 41),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 41),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 12),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 6),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 19),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 19),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 23),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 37),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 17),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 21),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 5, .production_id = 36),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 26),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 38),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 35),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 27),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 47),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 10),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 45),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 44),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 6, .production_id = 43),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instructions, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instructions, 3, .production_id = 30),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 6, .production_id = 42),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat2, 1, .production_id = 18),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 17),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 11),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(164),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
