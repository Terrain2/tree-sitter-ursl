#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 41

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
  anon_sym_LF = 32,
  anon_sym_height = 33,
  anon_sym_jump = 34,
  anon_sym_halt = 35,
  anon_sym_perm = 36,
  anon_sym_const = 37,
  anon_sym_in = 38,
  anon_sym_out = 39,
  anon_sym_call = 40,
  anon_sym_icall = 41,
  anon_sym_ret = 42,
  anon_sym_ref = 43,
  anon_sym_get = 44,
  anon_sym_set = 45,
  sym_register = 46,
  sym_input_register = 47,
  sym_urcl_end_label = 48,
  anon_sym_JMP = 49,
  anon_sym_IN = 50,
  anon_sym_OUT = 51,
  sym_source_file = 52,
  sym__header = 53,
  sym_bits = 54,
  sym_minstack = 55,
  sym_minheap = 56,
  sym_comment = 57,
  sym_array = 58,
  sym__literal = 59,
  sym_number = 60,
  sym_char_literal = 61,
  sym_definition = 62,
  sym_stack_behaviour = 63,
  sym_func = 64,
  sym_inst = 65,
  sym_inst_permutation = 66,
  sym_permutation = 67,
  sym_stack_frame = 68,
  sym_branch_block = 69,
  sym__instruction = 70,
  sym_urcl_instructions = 71,
  sym_height = 72,
  sym_jump = 73,
  sym_halt = 74,
  sym_perm = 75,
  sym_const = 76,
  sym_in = 77,
  sym_out = 78,
  sym_call = 79,
  sym_icall = 80,
  sym_ret = 81,
  sym_ref = 82,
  sym_get = 83,
  sym_set = 84,
  sym_branch = 85,
  sym_custom_instruction = 86,
  sym_urcl_instruction = 87,
  sym__reg = 88,
  sym__urcl_value = 89,
  sym__urcl_label = 90,
  sym_urcl_jmp = 91,
  sym_urcl_in = 92,
  sym_urcl_out = 93,
  sym_urcl_generic = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_source_file_repeat2 = 96,
  aux_sym_source_file_repeat3 = 97,
  aux_sym_array_repeat1 = 98,
  aux_sym_func_repeat1 = 99,
  aux_sym_stack_frame_repeat1 = 100,
  aux_sym_urcl_instructions_repeat1 = 101,
  aux_sym_urcl_instruction_repeat1 = 102,
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
  [anon_sym_LF] = "\n",
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
  [sym_input_register] = "input_register",
  [sym_urcl_end_label] = "urcl_end_label",
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
  [sym_urcl_instructions] = "urcl_instructions",
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
  [sym_urcl_instruction] = "urcl_instruction",
  [sym__reg] = "_reg",
  [sym__urcl_value] = "_urcl_value",
  [sym__urcl_label] = "_urcl_label",
  [sym_urcl_jmp] = "urcl_jmp",
  [sym_urcl_in] = "urcl_in",
  [sym_urcl_out] = "urcl_out",
  [sym_urcl_generic] = "urcl_generic",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_func_repeat1] = "func_repeat1",
  [aux_sym_stack_frame_repeat1] = "stack_frame_repeat1",
  [aux_sym_urcl_instructions_repeat1] = "urcl_instructions_repeat1",
  [aux_sym_urcl_instruction_repeat1] = "urcl_instruction_repeat1",
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
  [anon_sym_LF] = anon_sym_LF,
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
  [sym_input_register] = sym_input_register,
  [sym_urcl_end_label] = sym_urcl_end_label,
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
  [sym_urcl_instructions] = sym_urcl_instructions,
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
  [sym_urcl_instruction] = sym_urcl_instruction,
  [sym__reg] = sym__reg,
  [sym__urcl_value] = sym__urcl_value,
  [sym__urcl_label] = sym__urcl_label,
  [sym_urcl_jmp] = sym_urcl_jmp,
  [sym_urcl_in] = sym_urcl_in,
  [sym_urcl_out] = sym_urcl_out,
  [sym_urcl_generic] = sym_urcl_generic,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
  [aux_sym_stack_frame_repeat1] = aux_sym_stack_frame_repeat1,
  [aux_sym_urcl_instructions_repeat1] = aux_sym_urcl_instructions_repeat1,
  [aux_sym_urcl_instruction_repeat1] = aux_sym_urcl_instruction_repeat1,
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
  [anon_sym_LF] = {
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
  [sym_input_register] = {
    .visible = true,
    .named = true,
  },
  [sym_urcl_end_label] = {
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
  [sym_urcl_instructions] = {
    .visible = true,
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
  [sym_urcl_instruction] = {
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
  [sym__urcl_label] = {
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
};

enum {
  field_branch = 1,
  field_code = 2,
  field_data = 3,
  field_dest = 4,
  field_headers = 5,
  field_input = 6,
  field_instruction = 7,
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
  [field_branch] = "branch",
  [field_code] = "code",
  [field_data] = "data",
  [field_dest] = "dest",
  [field_headers] = "headers",
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
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 4},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 2},
  [26] = {.index = 45, .length = 3},
  [27] = {.index = 48, .length = 1},
  [28] = {.index = 49, .length = 1},
  [29] = {.index = 50, .length = 1},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 3},
  [32] = {.index = 56, .length = 3},
  [33] = {.index = 59, .length = 3},
  [34] = {.index = 62, .length = 3},
  [35] = {.index = 65, .length = 2},
  [36] = {.index = 67, .length = 2},
  [37] = {.index = 69, .length = 2},
  [38] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 4},
  [40] = {.index = 77, .length = 4},
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
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [23] =
    {field_label, 0},
    {field_opcode, 1},
  [25] =
    {field_label, 0},
  [26] =
    {field_operand, 1},
  [27] =
    {field_instructions, 3},
    {field_name, 1},
  [29] =
    {field_params, 0},
    {field_returns, 2},
  [31] =
    {field_name, 1},
    {field_stack, 2},
  [33] =
    {field_branch, 4},
    {field_instructions, 3},
    {field_name, 1},
    {field_stack, 2},
  [37] =
    {field_input, 0},
    {field_output, 2},
  [39] =
    {field_locals, 3},
    {field_name, 1},
  [41] =
    {field_opcode, 0},
    {field_operand, 2},
  [43] =
    {field_label, 0},
    {field_operand, 2},
  [45] =
    {field_instructions, 4},
    {field_name, 1},
    {field_stack, 2},
  [48] =
    {field_dest, 1},
  [49] =
    {field_instruction, 1},
  [50] =
    {field_label, 0, .inherited = true},
  [51] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [53] =
    {field_instructions, 5},
    {field_locals, 3},
    {field_name, 1},
  [56] =
    {field_label, 0},
    {field_opcode, 1},
    {field_operand, 3},
  [59] =
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [62] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
  [65] =
    {field_dest, 1},
    {field_source, 2},
  [67] =
    {field_instruction, 1},
    {field_instruction, 2, .inherited = true},
  [69] =
    {field_instruction, 0, .inherited = true},
    {field_instruction, 1, .inherited = true},
  [71] =
    {field_instructions, 2},
    {field_label, 1},
  [73] =
    {field_instructions, 6},
    {field_locals, 4},
    {field_name, 1},
    {field_stack, 2},
  [77] =
    {field_dest, 1},
    {field_op, 0},
    {field_source, 2},
    {field_source, 3},
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
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'J') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(20);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'j') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'j') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'j') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(151);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(156);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(196);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(198);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(203);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(201);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 80:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 81:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 82:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 83:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_minstack);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_minheap);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(202);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_function_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_char_escape);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_macro);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_mem);
      if (lookahead == '0') ADVANCE(157);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_inst_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_data_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_inst);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_halt);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_halt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_perm);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_perm);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_icall);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_icall);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0') ADVANCE(197);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_input_register);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_input_register);
      if (lookahead == '0') ADVANCE(199);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_urcl_end_label);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_OUT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 84},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 84},
  [81] = {.lex_state = 84},
  [82] = {.lex_state = 84},
  [83] = {.lex_state = 84},
  [84] = {.lex_state = 84},
  [85] = {.lex_state = 84},
  [86] = {.lex_state = 84},
  [87] = {.lex_state = 84},
  [88] = {.lex_state = 84},
  [89] = {.lex_state = 84},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 84},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 84},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 84},
  [113] = {.lex_state = 84},
  [114] = {.lex_state = 84},
  [115] = {.lex_state = 84},
  [116] = {.lex_state = 84},
  [117] = {.lex_state = 84},
  [118] = {.lex_state = 84},
  [119] = {.lex_state = 84},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 84},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 84},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 84},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 84},
  [131] = {.lex_state = 84},
  [132] = {.lex_state = 84},
  [133] = {.lex_state = 84},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 84},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 84},
  [140] = {.lex_state = 84},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 84},
  [143] = {.lex_state = 84},
  [144] = {.lex_state = 84},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 135},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {(TSStateId)(-1)},
  [194] = {(TSStateId)(-1)},
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
    [sym_input_register] = ACTIONS(1),
    [sym_urcl_end_label] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(178),
    [sym__header] = STATE(80),
    [sym_bits] = STATE(89),
    [sym_minstack] = STATE(89),
    [sym_minheap] = STATE(89),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(112),
    [sym_func] = STATE(140),
    [sym_inst] = STATE(140),
    [sym_inst_permutation] = STATE(140),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_source_file_repeat2] = STATE(77),
    [aux_sym_source_file_repeat3] = STATE(88),
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
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
    STATE(4), 1,
      aux_sym_func_repeat1,
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
  [405] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      sym_inst_label,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_height,
    ACTIONS(72), 1,
      anon_sym_jump,
    ACTIONS(75), 1,
      anon_sym_halt,
    ACTIONS(78), 1,
      anon_sym_perm,
    ACTIONS(81), 1,
      anon_sym_const,
    ACTIONS(84), 1,
      anon_sym_in,
    ACTIONS(87), 1,
      anon_sym_out,
    ACTIONS(90), 1,
      anon_sym_call,
    ACTIONS(93), 1,
      anon_sym_icall,
    ACTIONS(96), 1,
      anon_sym_ret,
    ACTIONS(99), 1,
      anon_sym_ref,
    ACTIONS(102), 1,
      anon_sym_get,
    ACTIONS(105), 1,
      anon_sym_set,
    STATE(27), 1,
      sym__instruction,
    STATE(7), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(24), 15,
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
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_func_repeat1,
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
    STATE(7), 1,
      aux_sym_func_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(27), 1,
      sym__instruction,
    STATE(24), 15,
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
  [727] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      aux_sym_number_token3,
    STATE(11), 1,
      sym_comment,
    ACTIONS(114), 18,
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
  [760] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(120), 4,
      sym_inst_label,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(118), 14,
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
  [792] = 12,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_comment,
    STATE(151), 1,
      sym__urcl_value,
    ACTIONS(136), 2,
      sym_register,
      sym_input_register,
    STATE(64), 2,
      sym__literal,
      sym__reg,
    STATE(67), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(126), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(128), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [838] = 17,
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
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_source_file_repeat1,
    STATE(76), 1,
      aux_sym_source_file_repeat2,
    STATE(80), 1,
      sym__header,
    STATE(84), 1,
      aux_sym_source_file_repeat3,
    STATE(112), 1,
      sym_definition,
    STATE(89), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [894] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_branch,
    STATE(15), 1,
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
  [927] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_branch,
    STATE(16), 1,
      sym_comment,
    ACTIONS(148), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(146), 14,
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
  [960] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
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
  [990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
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
  [1020] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
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
  [1050] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(114), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(116), 14,
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
  [1080] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
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
  [1110] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
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
  [1140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
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
  [1170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
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
  [1200] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
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
  [1230] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
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
  [1260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
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
  [1290] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
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
  [1320] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
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
  [1350] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
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
  [1380] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
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
  [1410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
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
  [1440] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
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
  [1470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
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
  [1500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
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
  [1530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
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
  [1560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
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
  [1590] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
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
  [1620] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
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
  [1650] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      aux_sym_number_token3,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_comment,
    STATE(149), 1,
      sym__urcl_value,
    ACTIONS(246), 2,
      sym_register,
      sym_input_register,
    STATE(64), 2,
      sym__literal,
      sym__reg,
    STATE(67), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(242), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(240), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1692] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      aux_sym_number_token3,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym__urcl_value,
    STATE(41), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_register,
      sym_input_register,
    STATE(64), 2,
      sym__literal,
      sym__reg,
    STATE(67), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(242), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(240), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [1734] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
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
  [1764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
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
  [1794] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
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
  [1824] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
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
  [1854] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
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
  [1884] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
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
  [1914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
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
  [1944] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
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
  [1974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
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
  [2004] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(286), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(284), 14,
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
    ACTIONS(290), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(288), 14,
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
    ACTIONS(294), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(292), 14,
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
    ACTIONS(298), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(296), 14,
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
  [2124] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_height,
    ACTIONS(304), 1,
      anon_sym_jump,
    ACTIONS(306), 1,
      anon_sym_halt,
    ACTIONS(308), 1,
      anon_sym_perm,
    ACTIONS(310), 1,
      anon_sym_const,
    ACTIONS(312), 1,
      anon_sym_in,
    ACTIONS(314), 1,
      anon_sym_out,
    ACTIONS(316), 1,
      anon_sym_call,
    ACTIONS(318), 1,
      anon_sym_icall,
    ACTIONS(320), 1,
      anon_sym_ret,
    ACTIONS(322), 1,
      anon_sym_ref,
    ACTIONS(324), 1,
      anon_sym_get,
    ACTIONS(326), 1,
      anon_sym_set,
    STATE(55), 1,
      sym_comment,
  [2176] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      aux_sym_number_token3,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym__literal,
    STATE(56), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(333), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(328), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2214] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_array_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(75), 1,
      sym__literal,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(342), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2254] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(75), 1,
      sym__literal,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(342), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2294] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_comment,
    STATE(63), 2,
      sym_number,
      sym_char_literal,
    STATE(119), 2,
      sym_array,
      sym__literal,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(342), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      aux_sym_number_token3,
    STATE(60), 1,
      sym_comment,
    ACTIONS(294), 12,
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
  [2359] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_comment,
    ACTIONS(292), 12,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
      sym_input_register,
  [2386] = 13,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym_inst_label,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      anon_sym_JMP,
    ACTIONS(366), 1,
      anon_sym_IN,
    ACTIONS(368), 1,
      anon_sym_OUT,
    STATE(62), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(152), 1,
      sym_urcl_instruction,
    STATE(161), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      aux_sym_number_token3,
    STATE(63), 1,
      sym_comment,
    ACTIONS(162), 12,
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
  [2456] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym_comment,
    ACTIONS(370), 12,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
      sym_input_register,
  [2483] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(376), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_comment,
    ACTIONS(374), 12,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
      sym_input_register,
  [2510] = 5,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(116), 12,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
      sym_input_register,
  [2537] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_comment,
    ACTIONS(160), 12,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      anon_sym_RBRACE,
      sym_register,
      sym_input_register,
  [2564] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(374), 1,
      aux_sym_number_token3,
    STATE(68), 1,
      sym_comment,
    ACTIONS(376), 11,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_port,
      sym_data_label,
      sym_register,
      sym_input_register,
  [2590] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__literal,
    STATE(69), 1,
      sym_comment,
    STATE(19), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(378), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2624] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(388), 1,
      anon_sym_bits,
    ACTIONS(391), 1,
      anon_sym_minstack,
    ACTIONS(394), 1,
      anon_sym_minheap,
    STATE(80), 1,
      sym__header,
    STATE(70), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(89), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(386), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2658] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym__literal,
    STATE(71), 1,
      sym_comment,
    STATE(19), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(378), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      aux_sym_number_token3,
    STATE(72), 1,
      sym_comment,
    ACTIONS(397), 10,
      sym_function_name,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
      sym_register,
      sym_input_register,
  [2717] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_JMP,
    ACTIONS(366), 1,
      anon_sym_IN,
    ACTIONS(368), 1,
      anon_sym_OUT,
    ACTIONS(401), 1,
      sym_inst_label,
    STATE(73), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(127), 1,
      sym_urcl_instruction,
    STATE(161), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2754] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_JMP,
    ACTIONS(366), 1,
      anon_sym_IN,
    ACTIONS(368), 1,
      anon_sym_OUT,
    ACTIONS(401), 1,
      sym_inst_label,
    STATE(74), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(154), 1,
      sym_urcl_jmp,
    STATE(155), 1,
      sym_urcl_in,
    STATE(156), 1,
      sym_urcl_out,
    STATE(157), 1,
      sym_urcl_generic,
  [2794] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(405), 1,
      aux_sym_number_token3,
    STATE(75), 1,
      sym_comment,
    ACTIONS(403), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2818] = 11,
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
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_source_file_repeat3,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(112), 1,
      sym_definition,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2854] = 11,
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
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_source_file_repeat3,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(112), 1,
      sym_definition,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2890] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_comment,
    STATE(142), 1,
      sym_permutation,
    STATE(145), 1,
      sym_stack_behaviour,
    STATE(172), 1,
      sym_number,
    STATE(175), 1,
      sym_stack_frame,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2923] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(146), 1,
      sym_stack_behaviour,
    STATE(172), 1,
      sym_number,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(417), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2972] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_source_file_repeat3,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2999] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      anon_sym_func,
    ACTIONS(426), 1,
      anon_sym_inst,
    STATE(82), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3024] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym_source_file_repeat3,
    STATE(83), 1,
      sym_comment,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3051] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym_source_file_repeat3,
    STATE(84), 1,
      sym_comment,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(437), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3135] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym_source_file_repeat3,
    STATE(88), 1,
      sym_comment,
    STATE(140), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3162] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(441), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3181] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym_inst_label,
      sym_urcl_end_label,
    ACTIONS(445), 2,
      sym_register,
      sym_input_register,
    STATE(41), 2,
      sym__reg,
      sym__urcl_label,
  [3203] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(34), 1,
      sym_stack_behaviour,
    STATE(91), 1,
      sym_comment,
    STATE(187), 1,
      sym_number,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(449), 1,
      sym_inst_label,
    STATE(92), 2,
      sym_comment,
      aux_sym_urcl_instruction_repeat1,
    ACTIONS(447), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3247] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      sym_data_label,
    STATE(112), 1,
      sym_definition,
    STATE(93), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3269] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(50), 1,
      sym_stack_behaviour,
    STATE(94), 1,
      sym_comment,
    STATE(187), 1,
      sym_number,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3293] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(47), 1,
      sym_number,
    STATE(95), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3314] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(35), 1,
      sym_number,
    STATE(96), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3335] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(18), 1,
      sym_number,
    STATE(97), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3356] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(87), 1,
      sym_number,
    STATE(98), 1,
      sym_comment,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3377] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(86), 1,
      sym_number,
    STATE(99), 1,
      sym_comment,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3398] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(85), 1,
      sym_number,
    STATE(100), 1,
      sym_comment,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3419] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(12), 1,
      sym_number,
    STATE(101), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3440] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(38), 1,
      sym_number,
    STATE(102), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3461] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(49), 1,
      sym_number,
    STATE(103), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3482] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(37), 1,
      sym_number,
    STATE(104), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3503] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(459), 1,
      sym_inst_label,
    STATE(105), 1,
      sym_comment,
    ACTIONS(457), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3522] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(12), 1,
      sym_number,
    STATE(106), 1,
      sym_comment,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3543] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(463), 1,
      anon_sym_branch,
    STATE(107), 1,
      sym_comment,
    STATE(130), 1,
      sym_branch_block,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3564] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(108), 1,
      sym_comment,
    STATE(181), 1,
      sym_number,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3585] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      aux_sym_number_token3,
    STATE(109), 1,
      sym_comment,
    STATE(177), 1,
      sym_number,
    ACTIONS(346), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3606] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(46), 1,
      sym_number,
    STATE(110), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3627] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      aux_sym_number_token3,
    STATE(48), 1,
      sym_number,
    STATE(111), 1,
      sym_comment,
    ACTIONS(380), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(465), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(298), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3696] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(469), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_comment,
    ACTIONS(471), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3744] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(119), 1,
      sym_comment,
    ACTIONS(475), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3776] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_stack_frame_repeat1,
  [3795] = 6,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_comment,
    STATE(141), 1,
      aux_sym_urcl_instructions_repeat1,
  [3814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3829] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(123), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [3846] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    STATE(148), 1,
      sym__urcl_label,
    ACTIONS(492), 2,
      sym_inst_label,
      sym_urcl_end_label,
  [3863] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    STATE(171), 1,
      sym__reg,
    ACTIONS(445), 2,
      sym_register,
      sym_input_register,
  [3880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3895] = 6,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      aux_sym_urcl_instructions_repeat1,
    STATE(127), 1,
      sym_comment,
  [3914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3929] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_stack_frame_repeat1,
    STATE(129), 1,
      sym_comment,
  [3948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(504), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(506), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4008] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_stack_frame_repeat1,
    STATE(134), 1,
      sym_comment,
  [4027] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_stack_frame_repeat1,
    STATE(135), 1,
      sym_comment,
  [4046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4061] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_permutation,
    STATE(137), 1,
      sym_comment,
    STATE(180), 1,
      sym_stack_frame,
  [4080] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_permutation,
    STATE(138), 1,
      sym_comment,
    STATE(180), 1,
      sym_stack_frame,
  [4099] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(514), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(516), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4129] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(141), 2,
      sym_comment,
      aux_sym_urcl_instructions_repeat1,
  [4146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_urcl_instructions,
    STATE(145), 1,
      sym_comment,
  [4207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_PLUS,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_comment,
  [4223] = 4,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(535), 2,
      sym_char,
      sym_char_escape,
  [4237] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    ACTIONS(539), 1,
      anon_sym_LF,
    STATE(148), 1,
      sym_comment,
  [4253] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      anon_sym_LF,
    STATE(149), 1,
      sym_comment,
  [4269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(545), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [4283] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_comment,
  [4299] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_comment,
  [4315] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_comment,
  [4331] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(154), 1,
      sym_comment,
  [4347] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(155), 1,
      sym_comment,
  [4363] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(156), 1,
      sym_comment,
  [4379] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym_comment,
  [4395] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_stack_frame,
    STATE(158), 1,
      sym_comment,
  [4411] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_urcl_instructions,
    STATE(159), 1,
      sym_comment,
  [4427] = 4,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_char,
      sym_char_escape,
  [4441] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(161), 1,
      sym_comment,
  [4457] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_stack_frame,
    STATE(162), 1,
      sym_comment,
  [4473] = 4,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    STATE(163), 1,
      sym_comment,
    ACTIONS(567), 2,
      sym_char,
      sym_char_escape,
  [4487] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      anon_sym_LF,
    STATE(164), 1,
      sym_comment,
  [4503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      sym_inst_label,
    STATE(165), 1,
      sym_comment,
  [4516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      sym_function_name,
    STATE(166), 1,
      sym_comment,
  [4529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      anon_sym_SLASH,
    STATE(167), 1,
      sym_comment,
  [4542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      sym_port,
    STATE(168), 1,
      sym_comment,
  [4555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      sym_inst_label,
    STATE(169), 1,
      sym_comment,
  [4568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      anon_sym_SQUOTE,
    STATE(170), 1,
      sym_comment,
  [4581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      sym_port,
    STATE(171), 1,
      sym_comment,
  [4594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      anon_sym_DASH_GT,
    STATE(172), 1,
      sym_comment,
  [4607] = 4,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      aux_sym_comment_token1,
    STATE(173), 1,
      sym_comment,
  [4620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      sym_inst_label,
    STATE(174), 1,
      sym_comment,
  [4633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      sym_comment,
  [4646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      sym_inst_label,
    STATE(176), 1,
      sym_comment,
  [4659] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_comment,
  [4672] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
  [4685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(179), 1,
      sym_comment,
  [4698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      anon_sym_DASH_GT,
    STATE(180), 1,
      sym_comment,
  [4711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_comment,
  [4724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      sym_port,
    STATE(182), 1,
      sym_comment,
  [4737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      sym_port,
    STATE(183), 1,
      sym_comment,
  [4750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      sym_function_name,
    STATE(184), 1,
      sym_comment,
  [4763] = 4,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      aux_sym_comment_token2,
    STATE(185), 1,
      sym_comment,
  [4776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_comment,
  [4789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      anon_sym_DASH_GT,
    STATE(187), 1,
      sym_comment,
  [4802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      sym_port,
    STATE(188), 1,
      sym_comment,
  [4815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_port,
    STATE(189), 1,
      sym_comment,
  [4828] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      sym_function_name,
    STATE(190), 1,
      sym_comment,
  [4841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym_comment,
  [4854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      sym_inst_label,
    STATE(192), 1,
      sym_comment,
  [4867] = 1,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
  [4871] = 1,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 646,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 838,
  [SMALL_STATE(15)] = 894,
  [SMALL_STATE(16)] = 927,
  [SMALL_STATE(17)] = 960,
  [SMALL_STATE(18)] = 990,
  [SMALL_STATE(19)] = 1020,
  [SMALL_STATE(20)] = 1050,
  [SMALL_STATE(21)] = 1080,
  [SMALL_STATE(22)] = 1110,
  [SMALL_STATE(23)] = 1140,
  [SMALL_STATE(24)] = 1170,
  [SMALL_STATE(25)] = 1200,
  [SMALL_STATE(26)] = 1230,
  [SMALL_STATE(27)] = 1260,
  [SMALL_STATE(28)] = 1290,
  [SMALL_STATE(29)] = 1320,
  [SMALL_STATE(30)] = 1350,
  [SMALL_STATE(31)] = 1380,
  [SMALL_STATE(32)] = 1410,
  [SMALL_STATE(33)] = 1440,
  [SMALL_STATE(34)] = 1470,
  [SMALL_STATE(35)] = 1500,
  [SMALL_STATE(36)] = 1530,
  [SMALL_STATE(37)] = 1560,
  [SMALL_STATE(38)] = 1590,
  [SMALL_STATE(39)] = 1620,
  [SMALL_STATE(40)] = 1650,
  [SMALL_STATE(41)] = 1692,
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
  [SMALL_STATE(56)] = 2176,
  [SMALL_STATE(57)] = 2214,
  [SMALL_STATE(58)] = 2254,
  [SMALL_STATE(59)] = 2294,
  [SMALL_STATE(60)] = 2332,
  [SMALL_STATE(61)] = 2359,
  [SMALL_STATE(62)] = 2386,
  [SMALL_STATE(63)] = 2429,
  [SMALL_STATE(64)] = 2456,
  [SMALL_STATE(65)] = 2483,
  [SMALL_STATE(66)] = 2510,
  [SMALL_STATE(67)] = 2537,
  [SMALL_STATE(68)] = 2564,
  [SMALL_STATE(69)] = 2590,
  [SMALL_STATE(70)] = 2624,
  [SMALL_STATE(71)] = 2658,
  [SMALL_STATE(72)] = 2692,
  [SMALL_STATE(73)] = 2717,
  [SMALL_STATE(74)] = 2754,
  [SMALL_STATE(75)] = 2794,
  [SMALL_STATE(76)] = 2818,
  [SMALL_STATE(77)] = 2854,
  [SMALL_STATE(78)] = 2890,
  [SMALL_STATE(79)] = 2923,
  [SMALL_STATE(80)] = 2953,
  [SMALL_STATE(81)] = 2972,
  [SMALL_STATE(82)] = 2999,
  [SMALL_STATE(83)] = 3024,
  [SMALL_STATE(84)] = 3051,
  [SMALL_STATE(85)] = 3078,
  [SMALL_STATE(86)] = 3097,
  [SMALL_STATE(87)] = 3116,
  [SMALL_STATE(88)] = 3135,
  [SMALL_STATE(89)] = 3162,
  [SMALL_STATE(90)] = 3181,
  [SMALL_STATE(91)] = 3203,
  [SMALL_STATE(92)] = 3227,
  [SMALL_STATE(93)] = 3247,
  [SMALL_STATE(94)] = 3269,
  [SMALL_STATE(95)] = 3293,
  [SMALL_STATE(96)] = 3314,
  [SMALL_STATE(97)] = 3335,
  [SMALL_STATE(98)] = 3356,
  [SMALL_STATE(99)] = 3377,
  [SMALL_STATE(100)] = 3398,
  [SMALL_STATE(101)] = 3419,
  [SMALL_STATE(102)] = 3440,
  [SMALL_STATE(103)] = 3461,
  [SMALL_STATE(104)] = 3482,
  [SMALL_STATE(105)] = 3503,
  [SMALL_STATE(106)] = 3522,
  [SMALL_STATE(107)] = 3543,
  [SMALL_STATE(108)] = 3564,
  [SMALL_STATE(109)] = 3585,
  [SMALL_STATE(110)] = 3606,
  [SMALL_STATE(111)] = 3627,
  [SMALL_STATE(112)] = 3648,
  [SMALL_STATE(113)] = 3664,
  [SMALL_STATE(114)] = 3680,
  [SMALL_STATE(115)] = 3696,
  [SMALL_STATE(116)] = 3712,
  [SMALL_STATE(117)] = 3728,
  [SMALL_STATE(118)] = 3744,
  [SMALL_STATE(119)] = 3760,
  [SMALL_STATE(120)] = 3776,
  [SMALL_STATE(121)] = 3795,
  [SMALL_STATE(122)] = 3814,
  [SMALL_STATE(123)] = 3829,
  [SMALL_STATE(124)] = 3846,
  [SMALL_STATE(125)] = 3863,
  [SMALL_STATE(126)] = 3880,
  [SMALL_STATE(127)] = 3895,
  [SMALL_STATE(128)] = 3914,
  [SMALL_STATE(129)] = 3929,
  [SMALL_STATE(130)] = 3948,
  [SMALL_STATE(131)] = 3963,
  [SMALL_STATE(132)] = 3978,
  [SMALL_STATE(133)] = 3993,
  [SMALL_STATE(134)] = 4008,
  [SMALL_STATE(135)] = 4027,
  [SMALL_STATE(136)] = 4046,
  [SMALL_STATE(137)] = 4061,
  [SMALL_STATE(138)] = 4080,
  [SMALL_STATE(139)] = 4099,
  [SMALL_STATE(140)] = 4114,
  [SMALL_STATE(141)] = 4129,
  [SMALL_STATE(142)] = 4146,
  [SMALL_STATE(143)] = 4161,
  [SMALL_STATE(144)] = 4176,
  [SMALL_STATE(145)] = 4191,
  [SMALL_STATE(146)] = 4207,
  [SMALL_STATE(147)] = 4223,
  [SMALL_STATE(148)] = 4237,
  [SMALL_STATE(149)] = 4253,
  [SMALL_STATE(150)] = 4269,
  [SMALL_STATE(151)] = 4283,
  [SMALL_STATE(152)] = 4299,
  [SMALL_STATE(153)] = 4315,
  [SMALL_STATE(154)] = 4331,
  [SMALL_STATE(155)] = 4347,
  [SMALL_STATE(156)] = 4363,
  [SMALL_STATE(157)] = 4379,
  [SMALL_STATE(158)] = 4395,
  [SMALL_STATE(159)] = 4411,
  [SMALL_STATE(160)] = 4427,
  [SMALL_STATE(161)] = 4441,
  [SMALL_STATE(162)] = 4457,
  [SMALL_STATE(163)] = 4473,
  [SMALL_STATE(164)] = 4487,
  [SMALL_STATE(165)] = 4503,
  [SMALL_STATE(166)] = 4516,
  [SMALL_STATE(167)] = 4529,
  [SMALL_STATE(168)] = 4542,
  [SMALL_STATE(169)] = 4555,
  [SMALL_STATE(170)] = 4568,
  [SMALL_STATE(171)] = 4581,
  [SMALL_STATE(172)] = 4594,
  [SMALL_STATE(173)] = 4607,
  [SMALL_STATE(174)] = 4620,
  [SMALL_STATE(175)] = 4633,
  [SMALL_STATE(176)] = 4646,
  [SMALL_STATE(177)] = 4659,
  [SMALL_STATE(178)] = 4672,
  [SMALL_STATE(179)] = 4685,
  [SMALL_STATE(180)] = 4698,
  [SMALL_STATE(181)] = 4711,
  [SMALL_STATE(182)] = 4724,
  [SMALL_STATE(183)] = 4737,
  [SMALL_STATE(184)] = 4750,
  [SMALL_STATE(185)] = 4763,
  [SMALL_STATE(186)] = 4776,
  [SMALL_STATE(187)] = 4789,
  [SMALL_STATE(188)] = 4802,
  [SMALL_STATE(189)] = 4815,
  [SMALL_STATE(190)] = 4828,
  [SMALL_STATE(191)] = 4841,
  [SMALL_STATE(192)] = 4854,
  [SMALL_STATE(193)] = 4867,
  [SMALL_STATE(194)] = 4871,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(55),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(110),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(165),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(43),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(137),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(69),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(188),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(189),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(190),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(91),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(32),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(96),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(102),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(103),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 19),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 3, .production_id = 34),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 3, .production_id = 34),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 12),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 2, .production_id = 15),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 2, .production_id = 15),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 25),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 25),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 25),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 25),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 17),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 17),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 17),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 17),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 22),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 22),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 17),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 17),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, .production_id = 16),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, .production_id = 16),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 11),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 11),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 32),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 32),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 17),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 17),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 17),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 17),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 17),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 17),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 17),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 17),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 17),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 24),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 24),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 25),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 25),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 17),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 17),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 25),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 25),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 25),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 25),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 25),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2, .production_id = 16),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2, .production_id = 16),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 17),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 17),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 25),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 25),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 25),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 25),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 17),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 17),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 25),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 25),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 25),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 25),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 25),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 25),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(63),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(163),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_value, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_value, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_label, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_label, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 10),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(166),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(179),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 30),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 30), SHIFT_REPEAT(105),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(59),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 16),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 16),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 14),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instructions, 4, .production_id = 36),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 11),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instructions, 3, .production_id = 28),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 20),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(150),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 33),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 31),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 21),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 23),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 39),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 18),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 13),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 37),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 37), SHIFT_REPEAT(62),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 9),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 3, .production_id = 38),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 26),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_jmp, 2, .production_id = 27),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_jmp, 2, .production_id = 27),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 35),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 35),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 4, .production_id = 40),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 4, .production_id = 40),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 28),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 28),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 2, .production_id = 29),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 2, .production_id = 29),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 35),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 35),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [599] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
