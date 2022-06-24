#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
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
  sym__urcl_value = 88,
  sym__urcl_label = 89,
  sym_urcl_jmp = 90,
  sym_urcl_in = 91,
  sym_urcl_out = 92,
  sym_urcl_generic = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_source_file_repeat2 = 95,
  aux_sym_source_file_repeat3 = 96,
  aux_sym_array_repeat1 = 97,
  aux_sym_func_repeat1 = 98,
  aux_sym_stack_frame_repeat1 = 99,
  aux_sym_urcl_instructions_repeat1 = 100,
  aux_sym_urcl_instruction_repeat1 = 101,
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
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 1},
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
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
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
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 84},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 84},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 84},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 84},
  [79] = {.lex_state = 84},
  [80] = {.lex_state = 84},
  [81] = {.lex_state = 84},
  [82] = {.lex_state = 84},
  [83] = {.lex_state = 84},
  [84] = {.lex_state = 84},
  [85] = {.lex_state = 84},
  [86] = {.lex_state = 84},
  [87] = {.lex_state = 84},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 84},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
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
  [104] = {.lex_state = 84},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 84},
  [110] = {.lex_state = 84},
  [111] = {.lex_state = 84},
  [112] = {.lex_state = 84},
  [113] = {.lex_state = 84},
  [114] = {.lex_state = 84},
  [115] = {.lex_state = 84},
  [116] = {.lex_state = 84},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 84},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 84},
  [127] = {.lex_state = 84},
  [128] = {.lex_state = 84},
  [129] = {.lex_state = 84},
  [130] = {.lex_state = 84},
  [131] = {.lex_state = 84},
  [132] = {.lex_state = 84},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 84},
  [136] = {.lex_state = 84},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 84},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 84},
  [141] = {.lex_state = 84},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 135},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {(TSStateId)(-1)},
  [192] = {(TSStateId)(-1)},
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
    [sym__header] = STATE(83),
    [sym_bits] = STATE(79),
    [sym_minstack] = STATE(79),
    [sym_minheap] = STATE(79),
    [sym_comment] = STATE(1),
    [sym_definition] = STATE(116),
    [sym_func] = STATE(126),
    [sym_inst] = STATE(126),
    [sym_inst_permutation] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(75),
    [aux_sym_source_file_repeat3] = STATE(82),
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
    STATE(10), 1,
      aux_sym_func_repeat1,
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
    STATE(8), 1,
      aux_sym_func_repeat1,
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
  [324] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym_inst_label,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_height,
    ACTIONS(70), 1,
      anon_sym_jump,
    ACTIONS(73), 1,
      anon_sym_halt,
    ACTIONS(76), 1,
      anon_sym_perm,
    ACTIONS(79), 1,
      anon_sym_const,
    ACTIONS(82), 1,
      anon_sym_in,
    ACTIONS(85), 1,
      anon_sym_out,
    ACTIONS(88), 1,
      anon_sym_call,
    ACTIONS(91), 1,
      anon_sym_icall,
    ACTIONS(94), 1,
      anon_sym_ret,
    ACTIONS(97), 1,
      anon_sym_ref,
    ACTIONS(100), 1,
      anon_sym_get,
    ACTIONS(103), 1,
      anon_sym_set,
    STATE(37), 1,
      sym__instruction,
    STATE(6), 2,
      sym_comment,
      aux_sym_func_repeat1,
    STATE(18), 15,
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
  [403] = 22,
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
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
    STATE(6), 1,
      aux_sym_func_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(37), 1,
      sym__instruction,
    STATE(18), 15,
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
  [792] = 17,
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
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_source_file_repeat1,
    STATE(73), 1,
      aux_sym_source_file_repeat2,
    STATE(80), 1,
      aux_sym_source_file_repeat3,
    STATE(83), 1,
      sym__header,
    STATE(116), 1,
      sym_definition,
    STATE(79), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [848] = 6,
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
  [881] = 6,
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
  [914] = 12,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_comment,
    STATE(60), 1,
      sym__literal,
    STATE(142), 1,
      sym__urcl_value,
    ACTIONS(150), 2,
      sym_register,
      sym_input_register,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(140), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
    ACTIONS(142), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [959] = 5,
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
  [989] = 5,
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
  [1019] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
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
  [1049] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
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
  [1079] = 5,
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
  [1109] = 5,
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
  [1139] = 5,
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
  [1169] = 5,
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
  [1199] = 5,
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
  [1229] = 5,
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
  [1259] = 5,
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
  [1289] = 5,
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
  [1319] = 5,
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
  [1349] = 5,
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
  [1379] = 5,
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
  [1409] = 5,
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
  [1439] = 5,
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
  [1469] = 5,
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
  [1499] = 5,
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
  [1529] = 5,
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
  [1559] = 5,
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
  [1589] = 5,
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
  [1619] = 5,
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
  [1649] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym_inst_label,
      anon_sym_RBRACE,
    ACTIONS(240), 14,
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
  [1679] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
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
  [1709] = 5,
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
  [1739] = 5,
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
  [1769] = 5,
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
  [1799] = 5,
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
  [1829] = 5,
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
  [1859] = 5,
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
  [1889] = 5,
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
  [1919] = 5,
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
  [1949] = 5,
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
  [1979] = 5,
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
  [2009] = 5,
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
  [2039] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      aux_sym_number_token3,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym__urcl_value,
    STATE(53), 1,
      sym_comment,
    STATE(60), 1,
      sym__literal,
    ACTIONS(298), 2,
      sym_register,
      sym_input_register,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(294), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(292), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2080] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      aux_sym_number_token3,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_comment,
    STATE(60), 1,
      sym__literal,
    STATE(159), 1,
      sym__urcl_value,
    ACTIONS(298), 2,
      sym_register,
      sym_input_register,
    STATE(66), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(294), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(292), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2121] = 17,
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
  [2173] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym_comment,
    STATE(64), 2,
      sym_number,
      sym_char_literal,
    STATE(113), 2,
      sym_array,
      sym__literal,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(328), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2211] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(346), 1,
      aux_sym_number_token3,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym__literal,
    STATE(57), 2,
      sym_comment,
      aux_sym_array_repeat1,
    STATE(64), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(343), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(338), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2249] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_array_repeat1,
    STATE(74), 1,
      sym__literal,
    STATE(64), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(328), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2289] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(74), 1,
      sym__literal,
    STATE(64), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(328), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2329] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(358), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_comment,
    ACTIONS(356), 12,
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
  [2356] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_comment,
    ACTIONS(240), 12,
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
  [2383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      aux_sym_number_token3,
    STATE(62), 1,
      sym_comment,
    ACTIONS(242), 12,
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
  [2410] = 5,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
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
  [2437] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      aux_sym_number_token3,
    STATE(64), 1,
      sym_comment,
    ACTIONS(246), 12,
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
  [2464] = 13,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(362), 1,
      sym_inst_label,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      anon_sym_JMP,
    ACTIONS(370), 1,
      anon_sym_IN,
    ACTIONS(372), 1,
      anon_sym_OUT,
    STATE(65), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(143), 1,
      sym_urcl_instruction,
    STATE(150), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2507] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(246), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym_comment,
    ACTIONS(244), 12,
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
  [2534] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__literal,
    STATE(67), 1,
      sym_comment,
    STATE(41), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(374), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2568] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__literal,
    STATE(68), 1,
      sym_comment,
    STATE(41), 2,
      sym_number,
      sym_char_literal,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
    ACTIONS(374), 4,
      sym_function_name,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2602] = 9,
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
    STATE(83), 1,
      sym__header,
    STATE(69), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(79), 3,
      sym_bits,
      sym_minstack,
      sym_minheap,
    ACTIONS(382), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2636] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_JMP,
    ACTIONS(370), 1,
      anon_sym_IN,
    ACTIONS(372), 1,
      anon_sym_OUT,
    ACTIONS(393), 1,
      sym_inst_label,
    STATE(70), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(124), 1,
      sym_urcl_instruction,
    STATE(150), 4,
      sym_urcl_jmp,
      sym_urcl_in,
      sym_urcl_out,
      sym_urcl_generic,
  [2673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      aux_sym_number_token3,
    STATE(71), 1,
      sym_comment,
    ACTIONS(395), 10,
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
  [2698] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_JMP,
    ACTIONS(370), 1,
      anon_sym_IN,
    ACTIONS(372), 1,
      anon_sym_OUT,
    ACTIONS(393), 1,
      sym_inst_label,
    STATE(72), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_urcl_instruction_repeat1,
    STATE(153), 1,
      sym_urcl_jmp,
    STATE(154), 1,
      sym_urcl_in,
    STATE(155), 1,
      sym_urcl_out,
    STATE(156), 1,
      sym_urcl_generic,
  [2738] = 11,
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
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_source_file_repeat3,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
    STATE(116), 1,
      sym_definition,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2774] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      aux_sym_number_token3,
    STATE(74), 1,
      sym_comment,
    ACTIONS(401), 9,
      sym_function_name,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
      anon_sym_SQUOTE,
      sym_macro,
      sym_mem,
      sym_data_label,
  [2798] = 11,
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
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_source_file_repeat3,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
    STATE(116), 1,
      sym_definition,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2834] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_comment,
    STATE(140), 1,
      sym_permutation,
    STATE(144), 1,
      sym_stack_behaviour,
    STATE(167), 1,
      sym_stack_frame,
    STATE(190), 1,
      sym_number,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2867] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    ACTIONS(409), 1,
      anon_sym_PLUS,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_comment,
    STATE(145), 1,
      sym_stack_behaviour,
    STATE(190), 1,
      sym_number,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [2897] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_source_file_repeat3,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [2943] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_source_file_repeat3,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2970] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      anon_sym_func,
    ACTIONS(424), 1,
      anon_sym_inst,
    STATE(81), 2,
      sym_comment,
      aux_sym_source_file_repeat3,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [2995] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      aux_sym_source_file_repeat3,
    STATE(82), 1,
      sym_comment,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3022] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(429), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      anon_sym_bits,
      anon_sym_minstack,
      anon_sym_minheap,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3060] = 4,
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
  [3079] = 4,
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
  [3098] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_inst,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      aux_sym_source_file_repeat3,
    STATE(87), 1,
      sym_comment,
    STATE(126), 3,
      sym_func,
      sym_inst,
      sym_inst_permutation,
  [3125] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(31), 1,
      sym_stack_behaviour,
    STATE(88), 1,
      sym_comment,
    STATE(185), 1,
      sym_number,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3149] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 1,
      sym_inst_label,
    STATE(89), 2,
      sym_comment,
      aux_sym_urcl_instruction_repeat1,
    ACTIONS(439), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3169] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(47), 1,
      sym_stack_behaviour,
    STATE(90), 1,
      sym_comment,
    STATE(185), 1,
      sym_number,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3193] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      sym_data_label,
    STATE(116), 1,
      sym_definition,
    STATE(91), 2,
      sym_comment,
      aux_sym_source_file_repeat2,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3215] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(45), 1,
      sym_number,
    STATE(92), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3236] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(35), 1,
      sym_number,
    STATE(93), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3257] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(86), 1,
      sym_number,
    STATE(94), 1,
      sym_comment,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3278] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(17), 1,
      sym_number,
    STATE(95), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3299] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(85), 1,
      sym_number,
    STATE(96), 1,
      sym_comment,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3320] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(44), 1,
      sym_number,
    STATE(97), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3341] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(84), 1,
      sym_number,
    STATE(98), 1,
      sym_comment,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3362] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(12), 1,
      sym_number,
    STATE(99), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3383] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(32), 1,
      sym_number,
    STATE(100), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3404] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(49), 1,
      sym_number,
    STATE(101), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3425] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(34), 1,
      sym_number,
    STATE(102), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3446] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      aux_sym_number_token3,
    STATE(21), 1,
      sym_number,
    STATE(103), 1,
      sym_comment,
    ACTIONS(376), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3467] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 1,
      anon_sym_branch,
    STATE(104), 1,
      sym_comment,
    STATE(127), 1,
      sym_branch_block,
    ACTIONS(449), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3488] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(455), 1,
      sym_inst_label,
    STATE(105), 1,
      sym_comment,
    ACTIONS(453), 4,
      sym_identifier,
      anon_sym_JMP,
      anon_sym_IN,
      anon_sym_OUT,
  [3507] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(12), 1,
      sym_number,
    STATE(106), 1,
      sym_comment,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3528] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(107), 1,
      sym_comment,
    STATE(164), 1,
      sym_number,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3549] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      aux_sym_number_token3,
    STATE(108), 1,
      sym_comment,
    STATE(188), 1,
      sym_number,
    ACTIONS(332), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token4,
  [3570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(457), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(459), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3618] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(463), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(465), 4,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
      anon_sym_branch,
  [3666] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_func,
      anon_sym_inst,
  [3682] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      sym_data_label,
      anon_sym_func,
      anon_sym_inst,
  [3698] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      sym_register,
    STATE(53), 1,
      sym__urcl_label,
    STATE(117), 1,
      sym_comment,
    ACTIONS(469), 2,
      sym_inst_label,
      sym_urcl_end_label,
  [3718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(473), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3733] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_stack_frame_repeat1,
  [3752] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(479), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(120), 2,
      sym_comment,
      aux_sym_stack_frame_repeat1,
  [3769] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    STATE(149), 1,
      sym__urcl_label,
    ACTIONS(484), 2,
      sym_inst_label,
      sym_urcl_end_label,
  [3786] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_stack_frame_repeat1,
    STATE(122), 1,
      sym_comment,
  [3805] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      aux_sym_stack_frame_repeat1,
    STATE(123), 1,
      sym_comment,
  [3824] = 6,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_urcl_instructions_repeat1,
  [3843] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_permutation,
    STATE(125), 1,
      sym_comment,
    STATE(168), 1,
      sym_stack_frame,
  [3862] = 4,
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
  [3877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(496), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(500), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [3952] = 4,
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
  [3967] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      anon_sym_LF,
    STATE(133), 2,
      sym_comment,
      aux_sym_urcl_instructions_repeat1,
  [3984] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_permutation,
    STATE(134), 1,
      sym_comment,
    STATE(168), 1,
      sym_stack_frame,
  [4003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(511), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(513), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4033] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_stack_frame_repeat1,
    STATE(137), 1,
      sym_comment,
  [4052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(517), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4067] = 6,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(492), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_urcl_instructions_repeat1,
    STATE(139), 1,
      sym_comment,
  [4086] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(521), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_inst,
  [4116] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      anon_sym_LF,
    STATE(142), 1,
      sym_comment,
  [4132] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym_comment,
  [4148] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_urcl_instructions,
    STATE(144), 1,
      sym_comment,
  [4164] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(535), 1,
      anon_sym_PLUS,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_comment,
  [4180] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(539), 2,
      sym_char,
      sym_char_escape,
  [4194] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(541), 2,
      sym_char,
      sym_char_escape,
  [4208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_stack_frame,
    STATE(148), 1,
      sym_comment,
  [4224] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_LF,
    STATE(149), 1,
      sym_comment,
  [4240] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      anon_sym_LF,
    STATE(150), 1,
      sym_comment,
  [4256] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_comment,
  [4272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(553), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [4286] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_comment,
  [4302] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(154), 1,
      sym_comment,
  [4318] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(155), 1,
      sym_comment,
  [4334] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_LF,
    STATE(156), 1,
      sym_comment,
  [4350] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym_stack_frame,
    STATE(157), 1,
      sym_comment,
  [4366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_urcl_instructions,
    STATE(158), 1,
      sym_comment,
  [4382] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 1,
      anon_sym_LF,
    STATE(159), 1,
      sym_comment,
  [4398] = 5,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(160), 1,
      sym_comment,
  [4414] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    STATE(161), 1,
      sym_comment,
    ACTIONS(567), 2,
      sym_char,
      sym_char_escape,
  [4428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(569), 1,
      sym_inst_label,
    STATE(162), 1,
      sym_comment,
  [4441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      sym_function_name,
    STATE(163), 1,
      sym_comment,
  [4454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_comment,
  [4467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      sym_function_name,
    STATE(165), 1,
      sym_comment,
  [4480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      sym_register,
    STATE(166), 1,
      sym_comment,
  [4493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      anon_sym_DASH_GT,
    STATE(167), 1,
      sym_comment,
  [4506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_DASH_GT,
    STATE(168), 1,
      sym_comment,
  [4519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_inst_label,
    STATE(169), 1,
      sym_comment,
  [4532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      sym_port,
    STATE(170), 1,
      sym_comment,
  [4545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      sym_inst_label,
    STATE(171), 1,
      sym_comment,
  [4558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      sym_port,
    STATE(172), 1,
      sym_comment,
  [4571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      sym_identifier,
    STATE(173), 1,
      sym_comment,
  [4584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      sym_inst_label,
    STATE(174), 1,
      sym_comment,
  [4597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      sym_function_name,
    STATE(175), 1,
      sym_comment,
  [4610] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      aux_sym_comment_token1,
    STATE(176), 1,
      sym_comment,
  [4623] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      anon_sym_SLASH,
    STATE(177), 1,
      sym_comment,
  [4636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
  [4649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      sym_inst_label,
    STATE(179), 1,
      sym_comment,
  [4662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym_comment,
  [4675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      sym_port,
    STATE(181), 1,
      sym_comment,
  [4688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      sym_port,
    STATE(182), 1,
      sym_comment,
  [4701] = 4,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      aux_sym_comment_token2,
    STATE(183), 1,
      sym_comment,
  [4714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
    STATE(184), 1,
      sym_comment,
  [4727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      anon_sym_DASH_GT,
    STATE(185), 1,
      sym_comment,
  [4740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      sym_port,
    STATE(186), 1,
      sym_comment,
  [4753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      sym_port,
    STATE(187), 1,
      sym_comment,
  [4766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_comment,
  [4779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym_comment,
  [4792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      anon_sym_DASH_GT,
    STATE(190), 1,
      sym_comment,
  [4805] = 1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [4809] = 1,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 646,
  [SMALL_STATE(11)] = 727,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 848,
  [SMALL_STATE(15)] = 881,
  [SMALL_STATE(16)] = 914,
  [SMALL_STATE(17)] = 959,
  [SMALL_STATE(18)] = 989,
  [SMALL_STATE(19)] = 1019,
  [SMALL_STATE(20)] = 1049,
  [SMALL_STATE(21)] = 1079,
  [SMALL_STATE(22)] = 1109,
  [SMALL_STATE(23)] = 1139,
  [SMALL_STATE(24)] = 1169,
  [SMALL_STATE(25)] = 1199,
  [SMALL_STATE(26)] = 1229,
  [SMALL_STATE(27)] = 1259,
  [SMALL_STATE(28)] = 1289,
  [SMALL_STATE(29)] = 1319,
  [SMALL_STATE(30)] = 1349,
  [SMALL_STATE(31)] = 1379,
  [SMALL_STATE(32)] = 1409,
  [SMALL_STATE(33)] = 1439,
  [SMALL_STATE(34)] = 1469,
  [SMALL_STATE(35)] = 1499,
  [SMALL_STATE(36)] = 1529,
  [SMALL_STATE(37)] = 1559,
  [SMALL_STATE(38)] = 1589,
  [SMALL_STATE(39)] = 1619,
  [SMALL_STATE(40)] = 1649,
  [SMALL_STATE(41)] = 1679,
  [SMALL_STATE(42)] = 1709,
  [SMALL_STATE(43)] = 1739,
  [SMALL_STATE(44)] = 1769,
  [SMALL_STATE(45)] = 1799,
  [SMALL_STATE(46)] = 1829,
  [SMALL_STATE(47)] = 1859,
  [SMALL_STATE(48)] = 1889,
  [SMALL_STATE(49)] = 1919,
  [SMALL_STATE(50)] = 1949,
  [SMALL_STATE(51)] = 1979,
  [SMALL_STATE(52)] = 2009,
  [SMALL_STATE(53)] = 2039,
  [SMALL_STATE(54)] = 2080,
  [SMALL_STATE(55)] = 2121,
  [SMALL_STATE(56)] = 2173,
  [SMALL_STATE(57)] = 2211,
  [SMALL_STATE(58)] = 2249,
  [SMALL_STATE(59)] = 2289,
  [SMALL_STATE(60)] = 2329,
  [SMALL_STATE(61)] = 2356,
  [SMALL_STATE(62)] = 2383,
  [SMALL_STATE(63)] = 2410,
  [SMALL_STATE(64)] = 2437,
  [SMALL_STATE(65)] = 2464,
  [SMALL_STATE(66)] = 2507,
  [SMALL_STATE(67)] = 2534,
  [SMALL_STATE(68)] = 2568,
  [SMALL_STATE(69)] = 2602,
  [SMALL_STATE(70)] = 2636,
  [SMALL_STATE(71)] = 2673,
  [SMALL_STATE(72)] = 2698,
  [SMALL_STATE(73)] = 2738,
  [SMALL_STATE(74)] = 2774,
  [SMALL_STATE(75)] = 2798,
  [SMALL_STATE(76)] = 2834,
  [SMALL_STATE(77)] = 2867,
  [SMALL_STATE(78)] = 2897,
  [SMALL_STATE(79)] = 2924,
  [SMALL_STATE(80)] = 2943,
  [SMALL_STATE(81)] = 2970,
  [SMALL_STATE(82)] = 2995,
  [SMALL_STATE(83)] = 3022,
  [SMALL_STATE(84)] = 3041,
  [SMALL_STATE(85)] = 3060,
  [SMALL_STATE(86)] = 3079,
  [SMALL_STATE(87)] = 3098,
  [SMALL_STATE(88)] = 3125,
  [SMALL_STATE(89)] = 3149,
  [SMALL_STATE(90)] = 3169,
  [SMALL_STATE(91)] = 3193,
  [SMALL_STATE(92)] = 3215,
  [SMALL_STATE(93)] = 3236,
  [SMALL_STATE(94)] = 3257,
  [SMALL_STATE(95)] = 3278,
  [SMALL_STATE(96)] = 3299,
  [SMALL_STATE(97)] = 3320,
  [SMALL_STATE(98)] = 3341,
  [SMALL_STATE(99)] = 3362,
  [SMALL_STATE(100)] = 3383,
  [SMALL_STATE(101)] = 3404,
  [SMALL_STATE(102)] = 3425,
  [SMALL_STATE(103)] = 3446,
  [SMALL_STATE(104)] = 3467,
  [SMALL_STATE(105)] = 3488,
  [SMALL_STATE(106)] = 3507,
  [SMALL_STATE(107)] = 3528,
  [SMALL_STATE(108)] = 3549,
  [SMALL_STATE(109)] = 3570,
  [SMALL_STATE(110)] = 3586,
  [SMALL_STATE(111)] = 3602,
  [SMALL_STATE(112)] = 3618,
  [SMALL_STATE(113)] = 3634,
  [SMALL_STATE(114)] = 3650,
  [SMALL_STATE(115)] = 3666,
  [SMALL_STATE(116)] = 3682,
  [SMALL_STATE(117)] = 3698,
  [SMALL_STATE(118)] = 3718,
  [SMALL_STATE(119)] = 3733,
  [SMALL_STATE(120)] = 3752,
  [SMALL_STATE(121)] = 3769,
  [SMALL_STATE(122)] = 3786,
  [SMALL_STATE(123)] = 3805,
  [SMALL_STATE(124)] = 3824,
  [SMALL_STATE(125)] = 3843,
  [SMALL_STATE(126)] = 3862,
  [SMALL_STATE(127)] = 3877,
  [SMALL_STATE(128)] = 3892,
  [SMALL_STATE(129)] = 3907,
  [SMALL_STATE(130)] = 3922,
  [SMALL_STATE(131)] = 3937,
  [SMALL_STATE(132)] = 3952,
  [SMALL_STATE(133)] = 3967,
  [SMALL_STATE(134)] = 3984,
  [SMALL_STATE(135)] = 4003,
  [SMALL_STATE(136)] = 4018,
  [SMALL_STATE(137)] = 4033,
  [SMALL_STATE(138)] = 4052,
  [SMALL_STATE(139)] = 4067,
  [SMALL_STATE(140)] = 4086,
  [SMALL_STATE(141)] = 4101,
  [SMALL_STATE(142)] = 4116,
  [SMALL_STATE(143)] = 4132,
  [SMALL_STATE(144)] = 4148,
  [SMALL_STATE(145)] = 4164,
  [SMALL_STATE(146)] = 4180,
  [SMALL_STATE(147)] = 4194,
  [SMALL_STATE(148)] = 4208,
  [SMALL_STATE(149)] = 4224,
  [SMALL_STATE(150)] = 4240,
  [SMALL_STATE(151)] = 4256,
  [SMALL_STATE(152)] = 4272,
  [SMALL_STATE(153)] = 4286,
  [SMALL_STATE(154)] = 4302,
  [SMALL_STATE(155)] = 4318,
  [SMALL_STATE(156)] = 4334,
  [SMALL_STATE(157)] = 4350,
  [SMALL_STATE(158)] = 4366,
  [SMALL_STATE(159)] = 4382,
  [SMALL_STATE(160)] = 4398,
  [SMALL_STATE(161)] = 4414,
  [SMALL_STATE(162)] = 4428,
  [SMALL_STATE(163)] = 4441,
  [SMALL_STATE(164)] = 4454,
  [SMALL_STATE(165)] = 4467,
  [SMALL_STATE(166)] = 4480,
  [SMALL_STATE(167)] = 4493,
  [SMALL_STATE(168)] = 4506,
  [SMALL_STATE(169)] = 4519,
  [SMALL_STATE(170)] = 4532,
  [SMALL_STATE(171)] = 4545,
  [SMALL_STATE(172)] = 4558,
  [SMALL_STATE(173)] = 4571,
  [SMALL_STATE(174)] = 4584,
  [SMALL_STATE(175)] = 4597,
  [SMALL_STATE(176)] = 4610,
  [SMALL_STATE(177)] = 4623,
  [SMALL_STATE(178)] = 4636,
  [SMALL_STATE(179)] = 4649,
  [SMALL_STATE(180)] = 4662,
  [SMALL_STATE(181)] = 4675,
  [SMALL_STATE(182)] = 4688,
  [SMALL_STATE(183)] = 4701,
  [SMALL_STATE(184)] = 4714,
  [SMALL_STATE(185)] = 4727,
  [SMALL_STATE(186)] = 4740,
  [SMALL_STATE(187)] = 4753,
  [SMALL_STATE(188)] = 4766,
  [SMALL_STATE(189)] = 4779,
  [SMALL_STATE(190)] = 4792,
  [SMALL_STATE(191)] = 4805,
  [SMALL_STATE(192)] = 4809,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(15),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(103),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(169),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(51),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(134),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(67),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(170),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(172),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(163),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(88),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(43),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(100),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(102),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(93),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_behaviour, 3, .production_id = 19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_behaviour, 3, .production_id = 19),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 2, .production_id = 15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 2, .production_id = 15),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_instruction, 1, .production_id = 12),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_instruction, 1, .production_id = 12),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 3, .production_id = 34),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 3, .production_id = 34),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, .production_id = 25),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 25),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2, .production_id = 16),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2, .production_id = 16),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 2, .production_id = 17),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 2, .production_id = 17),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2, .production_id = 16),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2, .production_id = 16),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, .production_id = 17),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 17),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 2, .production_id = 17),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 2, .production_id = 17),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 2, .production_id = 17),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2, .production_id = 17),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permutation, 3, .production_id = 22),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permutation, 3, .production_id = 22),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 2, .production_id = 17),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 2, .production_id = 17),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 32),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 32),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 2, .production_id = 17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 2, .production_id = 17),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 17),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 2, .production_id = 17),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 2, .production_id = 17),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2, .production_id = 17),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2, .production_id = 17),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 3, .production_id = 11),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 3, .production_id = 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2, .production_id = 17),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2, .production_id = 17),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, .production_id = 17),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, .production_id = 17),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3, .production_id = 25),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, .production_id = 25),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm, 3, .production_id = 25),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm, 3, .production_id = 25),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 25),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 25),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, .production_id = 25),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, .production_id = 25),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, .production_id = 25),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 24),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 24),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_icall, 3, .production_id = 25),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icall, 3, .production_id = 25),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 25),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 25),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_height, 3, .production_id = 25),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_height, 3, .production_id = 25),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out, 3, .production_id = 25),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out, 3, .production_id = 25),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3, .production_id = 25),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3, .production_id = 25),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(64),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(161),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_value, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_value, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__urcl_label, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__urcl_label, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 8),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(175),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(173),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minheap, 2, .production_id = 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minstack, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bits, 2, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 10),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 30),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 2, .production_id = 30), SHIFT_REPEAT(105),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(56),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 4, .production_id = 14),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 16),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instruction_repeat1, 1, .production_id = 16),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instructions, 3, .production_id = 28),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 11),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, .production_id = 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instructions, 4, .production_id = 36),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 26),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2), SHIFT_REPEAT(152),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 5, .production_id = 21),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 23),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 20),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 39),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_block, 3, .production_id = 38),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 37),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 37), SHIFT_REPEAT(65),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 33),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 13),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 31),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst_permutation, 3, .production_id = 9),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 18),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_generic, 4, .production_id = 40),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_generic, 4, .production_id = 40),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 28),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_urcl_instructions_repeat1, 2, .production_id = 28),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_jmp, 2, .production_id = 27),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_jmp, 2, .production_id = 27),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frame_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_instruction, 2, .production_id = 29),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_instruction, 2, .production_id = 29),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_out, 3, .production_id = 35),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_out, 3, .production_id = 35),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_urcl_in, 3, .production_id = 35),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urcl_in, 3, .production_id = 35),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [601] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
