#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 29
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 56

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
  aux_sym_extern_func_token1 = 46,
  anon_sym_PLUS = 47,
  anon_sym_LBRACE = 48,
  anon_sym_RBRACE2 = 49,
  anon_sym_inst = 50,
  anon_sym_branch = 51,
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
  sym_dunder_binary = 106,
  sym_dunder_branching = 107,
  sym_permutation = 108,
  sym_stack_frame = 109,
  sym__instruction = 110,
  sym_height = 111,
  sym_const = 112,
  sym_perm = 113,
  sym_in = 114,
  sym_out = 115,
  sym_label = 116,
  sym_jump = 117,
  sym_branch = 118,
  sym_call = 119,
  sym_icall = 120,
  sym_ref = 121,
  sym_get = 122,
  sym_set = 123,
  sym_custom_instruction = 124,
  sym_urcl_instruction = 125,
  sym_index_register = 126,
  sym_named_register = 127,
  sym__reg = 128,
  sym_input_register = 129,
  sym__input_reg = 130,
  sym__urcl_value = 131,
  sym_urcl_jmp = 132,
  sym_urcl_in = 133,
  sym_urcl_out = 134,
  sym_urcl_generic = 135,
  aux_sym_source_file_repeat1 = 136,
  aux_sym_source_file_repeat2 = 137,
  aux_sym_source_file_repeat3 = 138,
  aux_sym_array_repeat1 = 139,
  aux_sym_string_repeat1 = 140,
  aux_sym_func_repeat1 = 141,
  aux_sym_inst_head_repeat1 = 142,
  aux_sym_inst_head_repeat2 = 143,
  aux_sym_inst_repeat1 = 144,
  aux_sym_branch_head_repeat1 = 145,
  aux_sym_stack_frame_repeat1 = 146,
  aux_sym_urcl_instruction_repeat1 = 147,
  aux_sym_urcl_generic_repeat1 = 148,
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
  [aux_sym_extern_func_token1] = "extern_func_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_inst] = "inst",
  [anon_sym_branch] = "branch",
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
  [aux_sym_extern_func_token1] = aux_sym_extern_func_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_inst] = anon_sym_inst,
  [anon_sym_branch] = anon_sym_branch,
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
  [aux_sym_extern_func_token1] = {
    .visible = false,
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
  field_instructions = 13,
  field_item = 14,
  field_items = 15,
  field_label = 16,
  field_locals = 17,
  field_name = 18,
  field_op = 19,
  field_opcode = 20,
  field_operand = 21,
  field_output = 22,
  field_params = 23,
  field_permutation = 24,
  field_reg = 25,
  field_returns = 26,
  field_source = 27,
  field_stack = 28,
  field_value = 29,
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
  [field_instructions] = "instructions",
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
  [53] = {.index = 88, .length = 3},
  [54] = {.index = 91, .length = 3},
  [55] = {.index = 94, .length = 4},
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
    {field_instructions, 2},
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
    {field_source, 0, .inherited = true},
    {field_source, 1, .inherited = true},
  [88] =
    {field_call_convention, 1},
    {field_label, 5},
    {field_name, 3},
  [91] =
    {field_branch, 5},
    {field_instruction, 3},
    {field_name, 1},
  [94] =
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
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '<') ADVANCE(266);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'j') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '<') ADVANCE(266);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(127);
      if (lookahead == 'J') ADVANCE(126);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'j') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(201);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != 'U' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(214);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(270);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(268);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(235);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 104:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(192);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 119:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '<') ADVANCE(266);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'j') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '&') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ';') ADVANCE(225);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_minstack);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_minheap);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(129);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_imm_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '0') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(181);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string_segment);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_string_segment);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_string_segment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_char_value);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_char_value);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASHx);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      if (lookahead == '{') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BSLASHu_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      if (lookahead == '{') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BSLASHU_LBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_hex_escape);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_unicode_escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_unicode_escape_short);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_unicode_escape_long);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_char_escape);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '$') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_end_label);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_extern_func_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym___binary__);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym___branching__);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ret);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 120},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 120},
  [11] = {.lex_state = 120},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 120},
  [16] = {.lex_state = 120},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 120},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 120},
  [24] = {.lex_state = 120},
  [25] = {.lex_state = 120},
  [26] = {.lex_state = 120},
  [27] = {.lex_state = 120},
  [28] = {.lex_state = 120},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 120},
  [31] = {.lex_state = 120},
  [32] = {.lex_state = 120},
  [33] = {.lex_state = 120},
  [34] = {.lex_state = 120},
  [35] = {.lex_state = 120},
  [36] = {.lex_state = 120},
  [37] = {.lex_state = 120},
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
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 120},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 120},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 120},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 120},
  [87] = {.lex_state = 120},
  [88] = {.lex_state = 120},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 120},
  [91] = {.lex_state = 120},
  [92] = {.lex_state = 120},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 120},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 120},
  [100] = {.lex_state = 120},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 120},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 120},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 120},
  [110] = {.lex_state = 120},
  [111] = {.lex_state = 120},
  [112] = {.lex_state = 120},
  [113] = {.lex_state = 120},
  [114] = {.lex_state = 120},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 120},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 120},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 120},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 120},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 120},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 120},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 120},
  [130] = {.lex_state = 120},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 120},
  [133] = {.lex_state = 120},
  [134] = {.lex_state = 120},
  [135] = {.lex_state = 120},
  [136] = {.lex_state = 120},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 120},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 120},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 120},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 120},
  [154] = {.lex_state = 120},
  [155] = {.lex_state = 120},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 120},
  [159] = {.lex_state = 120},
  [160] = {.lex_state = 120},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 120},
  [163] = {.lex_state = 120},
  [164] = {.lex_state = 120},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
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
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 180},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 120},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 120},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 11},
  [260] = {(TSStateId)(-1)},
  [261] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(226),
    [sym__header] = STATE(87),
    [sym_bits] = STATE(86),
    [sym_minstack] = STATE(86),
    [sym_minheap] = STATE(86),
    [sym_comment] = STATE(1),
    [sym_data_label] = STATE(20),
    [sym_definition] = STATE(109),
    [sym_deferred_func] = STATE(132),
    [sym_extern_func] = STATE(132),
    [sym_func_head] = STATE(224),
    [sym_func] = STATE(132),
    [sym_inst_head] = STATE(221),
    [sym_inst] = STATE(132),
    [sym_branch_head] = STATE(220),
    [sym_inst_branch] = STATE(132),
    [sym_inst_permutation] = STATE(132),
    [sym__internal] = STATE(132),
    [sym_dunder_binary] = STATE(134),
    [sym_dunder_branching] = STATE(134),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(11),
    [aux_sym_source_file_repeat3] = STATE(26),
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
    [anon_sym___binary__] = ACTIONS(25),
    [anon_sym___branching__] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE2,
    ACTIONS(33), 1,
      anon_sym_branch,
    ACTIONS(35), 1,
      anon_sym_height,
    ACTIONS(37), 1,
      anon_sym_const,
    ACTIONS(39), 1,
      anon_sym_perm,
    ACTIONS(43), 1,
      anon_sym_in,
    ACTIONS(45), 1,
      anon_sym_out,
    ACTIONS(47), 1,
      anon_sym_label,
    ACTIONS(49), 1,
      anon_sym_jump,
    ACTIONS(51), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_icall,
    ACTIONS(55), 1,
      anon_sym_ref,
    ACTIONS(57), 1,
      anon_sym_get,
    ACTIONS(59), 1,
      anon_sym_set,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_func_repeat1,
    STATE(40), 1,
      sym__instruction,
    ACTIONS(41), 2,
      sym_halt,
      sym_ret,
    STATE(41), 14,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_branch,
    ACTIONS(35), 1,
      anon_sym_height,
    ACTIONS(37), 1,
      anon_sym_const,
    ACTIONS(39), 1,
      anon_sym_perm,
    ACTIONS(43), 1,
      anon_sym_in,
    ACTIONS(45), 1,
      anon_sym_out,
    ACTIONS(47), 1,
      anon_sym_label,
    ACTIONS(49), 1,
      anon_sym_jump,
    ACTIONS(51), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_icall,
    ACTIONS(55), 1,
      anon_sym_ref,
    ACTIONS(57), 1,
      anon_sym_get,
    ACTIONS(59), 1,
      anon_sym_set,
    ACTIONS(61), 1,
      anon_sym_RBRACE2,
    STATE(2), 1,
      aux_sym_func_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(40), 1,
      sym__instruction,
    ACTIONS(41), 2,
      sym_halt,
      sym_ret,
    STATE(41), 14,
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
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE2,
    ACTIONS(68), 1,
      anon_sym_branch,
    ACTIONS(71), 1,
      anon_sym_height,
    ACTIONS(74), 1,
      anon_sym_const,
    ACTIONS(77), 1,
      anon_sym_perm,
    ACTIONS(83), 1,
      anon_sym_in,
    ACTIONS(86), 1,
      anon_sym_out,
    ACTIONS(89), 1,
      anon_sym_label,
    ACTIONS(92), 1,
      anon_sym_jump,
    ACTIONS(95), 1,
      anon_sym_call,
    ACTIONS(98), 1,
      anon_sym_icall,
    ACTIONS(101), 1,
      anon_sym_ref,
    ACTIONS(104), 1,
      anon_sym_get,
    ACTIONS(107), 1,
      anon_sym_set,
    STATE(40), 1,
      sym__instruction,
    ACTIONS(80), 2,
      sym_halt,
      sym_ret,
    STATE(4), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(41), 14,
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
  [241] = 26,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_source_file_repeat2,
    STATE(20), 1,
      sym_data_label,
    STATE(27), 1,
      aux_sym_source_file_repeat3,
    STATE(74), 1,
      aux_sym_source_file_repeat1,
    STATE(87), 1,
      sym__header,
    STATE(109), 1,
      sym_definition,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(86), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [329] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(118), 1,
      aux_sym_number_token3,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(67), 1,
      sym__urcl_value,
    ACTIONS(126), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(77), 2,
      sym__literal,
      sym__reg,
    ACTIONS(116), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(112), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [397] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(140), 1,
      aux_sym_number_token3,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_AMP,
    STATE(67), 1,
      sym__urcl_value,
    ACTIONS(152), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    STATE(7), 2,
      sym_comment,
      aux_sym_urcl_generic_repeat1,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(77), 2,
      sym__literal,
      sym__reg,
    ACTIONS(137), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(132), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [463] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(162), 10,
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
    ACTIONS(160), 17,
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
  [504] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      aux_sym_number_token3,
    STATE(9), 1,
      sym_comment,
    ACTIONS(164), 26,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [545] = 20,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(20), 1,
      sym_data_label,
    STATE(25), 1,
      aux_sym_source_file_repeat3,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
    STATE(109), 1,
      sym_definition,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [613] = 20,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(20), 1,
      sym_data_label,
    STATE(23), 1,
      aux_sym_source_file_repeat3,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
    STATE(109), 1,
      sym_definition,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [681] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_AT,
    ACTIONS(188), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_array_repeat1,
    STATE(84), 1,
      sym__data_literal,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(35), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(28), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [742] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_AT,
    ACTIONS(188), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_array_repeat1,
    STATE(84), 1,
      sym__data_literal,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(35), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(28), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [803] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    ACTIONS(203), 1,
      aux_sym_number_token3,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(212), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      anon_sym_DOT,
    STATE(84), 1,
      sym__data_literal,
    STATE(14), 2,
      sym_comment,
      aux_sym_array_repeat1,
    ACTIONS(200), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(35), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(28), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_number_token3,
    STATE(15), 1,
      sym_comment,
    ACTIONS(221), 22,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [899] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(118), 1,
      aux_sym_number_token3,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(6), 1,
      aux_sym_urcl_generic_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(67), 1,
      sym__urcl_value,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(77), 2,
      sym__literal,
      sym__reg,
    ACTIONS(116), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [957] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(225), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(227), 16,
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
  [992] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(229), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(231), 16,
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
  [1027] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(233), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(235), 16,
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
  [1062] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_AT,
    ACTIONS(188), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    STATE(99), 1,
      sym__data_literal,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(35), 3,
      sym_array,
      sym__literal,
      sym_string,
    STATE(28), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1117] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(118), 1,
      aux_sym_number_token3,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(21), 1,
      sym_comment,
    STATE(144), 1,
      sym__urcl_value,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(77), 2,
      sym__literal,
      sym__reg,
    ACTIONS(116), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(75), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1172] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(239), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE2,
    ACTIONS(237), 16,
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
  [1207] = 16,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_source_file_repeat3,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1263] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      anon_sym_func,
    ACTIONS(248), 1,
      anon_sym_extern,
    ACTIONS(251), 1,
      anon_sym_inst,
    ACTIONS(254), 1,
      anon_sym_branch,
    ACTIONS(257), 1,
      anon_sym___binary__,
    ACTIONS(260), 1,
      anon_sym___branching__,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(24), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1317] = 16,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_source_file_repeat3,
    STATE(25), 1,
      sym_comment,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1373] = 16,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_source_file_repeat3,
    STATE(26), 1,
      sym_comment,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1429] = 16,
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
      anon_sym___binary__,
    ACTIONS(27), 1,
      anon_sym___branching__,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_source_file_repeat3,
    STATE(27), 1,
      sym_comment,
    STATE(220), 1,
      sym_branch_head,
    STATE(221), 1,
      sym_inst_head,
    STATE(224), 1,
      sym_func_head,
    STATE(134), 2,
      sym_dunder_binary,
      sym_dunder_branching,
    STATE(132), 7,
      sym_deferred_func,
      sym_extern_func,
      sym_func,
      sym_inst,
      sym_inst_branch,
      sym_inst_permutation,
      sym__internal,
  [1485] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      aux_sym_number_token3,
    STATE(28), 1,
      sym_comment,
    ACTIONS(269), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      aux_sym_number_token3,
    STATE(29), 1,
      sym_comment,
    ACTIONS(273), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1551] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_number_token3,
    STATE(30), 1,
      sym_comment,
    ACTIONS(277), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      aux_sym_number_token3,
    STATE(31), 1,
      sym_comment,
    ACTIONS(281), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1617] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      aux_sym_number_token3,
    STATE(32), 1,
      sym_comment,
    ACTIONS(285), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1650] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      aux_sym_number_token3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(289), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1683] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_number_token3,
    STATE(34), 1,
      sym_comment,
    ACTIONS(293), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym_number_token3,
    STATE(35), 1,
      sym_comment,
    ACTIONS(297), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1749] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      aux_sym_number_token3,
    STATE(36), 1,
      sym_comment,
    ACTIONS(301), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1782] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_comment,
    ACTIONS(305), 18,
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
      anon_sym___binary__,
      anon_sym___branching__,
  [1815] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_RBRACE2,
    STATE(38), 1,
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
  [1846] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_RBRACE2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(309), 16,
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
  [1877] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      anon_sym_RBRACE2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(313), 16,
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
  [1908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_RBRACE2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(317), 16,
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
  [1939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      anon_sym_RBRACE2,
    STATE(42), 1,
      sym_comment,
    ACTIONS(321), 16,
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
  [1970] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_RBRACE2,
    STATE(43), 1,
      sym_comment,
    ACTIONS(166), 16,
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
  [2001] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_RBRACE2,
    STATE(44), 1,
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
  [2032] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_RBRACE2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(329), 16,
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
  [2063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      anon_sym_RBRACE2,
    STATE(46), 1,
      sym_comment,
    ACTIONS(333), 16,
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
  [2094] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      anon_sym_RBRACE2,
    STATE(47), 1,
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
  [2125] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_RBRACE2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(337), 16,
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
  [2156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_RBRACE2,
    STATE(49), 1,
      sym_comment,
    ACTIONS(341), 16,
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
  [2187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_RBRACE2,
    STATE(50), 1,
      sym_comment,
    ACTIONS(345), 16,
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
  [2218] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_RBRACE2,
    STATE(51), 1,
      sym_comment,
    ACTIONS(349), 16,
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
  [2249] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_RBRACE2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(353), 16,
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
  [2280] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      anon_sym_RBRACE2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(357), 16,
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
  [2311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      anon_sym_RBRACE2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(361), 16,
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
  [2342] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_RBRACE2,
    STATE(55), 1,
      sym_comment,
    ACTIONS(365), 16,
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
  [2373] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      anon_sym_RBRACE2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(369), 16,
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
  [2404] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_RBRACE2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(373), 16,
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
  [2435] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_RBRACE2,
    STATE(58), 1,
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
  [2466] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_RBRACE2,
    STATE(59), 1,
      sym_comment,
    ACTIONS(223), 16,
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
  [2497] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 1,
      anon_sym_RBRACE2,
    STATE(60), 1,
      sym_comment,
    ACTIONS(377), 16,
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
  [2528] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      anon_sym_RBRACE2,
    STATE(61), 1,
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
  [2559] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(333), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(335), 12,
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
  [2590] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      anon_sym_RBRACE2,
    STATE(63), 1,
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
  [2621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      anon_sym_RBRACE2,
    STATE(64), 1,
      sym_comment,
    ACTIONS(381), 16,
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
  [2652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      anon_sym_RBRACE2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(385), 16,
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
  [2683] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(166), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(164), 11,
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
  [2713] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_comment,
    ACTIONS(389), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(391), 11,
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
  [2743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(393), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(395), 11,
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
  [2773] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(277), 11,
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
  [2803] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(303), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(301), 11,
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
  [2833] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(295), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(293), 11,
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
  [2863] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_DOLLAR,
    ACTIONS(401), 1,
      aux_sym_number_token3,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(50), 1,
      sym__literal,
    STATE(72), 1,
      sym_comment,
    ACTIONS(399), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    STATE(58), 6,
      sym_function_name,
      sym_number,
      sym_char,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(223), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(221), 11,
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
  [2937] = 9,
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
    STATE(87), 1,
      sym__header,
    STATE(74), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(86), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [2975] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(271), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(269), 11,
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
  [3005] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(291), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(289), 11,
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
  [3035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(422), 5,
      sym_identifier,
      aux_sym_number_token3,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
    ACTIONS(424), 11,
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
  [3065] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_RBRACE2,
    ACTIONS(432), 1,
      anon_sym_JMP,
    ACTIONS(434), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_OUT,
    STATE(78), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_inst_repeat1,
    STATE(89), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(137), 1,
      sym_urcl_instruction,
    STATE(161), 1,
      sym_inst_label,
    STATE(147), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3111] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_JMP,
    ACTIONS(434), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_OUT,
    ACTIONS(438), 1,
      anon_sym_RBRACE2,
    STATE(79), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_inst_repeat1,
    STATE(89), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(137), 1,
      sym_urcl_instruction,
    STATE(161), 1,
      sym_inst_label,
    STATE(147), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3157] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_JMP,
    ACTIONS(434), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_OUT,
    ACTIONS(440), 1,
      anon_sym_RBRACE2,
    STATE(79), 1,
      aux_sym_inst_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(137), 1,
      sym_urcl_instruction,
    STATE(161), 1,
      sym_inst_label,
    STATE(147), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3203] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_JMP,
    ACTIONS(434), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_OUT,
    ACTIONS(442), 1,
      anon_sym_RBRACE2,
    STATE(78), 1,
      aux_sym_inst_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(137), 1,
      sym_urcl_instruction,
    STATE(161), 1,
      sym_inst_label,
    STATE(147), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3249] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_DASH_GT,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_LT,
    STATE(82), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_inst_head_repeat1,
    STATE(111), 1,
      sym_permutation,
    STATE(156), 1,
      sym__input_reg,
    STATE(198), 1,
      sym_stack_frame,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(157), 2,
      sym__reg,
      sym_input_register,
  [3297] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(460), 1,
      anon_sym_RBRACE2,
    ACTIONS(462), 1,
      anon_sym_JMP,
    ACTIONS(465), 1,
      anon_sym_IN,
    ACTIONS(468), 1,
      anon_sym_OUT,
    STATE(89), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(137), 1,
      sym_urcl_instruction,
    STATE(161), 1,
      sym_inst_label,
    STATE(83), 2,
      sym_comment,
      aux_sym_inst_repeat1,
    STATE(147), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [3341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      aux_sym_number_token3,
    STATE(84), 1,
      sym_comment,
    ACTIONS(471), 11,
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
  [3367] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      anon_sym_DOLLAR,
    ACTIONS(480), 1,
      anon_sym_AMP,
    ACTIONS(483), 1,
      anon_sym_LT,
    STATE(156), 1,
      sym__input_reg,
    ACTIONS(478), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(85), 2,
      sym_comment,
      aux_sym_inst_head_repeat1,
    STATE(157), 2,
      sym__reg,
      sym_input_register,
  [3402] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(486), 11,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(488), 11,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3448] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(490), 11,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3471] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_JMP,
    ACTIONS(434), 1,
      anon_sym_IN,
    ACTIONS(436), 1,
      anon_sym_OUT,
    STATE(89), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(139), 1,
      sym_urcl_generic,
    STATE(140), 1,
      sym_urcl_out,
    STATE(141), 1,
      sym_urcl_in,
    STATE(142), 1,
      sym_urcl_jmp,
    STATE(161), 1,
      sym_inst_label,
  [3514] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(492), 11,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3537] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(494), 11,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3560] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      anon_sym_DOT,
    STATE(20), 1,
      sym_data_label,
    STATE(109), 1,
      sym_definition,
    STATE(92), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(496), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3589] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(501), 1,
      anon_sym_DASH_GT,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      aux_sym_inst_head_repeat1,
    STATE(93), 1,
      sym_comment,
    STATE(156), 1,
      sym__input_reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(157), 2,
      sym__reg,
      sym_input_register,
  [3628] = 11,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    ACTIONS(511), 1,
      sym_string_segment,
    ACTIONS(514), 1,
      anon_sym_BSLASHx,
    ACTIONS(517), 1,
      anon_sym_BSLASHu,
    ACTIONS(523), 1,
      anon_sym_BSLASHU,
    ACTIONS(526), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym_escape_sequence,
    ACTIONS(520), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    STATE(94), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3664] = 12,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      sym_string_segment,
    ACTIONS(533), 1,
      anon_sym_BSLASHx,
    ACTIONS(535), 1,
      anon_sym_BSLASHu,
    ACTIONS(539), 1,
      anon_sym_BSLASHU,
    ACTIONS(541), 1,
      anon_sym_BSLASH,
    STATE(95), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_string_repeat1,
    STATE(107), 1,
      sym_escape_sequence,
    ACTIONS(537), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [3702] = 12,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      sym_string_segment,
    ACTIONS(533), 1,
      anon_sym_BSLASHx,
    ACTIONS(535), 1,
      anon_sym_BSLASHu,
    ACTIONS(539), 1,
      anon_sym_BSLASHU,
    ACTIONS(541), 1,
      anon_sym_BSLASH,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_string_repeat1,
    STATE(96), 1,
      sym_comment,
    STATE(107), 1,
      sym_escape_sequence,
    ACTIONS(537), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [3740] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      anon_sym_PLUS,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
    STATE(173), 1,
      sym_stack_behaviour,
    STATE(234), 1,
      sym_number,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3773] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      sym_end_label,
    STATE(68), 1,
      sym_inst_label,
    STATE(98), 1,
      sym_comment,
    STATE(16), 2,
      sym__any_inst_label,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [3806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(555), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3826] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_comment,
    STATE(190), 1,
      sym_stack_behaviour,
    STATE(234), 1,
      sym_number,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3856] = 10,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(561), 1,
      sym_char_value,
    ACTIONS(563), 1,
      anon_sym_BSLASHx,
    ACTIONS(565), 1,
      anon_sym_BSLASHu,
    ACTIONS(569), 1,
      anon_sym_BSLASHU,
    ACTIONS(571), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      sym_comment,
    STATE(215), 1,
      sym_escape_sequence,
    ACTIONS(567), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [3888] = 5,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
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
  [3910] = 10,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      anon_sym_BSLASHx,
    ACTIONS(565), 1,
      anon_sym_BSLASHu,
    ACTIONS(569), 1,
      anon_sym_BSLASHU,
    ACTIONS(571), 1,
      anon_sym_BSLASH,
    ACTIONS(577), 1,
      sym_char_value,
    STATE(103), 1,
      sym_comment,
    STATE(257), 1,
      sym_escape_sequence,
    ACTIONS(567), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [3942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [3962] = 5,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    ACTIONS(579), 5,
      anon_sym_DQUOTE,
      sym_string_segment,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
  [3984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(331), 8,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4004] = 5,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(585), 3,
      anon_sym_BSLASHx,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
    ACTIONS(583), 5,
      anon_sym_DQUOTE,
      sym_string_segment,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
  [4026] = 10,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      anon_sym_BSLASHx,
    ACTIONS(565), 1,
      anon_sym_BSLASHu,
    ACTIONS(569), 1,
      anon_sym_BSLASHU,
    ACTIONS(571), 1,
      anon_sym_BSLASH,
    ACTIONS(587), 1,
      sym_char_value,
    STATE(108), 1,
      sym_comment,
    STATE(248), 1,
      sym_escape_sequence,
    ACTIONS(567), 2,
      anon_sym_BSLASHu_LBRACE,
      anon_sym_BSLASHU_LBRACE,
  [4058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(589), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(591), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(593), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(595), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(597), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(599), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4173] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_inst_head_repeat2,
    STATE(172), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4202] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(603), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4221] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_inst_label,
    STATE(117), 2,
      sym_comment,
      aux_sym_urcl_instruction_repeat1,
    ACTIONS(605), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(610), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4263] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(612), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(617), 1,
      anon_sym_AMP,
    STATE(172), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(119), 2,
      sym_comment,
      aux_sym_inst_head_repeat2,
  [4290] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_comment,
    ACTIONS(620), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4309] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(622), 1,
      anon_sym_DASH_GT,
    STATE(121), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_branch_head_repeat1,
    STATE(170), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4357] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym_inst_head_repeat2,
    STATE(123), 1,
      sym_comment,
    STATE(172), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4386] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(629), 1,
      anon_sym_DASH_GT,
    ACTIONS(631), 1,
      anon_sym_AMP,
    STATE(170), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
    STATE(124), 2,
      sym_comment,
      aux_sym_branch_head_repeat1,
  [4413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(634), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4432] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(636), 1,
      anon_sym_DASH_GT,
    STATE(121), 1,
      aux_sym_branch_head_repeat1,
    STATE(126), 1,
      sym_comment,
    STATE(170), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4461] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(638), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4480] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      aux_sym_inst_head_repeat2,
    STATE(128), 1,
      sym_comment,
    STATE(172), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(642), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(644), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4547] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      aux_sym_inst_head_repeat2,
    STATE(131), 1,
      sym_comment,
    STATE(172), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(648), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4595] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(650), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(652), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(654), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4652] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(656), 7,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_extern,
      anon_sym_inst,
      anon_sym_branch,
      anon_sym___binary__,
      anon_sym___branching__,
  [4671] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(658), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(662), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4711] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(666), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4731] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(666), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4751] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(666), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4771] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(666), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4791] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(57), 1,
      sym_stack_behaviour,
    STATE(143), 1,
      sym_comment,
    STATE(242), 1,
      sym_number,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4815] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(670), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4835] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(160), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(674), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_COLON,
      anon_sym_RBRACE2,
    ACTIONS(678), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [4895] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(90), 1,
      sym_number,
    STATE(148), 1,
      sym_comment,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4916] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    STATE(149), 1,
      sym_comment,
    STATE(213), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4939] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(91), 1,
      sym_number,
    STATE(150), 1,
      sym_comment,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [4960] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    STATE(151), 1,
      sym_comment,
    STATE(183), 1,
      sym__reg,
    STATE(18), 2,
      sym_index_register,
      sym_named_register,
  [4983] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(682), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [5000] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(153), 1,
      sym_comment,
    STATE(233), 1,
      sym_number,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5021] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(88), 1,
      sym_number,
    STATE(154), 1,
      sym_comment,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5042] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_number_token3,
    STATE(49), 1,
      sym_number,
    STATE(155), 1,
      sym_comment,
    ACTIONS(399), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5063] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_comment,
    ACTIONS(684), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [5080] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(686), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LT,
  [5097] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(22), 1,
      sym_number,
    STATE(158), 1,
      sym_comment,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5118] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_number_token3,
    STATE(65), 1,
      sym_number,
    STATE(159), 1,
      sym_comment,
    ACTIONS(399), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5139] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_number_token3,
    STATE(39), 1,
      sym_number,
    STATE(160), 1,
      sym_comment,
    ACTIONS(399), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5160] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(690), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_comment,
    ACTIONS(688), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [5179] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_number_token3,
    STATE(60), 1,
      sym_number,
    STATE(162), 1,
      sym_comment,
    ACTIONS(399), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5200] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      aux_sym_number_token3,
    STATE(22), 1,
      sym_number,
    STATE(163), 1,
      sym_comment,
    ACTIONS(399), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5221] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym_number_token3,
    STATE(164), 1,
      sym_comment,
    STATE(236), 1,
      sym_number,
    ACTIONS(178), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [5242] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      sym_end_label,
    STATE(68), 1,
      sym_inst_label,
    STATE(138), 1,
      sym__any_inst_label,
    STATE(165), 1,
      sym_comment,
  [5264] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_stack_frame_repeat1,
  [5283] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_stack_frame_repeat1,
  [5302] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_stack_frame_repeat1,
  [5321] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(700), 1,
      sym_identifier,
    ACTIONS(703), 1,
      anon_sym_RBRACK,
    STATE(169), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [5338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(170), 1,
      sym_comment,
    ACTIONS(705), 3,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_AMP,
  [5353] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_permutation,
    STATE(171), 1,
      sym_comment,
    STATE(225), 1,
      sym_stack_frame,
  [5372] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(172), 1,
      sym_comment,
    ACTIONS(707), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_AMP,
  [5387] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 1,
      anon_sym_SEMI,
    ACTIONS(711), 1,
      anon_sym_PLUS,
    ACTIONS(713), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_comment,
  [5406] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_stack_frame_repeat1,
    STATE(174), 1,
      sym_comment,
  [5425] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(428), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
    STATE(201), 1,
      sym_inst_label,
  [5441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(176), 1,
      sym_comment,
    ACTIONS(717), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [5455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      sym_function_name,
    STATE(177), 1,
      sym_comment,
  [5471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(719), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_inst_label,
    STATE(178), 1,
      sym_comment,
  [5487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_stack_frame,
    STATE(179), 1,
      sym_comment,
  [5503] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_function_name,
    STATE(180), 1,
      sym_comment,
  [5519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(723), 1,
      anon_sym_PERCENT,
    STATE(21), 1,
      sym_port,
    STATE(181), 1,
      sym_comment,
  [5535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    STATE(97), 1,
      sym_function_name,
    STATE(182), 1,
      sym_comment,
  [5551] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      anon_sym_PERCENT,
    STATE(146), 1,
      sym_port,
    STATE(183), 1,
      sym_comment,
  [5567] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_comment,
    STATE(212), 1,
      sym_string,
  [5583] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(719), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_inst_label,
    STATE(185), 1,
      sym_comment,
  [5599] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(723), 1,
      anon_sym_PERCENT,
    STATE(52), 1,
      sym_port,
    STATE(186), 1,
      sym_comment,
  [5615] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(719), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_inst_label,
    STATE(187), 1,
      sym_comment,
  [5631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(428), 1,
      anon_sym_COLON,
    STATE(188), 1,
      sym_comment,
    STATE(207), 1,
      sym_inst_label,
  [5647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      sym_stack_frame,
    STATE(189), 1,
      sym_comment,
  [5663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    ACTIONS(729), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_comment,
  [5679] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(723), 1,
      anon_sym_PERCENT,
    STATE(53), 1,
      sym_port,
    STATE(191), 1,
      sym_comment,
  [5695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      sym_imm_ident,
    ACTIONS(733), 1,
      sym_index,
    STATE(192), 1,
      sym_comment,
  [5711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    STATE(193), 1,
      sym_comment,
  [5724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(194), 1,
      sym_comment,
  [5737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(739), 1,
      aux_sym_extern_func_token1,
    STATE(195), 1,
      sym_comment,
  [5750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      sym_index,
    STATE(196), 1,
      sym_comment,
  [5763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(743), 1,
      sym_imm_ident,
    STATE(197), 1,
      sym_comment,
  [5776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(745), 1,
      anon_sym_DASH_GT,
    STATE(198), 1,
      sym_comment,
  [5789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(747), 1,
      sym_identifier,
    STATE(199), 1,
      sym_comment,
  [5802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    STATE(200), 1,
      sym_comment,
  [5815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_comment,
  [5828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_comment,
  [5841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(755), 1,
      sym_identifier,
    STATE(203), 1,
      sym_comment,
  [5854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(757), 1,
      sym_imm_ident,
    STATE(204), 1,
      sym_comment,
  [5867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(759), 1,
      anon_sym_DASH_GT,
    STATE(205), 1,
      sym_comment,
  [5880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(761), 1,
      anon_sym_DASH_GT,
    STATE(206), 1,
      sym_comment,
  [5893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_comment,
  [5906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(765), 1,
      sym_identifier,
    STATE(208), 1,
      sym_comment,
  [5919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(767), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      sym_comment,
  [5932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(769), 1,
      aux_sym_extern_func_token1,
    STATE(210), 1,
      sym_comment,
  [5945] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(771), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      sym_comment,
  [5958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(773), 1,
      anon_sym_func,
    STATE(212), 1,
      sym_comment,
  [5971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(775), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_comment,
  [5984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      sym_comment,
  [5997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(779), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_comment,
  [6010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(781), 1,
      sym_imm_ident,
    STATE(216), 1,
      sym_comment,
  [6023] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(733), 1,
      sym_index,
    STATE(217), 1,
      sym_comment,
  [6036] = 4,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(783), 1,
      aux_sym_comment_token2,
    STATE(218), 1,
      sym_comment,
  [6049] = 4,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(785), 1,
      sym_char_escape,
    STATE(219), 1,
      sym_comment,
  [6062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_comment,
  [6075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_comment,
  [6088] = 4,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(791), 1,
      aux_sym_comment_token1,
    STATE(222), 1,
      sym_comment,
  [6101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      sym_comment,
  [6114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_comment,
  [6127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(795), 1,
      anon_sym_DASH_GT,
    STATE(225), 1,
      sym_comment,
  [6140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_comment,
  [6153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym_comment,
  [6166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      sym_imm_ident,
    STATE(228), 1,
      sym_comment,
  [6179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      sym_identifier,
    STATE(229), 1,
      sym_comment,
  [6192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_comment,
  [6205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(805), 1,
      sym_identifier,
    STATE(231), 1,
      sym_comment,
  [6218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(807), 1,
      sym_identifier,
    STATE(232), 1,
      sym_comment,
  [6231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_comment,
  [6244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      anon_sym_DASH_GT,
    STATE(234), 1,
      sym_comment,
  [6257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(813), 1,
      sym_imm_ident,
    STATE(235), 1,
      sym_comment,
  [6270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_comment,
  [6283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(817), 1,
      sym_hex_escape,
    STATE(237), 1,
      sym_comment,
  [6296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(819), 1,
      sym_imm_ident,
    STATE(238), 1,
      sym_comment,
  [6309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(821), 1,
      sym_imm_ident,
    STATE(239), 1,
      sym_comment,
  [6322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(823), 1,
      sym_imm_ident,
    STATE(240), 1,
      sym_comment,
  [6335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(825), 1,
      sym_index,
    STATE(241), 1,
      sym_comment,
  [6348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      anon_sym_DASH_GT,
    STATE(242), 1,
      sym_comment,
  [6361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      sym_hex_escape,
    STATE(243), 1,
      sym_comment,
  [6374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      sym_unicode_escape_short,
    STATE(244), 1,
      sym_comment,
  [6387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      sym_unicode_escape_long,
    STATE(245), 1,
      sym_comment,
  [6400] = 4,
    ACTIONS(505), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(507), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(831), 1,
      sym_char_escape,
    STATE(246), 1,
      sym_comment,
  [6413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      sym_imm_ident,
    STATE(247), 1,
      sym_comment,
  [6426] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      sym_comment,
  [6439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(837), 1,
      sym_imm_ident,
    STATE(249), 1,
      sym_comment,
  [6452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_comment,
  [6465] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(817), 1,
      sym_unicode_escape_short,
    STATE(251), 1,
      sym_comment,
  [6478] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(841), 1,
      sym_unicode_escape,
    STATE(252), 1,
      sym_comment,
  [6491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(843), 1,
      sym_imm_ident,
    STATE(253), 1,
      sym_comment,
  [6504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(845), 1,
      sym_imm_ident,
    STATE(254), 1,
      sym_comment,
  [6517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(847), 1,
      sym_imm_ident,
    STATE(255), 1,
      sym_comment,
  [6530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(849), 1,
      sym_index,
    STATE(256), 1,
      sym_comment,
  [6543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      sym_comment,
  [6556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(817), 1,
      sym_unicode_escape_long,
    STATE(258), 1,
      sym_comment,
  [6569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(853), 1,
      sym_unicode_escape,
    STATE(259), 1,
      sym_comment,
  [6582] = 1,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
  [6586] = 1,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 241,
  [SMALL_STATE(6)] = 329,
  [SMALL_STATE(7)] = 397,
  [SMALL_STATE(8)] = 463,
  [SMALL_STATE(9)] = 504,
  [SMALL_STATE(10)] = 545,
  [SMALL_STATE(11)] = 613,
  [SMALL_STATE(12)] = 681,
  [SMALL_STATE(13)] = 742,
  [SMALL_STATE(14)] = 803,
  [SMALL_STATE(15)] = 862,
  [SMALL_STATE(16)] = 899,
  [SMALL_STATE(17)] = 957,
  [SMALL_STATE(18)] = 992,
  [SMALL_STATE(19)] = 1027,
  [SMALL_STATE(20)] = 1062,
  [SMALL_STATE(21)] = 1117,
  [SMALL_STATE(22)] = 1172,
  [SMALL_STATE(23)] = 1207,
  [SMALL_STATE(24)] = 1263,
  [SMALL_STATE(25)] = 1317,
  [SMALL_STATE(26)] = 1373,
  [SMALL_STATE(27)] = 1429,
  [SMALL_STATE(28)] = 1485,
  [SMALL_STATE(29)] = 1518,
  [SMALL_STATE(30)] = 1551,
  [SMALL_STATE(31)] = 1584,
  [SMALL_STATE(32)] = 1617,
  [SMALL_STATE(33)] = 1650,
  [SMALL_STATE(34)] = 1683,
  [SMALL_STATE(35)] = 1716,
  [SMALL_STATE(36)] = 1749,
  [SMALL_STATE(37)] = 1782,
  [SMALL_STATE(38)] = 1815,
  [SMALL_STATE(39)] = 1846,
  [SMALL_STATE(40)] = 1877,
  [SMALL_STATE(41)] = 1908,
  [SMALL_STATE(42)] = 1939,
  [SMALL_STATE(43)] = 1970,
  [SMALL_STATE(44)] = 2001,
  [SMALL_STATE(45)] = 2032,
  [SMALL_STATE(46)] = 2063,
  [SMALL_STATE(47)] = 2094,
  [SMALL_STATE(48)] = 2125,
  [SMALL_STATE(49)] = 2156,
  [SMALL_STATE(50)] = 2187,
  [SMALL_STATE(51)] = 2218,
  [SMALL_STATE(52)] = 2249,
  [SMALL_STATE(53)] = 2280,
  [SMALL_STATE(54)] = 2311,
  [SMALL_STATE(55)] = 2342,
  [SMALL_STATE(56)] = 2373,
  [SMALL_STATE(57)] = 2404,
  [SMALL_STATE(58)] = 2435,
  [SMALL_STATE(59)] = 2466,
  [SMALL_STATE(60)] = 2497,
  [SMALL_STATE(61)] = 2528,
  [SMALL_STATE(62)] = 2559,
  [SMALL_STATE(63)] = 2590,
  [SMALL_STATE(64)] = 2621,
  [SMALL_STATE(65)] = 2652,
  [SMALL_STATE(66)] = 2683,
  [SMALL_STATE(67)] = 2713,
  [SMALL_STATE(68)] = 2743,
  [SMALL_STATE(69)] = 2773,
  [SMALL_STATE(70)] = 2803,
  [SMALL_STATE(71)] = 2833,
  [SMALL_STATE(72)] = 2863,
  [SMALL_STATE(73)] = 2907,
  [SMALL_STATE(74)] = 2937,
  [SMALL_STATE(75)] = 2975,
  [SMALL_STATE(76)] = 3005,
  [SMALL_STATE(77)] = 3035,
  [SMALL_STATE(78)] = 3065,
  [SMALL_STATE(79)] = 3111,
  [SMALL_STATE(80)] = 3157,
  [SMALL_STATE(81)] = 3203,
  [SMALL_STATE(82)] = 3249,
  [SMALL_STATE(83)] = 3297,
  [SMALL_STATE(84)] = 3341,
  [SMALL_STATE(85)] = 3367,
  [SMALL_STATE(86)] = 3402,
  [SMALL_STATE(87)] = 3425,
  [SMALL_STATE(88)] = 3448,
  [SMALL_STATE(89)] = 3471,
  [SMALL_STATE(90)] = 3514,
  [SMALL_STATE(91)] = 3537,
  [SMALL_STATE(92)] = 3560,
  [SMALL_STATE(93)] = 3589,
  [SMALL_STATE(94)] = 3628,
  [SMALL_STATE(95)] = 3664,
  [SMALL_STATE(96)] = 3702,
  [SMALL_STATE(97)] = 3740,
  [SMALL_STATE(98)] = 3773,
  [SMALL_STATE(99)] = 3806,
  [SMALL_STATE(100)] = 3826,
  [SMALL_STATE(101)] = 3856,
  [SMALL_STATE(102)] = 3888,
  [SMALL_STATE(103)] = 3910,
  [SMALL_STATE(104)] = 3942,
  [SMALL_STATE(105)] = 3962,
  [SMALL_STATE(106)] = 3984,
  [SMALL_STATE(107)] = 4004,
  [SMALL_STATE(108)] = 4026,
  [SMALL_STATE(109)] = 4058,
  [SMALL_STATE(110)] = 4078,
  [SMALL_STATE(111)] = 4097,
  [SMALL_STATE(112)] = 4116,
  [SMALL_STATE(113)] = 4135,
  [SMALL_STATE(114)] = 4154,
  [SMALL_STATE(115)] = 4173,
  [SMALL_STATE(116)] = 4202,
  [SMALL_STATE(117)] = 4221,
  [SMALL_STATE(118)] = 4244,
  [SMALL_STATE(119)] = 4263,
  [SMALL_STATE(120)] = 4290,
  [SMALL_STATE(121)] = 4309,
  [SMALL_STATE(122)] = 4338,
  [SMALL_STATE(123)] = 4357,
  [SMALL_STATE(124)] = 4386,
  [SMALL_STATE(125)] = 4413,
  [SMALL_STATE(126)] = 4432,
  [SMALL_STATE(127)] = 4461,
  [SMALL_STATE(128)] = 4480,
  [SMALL_STATE(129)] = 4509,
  [SMALL_STATE(130)] = 4528,
  [SMALL_STATE(131)] = 4547,
  [SMALL_STATE(132)] = 4576,
  [SMALL_STATE(133)] = 4595,
  [SMALL_STATE(134)] = 4614,
  [SMALL_STATE(135)] = 4633,
  [SMALL_STATE(136)] = 4652,
  [SMALL_STATE(137)] = 4671,
  [SMALL_STATE(138)] = 4691,
  [SMALL_STATE(139)] = 4711,
  [SMALL_STATE(140)] = 4731,
  [SMALL_STATE(141)] = 4751,
  [SMALL_STATE(142)] = 4771,
  [SMALL_STATE(143)] = 4791,
  [SMALL_STATE(144)] = 4815,
  [SMALL_STATE(145)] = 4835,
  [SMALL_STATE(146)] = 4855,
  [SMALL_STATE(147)] = 4875,
  [SMALL_STATE(148)] = 4895,
  [SMALL_STATE(149)] = 4916,
  [SMALL_STATE(150)] = 4939,
  [SMALL_STATE(151)] = 4960,
  [SMALL_STATE(152)] = 4983,
  [SMALL_STATE(153)] = 5000,
  [SMALL_STATE(154)] = 5021,
  [SMALL_STATE(155)] = 5042,
  [SMALL_STATE(156)] = 5063,
  [SMALL_STATE(157)] = 5080,
  [SMALL_STATE(158)] = 5097,
  [SMALL_STATE(159)] = 5118,
  [SMALL_STATE(160)] = 5139,
  [SMALL_STATE(161)] = 5160,
  [SMALL_STATE(162)] = 5179,
  [SMALL_STATE(163)] = 5200,
  [SMALL_STATE(164)] = 5221,
  [SMALL_STATE(165)] = 5242,
  [SMALL_STATE(166)] = 5264,
  [SMALL_STATE(167)] = 5283,
  [SMALL_STATE(168)] = 5302,
  [SMALL_STATE(169)] = 5321,
  [SMALL_STATE(170)] = 5338,
  [SMALL_STATE(171)] = 5353,
  [SMALL_STATE(172)] = 5372,
  [SMALL_STATE(173)] = 5387,
  [SMALL_STATE(174)] = 5406,
  [SMALL_STATE(175)] = 5425,
  [SMALL_STATE(176)] = 5441,
  [SMALL_STATE(177)] = 5455,
  [SMALL_STATE(178)] = 5471,
  [SMALL_STATE(179)] = 5487,
  [SMALL_STATE(180)] = 5503,
  [SMALL_STATE(181)] = 5519,
  [SMALL_STATE(182)] = 5535,
  [SMALL_STATE(183)] = 5551,
  [SMALL_STATE(184)] = 5567,
  [SMALL_STATE(185)] = 5583,
  [SMALL_STATE(186)] = 5599,
  [SMALL_STATE(187)] = 5615,
  [SMALL_STATE(188)] = 5631,
  [SMALL_STATE(189)] = 5647,
  [SMALL_STATE(190)] = 5663,
  [SMALL_STATE(191)] = 5679,
  [SMALL_STATE(192)] = 5695,
  [SMALL_STATE(193)] = 5711,
  [SMALL_STATE(194)] = 5724,
  [SMALL_STATE(195)] = 5737,
  [SMALL_STATE(196)] = 5750,
  [SMALL_STATE(197)] = 5763,
  [SMALL_STATE(198)] = 5776,
  [SMALL_STATE(199)] = 5789,
  [SMALL_STATE(200)] = 5802,
  [SMALL_STATE(201)] = 5815,
  [SMALL_STATE(202)] = 5828,
  [SMALL_STATE(203)] = 5841,
  [SMALL_STATE(204)] = 5854,
  [SMALL_STATE(205)] = 5867,
  [SMALL_STATE(206)] = 5880,
  [SMALL_STATE(207)] = 5893,
  [SMALL_STATE(208)] = 5906,
  [SMALL_STATE(209)] = 5919,
  [SMALL_STATE(210)] = 5932,
  [SMALL_STATE(211)] = 5945,
  [SMALL_STATE(212)] = 5958,
  [SMALL_STATE(213)] = 5971,
  [SMALL_STATE(214)] = 5984,
  [SMALL_STATE(215)] = 5997,
  [SMALL_STATE(216)] = 6010,
  [SMALL_STATE(217)] = 6023,
  [SMALL_STATE(218)] = 6036,
  [SMALL_STATE(219)] = 6049,
  [SMALL_STATE(220)] = 6062,
  [SMALL_STATE(221)] = 6075,
  [SMALL_STATE(222)] = 6088,
  [SMALL_STATE(223)] = 6101,
  [SMALL_STATE(224)] = 6114,
  [SMALL_STATE(225)] = 6127,
  [SMALL_STATE(226)] = 6140,
  [SMALL_STATE(227)] = 6153,
  [SMALL_STATE(228)] = 6166,
  [SMALL_STATE(229)] = 6179,
  [SMALL_STATE(230)] = 6192,
  [SMALL_STATE(231)] = 6205,
  [SMALL_STATE(232)] = 6218,
  [SMALL_STATE(233)] = 6231,
  [SMALL_STATE(234)] = 6244,
  [SMALL_STATE(235)] = 6257,
  [SMALL_STATE(236)] = 6270,
  [SMALL_STATE(237)] = 6283,
  [SMALL_STATE(238)] = 6296,
  [SMALL_STATE(239)] = 6309,
  [SMALL_STATE(240)] = 6322,
  [SMALL_STATE(241)] = 6335,
  [SMALL_STATE(242)] = 6348,
  [SMALL_STATE(243)] = 6361,
  [SMALL_STATE(244)] = 6374,
  [SMALL_STATE(245)] = 6387,
  [SMALL_STATE(246)] = 6400,
  [SMALL_STATE(247)] = 6413,
  [SMALL_STATE(248)] = 6426,
  [SMALL_STATE(249)] = 6439,
  [SMALL_STATE(250)] = 6452,
  [SMALL_STATE(251)] = 6465,
  [SMALL_STATE(252)] = 6478,
  [SMALL_STATE(253)] = 6491,
  [SMALL_STATE(254)] = 6504,
  [SMALL_STATE(255)] = 6517,
  [SMALL_STATE(256)] = 6530,
  [SMALL_STATE(257)] = 6543,
  [SMALL_STATE(258)] = 6556,
  [SMALL_STATE(259)] = 6569,
  [SMALL_STATE(260)] = 6582,
  [SMALL_STATE(261)] = 6586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(42),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(187),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(155),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(72),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(171),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(41),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(186),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(191),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(185),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(178),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(180),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(143),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(162),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(160),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(159),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 3, .production_id = 49),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 3, .production_id = 49),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(192),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(66),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(66),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(103),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(255),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(256),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(254),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 2, .production_id = 52), SHIFT_REPEAT(228),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(216),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(12),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(95),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(101),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(204),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(196),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(235),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 2, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_register, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_register, 2, .production_id = 24),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_register, 2, .production_id = 24),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 38),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 38),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(182),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(184),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(232),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(231),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(229),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(194),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 20),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, .production_id = 30),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, .production_id = 30),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 29),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 29),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_label, 2, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_literal, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_literal, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem, 2, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mem, 2, .production_id = 15),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 22),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 22),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 31),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 31),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 16),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 16),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 44),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 44),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 41),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 41),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_label, 2, .production_id = 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 2, .production_id = 31),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2, .production_id = 31),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 31),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 31),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 31),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 31),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 31),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 31),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 31),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 31),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 31),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 31),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, .production_id = 31),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 31),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 31),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 31),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 31),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 31),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 31),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 31),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 31),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 31),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 31),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 31),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 48),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_generic_repeat1, 1, .production_id = 48),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_inst_label, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_inst_label, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_value, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_value, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 2, .production_id = 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(98),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(247),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(165),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(151),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 2, .production_id = 35), SHIFT_REPEAT(181),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(217),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(228),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(149),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(235),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 3, .production_id = 14),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(107),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(237),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(251),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(252),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(258),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, .production_id = 23), SHIFT_REPEAT(219),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 2, .production_id = 5),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 3, .production_id = 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3, .production_id = 4),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, .production_id = 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, .production_id = 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 11),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 11),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deferred_func, 4, .production_id = 10),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 12),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 32),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 34),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 4, .production_id = 34),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 3, .production_id = 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deferred_func, 3, .production_id = 5),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 37),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 37), SHIFT_REPEAT(247),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 5, .production_id = 40),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 42), SHIFT_REPEAT(217),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 42),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 2, .production_id = 42), SHIFT_REPEAT(228),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 3, .production_id = 17),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 5, .production_id = 45),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(217),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 27),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 2, .production_id = 27), SHIFT_REPEAT(228),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_binary, 5, .production_id = 47),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_branch, 3, .production_id = 17),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 4, .production_id = 14),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 6, .production_id = 51),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 7, .production_id = 53),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_head, 4, .production_id = 26),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 17),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dunder_branching, 7, .production_id = 54),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_func, 8, .production_id = 55),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 19),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_repeat1, 1, .production_id = 19),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_jmp, 2, .production_id = 33),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_jmp, 2, .production_id = 33),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 2, .production_id = 36),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 2, .production_id = 36),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 50),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 50),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 50),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 50),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 1, .production_id = 19),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 1, .production_id = 19),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_register, 3, .production_id = 43),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat1, 1, .production_id = 13),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_reg, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 18),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 18),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(176),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_head_repeat1, 1, .production_id = 13),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inst_head_repeat2, 1, .production_id = 25),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 3, .production_id = 10),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_head, 5, .production_id = 46),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_head, 4, .production_id = 28),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [797] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 5, .production_id = 39),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_head, 4, .production_id = 21),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
