#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 47

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
  sym_func_head = 77,
  sym_func = 78,
  sym_inst_head = 79,
  sym_inst = 80,
  sym_branch_head = 81,
  sym_inst_branch = 82,
  sym_inst_permutation = 83,
  sym__internal = 84,
  sym_dunder_binary = 85,
  sym_dunder_branching = 86,
  sym_permutation = 87,
  sym_stack_frame = 88,
  sym__instruction = 89,
  sym_height = 90,
  sym_const = 91,
  sym_perm = 92,
  sym_in = 93,
  sym_out = 94,
  sym_label = 95,
  sym_jump = 96,
  sym_branch = 97,
  sym_call = 98,
  sym_icall = 99,
  sym_ref = 100,
  sym_get = 101,
  sym_set = 102,
  sym_custom_instruction = 103,
  sym_urcl_instruction = 104,
  sym_index_register = 105,
  sym_named_register = 106,
  sym__reg = 107,
  sym_input_register = 108,
  sym__input_reg = 109,
  sym__urcl_value = 110,
  sym_urcl_jmp = 111,
  sym_urcl_in = 112,
  sym_urcl_out = 113,
  sym_urcl_generic = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_source_file_repeat2 = 116,
  aux_sym_source_file_repeat3 = 117,
  aux_sym_array_repeat1 = 118,
  aux_sym_func_repeat1 = 119,
  aux_sym_inst_head_repeat1 = 120,
  aux_sym_inst_head_repeat2 = 121,
  aux_sym_inst_repeat1 = 122,
  aux_sym_branch_head_repeat1 = 123,
  aux_sym_stack_frame_repeat1 = 124,
  aux_sym_urcl_instruction_repeat1 = 125,
  aux_sym_urcl_generic_repeat1 = 126,
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
  [sym_func_head] = "func_head",
  [sym_func] = "func",
  [sym_inst_head] = "inst_head",
  [sym_inst] = "inst",
  [sym_branch_head] = "branch_head",
  [sym_inst_branch] = "inst_branch",
  [sym_inst_permutation] = "inst_permutation",
  [sym__internal] = "_internal",
  [sym_dunder_binary] = "dunder_binary",
  [sym_dunder_branching] = "dunder_branching",
  [sym_permutation] = "permutation",
  [sym_stack_frame] = "stack_frame",
  [sym__instruction] = "_instruction",
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
  [sym__reg] = "_reg",
  [sym_input_register] = "input_register",
  [sym__input_reg] = "_input_reg",
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
  [aux_sym_inst_head_repeat1] = "inst_head_repeat1",
  [aux_sym_inst_head_repeat2] = "inst_head_repeat2",
  [aux_sym_inst_repeat1] = "inst_repeat1",
  [aux_sym_branch_head_repeat1] = "branch_head_repeat1",
  [aux_sym_stack_frame_repeat1] = "stack_frame_repeat1",
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
  [sym_func_head] = sym_func_head,
  [sym_func] = sym_func,
  [sym_inst_head] = sym_inst_head,
  [sym_inst] = sym_inst,
  [sym_branch_head] = sym_branch_head,
  [sym_inst_branch] = sym_inst_branch,
  [sym_inst_permutation] = sym_inst_permutation,
  [sym__internal] = sym__internal,
  [sym_dunder_binary] = sym_dunder_binary,
  [sym_dunder_branching] = sym_dunder_branching,
  [sym_permutation] = sym_permutation,
  [sym_stack_frame] = sym_stack_frame,
  [sym__instruction] = sym__instruction,
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
  [sym__reg] = sym__reg,
  [sym_input_register] = sym_input_register,
  [sym__input_reg] = sym__input_reg,
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
  [aux_sym_inst_head_repeat1] = aux_sym_inst_head_repeat1,
  [aux_sym_inst_head_repeat2] = aux_sym_inst_head_repeat2,
  [aux_sym_inst_repeat1] = aux_sym_inst_repeat1,
  [aux_sym_branch_head_repeat1] = aux_sym_branch_head_repeat1,
  [aux_sym_stack_frame_repeat1] = aux_sym_stack_frame_repeat1,
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
  [sym_func_head] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_inst_head] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_head] = {
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
  [sym__internal] = {
    .visible = false,
    .named = true,
  },
  [sym_dunder_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_dunder_branching] = {
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
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_input_register] = {
    .visible = true,
    .named = true,
  },
  [sym__input_reg] = {
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
  [aux_sym_inst_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inst_head_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inst_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_frame_repeat1] = {
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
  field_branch = 2,
  field_code = 3,
  field_data = 4,
  field_dest = 5,
  field_head = 6,
  field_headers = 7,
  field_index = 8,
  field_input = 9,
  field_instruction = 10,
  field_instructions = 11,
  field_items = 12,
  field_label = 13,
  field_locals = 14,
  field_name = 15,
  field_op = 16,
  field_opcode = 17,
  field_operand = 18,
  field_output = 19,
  field_params = 20,
  field_permutation = 21,
  field_reg = 22,
  field_returns = 23,
  field_source = 24,
  field_stack = 25,
  field_value = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_addr] = "addr",
  [field_branch] = "branch",
  [field_code] = "code",
  [field_data] = "data",
  [field_dest] = "dest",
  [field_head] = "head",
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
  [field_reg] = "reg",
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
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 3},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 1},
  [23] = {.index = 32, .length = 2},
  [24] = {.index = 34, .length = 2},
  [25] = {.index = 36, .length = 2},
  [26] = {.index = 38, .length = 1},
  [27] = {.index = 39, .length = 1},
  [28] = {.index = 40, .length = 2},
  [29] = {.index = 42, .length = 1},
  [30] = {.index = 43, .length = 2},
  [31] = {.index = 45, .length = 2},
  [32] = {.index = 47, .length = 2},
  [33] = {.index = 49, .length = 2},
  [34] = {.index = 51, .length = 2},
  [35] = {.index = 53, .length = 3},
  [36] = {.index = 56, .length = 2},
  [37] = {.index = 58, .length = 1},
  [38] = {.index = 59, .length = 2},
  [39] = {.index = 61, .length = 3},
  [40] = {.index = 64, .length = 3},
  [41] = {.index = 67, .length = 2},
  [42] = {.index = 69, .length = 1},
  [43] = {.index = 70, .length = 3},
  [44] = {.index = 73, .length = 2},
  [45] = {.index = 75, .length = 2},
  [46] = {.index = 77, .length = 3},
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
    {field_stack, 2},
  [15] =
    {field_name, 1},
    {field_permutation, 2},
  [17] =
    {field_input, 0},
  [18] =
    {field_input, 2, .inherited = true},
    {field_name, 1},
  [20] =
    {field_addr, 1},
  [21] =
    {field_opcode, 0},
  [22] =
    {field_head, 0},
  [23] =
    {field_label, 0},
  [24] =
    {field_instruction, 0},
  [25] =
    {field_code, 2},
    {field_data, 1},
    {field_headers, 0},
  [28] =
    {field_locals, 3},
    {field_name, 1},
  [30] =
    {field_index, 1},
  [31] =
    {field_output, 0},
  [32] =
    {field_name, 1},
    {field_output, 3, .inherited = true},
  [34] =
    {field_input, 0, .inherited = true},
    {field_input, 1, .inherited = true},
  [36] =
    {field_label, 3},
    {field_name, 1},
  [38] =
    {field_items, 1},
  [39] =
    {field_operand, 1},
  [40] =
    {field_head, 0},
    {field_instructions, 2},
  [42] =
    {field_dest, 1},
  [43] =
    {field_head, 0},
    {field_instruction, 2, .inherited = true},
  [45] =
    {field_instruction, 0, .inherited = true},
    {field_instruction, 1, .inherited = true},
  [47] =
    {field_instruction, 1},
    {field_label, 0, .inherited = true},
  [49] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [51] =
    {field_params, 0},
    {field_returns, 2},
  [53] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [56] =
    {field_output, 0, .inherited = true},
    {field_output, 1, .inherited = true},
  [58] =
    {field_reg, 1},
  [59] =
    {field_input, 0},
    {field_output, 2},
  [61] =
    {field_input, 2, .inherited = true},
    {field_name, 1},
    {field_output, 4, .inherited = true},
  [64] =
    {field_input, 2, .inherited = true},
    {field_label, 4},
    {field_name, 1},
  [67] =
    {field_instruction, 3},
    {field_name, 1},
  [69] =
    {field_source, 0},
  [70] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2, .inherited = true},
  [73] =
    {field_dest, 1},
    {field_source, 2},
  [75] =
    {field_source, 0, .inherited = true},
    {field_source, 1, .inherited = true},
  [77] =
    {field_branch, 5},
    {field_instruction, 3},
    {field_name, 1},
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
      if (lookahead == '>') ADVANCE(224);
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
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(17);
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
  [5] = {.lex_state = 98},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 98},
  [10] = {.lex_state = 98},
  [11] = {.lex_state = 98},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 98},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 98},
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
  [50] = {.lex_state = 98},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 98},
  [53] = {.lex_state = 98},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 98},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 98},
  [63] = {.lex_state = 98},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 98},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 98},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 98},
  [83] = {.lex_state = 98},
  [84] = {.lex_state = 98},
  [85] = {.lex_state = 98},
  [86] = {.lex_state = 98},
  [87] = {.lex_state = 98},
  [88] = {.lex_state = 98},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 98},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 98},
  [93] = {.lex_state = 98},
  [94] = {.lex_state = 98},
  [95] = {.lex_state = 98},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 98},
  [101] = {.lex_state = 98},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 98},
  [107] = {.lex_state = 98},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 98},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 98},
  [117] = {.lex_state = 98},
  [118] = {.lex_state = 98},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 98},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 98},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 98},
  [125] = {.lex_state = 98},
  [126] = {.lex_state = 98},
  [127] = {.lex_state = 98},
  [128] = {.lex_state = 98},
  [129] = {.lex_state = 98},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 98},
  [133] = {.lex_state = 98},
  [134] = {.lex_state = 98},
  [135] = {.lex_state = 98},
  [136] = {.lex_state = 98},
  [137] = {.lex_state = 98},
  [138] = {.lex_state = 98},
  [139] = {.lex_state = 98},
  [140] = {.lex_state = 98},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 98},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 156},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {(TSStateId)(-1)},
  [223] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(194),
    [sym__header] = STATE(88),
    [sym_bits] = STATE(87),
    [sym_minstack] = STATE(87),
    [sym_minheap] = STATE(87),
    [sym_comment] = STATE(1),
    [sym_data_label] = STATE(19),
    [sym_definition] = STATE(94),
    [sym_func_head] = STATE(191),
    [sym_func] = STATE(128),
    [sym_inst_head] = STATE(189),
    [sym_inst] = STATE(128),
    [sym_branch_head] = STATE(188),
    [sym_inst_branch] = STATE(128),
    [sym_inst_permutation] = STATE(128),
    [sym__internal] = STATE(128),
    [sym_dunder_binary] = STATE(125),
    [sym_dunder_branching] = STATE(125),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(12),
    [aux_sym_source_file_repeat3] = STATE(34),
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
    [anon_sym___binary__] = ACTIONS(23),
    [anon_sym___branching__] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_branch,
    ACTIONS(33), 1,
      anon_sym_height,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_perm,
    ACTIONS(41), 1,
      anon_sym_in,
    ACTIONS(43), 1,
      anon_sym_out,
    ACTIONS(45), 1,
      anon_sym_label,
    ACTIONS(47), 1,
      anon_sym_jump,
    ACTIONS(49), 1,
      anon_sym_call,
    ACTIONS(51), 1,
      anon_sym_icall,
    ACTIONS(53), 1,
      anon_sym_ref,
    ACTIONS(55), 1,
      anon_sym_get,
    ACTIONS(57), 1,
      anon_sym_set,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_func_repeat1,
    STATE(45), 1,
      sym__instruction,
    ACTIONS(39), 2,
      sym_halt,
      sym_ret,
    STATE(26), 14,
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
  [81] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_branch,
    ACTIONS(33), 1,
      anon_sym_height,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_perm,
    ACTIONS(41), 1,
      anon_sym_in,
    ACTIONS(43), 1,
      anon_sym_out,
    ACTIONS(45), 1,
      anon_sym_label,
    ACTIONS(47), 1,
      anon_sym_jump,
    ACTIONS(49), 1,
      anon_sym_call,
    ACTIONS(51), 1,
      anon_sym_icall,
    ACTIONS(53), 1,
      anon_sym_ref,
    ACTIONS(55), 1,
      anon_sym_get,
    ACTIONS(57), 1,
      anon_sym_set,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(45), 1,
      sym__instruction,
    ACTIONS(39), 2,
      sym_halt,
      sym_ret,
    STATE(26), 14,
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
  [162] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_branch,
    ACTIONS(69), 1,
      anon_sym_height,
    ACTIONS(72), 1,
      anon_sym_const,
    ACTIONS(75), 1,
      anon_sym_perm,
    ACTIONS(81), 1,
      anon_sym_in,
    ACTIONS(84), 1,
      anon_sym_out,
    ACTIONS(87), 1,
      anon_sym_label,
    ACTIONS(90), 1,
      anon_sym_jump,
    ACTIONS(93), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_icall,
    ACTIONS(99), 1,
      anon_sym_ref,
    ACTIONS(102), 1,
      anon_sym_get,
    ACTIONS(105), 1,
      anon_sym_set,
    STATE(45), 1,
      sym__instruction,
    ACTIONS(78), 2,
      sym_halt,
      sym_ret,
    STATE(4), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(26), 14,
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
  [241] = 25,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(19), 1,
      sym_data_label,
    STATE(50), 1,
      aux_sym_source_file_repeat3,
    STATE(72), 1,
      aux_sym_source_file_repeat1,
    STATE(88), 1,
      sym__header,
    STATE(94), 1,
      sym_definition,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(87), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [324] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_AMP,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(70), 1,
      sym__urcl_value,
    ACTIONS(124), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(65), 2,
      sym__literal,
      sym__reg,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(110), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(69), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [392] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(138), 1,
      aux_sym_number_token3,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_AMP,
    STATE(70), 1,
      sym__urcl_value,
    ACTIONS(150), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_comment,
      aux_sym_urcl_generic_repeat1,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(65), 2,
      sym__literal,
      sym__reg,
    ACTIONS(135), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(130), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(69), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [458] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(160), 10,
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
    ACTIONS(158), 17,
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
  [499] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_AMP,
    STATE(6), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(70), 1,
      sym__urcl_value,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(65), 2,
      sym__literal,
      sym__reg,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(69), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_number_token3,
    STATE(10), 1,
      sym_comment,
    ACTIONS(162), 21,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [593] = 19,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(19), 1,
      sym_data_label,
    STATE(27), 1,
      aux_sym_source_file_repeat3,
    STATE(86), 1,
      aux_sym_source_file_repeat2,
    STATE(94), 1,
      sym_definition,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [656] = 19,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    STATE(19), 1,
      sym_data_label,
    STATE(52), 1,
      aux_sym_source_file_repeat3,
    STATE(86), 1,
      aux_sym_source_file_repeat2,
    STATE(94), 1,
      sym_definition,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [719] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(170), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(172), 16,
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
      anon_sym_GT,
  [754] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(174), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(176), 16,
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
      anon_sym_GT,
  [789] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_AMP,
    STATE(15), 1,
      sym_comment,
    STATE(123), 1,
      sym__urcl_value,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(65), 2,
      sym__literal,
      sym__reg,
    ACTIONS(114), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(69), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [844] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(178), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(180), 16,
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
      anon_sym_GT,
  [879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(182), 16,
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
  [912] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      aux_sym_number_token3,
    STATE(18), 1,
      sym_comment,
    ACTIONS(186), 17,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [944] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    STATE(101), 2,
      sym_array,
      sym__literal,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(63), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [992] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(212), 1,
      aux_sym_number_token3,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym__literal,
    STATE(20), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(209), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(63), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1040] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(83), 1,
      sym__literal,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(63), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1090] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(83), 1,
      sym__literal,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(63), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(231), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(233), 12,
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
  [1171] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(235), 16,
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
  [1202] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(239), 16,
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
  [1233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(243), 16,
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
  [1264] = 15,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_source_file_repeat3,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(249), 16,
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
  [1346] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_comment,
    ACTIONS(253), 16,
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
  [1377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(188), 16,
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
  [1408] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(257), 16,
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
  [1439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(261), 16,
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
  [1470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(164), 16,
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
  [1501] = 15,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_source_file_repeat3,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1552] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(267), 16,
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
  [1583] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(271), 16,
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
  [1614] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(275), 16,
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
  [1645] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      aux_sym_number_token3,
    STATE(38), 1,
      sym_comment,
    ACTIONS(263), 16,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1676] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(279), 16,
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
  [1707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(283), 16,
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
  [1738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(287), 16,
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
  [1769] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(291), 16,
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
  [1800] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(295), 16,
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
  [1831] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(299), 16,
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
  [1862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(303), 16,
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
  [1893] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(307), 16,
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
  [1924] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(311), 16,
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
  [1955] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(315), 16,
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
  [1986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(319), 16,
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
  [2017] = 15,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_source_file_repeat3,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [2068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(325), 16,
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
  [2099] = 15,
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
    ACTIONS(23), 1,
      anon_sym___binary__,
    ACTIONS(25), 1,
      anon_sym___branching__,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_source_file_repeat3,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [2150] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      anon_sym_func,
    ACTIONS(336), 1,
      anon_sym_inst,
    ACTIONS(339), 1,
      anon_sym_branch,
    ACTIONS(342), 1,
      anon_sym___binary__,
    ACTIONS(345), 1,
      anon_sym___branching__,
    STATE(188), 1,
      sym_branch_head,
    STATE(189), 1,
      sym_inst_head,
    STATE(191), 1,
      sym_func_head,
    STATE(53), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(125), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(128), 5,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [2199] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(231), 16,
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
  [2230] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
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
  [2261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
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
  [2292] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      aux_sym_number_token3,
    STATE(57), 1,
      sym_comment,
    ACTIONS(273), 15,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [2322] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(253), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(255), 11,
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
  [2352] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(271), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(273), 11,
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
  [2382] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(249), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(251), 11,
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
  [2412] = 12,
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
    STATE(39), 1,
      sym__literal,
    STATE(61), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(31), 6,
      sym_function_name,
      sym_number,
      sym_char_literal,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2456] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      aux_sym_number_token3,
    STATE(62), 1,
      sym_comment,
    ACTIONS(251), 15,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [2486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      aux_sym_number_token3,
    STATE(63), 1,
      sym_comment,
    ACTIONS(259), 15,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [2516] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(370), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(372), 11,
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
  [2546] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(374), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(376), 11,
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
  [2576] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(162), 11,
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
  [2606] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      aux_sym_number_token3,
    STATE(67), 1,
      sym_comment,
    ACTIONS(255), 15,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [2636] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(188), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(186), 11,
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
  [2666] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(257), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(259), 11,
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
  [2696] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(378), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(380), 11,
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
  [2726] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(261), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(263), 11,
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
  [2756] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(384), 1,
      anon_sym_bits,
    ACTIONS(387), 1,
      anon_sym_minstack,
    ACTIONS(390), 1,
      anon_sym_minheap,
    STATE(88), 1,
      sym__header,
    STATE(72), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(87), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [2793] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(396), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_JMP,
    ACTIONS(404), 1,
      anon_sym_IN,
    ACTIONS(407), 1,
      anon_sym_OUT,
    STATE(81), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(108), 1,
      sym_urcl_instruction,
    STATE(145), 1,
      sym_inst_label,
    STATE(73), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(109), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2837] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_DASH_GT,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LT,
    STATE(74), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_inst_head_repeat1,
    STATE(126), 1,
      sym_permutation,
    STATE(141), 1,
      sym__input_reg,
    STATE(182), 1,
      sym_stack_frame,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(130), 2,
      sym__reg,
      sym_input_register,
  [2885] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_JMP,
    ACTIONS(428), 1,
      anon_sym_IN,
    ACTIONS(430), 1,
      anon_sym_OUT,
    STATE(75), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_inst_repeat1,
    STATE(81), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(108), 1,
      sym_urcl_instruction,
    STATE(145), 1,
      sym_inst_label,
    STATE(109), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2931] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      anon_sym_JMP,
    ACTIONS(428), 1,
      anon_sym_IN,
    ACTIONS(430), 1,
      anon_sym_OUT,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_inst_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(108), 1,
      sym_urcl_instruction,
    STATE(145), 1,
      sym_inst_label,
    STATE(109), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2977] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      anon_sym_JMP,
    ACTIONS(428), 1,
      anon_sym_IN,
    ACTIONS(430), 1,
      anon_sym_OUT,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_inst_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(108), 1,
      sym_urcl_instruction,
    STATE(145), 1,
      sym_inst_label,
    STATE(109), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3023] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      anon_sym_JMP,
    ACTIONS(428), 1,
      anon_sym_IN,
    ACTIONS(430), 1,
      anon_sym_OUT,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_inst_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(108), 1,
      sym_urcl_instruction,
    STATE(145), 1,
      sym_inst_label,
    STATE(109), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3069] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      anon_sym_LT,
    ACTIONS(438), 1,
      anon_sym_DASH_GT,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_inst_head_repeat1,
    STATE(141), 1,
      sym__input_reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(130), 2,
      sym__reg,
      sym_input_register,
  [3108] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      anon_sym_DOLLAR,
    ACTIONS(447), 1,
      anon_sym_AMP,
    ACTIONS(450), 1,
      anon_sym_LT,
    STATE(141), 1,
      sym__input_reg,
    ACTIONS(445), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(80), 2,
      sym_comment,
      aux_sym_inst_head_repeat1,
    STATE(130), 2,
      sym__reg,
      sym_input_register,
  [3143] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      anon_sym_JMP,
    ACTIONS(428), 1,
      anon_sym_IN,
    ACTIONS(430), 1,
      anon_sym_OUT,
    STATE(81), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(112), 1,
      sym_urcl_generic,
    STATE(113), 1,
      sym_urcl_out,
    STATE(114), 1,
      sym_urcl_in,
    STATE(115), 1,
      sym_urcl_jmp,
    STATE(145), 1,
      sym_inst_label,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(453), 10,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 1,
      aux_sym_number_token3,
    STATE(83), 1,
      sym_comment,
    ACTIONS(455), 9,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
  [3232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(459), 10,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(461), 10,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3276] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_data_label,
    STATE(94), 1,
      sym_definition,
    STATE(86), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(463), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(468), 10,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(470), 10,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3348] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      anon_sym_COLON,
    ACTIONS(474), 1,
      sym_end_label,
    STATE(64), 1,
      sym_inst_label,
    STATE(89), 1,
      sym_comment,
    STATE(9), 2,
      sym__any_inst_label,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3381] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    ACTIONS(476), 1,
      anon_sym_PLUS,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_comment,
    STATE(160), 1,
      sym_stack_behaviour,
    STATE(221), 1,
      sym_number,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3411] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(480), 1,
      anon_sym_DOLLAR,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 1,
      anon_sym_AMP,
    STATE(154), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(91), 2,
      sym_comment,
      aux_sym_inst_head_repeat2,
  [3438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(350), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(488), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(490), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(492), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3514] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_inst_head_repeat2,
    STATE(154), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3543] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_DASH_GT,
    STATE(97), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_branch_head_repeat1,
    STATE(151), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3572] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_inst_head_repeat2,
    STATE(154), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3601] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      aux_sym_inst_head_repeat2,
    STATE(99), 1,
      sym_comment,
    STATE(154), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(502), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3668] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
    STATE(97), 1,
      aux_sym_branch_head_repeat1,
    STATE(102), 1,
      sym_comment,
    STATE(151), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3697] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_inst_label,
    STATE(103), 2,
      sym_comment,
      aux_sym_urcl_instruction_repeat1,
    ACTIONS(506), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3720] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      aux_sym_inst_head_repeat2,
    STATE(104), 1,
      sym_comment,
    STATE(154), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [3749] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    ACTIONS(516), 1,
      anon_sym_DASH_GT,
    ACTIONS(518), 1,
      anon_sym_AMP,
    STATE(151), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
    STATE(105), 2,
      sym_comment,
      aux_sym_branch_head_repeat1,
  [3776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(523), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3812] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(525), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3832] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(529), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3852] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(533), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3870] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(158), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3910] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3930] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3950] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(539), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(541), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4024] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(543), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(547), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(549), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(553), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    ACTIONS(555), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4120] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4138] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(561), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(563), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4174] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(47), 1,
      sym_stack_behaviour,
    STATE(127), 1,
      sym_comment,
    STATE(210), 1,
      sym_number,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4216] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(17), 1,
      sym_number,
    STATE(129), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(567), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [4254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(569), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [4271] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(132), 1,
      sym_comment,
    STATE(200), 1,
      sym_number,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4292] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(85), 1,
      sym_number,
    STATE(133), 1,
      sym_comment,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4313] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(82), 1,
      sym_number,
    STATE(134), 1,
      sym_comment,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4334] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(84), 1,
      sym_number,
    STATE(135), 1,
      sym_comment,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4355] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(48), 1,
      sym_number,
    STATE(136), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4376] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(49), 1,
      sym_number,
    STATE(137), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4397] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(17), 1,
      sym_number,
    STATE(138), 1,
      sym_comment,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4418] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(51), 1,
      sym_number,
    STATE(139), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4439] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      aux_sym_number_token3,
    STATE(140), 1,
      sym_comment,
    STATE(193), 1,
      sym_number,
    ACTIONS(194), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(571), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [4477] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_number,
    STATE(142), 1,
      sym_comment,
    ACTIONS(358), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4498] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym_comment,
    STATE(163), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [4521] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    STATE(144), 1,
      sym_comment,
    STATE(187), 1,
      sym__reg,
    STATE(14), 2,
      sym_index_register,
      sym_named_register,
  [4544] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_comment,
    ACTIONS(573), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4563] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(472), 1,
      anon_sym_COLON,
    ACTIONS(474), 1,
      sym_end_label,
    STATE(64), 1,
      sym_inst_label,
    STATE(119), 1,
      sym__any_inst_label,
    STATE(146), 1,
      sym_comment,
  [4585] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_permutation,
    STATE(147), 1,
      sym_comment,
    STATE(215), 1,
      sym_stack_frame,
  [4604] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_stack_frame_repeat1,
  [4623] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    STATE(149), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [4640] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      aux_sym_stack_frame_repeat1,
    STATE(150), 1,
      sym_comment,
  [4659] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(588), 3,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_AMP,
  [4674] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_stack_frame_repeat1,
  [4693] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      aux_sym_stack_frame_repeat1,
    STATE(153), 1,
      sym_comment,
  [4712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(594), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_AMP,
  [4727] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_function_name,
    STATE(155), 1,
      sym_comment,
  [4743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(596), 1,
      anon_sym_PERCENT,
    STATE(15), 1,
      sym_port,
    STATE(156), 1,
      sym_comment,
  [4759] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym_inst_label,
    STATE(157), 1,
      sym_comment,
  [4775] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(604), 2,
      sym_char,
      sym_char_escape,
  [4789] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    STATE(159), 1,
      sym_comment,
    ACTIONS(606), 2,
      sym_char,
      sym_char_escape,
  [4803] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_PLUS,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_comment,
  [4819] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(612), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_stack_frame,
    STATE(161), 1,
      sym_comment,
  [4835] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      anon_sym_COLON,
    STATE(162), 1,
      sym_comment,
    STATE(176), 1,
      sym_inst_label,
  [4851] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(614), 1,
      anon_sym_PERCENT,
    STATE(121), 1,
      sym_port,
    STATE(163), 1,
      sym_comment,
  [4867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      sym_comment,
    ACTIONS(616), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [4881] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      sym_stack_frame,
    STATE(165), 1,
      sym_comment,
  [4897] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_inst_label,
    STATE(166), 1,
      sym_comment,
  [4913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym_inst_label,
    STATE(167), 1,
      sym_comment,
  [4929] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_function_name,
    STATE(168), 1,
      sym_comment,
  [4945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(596), 1,
      anon_sym_PERCENT,
    STATE(42), 1,
      sym_port,
    STATE(169), 1,
      sym_comment,
  [4961] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(596), 1,
      anon_sym_PERCENT,
    STATE(41), 1,
      sym_port,
    STATE(170), 1,
      sym_comment,
  [4977] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    STATE(171), 1,
      sym_comment,
    ACTIONS(618), 2,
      sym_char,
      sym_char_escape,
  [4991] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      sym_imm_ident,
    ACTIONS(622), 1,
      sym_index,
    STATE(172), 1,
      sym_comment,
  [5007] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_comment,
    STATE(214), 1,
      sym_inst_label,
  [5023] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(624), 1,
      sym_identifier,
    STATE(174), 1,
      sym_comment,
  [5036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(626), 1,
      sym_index,
    STATE(175), 1,
      sym_comment,
  [5049] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_comment,
  [5062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(177), 1,
      sym_comment,
  [5075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(632), 1,
      anon_sym_DASH_GT,
    STATE(178), 1,
      sym_comment,
  [5088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
    STATE(179), 1,
      sym_comment,
  [5101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym_comment,
  [5114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(638), 1,
      sym_imm_ident,
    STATE(181), 1,
      sym_comment,
  [5127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      anon_sym_DASH_GT,
    STATE(182), 1,
      sym_comment,
  [5140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(642), 1,
      sym_imm_ident,
    STATE(183), 1,
      sym_comment,
  [5153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(644), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      sym_comment,
  [5166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(646), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      sym_comment,
  [5179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(648), 1,
      sym_imm_ident,
    STATE(186), 1,
      sym_comment,
  [5192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      anon_sym_GT,
    STATE(187), 1,
      sym_comment,
  [5205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_comment,
  [5218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_comment,
  [5231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(656), 1,
      sym_imm_ident,
    STATE(190), 1,
      sym_comment,
  [5244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_comment,
  [5257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(622), 1,
      sym_index,
    STATE(192), 1,
      sym_comment,
  [5270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_comment,
  [5283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_comment,
  [5296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(195), 1,
      sym_comment,
  [5309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(666), 1,
      sym_identifier,
    STATE(196), 1,
      sym_comment,
  [5322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(197), 1,
      sym_comment,
  [5335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(670), 1,
      sym_imm_ident,
    STATE(198), 1,
      sym_comment,
  [5348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(672), 1,
      sym_identifier,
    STATE(199), 1,
      sym_comment,
  [5361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_comment,
  [5374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      sym_imm_ident,
    STATE(201), 1,
      sym_comment,
  [5387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(678), 1,
      sym_identifier,
    STATE(202), 1,
      sym_comment,
  [5400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    STATE(203), 1,
      sym_comment,
  [5413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      sym_comment,
  [5426] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(684), 1,
      aux_sym_comment_token2,
    STATE(205), 1,
      sym_comment,
  [5439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(686), 1,
      sym_imm_ident,
    STATE(206), 1,
      sym_comment,
  [5452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(688), 1,
      sym_imm_ident,
    STATE(207), 1,
      sym_comment,
  [5465] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(690), 1,
      sym_imm_ident,
    STATE(208), 1,
      sym_comment,
  [5478] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(692), 1,
      sym_index,
    STATE(209), 1,
      sym_comment,
  [5491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(694), 1,
      anon_sym_DASH_GT,
    STATE(210), 1,
      sym_comment,
  [5504] = 4,
    ACTIONS(600), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(602), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      aux_sym_comment_token1,
    STATE(211), 1,
      sym_comment,
  [5517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(698), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym_comment,
  [5530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(700), 1,
      sym_imm_ident,
    STATE(213), 1,
      sym_comment,
  [5543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_comment,
  [5556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(704), 1,
      anon_sym_DASH_GT,
    STATE(215), 1,
      sym_comment,
  [5569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(706), 1,
      sym_imm_ident,
    STATE(216), 1,
      sym_comment,
  [5582] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(708), 1,
      sym_imm_ident,
    STATE(217), 1,
      sym_comment,
  [5595] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      sym_imm_ident,
    STATE(218), 1,
      sym_comment,
  [5608] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(712), 1,
      sym_index,
    STATE(219), 1,
      sym_comment,
  [5621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(714), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      sym_comment,
  [5634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(716), 1,
      anon_sym_DASH_GT,
    STATE(221), 1,
      sym_comment,
  [5647] = 1,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
  [5651] = 1,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 241,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 392,
  [SMALL_STATE(8)] = 458,
  [SMALL_STATE(9)] = 499,
  [SMALL_STATE(10)] = 557,
  [SMALL_STATE(11)] = 593,
  [SMALL_STATE(12)] = 656,
  [SMALL_STATE(13)] = 719,
  [SMALL_STATE(14)] = 754,
  [SMALL_STATE(15)] = 789,
  [SMALL_STATE(16)] = 844,
  [SMALL_STATE(17)] = 879,
  [SMALL_STATE(18)] = 912,
  [SMALL_STATE(19)] = 944,
  [SMALL_STATE(20)] = 992,
  [SMALL_STATE(21)] = 1040,
  [SMALL_STATE(22)] = 1090,
  [SMALL_STATE(23)] = 1140,
  [SMALL_STATE(24)] = 1171,
  [SMALL_STATE(25)] = 1202,
  [SMALL_STATE(26)] = 1233,
  [SMALL_STATE(27)] = 1264,
  [SMALL_STATE(28)] = 1315,
  [SMALL_STATE(29)] = 1346,
  [SMALL_STATE(30)] = 1377,
  [SMALL_STATE(31)] = 1408,
  [SMALL_STATE(32)] = 1439,
  [SMALL_STATE(33)] = 1470,
  [SMALL_STATE(34)] = 1501,
  [SMALL_STATE(35)] = 1552,
  [SMALL_STATE(36)] = 1583,
  [SMALL_STATE(37)] = 1614,
  [SMALL_STATE(38)] = 1645,
  [SMALL_STATE(39)] = 1676,
  [SMALL_STATE(40)] = 1707,
  [SMALL_STATE(41)] = 1738,
  [SMALL_STATE(42)] = 1769,
  [SMALL_STATE(43)] = 1800,
  [SMALL_STATE(44)] = 1831,
  [SMALL_STATE(45)] = 1862,
  [SMALL_STATE(46)] = 1893,
  [SMALL_STATE(47)] = 1924,
  [SMALL_STATE(48)] = 1955,
  [SMALL_STATE(49)] = 1986,
  [SMALL_STATE(50)] = 2017,
  [SMALL_STATE(51)] = 2068,
  [SMALL_STATE(52)] = 2099,
  [SMALL_STATE(53)] = 2150,
  [SMALL_STATE(54)] = 2199,
  [SMALL_STATE(55)] = 2230,
  [SMALL_STATE(56)] = 2261,
  [SMALL_STATE(57)] = 2292,
  [SMALL_STATE(58)] = 2322,
  [SMALL_STATE(59)] = 2352,
  [SMALL_STATE(60)] = 2382,
  [SMALL_STATE(61)] = 2412,
  [SMALL_STATE(62)] = 2456,
  [SMALL_STATE(63)] = 2486,
  [SMALL_STATE(64)] = 2516,
  [SMALL_STATE(65)] = 2546,
  [SMALL_STATE(66)] = 2576,
  [SMALL_STATE(67)] = 2606,
  [SMALL_STATE(68)] = 2636,
  [SMALL_STATE(69)] = 2666,
  [SMALL_STATE(70)] = 2696,
  [SMALL_STATE(71)] = 2726,
  [SMALL_STATE(72)] = 2756,
  [SMALL_STATE(73)] = 2793,
  [SMALL_STATE(74)] = 2837,
  [SMALL_STATE(75)] = 2885,
  [SMALL_STATE(76)] = 2931,
  [SMALL_STATE(77)] = 2977,
  [SMALL_STATE(78)] = 3023,
  [SMALL_STATE(79)] = 3069,
  [SMALL_STATE(80)] = 3108,
  [SMALL_STATE(81)] = 3143,
  [SMALL_STATE(82)] = 3186,
  [SMALL_STATE(83)] = 3208,
  [SMALL_STATE(84)] = 3232,
  [SMALL_STATE(85)] = 3254,
  [SMALL_STATE(86)] = 3276,
  [SMALL_STATE(87)] = 3304,
  [SMALL_STATE(88)] = 3326,
  [SMALL_STATE(89)] = 3348,
  [SMALL_STATE(90)] = 3381,
  [SMALL_STATE(91)] = 3411,
  [SMALL_STATE(92)] = 3438,
  [SMALL_STATE(93)] = 3457,
  [SMALL_STATE(94)] = 3476,
  [SMALL_STATE(95)] = 3495,
  [SMALL_STATE(96)] = 3514,
  [SMALL_STATE(97)] = 3543,
  [SMALL_STATE(98)] = 3572,
  [SMALL_STATE(99)] = 3601,
  [SMALL_STATE(100)] = 3630,
  [SMALL_STATE(101)] = 3649,
  [SMALL_STATE(102)] = 3668,
  [SMALL_STATE(103)] = 3697,
  [SMALL_STATE(104)] = 3720,
  [SMALL_STATE(105)] = 3749,
  [SMALL_STATE(106)] = 3776,
  [SMALL_STATE(107)] = 3794,
  [SMALL_STATE(108)] = 3812,
  [SMALL_STATE(109)] = 3832,
  [SMALL_STATE(110)] = 3852,
  [SMALL_STATE(111)] = 3870,
  [SMALL_STATE(112)] = 3890,
  [SMALL_STATE(113)] = 3910,
  [SMALL_STATE(114)] = 3930,
  [SMALL_STATE(115)] = 3950,
  [SMALL_STATE(116)] = 3970,
  [SMALL_STATE(117)] = 3988,
  [SMALL_STATE(118)] = 4006,
  [SMALL_STATE(119)] = 4024,
  [SMALL_STATE(120)] = 4044,
  [SMALL_STATE(121)] = 4062,
  [SMALL_STATE(122)] = 4082,
  [SMALL_STATE(123)] = 4100,
  [SMALL_STATE(124)] = 4120,
  [SMALL_STATE(125)] = 4138,
  [SMALL_STATE(126)] = 4156,
  [SMALL_STATE(127)] = 4174,
  [SMALL_STATE(128)] = 4198,
  [SMALL_STATE(129)] = 4216,
  [SMALL_STATE(130)] = 4237,
  [SMALL_STATE(131)] = 4254,
  [SMALL_STATE(132)] = 4271,
  [SMALL_STATE(133)] = 4292,
  [SMALL_STATE(134)] = 4313,
  [SMALL_STATE(135)] = 4334,
  [SMALL_STATE(136)] = 4355,
  [SMALL_STATE(137)] = 4376,
  [SMALL_STATE(138)] = 4397,
  [SMALL_STATE(139)] = 4418,
  [SMALL_STATE(140)] = 4439,
  [SMALL_STATE(141)] = 4460,
  [SMALL_STATE(142)] = 4477,
  [SMALL_STATE(143)] = 4498,
  [SMALL_STATE(144)] = 4521,
  [SMALL_STATE(145)] = 4544,
  [SMALL_STATE(146)] = 4563,
  [SMALL_STATE(147)] = 4585,
  [SMALL_STATE(148)] = 4604,
  [SMALL_STATE(149)] = 4623,
  [SMALL_STATE(150)] = 4640,
  [SMALL_STATE(151)] = 4659,
  [SMALL_STATE(152)] = 4674,
  [SMALL_STATE(153)] = 4693,
  [SMALL_STATE(154)] = 4712,
  [SMALL_STATE(155)] = 4727,
  [SMALL_STATE(156)] = 4743,
  [SMALL_STATE(157)] = 4759,
  [SMALL_STATE(158)] = 4775,
  [SMALL_STATE(159)] = 4789,
  [SMALL_STATE(160)] = 4803,
  [SMALL_STATE(161)] = 4819,
  [SMALL_STATE(162)] = 4835,
  [SMALL_STATE(163)] = 4851,
  [SMALL_STATE(164)] = 4867,
  [SMALL_STATE(165)] = 4881,
  [SMALL_STATE(166)] = 4897,
  [SMALL_STATE(167)] = 4913,
  [SMALL_STATE(168)] = 4929,
  [SMALL_STATE(169)] = 4945,
  [SMALL_STATE(170)] = 4961,
  [SMALL_STATE(171)] = 4977,
  [SMALL_STATE(172)] = 4991,
  [SMALL_STATE(173)] = 5007,
  [SMALL_STATE(174)] = 5023,
  [SMALL_STATE(175)] = 5036,
  [SMALL_STATE(176)] = 5049,
  [SMALL_STATE(177)] = 5062,
  [SMALL_STATE(178)] = 5075,
  [SMALL_STATE(179)] = 5088,
  [SMALL_STATE(180)] = 5101,
  [SMALL_STATE(181)] = 5114,
  [SMALL_STATE(182)] = 5127,
  [SMALL_STATE(183)] = 5140,
  [SMALL_STATE(184)] = 5153,
  [SMALL_STATE(185)] = 5166,
  [SMALL_STATE(186)] = 5179,
  [SMALL_STATE(187)] = 5192,
  [SMALL_STATE(188)] = 5205,
  [SMALL_STATE(189)] = 5218,
  [SMALL_STATE(190)] = 5231,
  [SMALL_STATE(191)] = 5244,
  [SMALL_STATE(192)] = 5257,
  [SMALL_STATE(193)] = 5270,
  [SMALL_STATE(194)] = 5283,
  [SMALL_STATE(195)] = 5296,
  [SMALL_STATE(196)] = 5309,
  [SMALL_STATE(197)] = 5322,
  [SMALL_STATE(198)] = 5335,
  [SMALL_STATE(199)] = 5348,
  [SMALL_STATE(200)] = 5361,
  [SMALL_STATE(201)] = 5374,
  [SMALL_STATE(202)] = 5387,
  [SMALL_STATE(203)] = 5400,
  [SMALL_STATE(204)] = 5413,
  [SMALL_STATE(205)] = 5426,
  [SMALL_STATE(206)] = 5439,
  [SMALL_STATE(207)] = 5452,
  [SMALL_STATE(208)] = 5465,
  [SMALL_STATE(209)] = 5478,
  [SMALL_STATE(210)] = 5491,
  [SMALL_STATE(211)] = 5504,
  [SMALL_STATE(212)] = 5517,
  [SMALL_STATE(213)] = 5530,
  [SMALL_STATE(214)] = 5543,
  [SMALL_STATE(215)] = 5556,
  [SMALL_STATE(216)] = 5569,
  [SMALL_STATE(217)] = 5582,
  [SMALL_STATE(218)] = 5595,
  [SMALL_STATE(219)] = 5608,
  [SMALL_STATE(220)] = 5621,
  [SMALL_STATE(221)] = 5634,
  [SMALL_STATE(222)] = 5647,
  [SMALL_STATE(223)] = 5651,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(166),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(142),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(61),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(147),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(26),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(170),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(169),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(157),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(167),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(168),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(127),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(136),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(137),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(139),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 3, .production_id = 43),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 3, .production_id = 43),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(172),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(66),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(66),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(158),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(218),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(219),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(217),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 45), SHIFT_REPEAT(190),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_register, 2, .production_id = 21),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_register, 2, .production_id = 21),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 34),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 34),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(181),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(171),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(198),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(175),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(201),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 2, .production_id = 27),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2, .production_id = 27),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 19),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mem, 2, .production_id = 14),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem, 2, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 15),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 15),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 27),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 27),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 27),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 27),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 27),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 27),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 27),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 27),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 27),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 27),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 27),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 27),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 27),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 27),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 27),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 27),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 27),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 27),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 27),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 27),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 27),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 27),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 27),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 27),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(155),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(199),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(197),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(196),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(195),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 26),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 26),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 38),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 38),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_inst_label, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_inst_label, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_value, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_value, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 42),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 42),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 31), SHIFT_REPEAT(89),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 31), SHIFT_REPEAT(183),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 31),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 31), SHIFT_REPEAT(146),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 31), SHIFT_REPEAT(143),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 31), SHIFT_REPEAT(156),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 2, .production_id = 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 3, .production_id = 13),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 24), SHIFT_REPEAT(192),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 24),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 24), SHIFT_REPEAT(190),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 24), SHIFT_REPEAT(144),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(201),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 2, .production_id = 5),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 36), SHIFT_REPEAT(192),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 36),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 36), SHIFT_REPEAT(190),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 26),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 4, .production_id = 13),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 3, .production_id = 5),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 4, .production_id = 23),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 33),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 33), SHIFT_REPEAT(183),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 5, .production_id = 39),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 24), SHIFT_REPEAT(192),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 24),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 24), SHIFT_REPEAT(190),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 3, .production_id = 16),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_binary, 5, .production_id = 41),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 18),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 18),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 1, .production_id = 18),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 1, .production_id = 18),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 4, .production_id = 30),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 2, .production_id = 32),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 2, .production_id = 32),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 30),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 16),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_jmp, 2, .production_id = 29),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_jmp, 2, .production_id = 29),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 28),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 44),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 44),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 16),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 44),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 44),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_branching, 7, .production_id = 46),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 11),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_reg, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_register, 3, .production_id = 37),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 1, .production_id = 12),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 17),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 17),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(164),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 1, .production_id = 12),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 1, .production_id = 22),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 3, .production_id = 10),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_head, 5, .production_id = 40),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 5, .production_id = 35),
  [662] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 4, .production_id = 20),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_head, 4, .production_id = 25),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
