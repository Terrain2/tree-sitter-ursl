#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 271
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 57

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
  anon_sym_DQUOTE = 19,
  anon_sym_SQUOTE = 20,
  sym_string_segment = 21,
  sym_char_value = 22,
  anon_sym_BSLASHx = 23,
  anon_sym_BSLASHu = 24,
  anon_sym_BSLASHu_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_BSLASHU = 27,
  anon_sym_BSLASHU_LBRACE = 28,
  anon_sym_BSLASH = 29,
  sym_hex_escape = 30,
  sym_unicode_escape = 31,
  sym_unicode_escape_short = 32,
  sym_unicode_escape_long = 33,
  sym_char_escape = 34,
  anon_sym_AT = 35,
  anon_sym_POUND = 36,
  anon_sym_PERCENT = 37,
  anon_sym_COLON = 38,
  sym_end_label = 39,
  anon_sym_DOT = 40,
  anon_sym_DASH_GT = 41,
  anon_sym_func = 42,
  anon_sym_SEMI = 43,
  anon_sym_extern = 44,
  anon_sym_EQ = 45,
  anon_sym_PLUS = 46,
  anon_sym_LBRACE = 47,
  anon_sym_RBRACE2 = 48,
  anon_sym_inst = 49,
  anon_sym_branch = 50,
  anon_sym___unary__ = 51,
  anon_sym___binary__ = 52,
  anon_sym___branching__ = 53,
  anon_sym_height = 54,
  anon_sym_const = 55,
  anon_sym_perm = 56,
  sym_halt = 57,
  anon_sym_in = 58,
  anon_sym_out = 59,
  anon_sym_label = 60,
  anon_sym_jump = 61,
  sym_ret = 62,
  anon_sym_call = 63,
  anon_sym_icall = 64,
  anon_sym_ref = 65,
  anon_sym_get = 66,
  anon_sym_set = 67,
  anon_sym_AMP = 68,
  anon_sym_LT = 69,
  anon_sym_GT = 70,
  anon_sym_JMP = 71,
  anon_sym_IN = 72,
  anon_sym_OUT = 73,
  sym_source_file = 74,
  sym__header = 75,
  sym_bits = 76,
  sym_minstack = 77,
  sym_minheap = 78,
  sym_comment = 79,
  sym_function_name = 80,
  sym__data_literal = 81,
  sym_array = 82,
  sym__literal = 83,
  sym_number = 84,
  sym_string = 85,
  sym_char = 86,
  sym_escape_sequence = 87,
  sym_macro = 88,
  sym_mem = 89,
  sym_port = 90,
  sym_inst_label = 91,
  sym__any_inst_label = 92,
  sym_data_label = 93,
  sym_definition = 94,
  sym_stack_behaviour = 95,
  sym_deferred_func = 96,
  sym_extern_func = 97,
  sym_func_head = 98,
  sym_func = 99,
  sym_inst_head = 100,
  sym_inst = 101,
  sym_branch_head = 102,
  sym_inst_branch = 103,
  sym_inst_permutation = 104,
  sym__internal = 105,
  sym_dunder_unary = 106,
  sym_dunder_binary = 107,
  sym_dunder_branching = 108,
  sym_permutation = 109,
  sym_stack_frame = 110,
  sym__instruction = 111,
  sym_height = 112,
  sym_const = 113,
  sym_perm = 114,
  sym_in = 115,
  sym_out = 116,
  sym_label = 117,
  sym_jump = 118,
  sym_branch = 119,
  sym_call = 120,
  sym_icall = 121,
  sym_ref = 122,
  sym_get = 123,
  sym_set = 124,
  sym_extern_icall = 125,
  sym_custom_instruction = 126,
  sym_urcl_instruction = 127,
  sym_index_register = 128,
  sym_named_register = 129,
  sym__reg = 130,
  sym_input_register = 131,
  sym__input_reg = 132,
  sym__urcl_value = 133,
  sym_urcl_jmp = 134,
  sym_urcl_in = 135,
  sym_urcl_out = 136,
  sym_urcl_generic = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_source_file_repeat2 = 139,
  aux_sym_source_file_repeat3 = 140,
  aux_sym_array_repeat1 = 141,
  aux_sym_string_repeat1 = 142,
  aux_sym_func_repeat1 = 143,
  aux_sym_inst_head_repeat1 = 144,
  aux_sym_inst_head_repeat2 = 145,
  aux_sym_inst_repeat1 = 146,
  aux_sym_branch_head_repeat1 = 147,
  aux_sym_stack_frame_repeat1 = 148,
  aux_sym_urcl_instruction_repeat1 = 149,
  aux_sym_urcl_generic_repeat1 = 150,
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
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_string_segment] = "string_segment",
  [sym_char_value] = "char_value",
  [anon_sym_BSLASHx] = "\\x",
  [anon_sym_BSLASHu] = "\\u",
  [anon_sym_BSLASHu_LBRACE] = "\\u{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASHU] = "\\U",
  [anon_sym_BSLASHU_LBRACE] = "\\U{",
  [anon_sym_BSLASH] = "\\",
  [sym_hex_escape] = "hex_escape",
  [sym_unicode_escape] = "unicode_escape",
  [sym_unicode_escape_short] = "unicode_escape",
  [sym_unicode_escape_long] = "unicode_escape",
  [sym_char_escape] = "char_escape",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_PERCENT] = "%",
  [anon_sym_COLON] = ":",
  [sym_end_label] = "end_label",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_func] = "func",
  [anon_sym_SEMI] = ";",
  [anon_sym_extern] = "extern",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_inst] = "inst",
  [anon_sym_branch] = "branch",
  [anon_sym___unary__] = "__unary__",
  [anon_sym___binary__] = "__binary__",
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
  [sym__data_literal] = "_data_literal",
  [sym_array] = "array",
  [sym__literal] = "_literal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_escape_sequence] = "escape_sequence",
  [sym_macro] = "macro",
  [sym_mem] = "mem",
  [sym_port] = "port",
  [sym_inst_label] = "inst_label",
  [sym__any_inst_label] = "_any_inst_label",
  [sym_data_label] = "data_label",
  [sym_definition] = "definition",
  [sym_stack_behaviour] = "stack_behaviour",
  [sym_deferred_func] = "deferred_func",
  [sym_extern_func] = "extern_func",
  [sym_func_head] = "func_head",
  [sym_func] = "func",
  [sym_inst_head] = "inst_head",
  [sym_inst] = "inst",
  [sym_branch_head] = "branch_head",
  [sym_inst_branch] = "inst_branch",
  [sym_inst_permutation] = "inst_permutation",
  [sym__internal] = "_internal",
  [sym_dunder_unary] = "dunder_unary",
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
  [sym_extern_icall] = "extern_icall",
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
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string_segment] = sym_string_segment,
  [sym_char_value] = sym_char_value,
  [anon_sym_BSLASHx] = anon_sym_BSLASHx,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [anon_sym_BSLASHu_LBRACE] = anon_sym_BSLASHu_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASHU] = anon_sym_BSLASHU,
  [anon_sym_BSLASHU_LBRACE] = anon_sym_BSLASHU_LBRACE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_hex_escape] = sym_hex_escape,
  [sym_unicode_escape] = sym_unicode_escape,
  [sym_unicode_escape_short] = sym_unicode_escape,
  [sym_unicode_escape_long] = sym_unicode_escape,
  [sym_char_escape] = sym_char_escape,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_end_label] = sym_end_label,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_inst] = anon_sym_inst,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym___unary__] = anon_sym___unary__,
  [anon_sym___binary__] = anon_sym___binary__,
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
  [sym__data_literal] = sym__data_literal,
  [sym_array] = sym_array,
  [sym__literal] = sym__literal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_macro] = sym_macro,
  [sym_mem] = sym_mem,
  [sym_port] = sym_port,
  [sym_inst_label] = sym_inst_label,
  [sym__any_inst_label] = sym__any_inst_label,
  [sym_data_label] = sym_data_label,
  [sym_definition] = sym_definition,
  [sym_stack_behaviour] = sym_stack_behaviour,
  [sym_deferred_func] = sym_deferred_func,
  [sym_extern_func] = sym_extern_func,
  [sym_func_head] = sym_func_head,
  [sym_func] = sym_func,
  [sym_inst_head] = sym_inst_head,
  [sym_inst] = sym_inst,
  [sym_branch_head] = sym_branch_head,
  [sym_inst_branch] = sym_inst_branch,
  [sym_inst_permutation] = sym_inst_permutation,
  [sym__internal] = sym__internal,
  [sym_dunder_unary] = sym_dunder_unary,
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
  [sym_extern_icall] = sym_extern_icall,
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
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_char_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHu_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHU_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_escape_short] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_escape_long] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_RBRACE2] = {
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
  [anon_sym___unary__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___binary__] = {
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
  [sym__data_literal] = {
    .visible = false,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_deferred_func] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_func] = {
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
  [sym_dunder_unary] = {
    .visible = true,
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
  [sym_extern_icall] = {
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
  [aux_sym_string_repeat1] = {
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
  field_call_convention = 3,
  field_code = 4,
  field_content = 5,
  field_data = 6,
  field_dest = 7,
  field_head = 8,
  field_headers = 9,
  field_index = 10,
  field_input = 11,
  field_instruction = 12,
  field_item = 13,
  field_items = 14,
  field_label = 15,
  field_locals = 16,
  field_name = 17,
  field_op = 18,
  field_opcode = 19,
  field_operand = 20,
  field_output = 21,
  field_params = 22,
  field_permutation = 23,
  field_reg = 24,
  field_returns = 25,
  field_source = 26,
  field_stack = 27,
  field_value = 28,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_addr] = "addr",
  [field_branch] = "branch",
  [field_call_convention] = "call_convention",
  [field_code] = "code",
  [field_content] = "content",
  [field_data] = "data",
  [field_dest] = "dest",
  [field_head] = "head",
  [field_headers] = "headers",
  [field_index] = "index",
  [field_input] = "input",
  [field_instruction] = "instruction",
  [field_item] = "item",
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
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 3},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 1},
  [23] = {.index = 32, .length = 2},
  [24] = {.index = 34, .length = 1},
  [25] = {.index = 35, .length = 1},
  [26] = {.index = 36, .length = 2},
  [27] = {.index = 38, .length = 2},
  [28] = {.index = 40, .length = 2},
  [29] = {.index = 42, .length = 1},
  [30] = {.index = 43, .length = 1},
  [31] = {.index = 44, .length = 1},
  [32] = {.index = 45, .length = 2},
  [33] = {.index = 47, .length = 1},
  [34] = {.index = 48, .length = 2},
  [35] = {.index = 50, .length = 2},
  [36] = {.index = 52, .length = 2},
  [37] = {.index = 54, .length = 2},
  [38] = {.index = 56, .length = 2},
  [39] = {.index = 58, .length = 3},
  [40] = {.index = 61, .length = 2},
  [41] = {.index = 63, .length = 1},
  [42] = {.index = 64, .length = 2},
  [43] = {.index = 66, .length = 1},
  [44] = {.index = 67, .length = 2},
  [45] = {.index = 69, .length = 3},
  [46] = {.index = 72, .length = 3},
  [47] = {.index = 75, .length = 2},
  [48] = {.index = 77, .length = 1},
  [49] = {.index = 78, .length = 3},
  [50] = {.index = 81, .length = 2},
  [51] = {.index = 83, .length = 3},
  [52] = {.index = 86, .length = 2},
  [53] = {.index = 88, .length = 2},
  [54] = {.index = 90, .length = 3},
  [55] = {.index = 93, .length = 3},
  [56] = {.index = 96, .length = 4},
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
    {field_content, 0},
  [16] =
    {field_name, 1},
    {field_permutation, 2},
  [18] =
    {field_input, 0},
  [19] =
    {field_input, 2, .inherited = true},
    {field_name, 1},
  [21] =
    {field_addr, 1},
  [22] =
    {field_opcode, 0},
  [23] =
    {field_head, 0},
  [24] =
    {field_label, 0},
  [25] =
    {field_instruction, 0},
  [26] =
    {field_code, 2},
    {field_data, 1},
    {field_headers, 0},
  [29] =
    {field_locals, 3},
    {field_name, 1},
  [31] =
    {field_content, 1, .inherited = true},
  [32] =
    {field_content, 0, .inherited = true},
    {field_content, 1, .inherited = true},
  [34] =
    {field_index, 1},
  [35] =
    {field_output, 0},
  [36] =
    {field_name, 1},
    {field_output, 3, .inherited = true},
  [38] =
    {field_input, 0, .inherited = true},
    {field_input, 1, .inherited = true},
  [40] =
    {field_label, 3},
    {field_name, 1},
  [42] =
    {field_item, 1},
  [43] =
    {field_content, 1},
  [44] =
    {field_operand, 1},
  [45] =
    {field_head, 0},
    {field_instruction, 2},
  [47] =
    {field_dest, 1},
  [48] =
    {field_head, 0},
    {field_instruction, 2, .inherited = true},
  [50] =
    {field_instruction, 0, .inherited = true},
    {field_instruction, 1, .inherited = true},
  [52] =
    {field_instruction, 1},
    {field_label, 0, .inherited = true},
  [54] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [56] =
    {field_params, 0},
    {field_returns, 2},
  [58] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [61] =
    {field_call_convention, 1},
    {field_name, 3},
  [63] =
    {field_items, 1},
  [64] =
    {field_output, 0, .inherited = true},
    {field_output, 1, .inherited = true},
  [66] =
    {field_reg, 1},
  [67] =
    {field_input, 0},
    {field_output, 2},
  [69] =
    {field_input, 2, .inherited = true},
    {field_name, 1},
    {field_output, 4, .inherited = true},
  [72] =
    {field_input, 2, .inherited = true},
    {field_label, 4},
    {field_name, 1},
  [75] =
    {field_instruction, 3},
    {field_name, 1},
  [77] =
    {field_source, 0},
  [78] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2, .inherited = true},
  [81] =
    {field_dest, 1},
    {field_source, 2},
  [83] =
    {field_call_convention, 1},
    {field_name, 3},
    {field_stack, 4},
  [86] =
    {field_call_convention, 1},
    {field_operand, 3},
  [88] =
    {field_source, 0, .inherited = true},
    {field_source, 1, .inherited = true},
  [90] =
    {field_call_convention, 1},
    {field_label, 5},
    {field_name, 3},
  [93] =
    {field_branch, 5},
    {field_instruction, 3},
    {field_name, 1},
  [96] =
    {field_call_convention, 1},
    {field_label, 6},
    {field_name, 3},
    {field_stack, 4},
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
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '&') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'j') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '&') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == 'I') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '&') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'j') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(196);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != 'U' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(224);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(233);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(281);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(279);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(283);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(246);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 107:
      if (lookahead == 'x') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 110:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '&') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'j') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      END_STATE();
    case 125:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '&') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '&') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_minstack);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_minheap);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(280);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(284);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_imm_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '0') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_string_segment);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_string_segment);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string_segment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_char_value);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_char_value);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      if (lookahead == '{') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASHu_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      if (lookahead == '{') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASHU_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_hex_escape);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unicode_escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_unicode_escape_short);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unicode_escape_long);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_char_escape);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '$') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_end_label);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym___unary__);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym___binary__);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym___branching__);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ret);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 125},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 125},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 125},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 125},
  [11] = {.lex_state = 125},
  [12] = {.lex_state = 125},
  [13] = {.lex_state = 125},
  [14] = {.lex_state = 125},
  [15] = {.lex_state = 125},
  [16] = {.lex_state = 125},
  [17] = {.lex_state = 125},
  [18] = {.lex_state = 125},
  [19] = {.lex_state = 125},
  [20] = {.lex_state = 125},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 125},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 125},
  [25] = {.lex_state = 125},
  [26] = {.lex_state = 125},
  [27] = {.lex_state = 125},
  [28] = {.lex_state = 125},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 125},
  [32] = {.lex_state = 125},
  [33] = {.lex_state = 125},
  [34] = {.lex_state = 125},
  [35] = {.lex_state = 125},
  [36] = {.lex_state = 125},
  [37] = {.lex_state = 125},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 125},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 125},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 125},
  [86] = {.lex_state = 125},
  [87] = {.lex_state = 125},
  [88] = {.lex_state = 125},
  [89] = {.lex_state = 125},
  [90] = {.lex_state = 125},
  [91] = {.lex_state = 125},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 125},
  [99] = {.lex_state = 125},
  [100] = {.lex_state = 125},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 125},
  [103] = {.lex_state = 125},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 125},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 125},
  [109] = {.lex_state = 125},
  [110] = {.lex_state = 125},
  [111] = {.lex_state = 125},
  [112] = {.lex_state = 125},
  [113] = {.lex_state = 125},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 125},
  [116] = {.lex_state = 125},
  [117] = {.lex_state = 125},
  [118] = {.lex_state = 125},
  [119] = {.lex_state = 125},
  [120] = {.lex_state = 125},
  [121] = {.lex_state = 125},
  [122] = {.lex_state = 125},
  [123] = {.lex_state = 125},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 125},
  [126] = {.lex_state = 125},
  [127] = {.lex_state = 125},
  [128] = {.lex_state = 125},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 125},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 125},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 125},
  [153] = {.lex_state = 125},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 125},
  [157] = {.lex_state = 125},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 125},
  [161] = {.lex_state = 125},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 125},
  [164] = {.lex_state = 125},
  [165] = {.lex_state = 125},
  [166] = {.lex_state = 125},
  [167] = {.lex_state = 125},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 190},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 125},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 12},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 125},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 11},
  [269] = {(TSStateId)(-1)},
  [270] = {(TSStateId)(-1)},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASHx] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASHU] = ACTIONS(1),
    [anon_sym_BSLASHU_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_end_label] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [anon_sym_inst] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym___unary__] = ACTIONS(1),
    [anon_sym___binary__] = ACTIONS(1),
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
    [sym_source_file] = STATE(230),
    [sym__header] = STATE(88),
    [sym_bits] = STATE(86),
    [sym_minstack] = STATE(86),
    [sym_minheap] = STATE(86),
    [sym_comment] = STATE(1),
    [sym_data_label] = STATE(26),
    [sym_definition] = STATE(102),
    [sym_deferred_func] = STATE(109),
    [sym_extern_func] = STATE(109),
    [sym_func_head] = STATE(228),
    [sym_func] = STATE(109),
    [sym_inst_head] = STATE(227),
    [sym_inst] = STATE(109),
    [sym_branch_head] = STATE(226),
    [sym_inst_branch] = STATE(109),
    [sym_inst_permutation] = STATE(109),
    [sym__internal] = STATE(109),
    [sym_dunder_unary] = STATE(110),
    [sym_dunder_binary] = STATE(110),
    [sym_dunder_branching] = STATE(110),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(10),
    [aux_sym_source_file_repeat3] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_bits] = ACTIONS(9),
    [anon_sym_minstack] = ACTIONS(11),
    [anon_sym_minheap] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_extern] = ACTIONS(19),
    [anon_sym_inst] = ACTIONS(21),
    [anon_sym_branch] = ACTIONS(23),
    [anon_sym___unary__] = ACTIONS(25),
    [anon_sym___binary__] = ACTIONS(27),
    [anon_sym___branching__] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_extern,
    ACTIONS(35), 1,
      anon_sym_RBRACE2,
    ACTIONS(37), 1,
      anon_sym_branch,
    ACTIONS(39), 1,
      anon_sym_height,
    ACTIONS(41), 1,
      anon_sym_const,
    ACTIONS(43), 1,
      anon_sym_perm,
    ACTIONS(47), 1,
      anon_sym_in,
    ACTIONS(49), 1,
      anon_sym_out,
    ACTIONS(51), 1,
      anon_sym_label,
    ACTIONS(53), 1,
      anon_sym_jump,
    ACTIONS(55), 1,
      anon_sym_call,
    ACTIONS(57), 1,
      anon_sym_icall,
    ACTIONS(59), 1,
      anon_sym_ref,
    ACTIONS(61), 1,
      anon_sym_get,
    ACTIONS(63), 1,
      anon_sym_set,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_func_repeat1,
    STATE(40), 1,
      sym__instruction,
    ACTIONS(45), 2,
      sym_halt,
      sym_ret,
    STATE(41), 15,
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
      sym_extern_icall,
      sym_custom_instruction,
  [85] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_extern,
    ACTIONS(37), 1,
      anon_sym_branch,
    ACTIONS(39), 1,
      anon_sym_height,
    ACTIONS(41), 1,
      anon_sym_const,
    ACTIONS(43), 1,
      anon_sym_perm,
    ACTIONS(47), 1,
      anon_sym_in,
    ACTIONS(49), 1,
      anon_sym_out,
    ACTIONS(51), 1,
      anon_sym_label,
    ACTIONS(53), 1,
      anon_sym_jump,
    ACTIONS(55), 1,
      anon_sym_call,
    ACTIONS(57), 1,
      anon_sym_icall,
    ACTIONS(59), 1,
      anon_sym_ref,
    ACTIONS(61), 1,
      anon_sym_get,
    ACTIONS(63), 1,
      anon_sym_set,
    ACTIONS(65), 1,
      anon_sym_RBRACE2,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(40), 1,
      sym__instruction,
    ACTIONS(45), 2,
      sym_halt,
      sym_ret,
    STATE(41), 15,
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
      sym_extern_icall,
      sym_custom_instruction,
  [170] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_extern,
    ACTIONS(73), 1,
      anon_sym_RBRACE2,
    ACTIONS(75), 1,
      anon_sym_branch,
    ACTIONS(78), 1,
      anon_sym_height,
    ACTIONS(81), 1,
      anon_sym_const,
    ACTIONS(84), 1,
      anon_sym_perm,
    ACTIONS(90), 1,
      anon_sym_in,
    ACTIONS(93), 1,
      anon_sym_out,
    ACTIONS(96), 1,
      anon_sym_label,
    ACTIONS(99), 1,
      anon_sym_jump,
    ACTIONS(102), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_icall,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(111), 1,
      anon_sym_get,
    ACTIONS(114), 1,
      anon_sym_set,
    STATE(40), 1,
      sym__instruction,
    ACTIONS(87), 2,
      sym_halt,
      sym_ret,
    STATE(4), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(41), 15,
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
      sym_extern_icall,
      sym_custom_instruction,
  [253] = 27,
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
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(18), 1,
      aux_sym_source_file_repeat3,
    STATE(26), 1,
      sym_data_label,
    STATE(66), 1,
      aux_sym_source_file_repeat1,
    STATE(88), 1,
      sym__header,
    STATE(102), 1,
      sym_definition,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(86), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [345] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_number_token3,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_AMP,
    STATE(72), 1,
      sym__urcl_value,
    ACTIONS(139), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    STATE(6), 2,
      sym_comment,
      aux_sym_urcl_generic_repeat1,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(74), 2,
      sym__literal,
      sym__reg,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(119), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(78), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [411] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      aux_sym_number_token3,
    STATE(7), 1,
      sym_comment,
    ACTIONS(147), 27,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_SEMI,
      anon_sym_extern,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [453] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_number_token3,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_AMP,
    STATE(6), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(72), 1,
      sym__urcl_value,
    ACTIONS(165), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(74), 2,
      sym__literal,
      sym__reg,
    ACTIONS(155), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(151), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(78), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [521] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(173), 10,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
    ACTIONS(171), 18,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_extern,
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
  [563] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_source_file_repeat3,
    STATE(26), 1,
      sym_data_label,
    STATE(87), 1,
      aux_sym_source_file_repeat2,
    STATE(102), 1,
      sym_definition,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [635] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_source_file_repeat3,
    STATE(26), 1,
      sym_data_label,
    STATE(87), 1,
      aux_sym_source_file_repeat2,
    STATE(102), 1,
      sym_definition,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      aux_sym_number_token3,
    STATE(12), 1,
      sym_comment,
    ACTIONS(179), 23,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_SEMI,
      anon_sym_extern,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [745] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    ACTIONS(194), 1,
      aux_sym_number_token3,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(206), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym__data_literal,
    STATE(13), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(191), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(32), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(37), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [804] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      anon_sym_POUND,
    STATE(13), 1,
      aux_sym_array_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(85), 1,
      sym__data_literal,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(32), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(37), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [865] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_array_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(85), 1,
      sym__data_literal,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(32), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(37), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [926] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      anon_sym_func,
    ACTIONS(237), 1,
      anon_sym_extern,
    ACTIONS(240), 1,
      anon_sym_inst,
    ACTIONS(243), 1,
      anon_sym_branch,
    ACTIONS(246), 1,
      anon_sym___unary__,
    ACTIONS(249), 1,
      anon_sym___binary__,
    ACTIONS(252), 1,
      anon_sym___branching__,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(16), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [984] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat3,
    STATE(17), 1,
      sym_comment,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1044] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat3,
    STATE(18), 1,
      sym_comment,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1104] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat3,
    STATE(19), 1,
      sym_comment,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1164] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_number_token3,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_AMP,
    STATE(8), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(72), 1,
      sym__urcl_value,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(74), 2,
      sym__literal,
      sym__reg,
    ACTIONS(155), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(78), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE2,
    ACTIONS(261), 17,
      sym_identifier,
      anon_sym_extern,
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
  [1258] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_inst,
    ACTIONS(23), 1,
      anon_sym_branch,
    ACTIONS(25), 1,
      anon_sym___unary__,
    ACTIONS(27), 1,
      anon_sym___binary__,
    ACTIONS(29), 1,
      anon_sym___branching__,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat3,
    STATE(22), 1,
      sym_comment,
    STATE(226), 1,
      sym_branch_head,
    STATE(227), 1,
      sym_inst_head,
    STATE(228), 1,
      sym_func_head,
    STATE(110), 3,
      sym_dunder_unary,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(109), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(267), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(269), 16,
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
      anon_sym_RBRACE2,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
  [1353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      aux_sym_number_token3,
    STATE(24), 1,
      sym_comment,
    ACTIONS(271), 20,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_SEMI,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1388] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_number_token3,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_AMP,
    STATE(25), 1,
      sym_comment,
    STATE(147), 1,
      sym__urcl_value,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(74), 2,
      sym__literal,
      sym__reg,
    ACTIONS(155), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(78), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1443] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    STATE(99), 1,
      sym__data_literal,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(32), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(37), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1498] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      aux_sym_number_token3,
    STATE(27), 1,
      sym_comment,
    ACTIONS(275), 20,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
      anon_sym_icall,
  [1533] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      aux_sym_number_token3,
    STATE(28), 1,
      sym_comment,
    ACTIONS(279), 20,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
      anon_sym_icall,
  [1568] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(285), 16,
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
      anon_sym_RBRACE2,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
  [1603] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(287), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(289), 16,
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
      anon_sym_RBRACE2,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
  [1638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_number_token3,
    STATE(31), 1,
      sym_comment,
    ACTIONS(291), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1672] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      aux_sym_number_token3,
    STATE(32), 1,
      sym_comment,
    ACTIONS(295), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1706] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_number_token3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(299), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1740] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      aux_sym_number_token3,
    STATE(34), 1,
      sym_comment,
    ACTIONS(303), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1774] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      aux_sym_number_token3,
    STATE(35), 1,
      sym_comment,
    ACTIONS(307), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym_number_token3,
    STATE(36), 1,
      sym_comment,
    ACTIONS(311), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1842] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_comment,
    ACTIONS(315), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [1876] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_RBRACE2,
    STATE(38), 1,
      sym_comment,
    ACTIONS(319), 17,
      sym_identifier,
      anon_sym_extern,
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
  [1908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      anon_sym_RBRACE2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(323), 17,
      sym_identifier,
      anon_sym_extern,
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
  [1940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_RBRACE2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(327), 17,
      sym_identifier,
      anon_sym_extern,
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
  [1972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_RBRACE2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(331), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2004] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_RBRACE2,
    STATE(42), 1,
      sym_comment,
    ACTIONS(335), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2036] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      anon_sym_RBRACE2,
    STATE(43), 1,
      sym_comment,
    ACTIONS(317), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_RBRACE2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(273), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_RBRACE2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(339), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_RBRACE2,
    STATE(46), 1,
      sym_comment,
    ACTIONS(149), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2164] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      anon_sym_RBRACE2,
    STATE(47), 1,
      sym_comment,
    ACTIONS(343), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2196] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_RBRACE2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(347), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 1,
      anon_sym_RBRACE2,
    STATE(49), 1,
      sym_comment,
    ACTIONS(351), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_RBRACE2,
    STATE(50), 1,
      sym_comment,
    ACTIONS(355), 17,
      sym_identifier,
      anon_sym_extern,
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
    ACTIONS(361), 1,
      anon_sym_RBRACE2,
    STATE(51), 1,
      sym_comment,
    ACTIONS(359), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_RBRACE2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(181), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2356] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_RBRACE2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(363), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2388] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_RBRACE2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(293), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2420] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      anon_sym_RBRACE2,
    STATE(55), 1,
      sym_comment,
    ACTIONS(367), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2452] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 1,
      anon_sym_RBRACE2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(371), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2484] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(377), 1,
      anon_sym_RBRACE2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(375), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2516] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      anon_sym_RBRACE2,
    STATE(58), 1,
      sym_comment,
    ACTIONS(379), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2548] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      anon_sym_RBRACE2,
    STATE(59), 1,
      sym_comment,
    ACTIONS(383), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2580] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_RBRACE2,
    STATE(60), 1,
      sym_comment,
    ACTIONS(305), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_RBRACE2,
    STATE(61), 1,
      sym_comment,
    ACTIONS(301), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2644] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      anon_sym_RBRACE2,
    STATE(62), 1,
      sym_comment,
    ACTIONS(387), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2676] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_RBRACE2,
    STATE(63), 1,
      sym_comment,
    ACTIONS(391), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2708] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_RBRACE2,
    STATE(64), 1,
      sym_comment,
    ACTIONS(395), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2740] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_RBRACE2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(399), 17,
      sym_identifier,
      anon_sym_extern,
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
  [2772] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(405), 1,
      anon_sym_bits,
    ACTIONS(408), 1,
      anon_sym_minstack,
    ACTIONS(411), 1,
      anon_sym_minheap,
    STATE(88), 1,
      sym__header,
    STATE(66), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(86), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [2811] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(325), 12,
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
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [2842] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(273), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(271), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [2872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(149), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(147), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [2902] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      aux_sym_number_token3,
    ACTIONS(420), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      anon_sym_AT,
    ACTIONS(424), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym__literal,
    STATE(70), 1,
      sym_comment,
    ACTIONS(416), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(43), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2946] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(301), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(299), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [2976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(428), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(430), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3006] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(432), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(434), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3036] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(436), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(438), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3066] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(303), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3096] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(293), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(291), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(181), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(179), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(317), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(315), 11,
      anon_sym_DOLLAR,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE2,
      anon_sym_AMP,
  [3186] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_RBRACE2,
    ACTIONS(446), 1,
      anon_sym_JMP,
    ACTIONS(448), 1,
      anon_sym_IN,
    ACTIONS(450), 1,
      anon_sym_OUT,
    STATE(79), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_inst_repeat1,
    STATE(94), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(144), 1,
      sym_urcl_instruction,
    STATE(155), 1,
      sym_inst_label,
    STATE(143), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3232] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_DASH_GT,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    ACTIONS(460), 1,
      anon_sym_LT,
    STATE(80), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_inst_head_repeat1,
    STATE(116), 1,
      sym_permutation,
    STATE(151), 1,
      sym__input_reg,
    STATE(207), 1,
      sym_stack_frame,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(162), 2,
      sym__reg,
      sym_input_register,
  [3280] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_JMP,
    ACTIONS(448), 1,
      anon_sym_IN,
    ACTIONS(450), 1,
      anon_sym_OUT,
    ACTIONS(462), 1,
      anon_sym_RBRACE2,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_inst_repeat1,
    STATE(94), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(144), 1,
      sym_urcl_instruction,
    STATE(155), 1,
      sym_inst_label,
    STATE(143), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3326] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_JMP,
    ACTIONS(448), 1,
      anon_sym_IN,
    ACTIONS(450), 1,
      anon_sym_OUT,
    ACTIONS(464), 1,
      anon_sym_RBRACE2,
    STATE(81), 1,
      aux_sym_inst_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(144), 1,
      sym_urcl_instruction,
    STATE(155), 1,
      sym_inst_label,
    STATE(143), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3372] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_JMP,
    ACTIONS(448), 1,
      anon_sym_IN,
    ACTIONS(450), 1,
      anon_sym_OUT,
    ACTIONS(466), 1,
      anon_sym_RBRACE2,
    STATE(79), 1,
      aux_sym_inst_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(144), 1,
      sym_urcl_instruction,
    STATE(155), 1,
      sym_inst_label,
    STATE(143), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3418] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(474), 1,
      anon_sym_RBRACE2,
    ACTIONS(476), 1,
      anon_sym_JMP,
    ACTIONS(479), 1,
      anon_sym_IN,
    ACTIONS(482), 1,
      anon_sym_OUT,
    STATE(94), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(144), 1,
      sym_urcl_instruction,
    STATE(155), 1,
      sym_inst_label,
    STATE(84), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(143), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3462] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      aux_sym_number_token3,
    STATE(85), 1,
      sym_comment,
    ACTIONS(485), 11,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_DOT,
  [3488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(489), 12,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3512] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_data_label,
    STATE(102), 1,
      sym_definition,
    STATE(87), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(491), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(496), 12,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3566] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(498), 12,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(500), 12,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(502), 12,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3638] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_inst_head_repeat1,
    STATE(151), 1,
      sym__input_reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(162), 2,
      sym__reg,
      sym_input_register,
  [3677] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      anon_sym_DOLLAR,
    ACTIONS(513), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_LT,
    STATE(151), 1,
      sym__input_reg,
    ACTIONS(511), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(93), 2,
      sym_comment,
      aux_sym_inst_head_repeat1,
    STATE(162), 2,
      sym__reg,
      sym_input_register,
  [3712] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_JMP,
    ACTIONS(448), 1,
      anon_sym_IN,
    ACTIONS(450), 1,
      anon_sym_OUT,
    STATE(94), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(140), 1,
      sym_urcl_generic,
    STATE(141), 1,
      sym_urcl_in,
    STATE(142), 1,
      sym_urcl_out,
    STATE(149), 1,
      sym_urcl_jmp,
    STATE(155), 1,
      sym_inst_label,
  [3755] = 11,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      sym_string_segment,
    ACTIONS(528), 1,
      anon_sym_BSLASHx,
    ACTIONS(531), 1,
      anon_sym_BSLASHu,
    ACTIONS(537), 1,
      anon_sym_BSLASHU,
    ACTIONS(540), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym_escape_sequence,
    ACTIONS(534), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    STATE(95), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3791] = 12,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      sym_string_segment,
    ACTIONS(547), 1,
      anon_sym_BSLASHx,
    ACTIONS(549), 1,
      anon_sym_BSLASHu,
    ACTIONS(553), 1,
      anon_sym_BSLASHU,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    STATE(95), 1,
      aux_sym_string_repeat1,
    STATE(96), 1,
      sym_comment,
    STATE(124), 1,
      sym_escape_sequence,
    ACTIONS(551), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [3829] = 12,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      sym_string_segment,
    ACTIONS(547), 1,
      anon_sym_BSLASHx,
    ACTIONS(549), 1,
      anon_sym_BSLASHu,
    ACTIONS(553), 1,
      anon_sym_BSLASHU,
    ACTIONS(555), 1,
      anon_sym_BSLASH,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(97), 1,
      sym_comment,
    STATE(124), 1,
      sym_escape_sequence,
    ACTIONS(551), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [3867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(559), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3930] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      sym_end_label,
    STATE(73), 1,
      sym_inst_label,
    STATE(101), 1,
      sym_comment,
    STATE(20), 2,
      sym__any_inst_label,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [3963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(565), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [3984] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    ACTIONS(567), 1,
      anon_sym_SEMI,
    ACTIONS(569), 1,
      anon_sym_PLUS,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_comment,
    STATE(171), 1,
      sym_stack_behaviour,
    STATE(225), 1,
      sym_number,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4017] = 5,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(575), 3,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    ACTIONS(573), 5,
      anon_sym_DQUOTE,
      sym_string_segment,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
  [4039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(577), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4059] = 10,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      sym_char_value,
    ACTIONS(581), 1,
      anon_sym_BSLASHx,
    ACTIONS(583), 1,
      anon_sym_BSLASHu,
    ACTIONS(587), 1,
      anon_sym_BSLASHU,
    ACTIONS(589), 1,
      anon_sym_BSLASH,
    STATE(106), 1,
      sym_comment,
    STATE(266), 1,
      sym_escape_sequence,
    ACTIONS(585), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [4091] = 10,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_BSLASHx,
    ACTIONS(583), 1,
      anon_sym_BSLASHu,
    ACTIONS(587), 1,
      anon_sym_BSLASHU,
    ACTIONS(589), 1,
      anon_sym_BSLASH,
    ACTIONS(591), 1,
      sym_char_value,
    STATE(107), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_sequence,
    ACTIONS(585), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [4123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(593), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(595), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(599), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(601), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(603), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4243] = 10,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_BSLASHx,
    ACTIONS(583), 1,
      anon_sym_BSLASHu,
    ACTIONS(587), 1,
      anon_sym_BSLASHU,
    ACTIONS(589), 1,
      anon_sym_BSLASH,
    ACTIONS(605), 1,
      sym_char_value,
    STATE(114), 1,
      sym_comment,
    STATE(208), 1,
      sym_escape_sequence,
    ACTIONS(585), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [4275] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(607), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(609), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(611), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(613), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(615), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(617), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(619), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(621), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4435] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_comment,
    STATE(192), 1,
      sym_stack_behaviour,
    STATE(225), 1,
      sym_number,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4465] = 5,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    ACTIONS(627), 5,
      anon_sym_DQUOTE,
      sym_string_segment,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
  [4487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(631), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4507] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(633), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(635), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___unary__,
      anon_sym___binary__,
      anon_sym___branching__,
  [4567] = 5,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(639), 3,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    ACTIONS(637), 5,
      anon_sym_DQUOTE,
      sym_string_segment,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
  [4589] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(641), 1,
      anon_sym_DASH_GT,
    STATE(130), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_branch_head_repeat1,
    STATE(175), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [4618] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      anon_sym_DOLLAR,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_AMP,
    STATE(169), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(131), 2,
      sym_comment,
      aux_sym_inst_head_repeat2,
  [4645] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(653), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_inst_label,
    STATE(132), 2,
      sym_comment,
      aux_sym_urcl_instruction_repeat1,
    ACTIONS(651), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4668] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(656), 1,
      anon_sym_DOLLAR,
    ACTIONS(659), 1,
      anon_sym_DASH_GT,
    ACTIONS(661), 1,
      anon_sym_AMP,
    STATE(175), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
    STATE(133), 2,
      sym_comment,
      aux_sym_branch_head_repeat1,
  [4695] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      aux_sym_inst_head_repeat2,
    STATE(134), 1,
      sym_comment,
    STATE(169), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [4724] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(666), 1,
      anon_sym_DASH_GT,
    STATE(130), 1,
      aux_sym_branch_head_repeat1,
    STATE(135), 1,
      sym_comment,
    STATE(175), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [4753] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      aux_sym_inst_head_repeat2,
    STATE(136), 1,
      sym_comment,
    STATE(169), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [4782] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      aux_sym_inst_head_repeat2,
    STATE(137), 1,
      sym_comment,
    STATE(169), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [4811] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      aux_sym_inst_head_repeat2,
    STATE(138), 1,
      sym_comment,
    STATE(169), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [4840] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(171), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(674), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4880] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(674), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4900] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(674), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4920] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(678), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(682), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4960] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(47), 1,
      sym_stack_behaviour,
    STATE(145), 1,
      sym_comment,
    STATE(251), 1,
      sym_number,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4984] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(686), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [5004] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(690), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [5024] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(50), 1,
      sym_stack_behaviour,
    STATE(148), 1,
      sym_comment,
    STATE(251), 1,
      sym_number,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5048] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(674), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [5068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(694), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [5088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(698), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [5105] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(152), 1,
      sym_comment,
    STATE(204), 1,
      sym_number,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5126] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      aux_sym_number_token3,
    STATE(56), 1,
      sym_number,
    STATE(153), 1,
      sym_comment,
    ACTIONS(416), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5147] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym_comment,
    STATE(193), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [5170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
    ACTIONS(700), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [5189] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(156), 1,
      sym_comment,
    STATE(205), 1,
      sym_number,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5210] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_number,
    STATE(157), 1,
      sym_comment,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5231] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_AMP,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    STATE(158), 1,
      sym_comment,
    STATE(256), 1,
      sym__reg,
    STATE(29), 2,
      sym_index_register,
      sym_named_register,
  [5254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(159), 1,
      sym_comment,
    ACTIONS(704), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [5271] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(91), 1,
      sym_number,
    STATE(160), 1,
      sym_comment,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5292] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(90), 1,
      sym_number,
    STATE(161), 1,
      sym_comment,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(162), 1,
      sym_comment,
    ACTIONS(706), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [5330] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_number_token3,
    STATE(89), 1,
      sym_number,
    STATE(163), 1,
      sym_comment,
    ACTIONS(218), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5351] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_number,
    STATE(164), 1,
      sym_comment,
    ACTIONS(416), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5372] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      aux_sym_number_token3,
    STATE(65), 1,
      sym_number,
    STATE(165), 1,
      sym_comment,
    ACTIONS(416), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5393] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      aux_sym_number_token3,
    STATE(64), 1,
      sym_number,
    STATE(166), 1,
      sym_comment,
    ACTIONS(416), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5414] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      aux_sym_number_token3,
    STATE(63), 1,
      sym_number,
    STATE(167), 1,
      sym_comment,
    ACTIONS(416), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5435] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      sym_end_label,
    STATE(73), 1,
      sym_inst_label,
    STATE(150), 1,
      sym__any_inst_label,
    STATE(168), 1,
      sym_comment,
  [5457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(169), 1,
      sym_comment,
    ACTIONS(708), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_AMP,
  [5472] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_stack_frame_repeat1,
  [5491] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(714), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_PLUS,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_comment,
  [5510] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      aux_sym_stack_frame_repeat1,
    STATE(172), 1,
      sym_comment,
  [5529] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_stack_frame_repeat1,
  [5548] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_stack_frame_repeat1,
  [5567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      sym_comment,
    ACTIONS(726), 3,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_AMP,
  [5582] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_permutation,
    STATE(176), 1,
      sym_comment,
    STATE(234), 1,
      sym_stack_frame,
  [5601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    STATE(177), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [5618] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_comment,
    STATE(213), 1,
      sym_string,
  [5634] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(733), 1,
      sym_imm_ident,
    ACTIONS(735), 1,
      sym_index,
    STATE(179), 1,
      sym_comment,
  [5650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(180), 1,
      sym_comment,
    ACTIONS(737), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [5664] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(739), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_stack_frame,
    STATE(181), 1,
      sym_comment,
  [5680] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_comment,
    STATE(244), 1,
      sym_inst_label,
  [5696] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_stack_frame,
    STATE(183), 1,
      sym_comment,
  [5712] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    STATE(123), 1,
      sym_function_name,
    STATE(184), 1,
      sym_comment,
  [5728] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
    STATE(210), 1,
      sym_inst_label,
  [5744] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym_function_name,
    STATE(186), 1,
      sym_comment,
  [5760] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      anon_sym_PERCENT,
    STATE(59), 1,
      sym_port,
    STATE(187), 1,
      sym_comment,
  [5776] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      anon_sym_PERCENT,
    STATE(45), 1,
      sym_port,
    STATE(188), 1,
      sym_comment,
  [5792] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(743), 1,
      anon_sym_COLON,
    STATE(51), 1,
      sym_inst_label,
    STATE(189), 1,
      sym_comment,
  [5808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(743), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_inst_label,
    STATE(190), 1,
      sym_comment,
  [5824] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(191), 1,
      sym_comment,
    STATE(217), 1,
      sym_data_label,
  [5840] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    ACTIONS(747), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_comment,
  [5856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      anon_sym_PERCENT,
    STATE(146), 1,
      sym_port,
    STATE(193), 1,
      sym_comment,
  [5872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      anon_sym_PERCENT,
    STATE(25), 1,
      sym_port,
    STATE(194), 1,
      sym_comment,
  [5888] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(743), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_inst_label,
    STATE(195), 1,
      sym_comment,
  [5904] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(196), 1,
      sym_comment,
    STATE(223), 1,
      sym_data_label,
  [5920] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_comment,
    STATE(224), 1,
      sym_string,
  [5936] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_function_name,
    STATE(198), 1,
      sym_comment,
  [5952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(751), 1,
      anon_sym_DASH_GT,
    STATE(199), 1,
      sym_comment,
  [5965] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(200), 1,
      sym_comment,
  [5978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(755), 1,
      sym_index,
    STATE(201), 1,
      sym_comment,
  [5991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(757), 1,
      sym_imm_ident,
    STATE(202), 1,
      sym_comment,
  [6004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(759), 1,
      anon_sym_DASH_GT,
    STATE(203), 1,
      sym_comment,
  [6017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(761), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_comment,
  [6030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_comment,
  [6043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(765), 1,
      sym_identifier,
    STATE(206), 1,
      sym_comment,
  [6056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    STATE(207), 1,
      sym_comment,
  [6069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(769), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      sym_comment,
  [6082] = 4,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(771), 1,
      aux_sym_comment_token1,
    STATE(209), 1,
      sym_comment,
  [6095] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_comment,
  [6108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(775), 1,
      sym_identifier,
    STATE(211), 1,
      sym_comment,
  [6121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_DASH_GT,
    STATE(212), 1,
      sym_comment,
  [6134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(779), 1,
      anon_sym_func,
    STATE(213), 1,
      sym_comment,
  [6147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(781), 1,
      sym_imm_ident,
    STATE(214), 1,
      sym_comment,
  [6160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(783), 1,
      sym_imm_ident,
    STATE(215), 1,
      sym_comment,
  [6173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_comment,
  [6186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      sym_comment,
  [6199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(789), 1,
      anon_sym_PLUS,
    STATE(218), 1,
      sym_comment,
  [6212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    STATE(219), 1,
      sym_comment,
  [6225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(793), 1,
      anon_sym_SLASH,
    STATE(220), 1,
      sym_comment,
  [6238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(221), 1,
      sym_comment,
  [6251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      sym_comment,
  [6264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      sym_comment,
  [6277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      anon_sym_icall,
    STATE(224), 1,
      sym_comment,
  [6290] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(803), 1,
      anon_sym_DASH_GT,
    STATE(225), 1,
      sym_comment,
  [6303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_comment,
  [6316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_comment,
  [6329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_comment,
  [6342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      sym_hex_escape,
    STATE(229), 1,
      sym_comment,
  [6355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_comment,
  [6368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      sym_comment,
  [6381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym_comment,
  [6394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(817), 1,
      sym_identifier,
    STATE(233), 1,
      sym_comment,
  [6407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(819), 1,
      anon_sym_DASH_GT,
    STATE(234), 1,
      sym_comment,
  [6420] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(821), 1,
      sym_identifier,
    STATE(235), 1,
      sym_comment,
  [6433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_comment,
  [6446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(823), 1,
      sym_identifier,
    STATE(237), 1,
      sym_comment,
  [6459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(825), 1,
      sym_identifier,
    STATE(238), 1,
      sym_comment,
  [6472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      sym_unicode_escape_short,
    STATE(239), 1,
      sym_comment,
  [6485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      sym_identifier,
    STATE(240), 1,
      sym_comment,
  [6498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      sym_unicode_escape,
    STATE(241), 1,
      sym_comment,
  [6511] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(831), 1,
      sym_imm_ident,
    STATE(242), 1,
      sym_comment,
  [6524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      sym_unicode_escape_long,
    STATE(243), 1,
      sym_comment,
  [6537] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_LBRACE,
    STATE(244), 1,
      sym_comment,
  [6550] = 4,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      sym_char_escape,
    STATE(245), 1,
      sym_comment,
  [6563] = 4,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(837), 1,
      aux_sym_comment_token2,
    STATE(246), 1,
      sym_comment,
  [6576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      sym_imm_ident,
    STATE(247), 1,
      sym_comment,
  [6589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(841), 1,
      sym_imm_ident,
    STATE(248), 1,
      sym_comment,
  [6602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(843), 1,
      sym_imm_ident,
    STATE(249), 1,
      sym_comment,
  [6615] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(845), 1,
      sym_index,
    STATE(250), 1,
      sym_comment,
  [6628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(847), 1,
      anon_sym_DASH_GT,
    STATE(251), 1,
      sym_comment,
  [6641] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(849), 1,
      sym_hex_escape,
    STATE(252), 1,
      sym_comment,
  [6654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(849), 1,
      sym_unicode_escape_short,
    STATE(253), 1,
      sym_comment,
  [6667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(849), 1,
      sym_unicode_escape_long,
    STATE(254), 1,
      sym_comment,
  [6680] = 4,
    ACTIONS(519), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(521), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(851), 1,
      sym_char_escape,
    STATE(255), 1,
      sym_comment,
  [6693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(853), 1,
      anon_sym_GT,
    STATE(256), 1,
      sym_comment,
  [6706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(855), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      sym_comment,
  [6719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(857), 1,
      sym_imm_ident,
    STATE(258), 1,
      sym_comment,
  [6732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_comment,
  [6745] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      sym_imm_ident,
    STATE(260), 1,
      sym_comment,
  [6758] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(735), 1,
      sym_index,
    STATE(261), 1,
      sym_comment,
  [6771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(863), 1,
      sym_imm_ident,
    STATE(262), 1,
      sym_comment,
  [6784] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(865), 1,
      sym_imm_ident,
    STATE(263), 1,
      sym_comment,
  [6797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(867), 1,
      sym_imm_ident,
    STATE(264), 1,
      sym_comment,
  [6810] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(869), 1,
      sym_index,
    STATE(265), 1,
      sym_comment,
  [6823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      sym_comment,
  [6836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(873), 1,
      sym_imm_ident,
    STATE(267), 1,
      sym_comment,
  [6849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      sym_unicode_escape,
    STATE(268), 1,
      sym_comment,
  [6862] = 1,
    ACTIONS(877), 1,
      ts_builtin_sym_end,
  [6866] = 1,
    ACTIONS(879), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 253,
  [SMALL_STATE(6)] = 345,
  [SMALL_STATE(7)] = 411,
  [SMALL_STATE(8)] = 453,
  [SMALL_STATE(9)] = 521,
  [SMALL_STATE(10)] = 563,
  [SMALL_STATE(11)] = 635,
  [SMALL_STATE(12)] = 707,
  [SMALL_STATE(13)] = 745,
  [SMALL_STATE(14)] = 804,
  [SMALL_STATE(15)] = 865,
  [SMALL_STATE(16)] = 926,
  [SMALL_STATE(17)] = 984,
  [SMALL_STATE(18)] = 1044,
  [SMALL_STATE(19)] = 1104,
  [SMALL_STATE(20)] = 1164,
  [SMALL_STATE(21)] = 1222,
  [SMALL_STATE(22)] = 1258,
  [SMALL_STATE(23)] = 1318,
  [SMALL_STATE(24)] = 1353,
  [SMALL_STATE(25)] = 1388,
  [SMALL_STATE(26)] = 1443,
  [SMALL_STATE(27)] = 1498,
  [SMALL_STATE(28)] = 1533,
  [SMALL_STATE(29)] = 1568,
  [SMALL_STATE(30)] = 1603,
  [SMALL_STATE(31)] = 1638,
  [SMALL_STATE(32)] = 1672,
  [SMALL_STATE(33)] = 1706,
  [SMALL_STATE(34)] = 1740,
  [SMALL_STATE(35)] = 1774,
  [SMALL_STATE(36)] = 1808,
  [SMALL_STATE(37)] = 1842,
  [SMALL_STATE(38)] = 1876,
  [SMALL_STATE(39)] = 1908,
  [SMALL_STATE(40)] = 1940,
  [SMALL_STATE(41)] = 1972,
  [SMALL_STATE(42)] = 2004,
  [SMALL_STATE(43)] = 2036,
  [SMALL_STATE(44)] = 2068,
  [SMALL_STATE(45)] = 2100,
  [SMALL_STATE(46)] = 2132,
  [SMALL_STATE(47)] = 2164,
  [SMALL_STATE(48)] = 2196,
  [SMALL_STATE(49)] = 2228,
  [SMALL_STATE(50)] = 2260,
  [SMALL_STATE(51)] = 2292,
  [SMALL_STATE(52)] = 2324,
  [SMALL_STATE(53)] = 2356,
  [SMALL_STATE(54)] = 2388,
  [SMALL_STATE(55)] = 2420,
  [SMALL_STATE(56)] = 2452,
  [SMALL_STATE(57)] = 2484,
  [SMALL_STATE(58)] = 2516,
  [SMALL_STATE(59)] = 2548,
  [SMALL_STATE(60)] = 2580,
  [SMALL_STATE(61)] = 2612,
  [SMALL_STATE(62)] = 2644,
  [SMALL_STATE(63)] = 2676,
  [SMALL_STATE(64)] = 2708,
  [SMALL_STATE(65)] = 2740,
  [SMALL_STATE(66)] = 2772,
  [SMALL_STATE(67)] = 2811,
  [SMALL_STATE(68)] = 2842,
  [SMALL_STATE(69)] = 2872,
  [SMALL_STATE(70)] = 2902,
  [SMALL_STATE(71)] = 2946,
  [SMALL_STATE(72)] = 2976,
  [SMALL_STATE(73)] = 3006,
  [SMALL_STATE(74)] = 3036,
  [SMALL_STATE(75)] = 3066,
  [SMALL_STATE(76)] = 3096,
  [SMALL_STATE(77)] = 3126,
  [SMALL_STATE(78)] = 3156,
  [SMALL_STATE(79)] = 3186,
  [SMALL_STATE(80)] = 3232,
  [SMALL_STATE(81)] = 3280,
  [SMALL_STATE(82)] = 3326,
  [SMALL_STATE(83)] = 3372,
  [SMALL_STATE(84)] = 3418,
  [SMALL_STATE(85)] = 3462,
  [SMALL_STATE(86)] = 3488,
  [SMALL_STATE(87)] = 3512,
  [SMALL_STATE(88)] = 3542,
  [SMALL_STATE(89)] = 3566,
  [SMALL_STATE(90)] = 3590,
  [SMALL_STATE(91)] = 3614,
  [SMALL_STATE(92)] = 3638,
  [SMALL_STATE(93)] = 3677,
  [SMALL_STATE(94)] = 3712,
  [SMALL_STATE(95)] = 3755,
  [SMALL_STATE(96)] = 3791,
  [SMALL_STATE(97)] = 3829,
  [SMALL_STATE(98)] = 3867,
  [SMALL_STATE(99)] = 3888,
  [SMALL_STATE(100)] = 3909,
  [SMALL_STATE(101)] = 3930,
  [SMALL_STATE(102)] = 3963,
  [SMALL_STATE(103)] = 3984,
  [SMALL_STATE(104)] = 4017,
  [SMALL_STATE(105)] = 4039,
  [SMALL_STATE(106)] = 4059,
  [SMALL_STATE(107)] = 4091,
  [SMALL_STATE(108)] = 4123,
  [SMALL_STATE(109)] = 4143,
  [SMALL_STATE(110)] = 4163,
  [SMALL_STATE(111)] = 4183,
  [SMALL_STATE(112)] = 4203,
  [SMALL_STATE(113)] = 4223,
  [SMALL_STATE(114)] = 4243,
  [SMALL_STATE(115)] = 4275,
  [SMALL_STATE(116)] = 4295,
  [SMALL_STATE(117)] = 4315,
  [SMALL_STATE(118)] = 4335,
  [SMALL_STATE(119)] = 4355,
  [SMALL_STATE(120)] = 4375,
  [SMALL_STATE(121)] = 4395,
  [SMALL_STATE(122)] = 4415,
  [SMALL_STATE(123)] = 4435,
  [SMALL_STATE(124)] = 4465,
  [SMALL_STATE(125)] = 4487,
  [SMALL_STATE(126)] = 4507,
  [SMALL_STATE(127)] = 4527,
  [SMALL_STATE(128)] = 4547,
  [SMALL_STATE(129)] = 4567,
  [SMALL_STATE(130)] = 4589,
  [SMALL_STATE(131)] = 4618,
  [SMALL_STATE(132)] = 4645,
  [SMALL_STATE(133)] = 4668,
  [SMALL_STATE(134)] = 4695,
  [SMALL_STATE(135)] = 4724,
  [SMALL_STATE(136)] = 4753,
  [SMALL_STATE(137)] = 4782,
  [SMALL_STATE(138)] = 4811,
  [SMALL_STATE(139)] = 4840,
  [SMALL_STATE(140)] = 4860,
  [SMALL_STATE(141)] = 4880,
  [SMALL_STATE(142)] = 4900,
  [SMALL_STATE(143)] = 4920,
  [SMALL_STATE(144)] = 4940,
  [SMALL_STATE(145)] = 4960,
  [SMALL_STATE(146)] = 4984,
  [SMALL_STATE(147)] = 5004,
  [SMALL_STATE(148)] = 5024,
  [SMALL_STATE(149)] = 5048,
  [SMALL_STATE(150)] = 5068,
  [SMALL_STATE(151)] = 5088,
  [SMALL_STATE(152)] = 5105,
  [SMALL_STATE(153)] = 5126,
  [SMALL_STATE(154)] = 5147,
  [SMALL_STATE(155)] = 5170,
  [SMALL_STATE(156)] = 5189,
  [SMALL_STATE(157)] = 5210,
  [SMALL_STATE(158)] = 5231,
  [SMALL_STATE(159)] = 5254,
  [SMALL_STATE(160)] = 5271,
  [SMALL_STATE(161)] = 5292,
  [SMALL_STATE(162)] = 5313,
  [SMALL_STATE(163)] = 5330,
  [SMALL_STATE(164)] = 5351,
  [SMALL_STATE(165)] = 5372,
  [SMALL_STATE(166)] = 5393,
  [SMALL_STATE(167)] = 5414,
  [SMALL_STATE(168)] = 5435,
  [SMALL_STATE(169)] = 5457,
  [SMALL_STATE(170)] = 5472,
  [SMALL_STATE(171)] = 5491,
  [SMALL_STATE(172)] = 5510,
  [SMALL_STATE(173)] = 5529,
  [SMALL_STATE(174)] = 5548,
  [SMALL_STATE(175)] = 5567,
  [SMALL_STATE(176)] = 5582,
  [SMALL_STATE(177)] = 5601,
  [SMALL_STATE(178)] = 5618,
  [SMALL_STATE(179)] = 5634,
  [SMALL_STATE(180)] = 5650,
  [SMALL_STATE(181)] = 5664,
  [SMALL_STATE(182)] = 5680,
  [SMALL_STATE(183)] = 5696,
  [SMALL_STATE(184)] = 5712,
  [SMALL_STATE(185)] = 5728,
  [SMALL_STATE(186)] = 5744,
  [SMALL_STATE(187)] = 5760,
  [SMALL_STATE(188)] = 5776,
  [SMALL_STATE(189)] = 5792,
  [SMALL_STATE(190)] = 5808,
  [SMALL_STATE(191)] = 5824,
  [SMALL_STATE(192)] = 5840,
  [SMALL_STATE(193)] = 5856,
  [SMALL_STATE(194)] = 5872,
  [SMALL_STATE(195)] = 5888,
  [SMALL_STATE(196)] = 5904,
  [SMALL_STATE(197)] = 5920,
  [SMALL_STATE(198)] = 5936,
  [SMALL_STATE(199)] = 5952,
  [SMALL_STATE(200)] = 5965,
  [SMALL_STATE(201)] = 5978,
  [SMALL_STATE(202)] = 5991,
  [SMALL_STATE(203)] = 6004,
  [SMALL_STATE(204)] = 6017,
  [SMALL_STATE(205)] = 6030,
  [SMALL_STATE(206)] = 6043,
  [SMALL_STATE(207)] = 6056,
  [SMALL_STATE(208)] = 6069,
  [SMALL_STATE(209)] = 6082,
  [SMALL_STATE(210)] = 6095,
  [SMALL_STATE(211)] = 6108,
  [SMALL_STATE(212)] = 6121,
  [SMALL_STATE(213)] = 6134,
  [SMALL_STATE(214)] = 6147,
  [SMALL_STATE(215)] = 6160,
  [SMALL_STATE(216)] = 6173,
  [SMALL_STATE(217)] = 6186,
  [SMALL_STATE(218)] = 6199,
  [SMALL_STATE(219)] = 6212,
  [SMALL_STATE(220)] = 6225,
  [SMALL_STATE(221)] = 6238,
  [SMALL_STATE(222)] = 6251,
  [SMALL_STATE(223)] = 6264,
  [SMALL_STATE(224)] = 6277,
  [SMALL_STATE(225)] = 6290,
  [SMALL_STATE(226)] = 6303,
  [SMALL_STATE(227)] = 6316,
  [SMALL_STATE(228)] = 6329,
  [SMALL_STATE(229)] = 6342,
  [SMALL_STATE(230)] = 6355,
  [SMALL_STATE(231)] = 6368,
  [SMALL_STATE(232)] = 6381,
  [SMALL_STATE(233)] = 6394,
  [SMALL_STATE(234)] = 6407,
  [SMALL_STATE(235)] = 6420,
  [SMALL_STATE(236)] = 6433,
  [SMALL_STATE(237)] = 6446,
  [SMALL_STATE(238)] = 6459,
  [SMALL_STATE(239)] = 6472,
  [SMALL_STATE(240)] = 6485,
  [SMALL_STATE(241)] = 6498,
  [SMALL_STATE(242)] = 6511,
  [SMALL_STATE(243)] = 6524,
  [SMALL_STATE(244)] = 6537,
  [SMALL_STATE(245)] = 6550,
  [SMALL_STATE(246)] = 6563,
  [SMALL_STATE(247)] = 6576,
  [SMALL_STATE(248)] = 6589,
  [SMALL_STATE(249)] = 6602,
  [SMALL_STATE(250)] = 6615,
  [SMALL_STATE(251)] = 6628,
  [SMALL_STATE(252)] = 6641,
  [SMALL_STATE(253)] = 6654,
  [SMALL_STATE(254)] = 6667,
  [SMALL_STATE(255)] = 6680,
  [SMALL_STATE(256)] = 6693,
  [SMALL_STATE(257)] = 6706,
  [SMALL_STATE(258)] = 6719,
  [SMALL_STATE(259)] = 6732,
  [SMALL_STATE(260)] = 6745,
  [SMALL_STATE(261)] = 6758,
  [SMALL_STATE(262)] = 6771,
  [SMALL_STATE(263)] = 6784,
  [SMALL_STATE(264)] = 6797,
  [SMALL_STATE(265)] = 6810,
  [SMALL_STATE(266)] = 6823,
  [SMALL_STATE(267)] = 6836,
  [SMALL_STATE(268)] = 6849,
  [SMALL_STATE(269)] = 6862,
  [SMALL_STATE(270)] = 6866,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(42),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(197),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(195),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(153),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(70),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(176),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(187),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(188),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(189),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(190),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(198),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(148),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(165),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(166),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(167),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(179),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(69),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(69),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(106),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(264),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(265),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(263),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 53), SHIFT_REPEAT(267),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 3, .production_id = 49),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 3, .production_id = 49),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(214),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(97),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(114),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(202),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(201),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(242),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(186),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(178),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(238),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(237),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(235),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(200),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(233),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 38),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 38),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 20),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_register, 2, .production_id = 24),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_register, 2, .production_id = 24),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 22),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 22),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, .production_id = 30),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, .production_id = 30),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_literal, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_literal, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem, 2, .production_id = 15),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mem, 2, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, .production_id = 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 29),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 29),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 31),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 31),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 16),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 16),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 31),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 31),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_icall, 4, .production_id = 52),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_icall, 4, .production_id = 52),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 44),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 44),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 41),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 41),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 31),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 31),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 31),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 31),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 31),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 31),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 2, .production_id = 31),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2, .production_id = 31),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 31),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 31),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 31),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 31),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 31),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 31),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 31),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 31),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 31),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 31),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 31),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 31),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 31),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 31),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 48),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 48),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_inst_label, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_inst_label, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_value, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_value, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 2, .production_id = 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(101),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(215),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(168),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(154),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(194),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(242),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 3, .production_id = 14),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(261),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(267),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(158),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(124),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(229),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(239),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(241),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(243),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(245),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 6),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 2, .production_id = 5),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, .production_id = 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, .production_id = 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deferred_func, 3, .production_id = 5),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 17),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 8, .production_id = 56),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_branching, 7, .production_id = 55),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 7, .production_id = 54),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 6, .production_id = 51),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 12),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 4, .production_id = 34),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 34),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 17),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 32),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_binary, 5, .production_id = 47),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_unary, 5, .production_id = 47),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 11),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 11),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deferred_func, 4, .production_id = 10),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 3, .production_id = 17),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 5, .production_id = 40),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 3, .production_id = 4),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3, .production_id = 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 42), SHIFT_REPEAT(261),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 42),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 42), SHIFT_REPEAT(267),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 37),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 37), SHIFT_REPEAT(215),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(261),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 27),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(267),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 5, .production_id = 45),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 4, .production_id = 26),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 4, .production_id = 14),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 3, .production_id = 5),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 2, .production_id = 36),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 2, .production_id = 36),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 1, .production_id = 19),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 1, .production_id = 19),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 19),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 19),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 50),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 50),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 50),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 50),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_jmp, 2, .production_id = 33),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_jmp, 2, .production_id = 33),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 1, .production_id = 13),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 18),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 18),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_register, 3, .production_id = 43),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_reg, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 1, .production_id = 25),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 3, .production_id = 10),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 1, .production_id = 13),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(180),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 5, .production_id = 39),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 4, .production_id = 21),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_head, 5, .production_id = 46),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [813] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_head, 4, .production_id = 28),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
