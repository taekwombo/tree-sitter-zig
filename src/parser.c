#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 373
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 148
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  anon_sym_pub = 2,
  anon_sym_test = 3,
  anon_sym_comptime = 4,
  anon_sym_export = 5,
  anon_sym_inline = 6,
  anon_sym_noinline = 7,
  anon_sym_SEMI = 8,
  anon_sym_threadlocal = 9,
  anon_sym_usingnamespace = 10,
  anon_sym_fn = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_BANG = 14,
  anon_sym_const = 15,
  anon_sym_var = 16,
  anon_sym_COLON = 17,
  anon_sym_EQ = 18,
  anon_sym_or = 19,
  anon_sym_and = 20,
  anon_sym_async = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_DOT = 24,
  anon_sym_linksection = 25,
  anon_sym_callconv = 26,
  anon_sym_DOT_DOT_DOT = 27,
  anon_sym_noalias = 28,
  anon_sym_anytype = 29,
  anon_sym_if = 30,
  anon_sym_while = 31,
  anon_sym_for = 32,
  anon_sym_PIPE = 33,
  anon_sym_STAR = 34,
  anon_sym_EQ_GT = 35,
  anon_sym_else = 36,
  anon_sym_STAR_EQ = 37,
  anon_sym_SLASH_EQ = 38,
  anon_sym_PERCENT_EQ = 39,
  anon_sym_PLUS_EQ = 40,
  anon_sym_DASH_EQ = 41,
  anon_sym_LT_LT_EQ = 42,
  anon_sym_GT_GT_EQ = 43,
  anon_sym_AMP_EQ = 44,
  anon_sym_CARET_EQ = 45,
  anon_sym_PIPE_EQ = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_LT = 49,
  anon_sym_GT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_AMP = 53,
  anon_sym_CARET = 54,
  anon_sym_orelse = 55,
  anon_sym_catch = 56,
  anon_sym_LT_LT = 57,
  anon_sym_GT_GT = 58,
  anon_sym_PLUS = 59,
  anon_sym_DASH = 60,
  anon_sym_PLUS_PLUS = 61,
  anon_sym_PLUS_PERCENT = 62,
  anon_sym_DASH_PERCENT = 63,
  anon_sym_SLASH = 64,
  anon_sym_PERCENT = 65,
  anon_sym_STAR_STAR = 66,
  anon_sym_STAR_PERCENT = 67,
  anon_sym_PIPE_PIPE = 68,
  anon_sym_TILDE = 69,
  anon_sym_try = 70,
  anon_sym_await = 71,
  anon_sym_QMARK = 72,
  anon_sym_anyframe = 73,
  anon_sym_DASH_GT = 74,
  anon_sym_LBRACK = 75,
  anon_sym_DOT_DOT = 76,
  anon_sym_RBRACK = 77,
  anon_sym_DOT_STAR = 78,
  anon_sym_DOT_QMARK = 79,
  anon_sym_c = 80,
  anon_sym_align = 81,
  anon_sym_i8 = 82,
  anon_sym_u8 = 83,
  anon_sym_i16 = 84,
  anon_sym_u16 = 85,
  anon_sym_i32 = 86,
  anon_sym_u32 = 87,
  anon_sym_i64 = 88,
  anon_sym_u64 = 89,
  anon_sym_i128 = 90,
  anon_sym_u128 = 91,
  anon_sym_isize = 92,
  anon_sym_usize = 93,
  anon_sym_c_short = 94,
  anon_sym_c_ushort = 95,
  anon_sym_c_int = 96,
  anon_sym_c_uint = 97,
  anon_sym_c_long = 98,
  anon_sym_c_ulong = 99,
  anon_sym_c_longlong = 100,
  anon_sym_c_ulonglong = 101,
  anon_sym_c_longdouble = 102,
  anon_sym_c_void = 103,
  anon_sym_f16 = 104,
  anon_sym_f32 = 105,
  anon_sym_f64 = 106,
  anon_sym_f128 = 107,
  anon_sym_bool = 108,
  anon_sym_void = 109,
  anon_sym_noreturn = 110,
  anon_sym_type = 111,
  anon_sym_anyerror = 112,
  anon_sym_comptime_int = 113,
  anon_sym_comptime_float = 114,
  aux_sym_basic_type_token1 = 115,
  anon_sym_extern = 116,
  sym_undefined_literal = 117,
  sym_null_literal = 118,
  anon_sym_true = 119,
  anon_sym_false = 120,
  anon_sym_SQUOTE = 121,
  aux_sym_character_literal_token1 = 122,
  aux_sym_character_escape_token1 = 123,
  aux_sym_character_escape_token2 = 124,
  aux_sym_character_escape_token3 = 125,
  aux_sym_mb_utf8_literal_token1 = 126,
  aux_sym_mb_utf8_literal_token2 = 127,
  aux_sym_mb_utf8_literal_token3 = 128,
  aux_sym_mb_utf8_literal_token4 = 129,
  aux_sym_mb_utf8_literal_token5 = 130,
  aux_sym_mb_utf8_literal_token6 = 131,
  aux_sym_mb_utf8_literal_token7 = 132,
  aux_sym_mb_utf8_literal_token8 = 133,
  aux_sym_string_character_token1 = 134,
  anon_sym_DQUOTE = 135,
  aux_sym_string_literal_multiline_token1 = 136,
  aux_sym_float_literal_token1 = 137,
  aux_sym_float_literal_token2 = 138,
  aux_sym_float_literal_token3 = 139,
  aux_sym_float_literal_token4 = 140,
  aux_sym_integer_literal_token1 = 141,
  aux_sym_integer_literal_token2 = 142,
  aux_sym_integer_literal_token3 = 143,
  aux_sym_integer_literal_token4 = 144,
  sym_identifier = 145,
  sym_builtin_identifier = 146,
  sym_comment = 147,
  sym_root = 148,
  sym_test_declaration = 149,
  sym_top_level_comptime = 150,
  sym_top_level_declaration = 151,
  sym_top_function_declaration = 152,
  sym_top_variable_declaration = 153,
  sym_top_usingnamespace_declaration = 154,
  sym_function_prototype = 155,
  sym_variable_declaration = 156,
  sym_container_field = 157,
  sym_statement = 158,
  sym_block_expression = 159,
  sym__expression = 160,
  sym_assignment_expression = 161,
  sym_boolean_or_expression = 162,
  sym_boolean_and_expression = 163,
  sym_comparison_expression = 164,
  sym_bitwise_expression = 165,
  sym_bit_shift_expression = 166,
  sym_addition_expression = 167,
  sym_multiplication_expression = 168,
  sym_prefix_expression = 169,
  sym_suffix_expression = 170,
  sym_function_call_expression = 171,
  sym_block = 172,
  sym_init_list = 173,
  sym_block_label = 174,
  sym_field_init = 175,
  sym_link_section = 176,
  sym_call_convention = 177,
  sym_parameter_declaration = 178,
  sym_payload = 179,
  sym_suffix_operator = 180,
  sym_function_call_arguments = 181,
  sym_byte_align = 182,
  sym_basic_type = 183,
  sym_extern_ref = 184,
  sym_boolean_literal = 185,
  sym_character_literal = 186,
  sym_character_escape = 187,
  sym_string_literal = 188,
  sym_float_literal = 189,
  sym_integer_literal = 190,
  aux_sym_root_repeat1 = 191,
  aux_sym_container_members_repeat1 = 192,
  aux_sym_block_repeat1 = 193,
  aux_sym_init_list_repeat1 = 194,
  aux_sym_init_list_repeat2 = 195,
  aux_sym_parameter_declaration_list_repeat1 = 196,
  aux_sym_string_literal_singleline_repeat1 = 197,
  aux_sym_string_literal_multiline_repeat1 = 198,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_pub] = "pub",
  [anon_sym_test] = "test",
  [anon_sym_comptime] = "comptime",
  [anon_sym_export] = "export",
  [anon_sym_inline] = "inline",
  [anon_sym_noinline] = "noinline",
  [anon_sym_SEMI] = ";",
  [anon_sym_threadlocal] = "threadlocal",
  [anon_sym_usingnamespace] = "usingnamespace",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_async] = "async",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_linksection] = "linksection",
  [anon_sym_callconv] = "callconv",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_noalias] = "noalias",
  [anon_sym_anytype] = "anytype",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_else] = "else",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_orelse] = "orelse",
  [anon_sym_catch] = "catch",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_PERCENT] = "+%",
  [anon_sym_DASH_PERCENT] = "-%",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR_PERCENT] = "*%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_TILDE] = "~",
  [anon_sym_try] = "try",
  [anon_sym_await] = "await",
  [anon_sym_QMARK] = "\?",
  [anon_sym_anyframe] = "anyframe",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_DOT_QMARK] = ".\?",
  [anon_sym_c] = "c",
  [anon_sym_align] = "align",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_i64] = "i64",
  [anon_sym_u64] = "u64",
  [anon_sym_i128] = "i128",
  [anon_sym_u128] = "u128",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_c_short] = "c_short",
  [anon_sym_c_ushort] = "c_ushort",
  [anon_sym_c_int] = "c_int",
  [anon_sym_c_uint] = "c_uint",
  [anon_sym_c_long] = "c_long",
  [anon_sym_c_ulong] = "c_ulong",
  [anon_sym_c_longlong] = "c_longlong",
  [anon_sym_c_ulonglong] = "c_ulonglong",
  [anon_sym_c_longdouble] = "c_longdouble",
  [anon_sym_c_void] = "c_void",
  [anon_sym_f16] = "f16",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_f128] = "f128",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_noreturn] = "noreturn",
  [anon_sym_type] = "type",
  [anon_sym_anyerror] = "anyerror",
  [anon_sym_comptime_int] = "comptime_int",
  [anon_sym_comptime_float] = "comptime_float",
  [aux_sym_basic_type_token1] = "basic_type_token1",
  [anon_sym_extern] = "extern",
  [sym_undefined_literal] = "undefined_literal",
  [sym_null_literal] = "null_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_literal_token1] = "character_literal_token1",
  [aux_sym_character_escape_token1] = "character_escape_token1",
  [aux_sym_character_escape_token2] = "character_escape_token2",
  [aux_sym_character_escape_token3] = "character_escape_token3",
  [aux_sym_mb_utf8_literal_token1] = "mb_utf8_literal_token1",
  [aux_sym_mb_utf8_literal_token2] = "mb_utf8_literal_token2",
  [aux_sym_mb_utf8_literal_token3] = "mb_utf8_literal_token3",
  [aux_sym_mb_utf8_literal_token4] = "mb_utf8_literal_token4",
  [aux_sym_mb_utf8_literal_token5] = "mb_utf8_literal_token5",
  [aux_sym_mb_utf8_literal_token6] = "mb_utf8_literal_token6",
  [aux_sym_mb_utf8_literal_token7] = "mb_utf8_literal_token7",
  [aux_sym_mb_utf8_literal_token8] = "mb_utf8_literal_token8",
  [aux_sym_string_character_token1] = "string_character_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_multiline_token1] = "string_literal_multiline_token1",
  [aux_sym_float_literal_token1] = "float_literal_token1",
  [aux_sym_float_literal_token2] = "float_literal_token2",
  [aux_sym_float_literal_token3] = "float_literal_token3",
  [aux_sym_float_literal_token4] = "float_literal_token4",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [aux_sym_integer_literal_token2] = "integer_literal_token2",
  [aux_sym_integer_literal_token3] = "integer_literal_token3",
  [aux_sym_integer_literal_token4] = "integer_literal_token4",
  [sym_identifier] = "identifier",
  [sym_builtin_identifier] = "builtin_identifier",
  [sym_comment] = "comment",
  [sym_root] = "root",
  [sym_test_declaration] = "test_declaration",
  [sym_top_level_comptime] = "top_level_comptime",
  [sym_top_level_declaration] = "top_level_declaration",
  [sym_top_function_declaration] = "top_function_declaration",
  [sym_top_variable_declaration] = "top_variable_declaration",
  [sym_top_usingnamespace_declaration] = "top_usingnamespace_declaration",
  [sym_function_prototype] = "function_prototype",
  [sym_variable_declaration] = "variable_declaration",
  [sym_container_field] = "container_field",
  [sym_statement] = "statement",
  [sym_block_expression] = "block_expression",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_boolean_or_expression] = "boolean_or_expression",
  [sym_boolean_and_expression] = "boolean_and_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym_bitwise_expression] = "bitwise_expression",
  [sym_bit_shift_expression] = "bit_shift_expression",
  [sym_addition_expression] = "addition_expression",
  [sym_multiplication_expression] = "multiplication_expression",
  [sym_prefix_expression] = "prefix_expression",
  [sym_suffix_expression] = "suffix_expression",
  [sym_function_call_expression] = "function_call_expression",
  [sym_block] = "block",
  [sym_init_list] = "init_list",
  [sym_block_label] = "block_label",
  [sym_field_init] = "field_init",
  [sym_link_section] = "link_section",
  [sym_call_convention] = "call_convention",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_payload] = "payload",
  [sym_suffix_operator] = "suffix_operator",
  [sym_function_call_arguments] = "function_call_arguments",
  [sym_byte_align] = "byte_align",
  [sym_basic_type] = "basic_type",
  [sym_extern_ref] = "extern_ref",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym_character_escape] = "character_escape",
  [sym_string_literal] = "string_literal",
  [sym_float_literal] = "float_literal",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_container_members_repeat1] = "container_members_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_init_list_repeat1] = "init_list_repeat1",
  [aux_sym_init_list_repeat2] = "init_list_repeat2",
  [aux_sym_parameter_declaration_list_repeat1] = "parameter_declaration_list_repeat1",
  [aux_sym_string_literal_singleline_repeat1] = "string_literal_singleline_repeat1",
  [aux_sym_string_literal_multiline_repeat1] = "string_literal_multiline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_comptime] = anon_sym_comptime,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_noinline] = anon_sym_noinline,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_threadlocal] = anon_sym_threadlocal,
  [anon_sym_usingnamespace] = anon_sym_usingnamespace,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_linksection] = anon_sym_linksection,
  [anon_sym_callconv] = anon_sym_callconv,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_noalias] = anon_sym_noalias,
  [anon_sym_anytype] = anon_sym_anytype,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_orelse] = anon_sym_orelse,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_PERCENT] = anon_sym_PLUS_PERCENT,
  [anon_sym_DASH_PERCENT] = anon_sym_DASH_PERCENT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR_PERCENT] = anon_sym_STAR_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_anyframe] = anon_sym_anyframe,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_DOT_QMARK] = anon_sym_DOT_QMARK,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_c_short] = anon_sym_c_short,
  [anon_sym_c_ushort] = anon_sym_c_ushort,
  [anon_sym_c_int] = anon_sym_c_int,
  [anon_sym_c_uint] = anon_sym_c_uint,
  [anon_sym_c_long] = anon_sym_c_long,
  [anon_sym_c_ulong] = anon_sym_c_ulong,
  [anon_sym_c_longlong] = anon_sym_c_longlong,
  [anon_sym_c_ulonglong] = anon_sym_c_ulonglong,
  [anon_sym_c_longdouble] = anon_sym_c_longdouble,
  [anon_sym_c_void] = anon_sym_c_void,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_f128] = anon_sym_f128,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_noreturn] = anon_sym_noreturn,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_anyerror] = anon_sym_anyerror,
  [anon_sym_comptime_int] = anon_sym_comptime_int,
  [anon_sym_comptime_float] = anon_sym_comptime_float,
  [aux_sym_basic_type_token1] = aux_sym_basic_type_token1,
  [anon_sym_extern] = anon_sym_extern,
  [sym_undefined_literal] = sym_undefined_literal,
  [sym_null_literal] = sym_null_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_character_literal_token1] = aux_sym_character_literal_token1,
  [aux_sym_character_escape_token1] = aux_sym_character_escape_token1,
  [aux_sym_character_escape_token2] = aux_sym_character_escape_token2,
  [aux_sym_character_escape_token3] = aux_sym_character_escape_token3,
  [aux_sym_mb_utf8_literal_token1] = aux_sym_mb_utf8_literal_token1,
  [aux_sym_mb_utf8_literal_token2] = aux_sym_mb_utf8_literal_token2,
  [aux_sym_mb_utf8_literal_token3] = aux_sym_mb_utf8_literal_token3,
  [aux_sym_mb_utf8_literal_token4] = aux_sym_mb_utf8_literal_token4,
  [aux_sym_mb_utf8_literal_token5] = aux_sym_mb_utf8_literal_token5,
  [aux_sym_mb_utf8_literal_token6] = aux_sym_mb_utf8_literal_token6,
  [aux_sym_mb_utf8_literal_token7] = aux_sym_mb_utf8_literal_token7,
  [aux_sym_mb_utf8_literal_token8] = aux_sym_mb_utf8_literal_token8,
  [aux_sym_string_character_token1] = aux_sym_string_character_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_multiline_token1] = aux_sym_string_literal_multiline_token1,
  [aux_sym_float_literal_token1] = aux_sym_float_literal_token1,
  [aux_sym_float_literal_token2] = aux_sym_float_literal_token2,
  [aux_sym_float_literal_token3] = aux_sym_float_literal_token3,
  [aux_sym_float_literal_token4] = aux_sym_float_literal_token4,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [aux_sym_integer_literal_token2] = aux_sym_integer_literal_token2,
  [aux_sym_integer_literal_token3] = aux_sym_integer_literal_token3,
  [aux_sym_integer_literal_token4] = aux_sym_integer_literal_token4,
  [sym_identifier] = sym_identifier,
  [sym_builtin_identifier] = sym_builtin_identifier,
  [sym_comment] = sym_comment,
  [sym_root] = sym_root,
  [sym_test_declaration] = sym_test_declaration,
  [sym_top_level_comptime] = sym_top_level_comptime,
  [sym_top_level_declaration] = sym_top_level_declaration,
  [sym_top_function_declaration] = sym_top_function_declaration,
  [sym_top_variable_declaration] = sym_top_variable_declaration,
  [sym_top_usingnamespace_declaration] = sym_top_usingnamespace_declaration,
  [sym_function_prototype] = sym_function_prototype,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_container_field] = sym_container_field,
  [sym_statement] = sym_statement,
  [sym_block_expression] = sym_block_expression,
  [sym__expression] = sym__expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_boolean_or_expression] = sym_boolean_or_expression,
  [sym_boolean_and_expression] = sym_boolean_and_expression,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym_bitwise_expression] = sym_bitwise_expression,
  [sym_bit_shift_expression] = sym_bit_shift_expression,
  [sym_addition_expression] = sym_addition_expression,
  [sym_multiplication_expression] = sym_multiplication_expression,
  [sym_prefix_expression] = sym_prefix_expression,
  [sym_suffix_expression] = sym_suffix_expression,
  [sym_function_call_expression] = sym_function_call_expression,
  [sym_block] = sym_block,
  [sym_init_list] = sym_init_list,
  [sym_block_label] = sym_block_label,
  [sym_field_init] = sym_field_init,
  [sym_link_section] = sym_link_section,
  [sym_call_convention] = sym_call_convention,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_payload] = sym_payload,
  [sym_suffix_operator] = sym_suffix_operator,
  [sym_function_call_arguments] = sym_function_call_arguments,
  [sym_byte_align] = sym_byte_align,
  [sym_basic_type] = sym_basic_type,
  [sym_extern_ref] = sym_extern_ref,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_character_literal] = sym_character_literal,
  [sym_character_escape] = sym_character_escape,
  [sym_string_literal] = sym_string_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_container_members_repeat1] = aux_sym_container_members_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_init_list_repeat1] = aux_sym_init_list_repeat1,
  [aux_sym_init_list_repeat2] = aux_sym_init_list_repeat2,
  [aux_sym_parameter_declaration_list_repeat1] = aux_sym_parameter_declaration_list_repeat1,
  [aux_sym_string_literal_singleline_repeat1] = aux_sym_string_literal_singleline_repeat1,
  [aux_sym_string_literal_multiline_repeat1] = aux_sym_string_literal_multiline_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_threadlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usingnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linksection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callconv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anytype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyframe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_longlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ulonglong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_longdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime_float] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_basic_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [sym_undefined_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_escape_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mb_utf8_literal_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_multiline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_test_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_top_level_comptime] = {
    .visible = true,
    .named = true,
  },
  [sym_top_level_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_top_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_top_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_top_usingnamespace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_prototype] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_container_field] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_addition_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_suffix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_init_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block_label] = {
    .visible = true,
    .named = true,
  },
  [sym_field_init] = {
    .visible = true,
    .named = true,
  },
  [sym_link_section] = {
    .visible = true,
    .named = true,
  },
  [sym_call_convention] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_payload] = {
    .visible = true,
    .named = true,
  },
  [sym_suffix_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_align] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_container_members_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_init_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_init_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_singleline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_multiline_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(286);
      if (lookahead == '!') ADVANCE(312);
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '&') ADVANCE(361);
      if (lookahead == '\'') ADVANCE(496);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead == '+') ADVANCE(367);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '0') ADVANCE(534);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '<') ADVANCE(356);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == '>') ADVANCE(357);
      if (lookahead == '?') ADVANCE(384);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '[') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == '^') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '|') ADVANCE(340);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead == '~') ADVANCE(379);
      if (lookahead == 224) ADVANCE(268);
      if (lookahead == 237) ADVANCE(267);
      if (lookahead == 240) ADVANCE(269);
      if (lookahead == 244) ADVANCE(261);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(279);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(280);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(271);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == 224) ADVANCE(502);
      if (lookahead == 237) ADVANCE(501);
      if (lookahead == 240) ADVANCE(503);
      if (lookahead == 244) ADVANCE(500);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(499);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(507);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(506);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(497);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(519);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(311);
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '&') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(496);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(534);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == 'u') ADVANCE(630);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead == '~') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(311);
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '&') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(496);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(534);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == 'u') ADVANCE(630);
      if (lookahead == 'v') ADVANCE(549);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead == '~') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(311);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(388);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(331);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(721);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead == 'c') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 'p') ADVANCE(710);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == 'u') ADVANCE(692);
      if (lookahead == 'v') ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(461);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == '6') ADVANCE(469);
      if (lookahead == '8') ADVANCE(394);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(461);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == '6') ADVANCE(469);
      if (lookahead == '8') ADVANCE(394);
      if (lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(467);
      if (lookahead == '3') ADVANCE(463);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead == '8') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(467);
      if (lookahead == '3') ADVANCE(463);
      if (lookahead == '6') ADVANCE(470);
      if (lookahead == '8') ADVANCE(396);
      if (lookahead == 's') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '6') ADVANCE(438);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(440);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(442);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(444);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 25:
      if (lookahead == '\\') ADVANCE(525);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(429);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(430);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(215);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'z') ADVANCE(61);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == 'y') ADVANCE(380);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 239:
      if (lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 240:
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 243:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 245:
      if (lookahead == 'z') ADVANCE(60);
      END_STATE();
    case 246:
      if (lookahead == 'z') ADVANCE(61);
      END_STATE();
    case 247:
      if (lookahead == '{') ADVANCE(263);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 249:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 250:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 251:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 252:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 253:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(532);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(533);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 261:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(282);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 267:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(273);
      END_STATE();
    case 268:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(272);
      END_STATE();
    case 269:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(281);
      END_STATE();
    case 270:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 271:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(518);
      END_STATE();
    case 272:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(517);
      END_STATE();
    case 273:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(515);
      END_STATE();
    case 274:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(514);
      END_STATE();
    case 275:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(516);
      END_STATE();
    case 276:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(513);
      END_STATE();
    case 277:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(511);
      END_STATE();
    case 278:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(512);
      END_STATE();
    case 279:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(274);
      END_STATE();
    case 280:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(275);
      END_STATE();
    case 281:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(276);
      END_STATE();
    case 282:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(277);
      END_STATE();
    case 283:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(278);
      END_STATE();
    case 284:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(283);
      END_STATE();
    case 285:
      if (eof) ADVANCE(286);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(523);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '&') ADVANCE(361);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead == '+') ADVANCE(367);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead == '<') ADVANCE(356);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '>') ADVANCE(357);
      if (lookahead == '[') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == '^') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == '{') ADVANCE(324);
      if (lookahead == '|') ADVANCE(340);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      END_STATE();
    case 286:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_pub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_comptime);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_noinline);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_noinline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_usingnamespace);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_usingnamespace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(354);
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead == '.') ADVANCE(388);
      if (lookahead == '?') ADVANCE(391);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead == '?') ADVANCE(391);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_linksection);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_callconv);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_noalias);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_noalias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '|') ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(377);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(365);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(351);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_orelse);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(349);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == '=') ADVANCE(348);
      if (lookahead == '>') ADVANCE(386);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(346);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_await);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_anyframe);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DOT_QMARK);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_c_short);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_c_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_c_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_c_uint);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_c_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(652);
      if (lookahead == 'l') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_c_void);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_c_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_f128);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_f128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_noreturn);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_anyerror);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_anyerror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(473);
      if (lookahead == '6') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(475);
      if (lookahead == '6') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead == '6') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '2') ADVANCE(476);
      if (lookahead == '6') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '4') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '4') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '4') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '4') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '8') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '8') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '8') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (lookahead == '8') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_basic_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_undefined_literal);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_undefined_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '/') ADVANCE(721);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '/') ADVANCE(498);
      if (lookahead == 224) ADVANCE(502);
      if (lookahead == 237) ADVANCE(501);
      if (lookahead == 240) ADVANCE(503);
      if (lookahead == 244) ADVANCE(500);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(499);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(507);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(506);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(497);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(282);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(273);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(272);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(281);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(518);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(274);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(275);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(283);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_character_escape_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_character_escape_token2);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_character_escape_token3);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token2);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token3);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token4);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token5);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token6);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token7);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_mb_utf8_literal_token8);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_string_character_token1);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_string_character_token1);
      if (lookahead == '/') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_string_character_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_string_character_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_string_literal_multiline_token1);
      if (lookahead == '\n') ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_string_literal_multiline_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_float_literal_token2);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_float_literal_token2);
      if (lookahead == '_') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_float_literal_token3);
      if (lookahead == '_') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_float_literal_token4);
      if (lookahead == '_') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_integer_literal_token2);
      if (lookahead == '_') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_integer_literal_token3);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'x') ADVANCE(262);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_integer_literal_token3);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '_') ADVANCE(255);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_integer_literal_token4);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(540);
      if (lookahead == '3') ADVANCE(541);
      if (lookahead == '6') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead == '3') ADVANCE(465);
      if (lookahead == '6') ADVANCE(471);
      if (lookahead == '8') ADVANCE(395);
      if (lookahead == 's') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(468);
      if (lookahead == '3') ADVANCE(466);
      if (lookahead == '6') ADVANCE(472);
      if (lookahead == '8') ADVANCE(397);
      if (lookahead == 's') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(543);
      if (lookahead == '6') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == 't') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(619);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(608);
      if (lookahead == 'v') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(659);
      if (lookahead == 's') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(667);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_builtin_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(721);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 285},
  [2] = {.lex_state = 285},
  [3] = {.lex_state = 285},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 285},
  [6] = {.lex_state = 285},
  [7] = {.lex_state = 285},
  [8] = {.lex_state = 285},
  [9] = {.lex_state = 285},
  [10] = {.lex_state = 285},
  [11] = {.lex_state = 285},
  [12] = {.lex_state = 285},
  [13] = {.lex_state = 285},
  [14] = {.lex_state = 285},
  [15] = {.lex_state = 285},
  [16] = {.lex_state = 285},
  [17] = {.lex_state = 285},
  [18] = {.lex_state = 285},
  [19] = {.lex_state = 285},
  [20] = {.lex_state = 285},
  [21] = {.lex_state = 285},
  [22] = {.lex_state = 285},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 285},
  [25] = {.lex_state = 285},
  [26] = {.lex_state = 285},
  [27] = {.lex_state = 285},
  [28] = {.lex_state = 285},
  [29] = {.lex_state = 285},
  [30] = {.lex_state = 285},
  [31] = {.lex_state = 285},
  [32] = {.lex_state = 285},
  [33] = {.lex_state = 285},
  [34] = {.lex_state = 285},
  [35] = {.lex_state = 285},
  [36] = {.lex_state = 285},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 285},
  [39] = {.lex_state = 285},
  [40] = {.lex_state = 285},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 285},
  [49] = {.lex_state = 285},
  [50] = {.lex_state = 285},
  [51] = {.lex_state = 285},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 285},
  [54] = {.lex_state = 285},
  [55] = {.lex_state = 285},
  [56] = {.lex_state = 285},
  [57] = {.lex_state = 285},
  [58] = {.lex_state = 285},
  [59] = {.lex_state = 285},
  [60] = {.lex_state = 285},
  [61] = {.lex_state = 285},
  [62] = {.lex_state = 285},
  [63] = {.lex_state = 285},
  [64] = {.lex_state = 285},
  [65] = {.lex_state = 285},
  [66] = {.lex_state = 285},
  [67] = {.lex_state = 285},
  [68] = {.lex_state = 285},
  [69] = {.lex_state = 285},
  [70] = {.lex_state = 285},
  [71] = {.lex_state = 285},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 285},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 285},
  [76] = {.lex_state = 285},
  [77] = {.lex_state = 285},
  [78] = {.lex_state = 285},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 285},
  [189] = {.lex_state = 285},
  [190] = {.lex_state = 285},
  [191] = {.lex_state = 285},
  [192] = {.lex_state = 285},
  [193] = {.lex_state = 285},
  [194] = {.lex_state = 285},
  [195] = {.lex_state = 285},
  [196] = {.lex_state = 285},
  [197] = {.lex_state = 285},
  [198] = {.lex_state = 285},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 285},
  [201] = {.lex_state = 285},
  [202] = {.lex_state = 285},
  [203] = {.lex_state = 285},
  [204] = {.lex_state = 285},
  [205] = {.lex_state = 285},
  [206] = {.lex_state = 285},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 285},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 285},
  [218] = {.lex_state = 285},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 285},
  [223] = {.lex_state = 285},
  [224] = {.lex_state = 285},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 285},
  [227] = {.lex_state = 285},
  [228] = {.lex_state = 285},
  [229] = {.lex_state = 285},
  [230] = {.lex_state = 285},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 285},
  [233] = {.lex_state = 285},
  [234] = {.lex_state = 285},
  [235] = {.lex_state = 285},
  [236] = {.lex_state = 285},
  [237] = {.lex_state = 285},
  [238] = {.lex_state = 285},
  [239] = {.lex_state = 285},
  [240] = {.lex_state = 285},
  [241] = {.lex_state = 285},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 285},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 13},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 285},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 13},
  [253] = {.lex_state = 285},
  [254] = {.lex_state = 285},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 285},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 285},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 285},
  [267] = {.lex_state = 285},
  [268] = {.lex_state = 285},
  [269] = {.lex_state = 285},
  [270] = {.lex_state = 285},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 285},
  [275] = {.lex_state = 285},
  [276] = {.lex_state = 285},
  [277] = {.lex_state = 285},
  [278] = {.lex_state = 285},
  [279] = {.lex_state = 285},
  [280] = {.lex_state = 285},
  [281] = {.lex_state = 285},
  [282] = {.lex_state = 285},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 285},
  [285] = {.lex_state = 285},
  [286] = {.lex_state = 285},
  [287] = {.lex_state = 285},
  [288] = {.lex_state = 285},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 285},
  [291] = {.lex_state = 285},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 285},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 285},
  [304] = {.lex_state = 285},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 285},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 285},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 285},
  [315] = {.lex_state = 285},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 285},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 285},
  [326] = {.lex_state = 285},
  [327] = {.lex_state = 285},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 285},
  [332] = {.lex_state = 285},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 285},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 285},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 285},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 285},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 285},
  [372] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_comptime] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_noinline] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_threadlocal] = ACTIONS(1),
    [anon_sym_usingnamespace] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_linksection] = ACTIONS(1),
    [anon_sym_callconv] = ACTIONS(1),
    [anon_sym_noalias] = ACTIONS(1),
    [anon_sym_anytype] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_orelse] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_anyframe] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_DOT_QMARK] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_c_short] = ACTIONS(1),
    [anon_sym_c_ushort] = ACTIONS(1),
    [anon_sym_c_int] = ACTIONS(1),
    [anon_sym_c_uint] = ACTIONS(1),
    [anon_sym_c_long] = ACTIONS(1),
    [anon_sym_c_ulong] = ACTIONS(1),
    [anon_sym_c_longlong] = ACTIONS(1),
    [anon_sym_c_ulonglong] = ACTIONS(1),
    [anon_sym_c_longdouble] = ACTIONS(1),
    [anon_sym_c_void] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_f128] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_noreturn] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_anyerror] = ACTIONS(1),
    [anon_sym_comptime_int] = ACTIONS(1),
    [anon_sym_comptime_float] = ACTIONS(1),
    [aux_sym_basic_type_token1] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [sym_undefined_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_character_escape_token1] = ACTIONS(1),
    [aux_sym_character_escape_token2] = ACTIONS(1),
    [aux_sym_character_escape_token3] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token1] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token2] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token3] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token4] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token5] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token6] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token7] = ACTIONS(1),
    [aux_sym_mb_utf8_literal_token8] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_float_literal_token1] = ACTIONS(1),
    [aux_sym_float_literal_token2] = ACTIONS(1),
    [aux_sym_float_literal_token3] = ACTIONS(1),
    [aux_sym_float_literal_token4] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [aux_sym_integer_literal_token2] = ACTIONS(1),
    [aux_sym_integer_literal_token3] = ACTIONS(1),
    [aux_sym_integer_literal_token4] = ACTIONS(1),
    [sym_builtin_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_root] = STATE(370),
    [sym_test_declaration] = STATE(185),
    [sym_top_level_comptime] = STATE(185),
    [sym_top_level_declaration] = STATE(185),
    [sym_top_function_declaration] = STATE(208),
    [sym_top_variable_declaration] = STATE(208),
    [sym_top_usingnamespace_declaration] = STATE(208),
    [sym_function_prototype] = STATE(292),
    [sym_variable_declaration] = STATE(209),
    [sym_extern_ref] = STATE(267),
    [aux_sym_root_repeat1] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pub] = ACTIONS(7),
    [anon_sym_test] = ACTIONS(9),
    [anon_sym_comptime] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
    [anon_sym_inline] = ACTIONS(15),
    [anon_sym_noinline] = ACTIONS(15),
    [anon_sym_threadlocal] = ACTIONS(17),
    [anon_sym_usingnamespace] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_extern] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(31), 14,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(27), 42,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_extern,
  [83] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(41), 14,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(39), 42,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_extern,
  [166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_string_literal_multiline_token1,
    STATE(11), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(45), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(43), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [241] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 11,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 39,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_RBRACK,
      anon_sym_extern,
  [328] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(59), 9,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 36,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_RBRACK,
      anon_sym_extern,
  [419] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_or,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 30,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_RBRACK,
      anon_sym_extern,
  [522] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(81), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_extern,
  [631] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(93), 7,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(91), 36,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_RBRACK,
      anon_sym_extern,
  [724] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(97), 7,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(95), 36,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_RBRACK,
      anon_sym_extern,
  [817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_string_literal_multiline_token1,
    STATE(11), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(101), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(99), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [892] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 2,
      anon_sym_EQ,
      anon_sym_or,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(106), 30,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_RBRACK,
      anon_sym_extern,
  [995] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(112), 2,
      anon_sym_EQ,
      anon_sym_or,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(110), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_RBRACK,
      anon_sym_extern,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(114), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(118), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(122), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(126), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(130), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(134), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(138), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(142), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(146), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(150), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(154), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(158), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(162), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [1997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(166), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(170), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(174), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(178), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(182), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(186), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(190), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(194), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(198), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 15,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(202), 46,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_orelse,
      anon_sym_catch,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
      anon_sym_extern,
  [2687] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(206), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [2791] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(208), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [2895] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(210), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [2999] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(212), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [3103] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(214), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [3207] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_comptime,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(244), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(178), 1,
      sym_variable_declaration,
    ACTIONS(220), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(44), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(228), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(61), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [3299] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_comptime,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(287), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(178), 1,
      sym_variable_declaration,
    ACTIONS(252), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(266), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(281), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(43), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(260), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(263), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(249), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(278), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(61), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [3391] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_comptime,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(244), 1,
      sym_builtin_identifier,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(178), 1,
      sym_variable_declaration,
    ACTIONS(220), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(43), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(228), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(61), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [3483] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_comptime,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(244), 1,
      sym_builtin_identifier,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(178), 1,
      sym_variable_declaration,
    ACTIONS(220), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(46), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(228), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(61), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [3575] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_comptime,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(244), 1,
      sym_builtin_identifier,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(178), 1,
      sym_variable_declaration,
    ACTIONS(220), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(43), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(228), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(61), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [3667] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(305), 1,
      aux_sym_init_list_repeat2,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [3764] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(301), 1,
      aux_sym_init_list_repeat2,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [3861] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(304), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [3954] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4048] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4140] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(318), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(298), 1,
      sym_field_init,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(316), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(47), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [4221] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4312] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4403] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4494] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4585] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4676] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4767] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4858] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [4949] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5040] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5131] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5222] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5313] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5404] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5495] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5586] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5677] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5768] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5859] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [5950] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(111), 1,
      sym_payload,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(360), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(9), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6031] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [6122] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(366), 1,
      anon_sym_COLON,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(370), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(50), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6203] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [6294] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [6385] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [6476] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_orelse,
    ACTIONS(77), 1,
      anon_sym_catch,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_or,
    ACTIONS(87), 1,
      anon_sym_and,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_suffix_operator,
    STATE(23), 1,
      sym_function_call_arguments,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(55), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(69), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(71), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [6567] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(384), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(49), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6645] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(390), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(48), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6723] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(386), 1,
      sym_builtin_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(384), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(49), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6801] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(386), 1,
      sym_builtin_identifier,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(384), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(49), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6879] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(386), 1,
      sym_builtin_identifier,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(384), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(49), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [6957] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(402), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(400), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(78), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7032] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(406), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(404), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(13), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7107] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(410), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(408), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(2), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7182] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(414), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(412), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(7), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7257] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(418), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(416), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(6), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7332] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(422), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(420), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(5), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7407] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(386), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(384), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(49), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7482] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(426), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(424), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(39), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7557] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(430), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(428), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(51), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7632] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(434), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(432), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(41), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7707] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(438), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(436), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(76), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7782] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(442), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(440), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(69), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7857] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(446), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(444), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(3), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [7932] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(450), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(448), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(60), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8007] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(454), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(452), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(68), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8082] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(458), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(456), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(59), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8157] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(462), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(460), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(58), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8232] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(466), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(464), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(38), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8307] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(470), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(468), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(75), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8382] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(474), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(472), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(65), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8457] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(478), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(476), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(57), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8532] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(482), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(480), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(77), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8607] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(486), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(484), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(37), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8682] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(490), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(488), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(73), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8757] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(494), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(492), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(40), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8832] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(498), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(496), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(66), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8907] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(502), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(500), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(63), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [8982] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(506), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(504), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(10), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9057] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(510), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(508), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(70), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9132] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(514), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(512), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(62), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9207] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(518), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(516), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(71), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9282] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(522), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(520), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(67), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9357] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(526), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(524), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(54), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9432] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(530), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(528), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(12), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9507] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(362), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(360), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(9), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9582] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(534), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(532), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(55), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9657] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(538), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(536), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(8), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9732] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(542), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(540), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(64), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9807] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(546), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(544), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(56), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9882] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(550), 1,
      sym_builtin_identifier,
    STATE(4), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(242), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(226), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(548), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(238), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(53), 17,
      sym__expression,
      sym_assignment_expression,
      sym_boolean_or_expression,
      sym_boolean_and_expression,
      sym_comparison_expression,
      sym_bitwise_expression,
      sym_bit_shift_expression,
      sym_addition_expression,
      sym_multiplication_expression,
      sym_prefix_expression,
      sym_suffix_expression,
      sym_function_call_expression,
      sym_boolean_literal,
      sym_character_literal,
      sym_string_literal,
      sym_float_literal,
      sym_integer_literal,
  [9957] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_BANG,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(558), 1,
      anon_sym_align,
    STATE(137), 1,
      sym_byte_align,
    STATE(144), 1,
      sym_link_section,
    STATE(155), 1,
      sym_call_convention,
    STATE(328), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10023] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(564), 1,
      anon_sym_BANG,
    STATE(135), 1,
      sym_byte_align,
    STATE(142), 1,
      sym_link_section,
    STATE(153), 1,
      sym_call_convention,
    STATE(318), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10089] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(572), 1,
      anon_sym_anytype,
    ACTIONS(574), 1,
      sym_identifier,
    STATE(324), 1,
      sym_parameter_declaration,
    STATE(341), 1,
      sym_basic_type,
    ACTIONS(566), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [10151] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(576), 1,
      anon_sym_BANG,
    STATE(138), 1,
      sym_byte_align,
    STATE(145), 1,
      sym_link_section,
    STATE(154), 1,
      sym_call_convention,
    STATE(333), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10217] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(140), 1,
      sym_byte_align,
    STATE(147), 1,
      sym_link_section,
    STATE(149), 1,
      sym_call_convention,
    STATE(335), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10283] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(136), 1,
      sym_byte_align,
    STATE(146), 1,
      sym_link_section,
    STATE(158), 1,
      sym_call_convention,
    STATE(316), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10349] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(572), 1,
      anon_sym_anytype,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_parameter_declaration,
    STATE(341), 1,
      sym_basic_type,
    ACTIONS(566), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [10411] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(572), 1,
      anon_sym_anytype,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_parameter_declaration,
    STATE(341), 1,
      sym_basic_type,
    ACTIONS(566), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [10473] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(572), 1,
      anon_sym_anytype,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_parameter_declaration,
    STATE(341), 1,
      sym_basic_type,
    ACTIONS(566), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [10535] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(572), 1,
      anon_sym_anytype,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_parameter_declaration,
    STATE(341), 1,
      sym_basic_type,
    ACTIONS(566), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [10597] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(572), 1,
      anon_sym_anytype,
    ACTIONS(574), 1,
      sym_identifier,
    STATE(324), 1,
      sym_parameter_declaration,
    STATE(341), 1,
      sym_basic_type,
    ACTIONS(566), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [10656] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(147), 1,
      sym_link_section,
    STATE(149), 1,
      sym_call_convention,
    STATE(335), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10716] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_BANG,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    STATE(144), 1,
      sym_link_section,
    STATE(155), 1,
      sym_call_convention,
    STATE(328), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10776] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(590), 1,
      anon_sym_BANG,
    STATE(143), 1,
      sym_link_section,
    STATE(157), 1,
      sym_call_convention,
    STATE(337), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10836] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(564), 1,
      anon_sym_BANG,
    STATE(142), 1,
      sym_link_section,
    STATE(153), 1,
      sym_call_convention,
    STATE(318), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(592), 27,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_linksection,
      anon_sym_callconv,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [10944] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(146), 1,
      sym_link_section,
    STATE(158), 1,
      sym_call_convention,
    STATE(316), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(596), 25,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_EQ,
      anon_sym_callconv,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11050] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(149), 1,
      sym_call_convention,
    STATE(335), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(600), 1,
      anon_sym_BANG,
    STATE(156), 1,
      sym_call_convention,
    STATE(346), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(590), 1,
      anon_sym_BANG,
    STATE(157), 1,
      sym_call_convention,
    STATE(337), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(564), 1,
      anon_sym_BANG,
    STATE(153), 1,
      sym_call_convention,
    STATE(318), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11266] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_BANG,
    ACTIONS(556), 1,
      anon_sym_callconv,
    STATE(155), 1,
      sym_call_convention,
    STATE(328), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_callconv,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(158), 1,
      sym_call_convention,
    STATE(316), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_anytype,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(313), 1,
      sym_basic_type,
    ACTIONS(560), 34,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_long,
      anon_sym_c_ulong,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      aux_sym_basic_type_token1,
  [11423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(316), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_anytype,
    STATE(322), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_anytype,
    STATE(334), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(335), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_BANG,
    STATE(318), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_BANG,
    STATE(337), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_BANG,
    STATE(344), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_BANG,
    STATE(346), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_BANG,
    STATE(328), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(328), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(318), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [11993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(191), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(346), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(266), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(614), 22,
      anon_sym_BANG,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(344), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(337), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(335), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(338), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(277), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(278), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(270), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(316), 1,
      sym_basic_type,
    ACTIONS(560), 13,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      aux_sym_basic_type_token1,
    ACTIONS(562), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
  [12576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(620), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(624), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(628), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(632), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(636), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(640), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(644), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(648), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 13,
      anon_sym_comptime,
      anon_sym_const,
      anon_sym_var,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(652), 16,
      anon_sym_BANG,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 10,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
      sym_undefined_literal,
      sym_null_literal,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
      sym_identifier,
    ACTIONS(654), 15,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_string_literal_multiline_token1,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
      sym_builtin_identifier,
  [12942] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_pub,
    ACTIONS(660), 1,
      anon_sym_test,
    ACTIONS(662), 1,
      anon_sym_comptime,
    ACTIONS(664), 1,
      anon_sym_export,
    ACTIONS(668), 1,
      anon_sym_threadlocal,
    ACTIONS(670), 1,
      anon_sym_usingnamespace,
    ACTIONS(672), 1,
      anon_sym_fn,
    ACTIONS(676), 1,
      anon_sym_extern,
    ACTIONS(678), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_container_members_repeat1,
    STATE(203), 1,
      sym_container_field,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(666), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(674), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(217), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13006] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_test,
    ACTIONS(662), 1,
      anon_sym_comptime,
    ACTIONS(664), 1,
      anon_sym_export,
    ACTIONS(668), 1,
      anon_sym_threadlocal,
    ACTIONS(670), 1,
      anon_sym_usingnamespace,
    ACTIONS(672), 1,
      anon_sym_fn,
    ACTIONS(676), 1,
      anon_sym_extern,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(680), 1,
      anon_sym_pub,
    STATE(184), 1,
      aux_sym_container_members_repeat1,
    STATE(205), 1,
      sym_container_field,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(666), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(674), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(215), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13070] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_test,
    ACTIONS(662), 1,
      anon_sym_comptime,
    ACTIONS(664), 1,
      anon_sym_export,
    ACTIONS(668), 1,
      anon_sym_threadlocal,
    ACTIONS(670), 1,
      anon_sym_usingnamespace,
    ACTIONS(672), 1,
      anon_sym_fn,
    ACTIONS(676), 1,
      anon_sym_extern,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(682), 1,
      anon_sym_pub,
    STATE(199), 1,
      aux_sym_container_members_repeat1,
    STATE(204), 1,
      sym_container_field,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(666), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(674), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(244), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13134] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_pub,
    ACTIONS(660), 1,
      anon_sym_test,
    ACTIONS(662), 1,
      anon_sym_comptime,
    ACTIONS(664), 1,
      anon_sym_export,
    ACTIONS(668), 1,
      anon_sym_threadlocal,
    ACTIONS(670), 1,
      anon_sym_usingnamespace,
    ACTIONS(672), 1,
      anon_sym_fn,
    ACTIONS(676), 1,
      anon_sym_extern,
    ACTIONS(678), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_container_members_repeat1,
    STATE(203), 1,
      sym_container_field,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(666), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(674), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(217), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13198] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    ACTIONS(686), 1,
      anon_sym_pub,
    ACTIONS(689), 1,
      anon_sym_test,
    ACTIONS(692), 1,
      anon_sym_comptime,
    ACTIONS(695), 1,
      anon_sym_export,
    ACTIONS(701), 1,
      anon_sym_threadlocal,
    ACTIONS(704), 1,
      anon_sym_usingnamespace,
    ACTIONS(707), 1,
      anon_sym_fn,
    ACTIONS(713), 1,
      anon_sym_extern,
    STATE(188), 1,
      aux_sym_root_repeat1,
    STATE(209), 1,
      sym_variable_declaration,
    STATE(267), 1,
      sym_extern_ref,
    STATE(292), 1,
      sym_function_prototype,
    ACTIONS(698), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(710), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(185), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13259] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pub,
    ACTIONS(9), 1,
      anon_sym_test,
    ACTIONS(11), 1,
      anon_sym_comptime,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(17), 1,
      anon_sym_threadlocal,
    ACTIONS(19), 1,
      anon_sym_usingnamespace,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      aux_sym_root_repeat1,
    STATE(209), 1,
      sym_variable_declaration,
    STATE(267), 1,
      sym_extern_ref,
    STATE(292), 1,
      sym_function_prototype,
    ACTIONS(15), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(185), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_SEMI,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_var,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_linksection,
      anon_sym_align,
      anon_sym_extern,
  [13346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_EQ,
    ACTIONS(722), 1,
      anon_sym_align,
    STATE(202), 1,
      sym_byte_align,
    ACTIONS(206), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_align,
    ACTIONS(724), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_byte_align,
    ACTIONS(212), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13404] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(726), 1,
      anon_sym_export,
    ACTIONS(730), 1,
      anon_sym_threadlocal,
    ACTIONS(732), 1,
      anon_sym_usingnamespace,
    STATE(217), 1,
      sym_top_level_declaration,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(728), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(734), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13448] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(726), 1,
      anon_sym_export,
    ACTIONS(730), 1,
      anon_sym_threadlocal,
    ACTIONS(732), 1,
      anon_sym_usingnamespace,
    STATE(244), 1,
      sym_top_level_declaration,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(728), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(734), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13492] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(726), 1,
      anon_sym_export,
    ACTIONS(730), 1,
      anon_sym_threadlocal,
    ACTIONS(732), 1,
      anon_sym_usingnamespace,
    STATE(218), 1,
      sym_top_level_declaration,
    STATE(250), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(728), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(734), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(206), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(740), 1,
      anon_sym_EQ,
    ACTIONS(736), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13562] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(17), 1,
      anon_sym_threadlocal,
    ACTIONS(19), 1,
      anon_sym_usingnamespace,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    STATE(187), 1,
      sym_top_level_declaration,
    STATE(209), 1,
      sym_variable_declaration,
    STATE(267), 1,
      sym_extern_ref,
    STATE(292), 1,
      sym_function_prototype,
    ACTIONS(15), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_COLON,
    ACTIONS(746), 1,
      anon_sym_EQ,
    ACTIONS(742), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_comptime,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_container_members_repeat1,
    STATE(361), 1,
      sym_container_field,
    ACTIONS(748), 11,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 15,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_EQ,
      anon_sym_extern,
  [13682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_EQ,
    ACTIONS(214), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(212), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(758), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(684), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [13946] = 4,
    ACTIONS(782), 1,
      sym_comment,
    STATE(351), 1,
      sym_character_escape,
    ACTIONS(780), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
    ACTIONS(778), 9,
      aux_sym_character_literal_token1,
      aux_sym_mb_utf8_literal_token1,
      aux_sym_mb_utf8_literal_token2,
      aux_sym_mb_utf8_literal_token3,
      aux_sym_mb_utf8_literal_token4,
      aux_sym_mb_utf8_literal_token5,
      aux_sym_mb_utf8_literal_token6,
      aux_sym_mb_utf8_literal_token7,
      aux_sym_mb_utf8_literal_token8,
  [13969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [13988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 13,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
      sym_identifier,
  [14691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 13,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_test,
      anon_sym_comptime,
      anon_sym_export,
      anon_sym_inline,
      anon_sym_noinline,
      anon_sym_threadlocal,
      anon_sym_usingnamespace,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
      anon_sym_extern,
  [14710] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(828), 1,
      anon_sym_SEMI,
    ACTIONS(830), 1,
      anon_sym_COLON,
    ACTIONS(832), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_byte_align,
    STATE(331), 1,
      sym_link_section,
  [14735] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym_string_character_token1,
    ACTIONS(838), 1,
      anon_sym_DQUOTE,
    STATE(265), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14754] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_string_character_token1,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    STATE(258), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14773] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    ACTIONS(846), 1,
      anon_sym_COLON,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(279), 1,
      sym_byte_align,
    STATE(321), 1,
      sym_link_section,
  [14798] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_string_character_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    STATE(258), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(850), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14817] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_string_character_token1,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    STATE(260), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14836] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_string_character_token1,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
    STATE(258), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14855] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_string_character_token1,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    STATE(264), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14874] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_COLON,
    ACTIONS(872), 1,
      anon_sym_EQ,
    STATE(282), 1,
      sym_byte_align,
    STATE(336), 1,
      sym_link_section,
  [14899] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym_string_character_token1,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    STATE(256), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14918] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_string_character_token1,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    STATE(258), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14937] = 5,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym_string_character_token1,
    ACTIONS(880), 1,
      anon_sym_DQUOTE,
    STATE(258), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(834), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14956] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(882), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_byte_align,
    STATE(327), 1,
      sym_link_section,
  [14978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(884), 1,
      anon_sym_threadlocal,
    STATE(212), 1,
      sym_variable_declaration,
    STATE(297), 1,
      sym_function_prototype,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
  [14998] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(886), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_byte_align,
    STATE(325), 1,
      sym_link_section,
  [15020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(888), 1,
      anon_sym_threadlocal,
    STATE(240), 1,
      sym_variable_declaration,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(734), 2,
      anon_sym_const,
      anon_sym_var,
  [15040] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(890), 1,
      anon_sym_EQ,
    STATE(275), 1,
      sym_byte_align,
    STATE(311), 1,
      sym_link_section,
  [15062] = 2,
    ACTIONS(782), 1,
      sym_comment,
    ACTIONS(892), 5,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
      aux_sym_string_character_token1,
      anon_sym_DQUOTE,
  [15073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      sym_identifier,
    STATE(210), 1,
      sym_block_expression,
    STATE(211), 1,
      sym_block,
    STATE(347), 1,
      sym_block_label,
  [15092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      sym_identifier,
    STATE(241), 1,
      sym_block,
    STATE(253), 1,
      sym_block_expression,
    STATE(310), 1,
      sym_block_label,
  [15111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 4,
      anon_sym_threadlocal,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
  [15124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(906), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_link_section,
  [15140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 4,
      anon_sym_threadlocal,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
  [15150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(724), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_byte_align,
  [15166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_align,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_byte_align,
  [15182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_EQ,
    STATE(326), 1,
      sym_link_section,
  [15198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(914), 1,
      anon_sym_EQ,
    STATE(314), 1,
      sym_link_section,
  [15214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(916), 1,
      anon_sym_EQ,
    STATE(332), 1,
      sym_link_section,
  [15230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(340), 1,
      sym_link_section,
  [15246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_init_list_repeat2,
    ACTIONS(304), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 4,
      anon_sym_threadlocal,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
  [15270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_linksection,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(929), 1,
      anon_sym_EQ,
    STATE(343), 1,
      sym_link_section,
  [15286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_EQ,
    ACTIONS(931), 1,
      anon_sym_COLON,
  [15299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(225), 1,
      sym_variable_declaration,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
  [15310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(746), 1,
      anon_sym_EQ,
    ACTIONS(933), 1,
      anon_sym_COLON,
  [15323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_init_list_repeat1,
  [15336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 1,
      anon_sym_DOT,
    STATE(329), 1,
      sym_field_init,
  [15349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(212), 1,
      sym_variable_declaration,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
  [15360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      sym_block,
  [15373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(24), 1,
      sym_init_list,
  [15399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(957), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      sym_block,
  [15438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_init_list_repeat1,
  [15451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      sym_block,
  [15464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      sym_variable_declaration,
    ACTIONS(734), 2,
      anon_sym_const,
      anon_sym_var,
  [15475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_init_list_repeat2,
  [15488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_init_list_repeat1,
  [15501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 1,
      anon_sym_DOT,
    STATE(329), 1,
      sym_field_init,
  [15514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(240), 1,
      sym_variable_declaration,
    ACTIONS(734), 2,
      anon_sym_const,
      anon_sym_var,
  [15525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_init_list_repeat2,
  [15538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(182), 1,
      sym_variable_declaration,
    ACTIONS(969), 2,
      anon_sym_const,
      anon_sym_var,
  [15549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    STATE(239), 1,
      sym_block,
  [15575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_block,
  [15598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(906), 1,
      anon_sym_EQ,
  [15608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_block,
  [15618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    ACTIONS(977), 1,
      anon_sym_EQ,
  [15636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_DOT,
    STATE(329), 1,
      sym_field_init,
  [15646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_block,
  [15664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_block,
  [15682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    STATE(297), 1,
      sym_function_prototype,
  [15692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_EQ,
  [15702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_block,
  [15720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(914), 1,
      anon_sym_EQ,
  [15738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(882), 1,
      anon_sym_EQ,
  [15748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_EQ,
  [15758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      sym_identifier,
  [15784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(929), 1,
      anon_sym_EQ,
  [15794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(991), 1,
      anon_sym_EQ,
  [15804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    ACTIONS(920), 1,
      anon_sym_EQ,
  [15838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_init_list,
  [15864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(890), 1,
      anon_sym_EQ,
  [15874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1007), 1,
      anon_sym_RBRACK,
  [15892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(886), 1,
      anon_sym_EQ,
  [15902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(1011), 1,
      anon_sym_EQ,
  [15920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_block,
  [15938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    STATE(299), 1,
      sym_function_prototype,
  [15948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [15955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_SQUOTE,
  [15962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
  [15969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
  [15976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
  [15983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_COLON,
  [15990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COLON,
  [15997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
  [16004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [16011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_identifier,
  [16018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_DQUOTE,
  [16025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_identifier,
  [16032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
  [16039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_identifier,
  [16046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COLON,
  [16053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_identifier,
  [16060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym_identifier,
  [16067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_identifier,
  [16074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
  [16081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
  [16088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_PIPE,
  [16095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      ts_builtin_sym_end,
  [16102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_EQ,
  [16109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 241,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 522,
  [SMALL_STATE(9)] = 631,
  [SMALL_STATE(10)] = 724,
  [SMALL_STATE(11)] = 817,
  [SMALL_STATE(12)] = 892,
  [SMALL_STATE(13)] = 995,
  [SMALL_STATE(14)] = 1100,
  [SMALL_STATE(15)] = 1169,
  [SMALL_STATE(16)] = 1238,
  [SMALL_STATE(17)] = 1307,
  [SMALL_STATE(18)] = 1376,
  [SMALL_STATE(19)] = 1445,
  [SMALL_STATE(20)] = 1514,
  [SMALL_STATE(21)] = 1583,
  [SMALL_STATE(22)] = 1652,
  [SMALL_STATE(23)] = 1721,
  [SMALL_STATE(24)] = 1790,
  [SMALL_STATE(25)] = 1859,
  [SMALL_STATE(26)] = 1928,
  [SMALL_STATE(27)] = 1997,
  [SMALL_STATE(28)] = 2066,
  [SMALL_STATE(29)] = 2135,
  [SMALL_STATE(30)] = 2204,
  [SMALL_STATE(31)] = 2273,
  [SMALL_STATE(32)] = 2342,
  [SMALL_STATE(33)] = 2411,
  [SMALL_STATE(34)] = 2480,
  [SMALL_STATE(35)] = 2549,
  [SMALL_STATE(36)] = 2618,
  [SMALL_STATE(37)] = 2687,
  [SMALL_STATE(38)] = 2791,
  [SMALL_STATE(39)] = 2895,
  [SMALL_STATE(40)] = 2999,
  [SMALL_STATE(41)] = 3103,
  [SMALL_STATE(42)] = 3207,
  [SMALL_STATE(43)] = 3299,
  [SMALL_STATE(44)] = 3391,
  [SMALL_STATE(45)] = 3483,
  [SMALL_STATE(46)] = 3575,
  [SMALL_STATE(47)] = 3667,
  [SMALL_STATE(48)] = 3764,
  [SMALL_STATE(49)] = 3861,
  [SMALL_STATE(50)] = 3954,
  [SMALL_STATE(51)] = 4048,
  [SMALL_STATE(52)] = 4140,
  [SMALL_STATE(53)] = 4221,
  [SMALL_STATE(54)] = 4312,
  [SMALL_STATE(55)] = 4403,
  [SMALL_STATE(56)] = 4494,
  [SMALL_STATE(57)] = 4585,
  [SMALL_STATE(58)] = 4676,
  [SMALL_STATE(59)] = 4767,
  [SMALL_STATE(60)] = 4858,
  [SMALL_STATE(61)] = 4949,
  [SMALL_STATE(62)] = 5040,
  [SMALL_STATE(63)] = 5131,
  [SMALL_STATE(64)] = 5222,
  [SMALL_STATE(65)] = 5313,
  [SMALL_STATE(66)] = 5404,
  [SMALL_STATE(67)] = 5495,
  [SMALL_STATE(68)] = 5586,
  [SMALL_STATE(69)] = 5677,
  [SMALL_STATE(70)] = 5768,
  [SMALL_STATE(71)] = 5859,
  [SMALL_STATE(72)] = 5950,
  [SMALL_STATE(73)] = 6031,
  [SMALL_STATE(74)] = 6122,
  [SMALL_STATE(75)] = 6203,
  [SMALL_STATE(76)] = 6294,
  [SMALL_STATE(77)] = 6385,
  [SMALL_STATE(78)] = 6476,
  [SMALL_STATE(79)] = 6567,
  [SMALL_STATE(80)] = 6645,
  [SMALL_STATE(81)] = 6723,
  [SMALL_STATE(82)] = 6801,
  [SMALL_STATE(83)] = 6879,
  [SMALL_STATE(84)] = 6957,
  [SMALL_STATE(85)] = 7032,
  [SMALL_STATE(86)] = 7107,
  [SMALL_STATE(87)] = 7182,
  [SMALL_STATE(88)] = 7257,
  [SMALL_STATE(89)] = 7332,
  [SMALL_STATE(90)] = 7407,
  [SMALL_STATE(91)] = 7482,
  [SMALL_STATE(92)] = 7557,
  [SMALL_STATE(93)] = 7632,
  [SMALL_STATE(94)] = 7707,
  [SMALL_STATE(95)] = 7782,
  [SMALL_STATE(96)] = 7857,
  [SMALL_STATE(97)] = 7932,
  [SMALL_STATE(98)] = 8007,
  [SMALL_STATE(99)] = 8082,
  [SMALL_STATE(100)] = 8157,
  [SMALL_STATE(101)] = 8232,
  [SMALL_STATE(102)] = 8307,
  [SMALL_STATE(103)] = 8382,
  [SMALL_STATE(104)] = 8457,
  [SMALL_STATE(105)] = 8532,
  [SMALL_STATE(106)] = 8607,
  [SMALL_STATE(107)] = 8682,
  [SMALL_STATE(108)] = 8757,
  [SMALL_STATE(109)] = 8832,
  [SMALL_STATE(110)] = 8907,
  [SMALL_STATE(111)] = 8982,
  [SMALL_STATE(112)] = 9057,
  [SMALL_STATE(113)] = 9132,
  [SMALL_STATE(114)] = 9207,
  [SMALL_STATE(115)] = 9282,
  [SMALL_STATE(116)] = 9357,
  [SMALL_STATE(117)] = 9432,
  [SMALL_STATE(118)] = 9507,
  [SMALL_STATE(119)] = 9582,
  [SMALL_STATE(120)] = 9657,
  [SMALL_STATE(121)] = 9732,
  [SMALL_STATE(122)] = 9807,
  [SMALL_STATE(123)] = 9882,
  [SMALL_STATE(124)] = 9957,
  [SMALL_STATE(125)] = 10023,
  [SMALL_STATE(126)] = 10089,
  [SMALL_STATE(127)] = 10151,
  [SMALL_STATE(128)] = 10217,
  [SMALL_STATE(129)] = 10283,
  [SMALL_STATE(130)] = 10349,
  [SMALL_STATE(131)] = 10411,
  [SMALL_STATE(132)] = 10473,
  [SMALL_STATE(133)] = 10535,
  [SMALL_STATE(134)] = 10597,
  [SMALL_STATE(135)] = 10656,
  [SMALL_STATE(136)] = 10716,
  [SMALL_STATE(137)] = 10776,
  [SMALL_STATE(138)] = 10836,
  [SMALL_STATE(139)] = 10896,
  [SMALL_STATE(140)] = 10944,
  [SMALL_STATE(141)] = 11004,
  [SMALL_STATE(142)] = 11050,
  [SMALL_STATE(143)] = 11104,
  [SMALL_STATE(144)] = 11158,
  [SMALL_STATE(145)] = 11212,
  [SMALL_STATE(146)] = 11266,
  [SMALL_STATE(147)] = 11320,
  [SMALL_STATE(148)] = 11374,
  [SMALL_STATE(149)] = 11423,
  [SMALL_STATE(150)] = 11471,
  [SMALL_STATE(151)] = 11519,
  [SMALL_STATE(152)] = 11567,
  [SMALL_STATE(153)] = 11615,
  [SMALL_STATE(154)] = 11663,
  [SMALL_STATE(155)] = 11711,
  [SMALL_STATE(156)] = 11759,
  [SMALL_STATE(157)] = 11807,
  [SMALL_STATE(158)] = 11855,
  [SMALL_STATE(159)] = 11903,
  [SMALL_STATE(160)] = 11948,
  [SMALL_STATE(161)] = 11993,
  [SMALL_STATE(162)] = 12038,
  [SMALL_STATE(163)] = 12083,
  [SMALL_STATE(164)] = 12128,
  [SMALL_STATE(165)] = 12171,
  [SMALL_STATE(166)] = 12216,
  [SMALL_STATE(167)] = 12261,
  [SMALL_STATE(168)] = 12306,
  [SMALL_STATE(169)] = 12351,
  [SMALL_STATE(170)] = 12396,
  [SMALL_STATE(171)] = 12441,
  [SMALL_STATE(172)] = 12486,
  [SMALL_STATE(173)] = 12531,
  [SMALL_STATE(174)] = 12576,
  [SMALL_STATE(175)] = 12613,
  [SMALL_STATE(176)] = 12650,
  [SMALL_STATE(177)] = 12687,
  [SMALL_STATE(178)] = 12724,
  [SMALL_STATE(179)] = 12761,
  [SMALL_STATE(180)] = 12798,
  [SMALL_STATE(181)] = 12835,
  [SMALL_STATE(182)] = 12872,
  [SMALL_STATE(183)] = 12909,
  [SMALL_STATE(184)] = 12942,
  [SMALL_STATE(185)] = 13006,
  [SMALL_STATE(186)] = 13070,
  [SMALL_STATE(187)] = 13134,
  [SMALL_STATE(188)] = 13198,
  [SMALL_STATE(189)] = 13259,
  [SMALL_STATE(190)] = 13320,
  [SMALL_STATE(191)] = 13346,
  [SMALL_STATE(192)] = 13375,
  [SMALL_STATE(193)] = 13404,
  [SMALL_STATE(194)] = 13448,
  [SMALL_STATE(195)] = 13492,
  [SMALL_STATE(196)] = 13536,
  [SMALL_STATE(197)] = 13562,
  [SMALL_STATE(198)] = 13606,
  [SMALL_STATE(199)] = 13632,
  [SMALL_STATE(200)] = 13661,
  [SMALL_STATE(201)] = 13682,
  [SMALL_STATE(202)] = 13705,
  [SMALL_STATE(203)] = 13728,
  [SMALL_STATE(204)] = 13750,
  [SMALL_STATE(205)] = 13772,
  [SMALL_STATE(206)] = 13794,
  [SMALL_STATE(207)] = 13813,
  [SMALL_STATE(208)] = 13832,
  [SMALL_STATE(209)] = 13851,
  [SMALL_STATE(210)] = 13870,
  [SMALL_STATE(211)] = 13889,
  [SMALL_STATE(212)] = 13908,
  [SMALL_STATE(213)] = 13927,
  [SMALL_STATE(214)] = 13946,
  [SMALL_STATE(215)] = 13969,
  [SMALL_STATE(216)] = 13988,
  [SMALL_STATE(217)] = 14007,
  [SMALL_STATE(218)] = 14026,
  [SMALL_STATE(219)] = 14045,
  [SMALL_STATE(220)] = 14064,
  [SMALL_STATE(221)] = 14083,
  [SMALL_STATE(222)] = 14102,
  [SMALL_STATE(223)] = 14121,
  [SMALL_STATE(224)] = 14140,
  [SMALL_STATE(225)] = 14159,
  [SMALL_STATE(226)] = 14178,
  [SMALL_STATE(227)] = 14197,
  [SMALL_STATE(228)] = 14216,
  [SMALL_STATE(229)] = 14235,
  [SMALL_STATE(230)] = 14254,
  [SMALL_STATE(231)] = 14273,
  [SMALL_STATE(232)] = 14292,
  [SMALL_STATE(233)] = 14311,
  [SMALL_STATE(234)] = 14330,
  [SMALL_STATE(235)] = 14349,
  [SMALL_STATE(236)] = 14368,
  [SMALL_STATE(237)] = 14387,
  [SMALL_STATE(238)] = 14406,
  [SMALL_STATE(239)] = 14425,
  [SMALL_STATE(240)] = 14444,
  [SMALL_STATE(241)] = 14463,
  [SMALL_STATE(242)] = 14482,
  [SMALL_STATE(243)] = 14501,
  [SMALL_STATE(244)] = 14520,
  [SMALL_STATE(245)] = 14539,
  [SMALL_STATE(246)] = 14558,
  [SMALL_STATE(247)] = 14577,
  [SMALL_STATE(248)] = 14596,
  [SMALL_STATE(249)] = 14615,
  [SMALL_STATE(250)] = 14634,
  [SMALL_STATE(251)] = 14653,
  [SMALL_STATE(252)] = 14672,
  [SMALL_STATE(253)] = 14691,
  [SMALL_STATE(254)] = 14710,
  [SMALL_STATE(255)] = 14735,
  [SMALL_STATE(256)] = 14754,
  [SMALL_STATE(257)] = 14773,
  [SMALL_STATE(258)] = 14798,
  [SMALL_STATE(259)] = 14817,
  [SMALL_STATE(260)] = 14836,
  [SMALL_STATE(261)] = 14855,
  [SMALL_STATE(262)] = 14874,
  [SMALL_STATE(263)] = 14899,
  [SMALL_STATE(264)] = 14918,
  [SMALL_STATE(265)] = 14937,
  [SMALL_STATE(266)] = 14956,
  [SMALL_STATE(267)] = 14978,
  [SMALL_STATE(268)] = 14998,
  [SMALL_STATE(269)] = 15020,
  [SMALL_STATE(270)] = 15040,
  [SMALL_STATE(271)] = 15062,
  [SMALL_STATE(272)] = 15073,
  [SMALL_STATE(273)] = 15092,
  [SMALL_STATE(274)] = 15111,
  [SMALL_STATE(275)] = 15124,
  [SMALL_STATE(276)] = 15140,
  [SMALL_STATE(277)] = 15150,
  [SMALL_STATE(278)] = 15166,
  [SMALL_STATE(279)] = 15182,
  [SMALL_STATE(280)] = 15198,
  [SMALL_STATE(281)] = 15214,
  [SMALL_STATE(282)] = 15230,
  [SMALL_STATE(283)] = 15246,
  [SMALL_STATE(284)] = 15260,
  [SMALL_STATE(285)] = 15270,
  [SMALL_STATE(286)] = 15286,
  [SMALL_STATE(287)] = 15299,
  [SMALL_STATE(288)] = 15310,
  [SMALL_STATE(289)] = 15323,
  [SMALL_STATE(290)] = 15336,
  [SMALL_STATE(291)] = 15349,
  [SMALL_STATE(292)] = 15360,
  [SMALL_STATE(293)] = 15373,
  [SMALL_STATE(294)] = 15386,
  [SMALL_STATE(295)] = 15399,
  [SMALL_STATE(296)] = 15412,
  [SMALL_STATE(297)] = 15425,
  [SMALL_STATE(298)] = 15438,
  [SMALL_STATE(299)] = 15451,
  [SMALL_STATE(300)] = 15464,
  [SMALL_STATE(301)] = 15475,
  [SMALL_STATE(302)] = 15488,
  [SMALL_STATE(303)] = 15501,
  [SMALL_STATE(304)] = 15514,
  [SMALL_STATE(305)] = 15525,
  [SMALL_STATE(306)] = 15538,
  [SMALL_STATE(307)] = 15549,
  [SMALL_STATE(308)] = 15562,
  [SMALL_STATE(309)] = 15575,
  [SMALL_STATE(310)] = 15588,
  [SMALL_STATE(311)] = 15598,
  [SMALL_STATE(312)] = 15608,
  [SMALL_STATE(313)] = 15618,
  [SMALL_STATE(314)] = 15626,
  [SMALL_STATE(315)] = 15636,
  [SMALL_STATE(316)] = 15646,
  [SMALL_STATE(317)] = 15654,
  [SMALL_STATE(318)] = 15664,
  [SMALL_STATE(319)] = 15672,
  [SMALL_STATE(320)] = 15682,
  [SMALL_STATE(321)] = 15692,
  [SMALL_STATE(322)] = 15702,
  [SMALL_STATE(323)] = 15710,
  [SMALL_STATE(324)] = 15720,
  [SMALL_STATE(325)] = 15728,
  [SMALL_STATE(326)] = 15738,
  [SMALL_STATE(327)] = 15748,
  [SMALL_STATE(328)] = 15758,
  [SMALL_STATE(329)] = 15766,
  [SMALL_STATE(330)] = 15774,
  [SMALL_STATE(331)] = 15784,
  [SMALL_STATE(332)] = 15794,
  [SMALL_STATE(333)] = 15804,
  [SMALL_STATE(334)] = 15812,
  [SMALL_STATE(335)] = 15820,
  [SMALL_STATE(336)] = 15828,
  [SMALL_STATE(337)] = 15838,
  [SMALL_STATE(338)] = 15846,
  [SMALL_STATE(339)] = 15854,
  [SMALL_STATE(340)] = 15864,
  [SMALL_STATE(341)] = 15874,
  [SMALL_STATE(342)] = 15882,
  [SMALL_STATE(343)] = 15892,
  [SMALL_STATE(344)] = 15902,
  [SMALL_STATE(345)] = 15910,
  [SMALL_STATE(346)] = 15920,
  [SMALL_STATE(347)] = 15928,
  [SMALL_STATE(348)] = 15938,
  [SMALL_STATE(349)] = 15948,
  [SMALL_STATE(350)] = 15955,
  [SMALL_STATE(351)] = 15962,
  [SMALL_STATE(352)] = 15969,
  [SMALL_STATE(353)] = 15976,
  [SMALL_STATE(354)] = 15983,
  [SMALL_STATE(355)] = 15990,
  [SMALL_STATE(356)] = 15997,
  [SMALL_STATE(357)] = 16004,
  [SMALL_STATE(358)] = 16011,
  [SMALL_STATE(359)] = 16018,
  [SMALL_STATE(360)] = 16025,
  [SMALL_STATE(361)] = 16032,
  [SMALL_STATE(362)] = 16039,
  [SMALL_STATE(363)] = 16046,
  [SMALL_STATE(364)] = 16053,
  [SMALL_STATE(365)] = 16060,
  [SMALL_STATE(366)] = 16067,
  [SMALL_STATE(367)] = 16074,
  [SMALL_STATE(368)] = 16081,
  [SMALL_STATE(369)] = 16088,
  [SMALL_STATE(370)] = 16095,
  [SMALL_STATE(371)] = 16102,
  [SMALL_STATE(372)] = 16109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_expression, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplication_expression, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_shift_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_shift_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_expression, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_multiline_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_multiline_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_multiline_repeat1, 2), SHIFT_REPEAT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_and_expression, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_and_expression, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_or_expression, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_or_expression, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_expression, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_expression, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_expression, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_expression, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(306),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(358),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(339),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(214),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(261),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_list_repeat2, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_init, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_align, 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_align, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_section, 4),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_section, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_label, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_convention, 4),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_convention, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 9),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 9),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 8),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 8),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payload, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(197),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(359),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(272),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(267),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(320),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(291),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(107),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(330),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(362),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(274),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_members_repeat1, 2),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_members_repeat1, 2), SHIFT_REPEAT(365),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_members_repeat1, 2), SHIFT_REPEAT(288),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declaration, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_declaration, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level_declaration, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_variable_declaration, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level_comptime, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_variable_declaration, 2),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_function_declaration, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 5),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_declaration, 5),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_variable_declaration, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 5),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 4),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_usingnamespace_declaration, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_function_declaration, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_variable_declaration, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_function_declaration, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_variable_declaration, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_function_declaration, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_variable_declaration, 1),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_usingnamespace_declaration, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_comptime, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_singleline_repeat1, 2), SHIFT_REPEAT(271),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_singleline_repeat1, 2), SHIFT_REPEAT(258),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_singleline_repeat1, 2),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_escape, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_ref, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_ref, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_list_repeat2, 2), SHIFT_REPEAT(90),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_ref, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_list_repeat1, 2), SHIFT_REPEAT(315),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_list_repeat1, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_list_repeat1, 2), SHIFT_REPEAT(134),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_list_repeat1, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 7),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 5),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 8),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 4),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 6),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 9),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 12),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 11),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 10),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_escape, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1049] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zig(void) {
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
