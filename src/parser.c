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
#define STATE_COUNT 374
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
  [52] = {.lex_state = 285},
  [53] = {.lex_state = 3},
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
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 285},
  [69] = {.lex_state = 285},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 285},
  [72] = {.lex_state = 285},
  [73] = {.lex_state = 285},
  [74] = {.lex_state = 285},
  [75] = {.lex_state = 285},
  [76] = {.lex_state = 285},
  [77] = {.lex_state = 285},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 285},
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
  [119] = {.lex_state = 285},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 7},
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
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 12},
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
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 13},
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
  [199] = {.lex_state = 285},
  [200] = {.lex_state = 285},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 285},
  [203] = {.lex_state = 285},
  [204] = {.lex_state = 285},
  [205] = {.lex_state = 285},
  [206] = {.lex_state = 285},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 285},
  [209] = {.lex_state = 285},
  [210] = {.lex_state = 285},
  [211] = {.lex_state = 285},
  [212] = {.lex_state = 285},
  [213] = {.lex_state = 285},
  [214] = {.lex_state = 285},
  [215] = {.lex_state = 285},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 285},
  [219] = {.lex_state = 285},
  [220] = {.lex_state = 285},
  [221] = {.lex_state = 285},
  [222] = {.lex_state = 285},
  [223] = {.lex_state = 285},
  [224] = {.lex_state = 285},
  [225] = {.lex_state = 285},
  [226] = {.lex_state = 285},
  [227] = {.lex_state = 285},
  [228] = {.lex_state = 285},
  [229] = {.lex_state = 285},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 285},
  [236] = {.lex_state = 285},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 13},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 285},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 13},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 285},
  [252] = {.lex_state = 13},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 285},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 285},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 285},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 285},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 285},
  [268] = {.lex_state = 285},
  [269] = {.lex_state = 285},
  [270] = {.lex_state = 285},
  [271] = {.lex_state = 285},
  [272] = {.lex_state = 285},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 285},
  [277] = {.lex_state = 285},
  [278] = {.lex_state = 285},
  [279] = {.lex_state = 285},
  [280] = {.lex_state = 285},
  [281] = {.lex_state = 285},
  [282] = {.lex_state = 285},
  [283] = {.lex_state = 285},
  [284] = {.lex_state = 285},
  [285] = {.lex_state = 285},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 285},
  [290] = {.lex_state = 285},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 285},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 285},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 285},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 285},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 285},
  [305] = {.lex_state = 285},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 285},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 285},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 285},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 285},
  [324] = {.lex_state = 285},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 285},
  [329] = {.lex_state = 285},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 285},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 285},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 285},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 285},
  [342] = {.lex_state = 285},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 285},
  [345] = {.lex_state = 285},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 285},
  [373] = {.lex_state = 0},
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
    [sym_root] = STATE(366),
    [sym_test_declaration] = STATE(187),
    [sym_top_level_comptime] = STATE(187),
    [sym_top_level_declaration] = STATE(187),
    [sym_top_function_declaration] = STATE(238),
    [sym_top_variable_declaration] = STATE(238),
    [sym_top_usingnamespace_declaration] = STATE(238),
    [sym_function_prototype] = STATE(291),
    [sym_variable_declaration] = STATE(239),
    [sym_extern_ref] = STATE(267),
    [aux_sym_root_repeat1] = STATE(190),
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
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
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
  [83] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
    ACTIONS(39), 19,
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
  [192] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_EQ,
      anon_sym_or,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 29,
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
  [297] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 2,
      anon_sym_EQ,
      anon_sym_or,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 30,
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
  [400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_string_literal_multiline_token1,
    STATE(6), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(79), 15,
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
    ACTIONS(77), 46,
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
  [475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(86), 7,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(84), 36,
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
  [568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(90), 14,
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
    ACTIONS(88), 42,
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
  [651] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ,
      anon_sym_or,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(92), 30,
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
  [754] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(98), 9,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(96), 36,
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
  [845] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(102), 11,
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
    ACTIONS(100), 39,
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
  [932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_string_literal_multiline_token1,
    STATE(6), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(106), 15,
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
    ACTIONS(104), 46,
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
  [1007] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(112), 7,
      anon_sym_EQ,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(110), 36,
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
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [3207] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_comptime,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(257), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(119), 1,
      sym_assignment_expression,
    STATE(176), 1,
      sym_variable_declaration,
    ACTIONS(222), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(254), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(42), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(230), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(233), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(219), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(248), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(83), 16,
      sym__expression,
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
  [3301] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_comptime,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(288), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(119), 1,
      sym_assignment_expression,
    STATE(176), 1,
      sym_variable_declaration,
    ACTIONS(264), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(42), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(272), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(83), 16,
      sym__expression,
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
  [3395] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_comptime,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(288), 1,
      sym_builtin_identifier,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(119), 1,
      sym_assignment_expression,
    STATE(176), 1,
      sym_variable_declaration,
    ACTIONS(264), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(42), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(272), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(83), 16,
      sym__expression,
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
  [3489] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_comptime,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(288), 1,
      sym_builtin_identifier,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(119), 1,
      sym_assignment_expression,
    STATE(176), 1,
      sym_variable_declaration,
    ACTIONS(264), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(44), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(272), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(83), 16,
      sym__expression,
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
  [3583] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_comptime,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(288), 1,
      sym_builtin_identifier,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(119), 1,
      sym_assignment_expression,
    STATE(176), 1,
      sym_variable_declaration,
    ACTIONS(264), 2,
      anon_sym_const,
      anon_sym_var,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    STATE(43), 2,
      sym_statement,
      aux_sym_block_repeat1,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(272), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(83), 16,
      sym__expression,
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
  [3677] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    STATE(303), 1,
      aux_sym_init_list_repeat2,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [3774] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(300), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [3867] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    STATE(302), 1,
      aux_sym_init_list_repeat2,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [3964] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4056] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4150] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4241] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(296), 1,
      sym_field_init,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(318), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [4322] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4413] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4504] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4595] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4686] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4777] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4868] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [4959] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5050] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5141] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5232] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5323] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5414] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5505] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(348), 1,
      anon_sym_COLON,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(354), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(352), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [5586] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5768] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    STATE(115), 1,
      sym_payload,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(362), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [5849] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [5940] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6031] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6122] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6213] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6304] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6395] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6486] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(382), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [6564] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(384), 1,
      sym_builtin_identifier,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(382), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [6642] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(390), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [6720] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(384), 1,
      sym_builtin_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(382), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [6798] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(384), 1,
      sym_builtin_identifier,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(382), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [6876] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_or,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(57), 1,
      anon_sym_orelse,
    ACTIONS(59), 1,
      anon_sym_catch,
    STATE(23), 1,
      sym_function_call_arguments,
    STATE(27), 1,
      sym_suffix_operator,
    ACTIONS(37), 2,
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(65), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_PLUS_PERCENT,
      anon_sym_DASH_PERCENT,
    ACTIONS(67), 3,
      anon_sym_STAR_STAR,
      anon_sym_STAR_PERCENT,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(51), 10,
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
  [6964] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(400), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(398), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(74), 17,
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
  [7039] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(404), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(402), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7114] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(408), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(406), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7189] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(412), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(410), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(4), 17,
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
  [7264] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(416), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(414), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7339] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(364), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(362), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7414] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(420), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(418), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7489] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(424), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(422), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7564] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(428), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(426), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7639] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(432), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(430), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(11), 17,
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
  [7714] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(436), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(434), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7789] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(440), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(438), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7864] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(444), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(442), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [7939] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(448), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(446), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8014] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(452), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(450), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8089] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(456), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(454), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8164] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(460), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(458), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8239] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(464), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(462), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8314] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(468), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(466), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8389] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(472), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(470), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8464] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(476), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(474), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(72), 17,
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
  [8539] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(480), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(478), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8614] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(484), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(482), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8689] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(488), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(486), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8764] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(492), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(490), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8839] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(496), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(494), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8914] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(500), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(498), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [8989] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(504), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(502), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9064] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(508), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(506), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9139] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(512), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(510), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      aux_sym_float_literal_token3,
      aux_sym_float_literal_token4,
    STATE(52), 17,
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
  [9214] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(516), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(514), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9289] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(520), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(518), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9364] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(524), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(522), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9439] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(528), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(526), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9514] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(532), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(530), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(538), 15,
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
    ACTIONS(536), 27,
      anon_sym_LPAREN,
      anon_sym_and,
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
      anon_sym_DOT_STAR,
      anon_sym_DOT_QMARK,
  [9642] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(542), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(540), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9717] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(384), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(382), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9792] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(546), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(544), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9867] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(550), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(548), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [9942] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_literal_multiline_token1,
    ACTIONS(554), 1,
      sym_builtin_identifier,
    STATE(12), 1,
      aux_sym_string_literal_multiline_repeat1,
    ACTIONS(274), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      aux_sym_integer_literal_token1,
      aux_sym_integer_literal_token2,
    ACTIONS(286), 2,
      aux_sym_integer_literal_token3,
      aux_sym_integer_literal_token4,
    ACTIONS(270), 3,
      anon_sym_DASH,
      anon_sym_try,
      anon_sym_await,
    ACTIONS(552), 3,
      sym_undefined_literal,
      sym_null_literal,
      sym_identifier,
    ACTIONS(262), 4,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_DASH_PERCENT,
      anon_sym_TILDE,
    ACTIONS(282), 4,
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
  [10017] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_BANG,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(562), 1,
      anon_sym_align,
    STATE(136), 1,
      sym_byte_align,
    STATE(144), 1,
      sym_link_section,
    STATE(157), 1,
      sym_call_convention,
    STATE(340), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10083] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(574), 1,
      anon_sym_anytype,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(287), 1,
      sym_parameter_declaration,
    STATE(347), 1,
      sym_basic_type,
    ACTIONS(568), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(564), 34,
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
  [10145] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(138), 1,
      sym_byte_align,
    STATE(143), 1,
      sym_link_section,
    STATE(153), 1,
      sym_call_convention,
    STATE(326), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10211] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(137), 1,
      sym_byte_align,
    STATE(142), 1,
      sym_link_section,
    STATE(151), 1,
      sym_call_convention,
    STATE(334), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10277] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(574), 1,
      anon_sym_anytype,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_parameter_declaration,
    STATE(347), 1,
      sym_basic_type,
    ACTIONS(568), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(564), 34,
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
  [10339] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(574), 1,
      anon_sym_anytype,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_parameter_declaration,
    STATE(347), 1,
      sym_basic_type,
    ACTIONS(568), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(564), 34,
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
  [10401] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(574), 1,
      anon_sym_anytype,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_parameter_declaration,
    STATE(347), 1,
      sym_basic_type,
    ACTIONS(568), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(564), 34,
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
  [10463] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(574), 1,
      anon_sym_anytype,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_parameter_declaration,
    STATE(347), 1,
      sym_basic_type,
    ACTIONS(568), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(564), 34,
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
  [10525] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(590), 1,
      anon_sym_BANG,
    STATE(139), 1,
      sym_byte_align,
    STATE(145), 1,
      sym_link_section,
    STATE(155), 1,
      sym_call_convention,
    STATE(332), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10591] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(592), 1,
      anon_sym_BANG,
    STATE(140), 1,
      sym_byte_align,
    STATE(146), 1,
      sym_link_section,
    STATE(150), 1,
      sym_call_convention,
    STATE(319), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10657] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(574), 1,
      anon_sym_anytype,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(317), 1,
      sym_parameter_declaration,
    STATE(347), 1,
      sym_basic_type,
    ACTIONS(568), 2,
      anon_sym_comptime,
      anon_sym_noalias,
    ACTIONS(564), 34,
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
  [10716] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(142), 1,
      sym_link_section,
    STATE(151), 1,
      sym_call_convention,
    STATE(334), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(594), 1,
      anon_sym_BANG,
    STATE(148), 1,
      sym_link_section,
    STATE(152), 1,
      sym_call_convention,
    STATE(331), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
    ACTIONS(556), 1,
      anon_sym_BANG,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    STATE(144), 1,
      sym_link_section,
    STATE(157), 1,
      sym_call_convention,
    STATE(340), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(592), 1,
      anon_sym_BANG,
    STATE(146), 1,
      sym_link_section,
    STATE(150), 1,
      sym_call_convention,
    STATE(319), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [10956] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(143), 1,
      sym_link_section,
    STATE(153), 1,
      sym_call_convention,
    STATE(326), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11016] = 3,
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
    ACTIONS(596), 27,
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
  [11064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(594), 1,
      anon_sym_BANG,
    STATE(152), 1,
      sym_call_convention,
    STATE(331), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_BANG,
    ACTIONS(560), 1,
      anon_sym_callconv,
    STATE(157), 1,
      sym_call_convention,
    STATE(340), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11172] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(151), 1,
      sym_call_convention,
    STATE(334), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(592), 1,
      anon_sym_BANG,
    STATE(150), 1,
      sym_call_convention,
    STATE(319), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(153), 1,
      sym_call_convention,
    STATE(326), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 13,
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
    ACTIONS(600), 25,
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
  [11380] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_callconv,
    ACTIONS(604), 1,
      anon_sym_BANG,
    STATE(159), 1,
      sym_call_convention,
    STATE(315), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_anytype,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(336), 1,
      sym_basic_type,
    ACTIONS(564), 34,
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
  [11483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_BANG,
    STATE(326), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_BANG,
    STATE(331), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_BANG,
    STATE(315), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_BANG,
    STATE(340), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_anytype,
    STATE(311), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_BANG,
    STATE(319), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_BANG,
    STATE(334), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_anytype,
    STATE(313), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_BANG,
    STATE(338), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [11963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(338), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 13,
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
    ACTIONS(618), 22,
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
  [12051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(279), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(319), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(331), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(315), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(318), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(270), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(193), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(271), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(334), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(340), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(326), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(278), 1,
      sym_basic_type,
    ACTIONS(564), 13,
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
    ACTIONS(566), 21,
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
  [12636] = 3,
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
  [12673] = 3,
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
  [12710] = 3,
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
  [12747] = 3,
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
  [12784] = 3,
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
  [12821] = 3,
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
  [12858] = 3,
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
  [12895] = 3,
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
  [12932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 13,
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
    ACTIONS(656), 16,
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
  [12969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 10,
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
    ACTIONS(658), 15,
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
  [13002] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_pub,
    ACTIONS(664), 1,
      anon_sym_test,
    ACTIONS(666), 1,
      anon_sym_comptime,
    ACTIONS(668), 1,
      anon_sym_export,
    ACTIONS(672), 1,
      anon_sym_threadlocal,
    ACTIONS(674), 1,
      anon_sym_usingnamespace,
    ACTIONS(676), 1,
      anon_sym_fn,
    ACTIONS(680), 1,
      anon_sym_extern,
    ACTIONS(682), 1,
      sym_identifier,
    STATE(201), 1,
      aux_sym_container_members_repeat1,
    STATE(204), 1,
      sym_container_field,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(670), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(678), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(236), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13066] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_test,
    ACTIONS(666), 1,
      anon_sym_comptime,
    ACTIONS(668), 1,
      anon_sym_export,
    ACTIONS(672), 1,
      anon_sym_threadlocal,
    ACTIONS(674), 1,
      anon_sym_usingnamespace,
    ACTIONS(676), 1,
      anon_sym_fn,
    ACTIONS(680), 1,
      anon_sym_extern,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(684), 1,
      anon_sym_pub,
    STATE(185), 1,
      aux_sym_container_members_repeat1,
    STATE(205), 1,
      sym_container_field,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(670), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(678), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(251), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13130] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_test,
    ACTIONS(666), 1,
      anon_sym_comptime,
    ACTIONS(668), 1,
      anon_sym_export,
    ACTIONS(672), 1,
      anon_sym_threadlocal,
    ACTIONS(674), 1,
      anon_sym_usingnamespace,
    ACTIONS(676), 1,
      anon_sym_fn,
    ACTIONS(680), 1,
      anon_sym_extern,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(686), 1,
      anon_sym_pub,
    STATE(188), 1,
      aux_sym_container_members_repeat1,
    STATE(206), 1,
      sym_container_field,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(670), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(678), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(254), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13194] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_test,
    ACTIONS(666), 1,
      anon_sym_comptime,
    ACTIONS(668), 1,
      anon_sym_export,
    ACTIONS(672), 1,
      anon_sym_threadlocal,
    ACTIONS(674), 1,
      anon_sym_usingnamespace,
    ACTIONS(676), 1,
      anon_sym_fn,
    ACTIONS(680), 1,
      anon_sym_extern,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(684), 1,
      anon_sym_pub,
    STATE(201), 1,
      aux_sym_container_members_repeat1,
    STATE(205), 1,
      sym_container_field,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(670), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(678), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
    STATE(251), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
  [13258] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 1,
      anon_sym_pub,
    ACTIONS(693), 1,
      anon_sym_test,
    ACTIONS(696), 1,
      anon_sym_comptime,
    ACTIONS(699), 1,
      anon_sym_export,
    ACTIONS(705), 1,
      anon_sym_threadlocal,
    ACTIONS(708), 1,
      anon_sym_usingnamespace,
    ACTIONS(711), 1,
      anon_sym_fn,
    ACTIONS(717), 1,
      anon_sym_extern,
    STATE(189), 1,
      aux_sym_root_repeat1,
    STATE(239), 1,
      sym_variable_declaration,
    STATE(267), 1,
      sym_extern_ref,
    STATE(291), 1,
      sym_function_prototype,
    ACTIONS(702), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(714), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(187), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
    STATE(238), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13319] = 18,
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
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      aux_sym_root_repeat1,
    STATE(239), 1,
      sym_variable_declaration,
    STATE(267), 1,
      sym_extern_ref,
    STATE(291), 1,
      sym_function_prototype,
    ACTIONS(15), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(187), 3,
      sym_test_declaration,
      sym_top_level_comptime,
      sym_top_level_declaration,
    STATE(238), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 20,
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
  [13406] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(726), 1,
      anon_sym_align,
    STATE(202), 1,
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
  [13435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_align,
    ACTIONS(728), 1,
      anon_sym_EQ,
    STATE(200), 1,
      sym_byte_align,
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
  [13464] = 13,
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
    STATE(186), 1,
      sym_top_level_declaration,
    STATE(239), 1,
      sym_variable_declaration,
    STATE(267), 1,
      sym_extern_ref,
    STATE(291), 1,
      sym_function_prototype,
    ACTIONS(15), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(238), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13508] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(730), 1,
      anon_sym_export,
    ACTIONS(734), 1,
      anon_sym_threadlocal,
    ACTIONS(736), 1,
      anon_sym_usingnamespace,
    STATE(209), 1,
      sym_top_level_declaration,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(732), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(738), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(744), 1,
      anon_sym_EQ,
    ACTIONS(740), 14,
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
  [13578] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(730), 1,
      anon_sym_export,
    ACTIONS(734), 1,
      anon_sym_threadlocal,
    ACTIONS(736), 1,
      anon_sym_usingnamespace,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(236), 1,
      sym_top_level_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(732), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(738), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COLON,
    ACTIONS(750), 1,
      anon_sym_EQ,
    ACTIONS(746), 14,
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
  [13648] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_extern,
    ACTIONS(730), 1,
      anon_sym_export,
    ACTIONS(734), 1,
      anon_sym_threadlocal,
    ACTIONS(736), 1,
      anon_sym_usingnamespace,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(251), 1,
      sym_top_level_declaration,
    STATE(269), 1,
      sym_extern_ref,
    STATE(299), 1,
      sym_function_prototype,
    ACTIONS(732), 2,
      anon_sym_inline,
      anon_sym_noinline,
    ACTIONS(738), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(208), 3,
      sym_top_function_declaration,
      sym_top_variable_declaration,
      sym_top_usingnamespace_declaration,
  [13692] = 3,
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
  [13715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_comptime,
    ACTIONS(757), 1,
      sym_identifier,
    STATE(201), 1,
      aux_sym_container_members_repeat1,
    STATE(350), 1,
      sym_container_field,
    ACTIONS(752), 11,
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
  [13744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_EQ,
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
  [13767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 15,
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
  [13788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
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
  [13810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(766), 13,
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
  [13832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(688), 13,
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
  [13854] = 2,
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
  [13873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 13,
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
  [13892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 13,
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
  [13911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 13,
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
  [13930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 13,
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
  [13949] = 2,
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
  [13968] = 2,
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
  [13987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 13,
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
  [14006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 13,
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
  [14025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 13,
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
  [14044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 13,
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
  [14063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 13,
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
  [14082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 13,
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
  [14101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 13,
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
  [14120] = 2,
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
  [14139] = 2,
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
  [14158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 13,
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
  [14177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 13,
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
  [14196] = 2,
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
  [14215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 13,
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
  [14234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 13,
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
  [14253] = 2,
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
  [14272] = 2,
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
  [14291] = 4,
    ACTIONS(804), 1,
      sym_comment,
    STATE(354), 1,
      sym_character_escape,
    ACTIONS(802), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
    ACTIONS(800), 9,
      aux_sym_character_literal_token1,
      aux_sym_mb_utf8_literal_token1,
      aux_sym_mb_utf8_literal_token2,
      aux_sym_mb_utf8_literal_token3,
      aux_sym_mb_utf8_literal_token4,
      aux_sym_mb_utf8_literal_token5,
      aux_sym_mb_utf8_literal_token6,
      aux_sym_mb_utf8_literal_token7,
      aux_sym_mb_utf8_literal_token8,
  [14314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 13,
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
  [14333] = 2,
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
  [14352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 13,
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
  [14371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 13,
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
  [14390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 13,
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
  [14409] = 2,
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
  [14428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 13,
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
  [14447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 13,
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
  [14466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 13,
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
  [14485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 13,
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
  [14504] = 2,
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
  [14523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 13,
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
  [14542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 13,
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
  [14561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 13,
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
  [14580] = 2,
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
  [14599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 13,
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
  [14618] = 2,
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
  [14637] = 2,
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
  [14656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 13,
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
  [14675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 13,
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
  [14694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 13,
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
  [14713] = 2,
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
  [14732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 13,
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
  [14751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 13,
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
  [14770] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_character_token1,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    STATE(265), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14789] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_character_token1,
    ACTIONS(838), 1,
      anon_sym_DQUOTE,
    STATE(265), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14808] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_COLON,
    ACTIONS(844), 1,
      anon_sym_EQ,
    STATE(282), 1,
      sym_byte_align,
    STATE(323), 1,
      sym_link_section,
  [14833] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(846), 1,
      aux_sym_string_character_token1,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    STATE(256), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(854), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym_byte_align,
    STATE(344), 1,
      sym_link_section,
  [14877] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym_string_character_token1,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
    STATE(255), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14896] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_character_token1,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    STATE(265), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14915] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_byte_align,
    STATE(337), 1,
      sym_link_section,
  [14940] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_character_token1,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    STATE(265), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14959] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_string_character_token1,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    STATE(263), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14978] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_string_character_token1,
    ACTIONS(880), 1,
      anon_sym_DQUOTE,
    STATE(265), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(874), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [14997] = 5,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym_string_character_token1,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    STATE(261), 2,
      sym_character_escape,
      aux_sym_string_literal_singleline_repeat1,
    ACTIONS(832), 3,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
  [15016] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(886), 1,
      anon_sym_threadlocal,
    STATE(246), 1,
      sym_variable_declaration,
    STATE(293), 1,
      sym_function_prototype,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
  [15036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(888), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_byte_align,
    STATE(342), 1,
      sym_link_section,
  [15058] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(890), 1,
      anon_sym_threadlocal,
    STATE(226), 1,
      sym_variable_declaration,
    STATE(308), 1,
      sym_function_prototype,
    ACTIONS(738), 2,
      anon_sym_const,
      anon_sym_var,
  [15078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(892), 1,
      anon_sym_EQ,
    STATE(284), 1,
      sym_byte_align,
    STATE(329), 1,
      sym_link_section,
  [15100] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(894), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_byte_align,
    STATE(316), 1,
      sym_link_section,
  [15122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(896), 4,
      anon_sym_threadlocal,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
  [15135] = 2,
    ACTIONS(804), 1,
      sym_comment,
    ACTIONS(900), 5,
      aux_sym_character_escape_token1,
      aux_sym_character_escape_token2,
      aux_sym_character_escape_token3,
      aux_sym_string_character_token1,
      anon_sym_DQUOTE,
  [15146] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(904), 1,
      sym_identifier,
    STATE(240), 1,
      sym_block_expression,
    STATE(243), 1,
      sym_block,
    STATE(335), 1,
      sym_block_label,
  [15165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(908), 1,
      sym_identifier,
    STATE(227), 1,
      sym_block,
    STATE(228), 1,
      sym_block_expression,
    STATE(321), 1,
      sym_block_label,
  [15184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_EQ,
    STATE(312), 1,
      sym_link_section,
  [15200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 4,
      anon_sym_threadlocal,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
  [15210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(728), 1,
      anon_sym_EQ,
    STATE(200), 1,
      sym_byte_align,
  [15226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_align,
    ACTIONS(724), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_byte_align,
  [15242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(916), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_link_section,
  [15258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(341), 1,
      sym_link_section,
  [15274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      anon_sym_EQ,
    STATE(328), 1,
      sym_link_section,
  [15290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 4,
      anon_sym_threadlocal,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_var,
  [15300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(928), 1,
      anon_sym_EQ,
    STATE(333), 1,
      sym_link_section,
  [15316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_linksection,
    ACTIONS(930), 1,
      anon_sym_EQ,
    STATE(339), 1,
      sym_link_section,
  [15332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_init_list_repeat2,
    ACTIONS(300), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_EQ,
    ACTIONS(939), 1,
      anon_sym_COLON,
  [15385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(246), 1,
      sym_variable_declaration,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
  [15396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(941), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      sym_block,
  [15409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(248), 1,
      sym_variable_declaration,
    ACTIONS(23), 2,
      anon_sym_const,
      anon_sym_var,
  [15420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(943), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      sym_block,
  [15433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      sym_variable_declaration,
    ACTIONS(945), 2,
      anon_sym_const,
      anon_sym_var,
  [15444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    ACTIONS(949), 1,
      sym_identifier,
    STATE(24), 1,
      sym_init_list,
  [15457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_init_list_repeat1,
  [15470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(226), 1,
      sym_variable_declaration,
    ACTIONS(738), 2,
      anon_sym_const,
      anon_sym_var,
  [15494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      sym_block,
  [15507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      aux_sym_init_list_repeat1,
  [15520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(960), 1,
      anon_sym_DOT,
    STATE(314), 1,
      sym_field_init,
  [15533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_init_list_repeat2,
  [15546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_init_list_repeat2,
  [15559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_EQ,
    ACTIONS(966), 1,
      anon_sym_COLON,
  [15572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(219), 1,
      sym_variable_declaration,
    ACTIONS(738), 2,
      anon_sym_const,
      anon_sym_var,
  [15583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_parameter_declaration_list_repeat1,
  [15609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      sym_block,
  [15622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_init_list_repeat1,
  [15635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(960), 1,
      anon_sym_DOT,
    STATE(314), 1,
      sym_field_init,
  [15648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(894), 1,
      anon_sym_EQ,
  [15666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(930), 1,
      anon_sym_EQ,
  [15700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    STATE(293), 1,
      sym_function_prototype,
  [15734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_block,
  [15744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_block,
  [15754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      anon_sym_EQ,
  [15764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_DOT,
    STATE(314), 1,
      sym_field_init,
  [15774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_block,
  [15784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      sym_identifier,
  [15802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(892), 1,
      anon_sym_EQ,
  [15812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(928), 1,
      anon_sym_EQ,
  [15822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_init_list,
  [15832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(999), 1,
      anon_sym_EQ,
  [15858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    STATE(249), 1,
      sym_block,
  [15876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    ACTIONS(920), 1,
      anon_sym_EQ,
  [15894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(1007), 1,
      anon_sym_EQ,
  [15912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(888), 1,
      anon_sym_EQ,
  [15930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_EQ,
  [15940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_block,
  [15950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_EQ,
  [15960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    ACTIONS(1011), 1,
      anon_sym_EQ,
  [15970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_fn,
    STATE(308), 1,
      sym_function_prototype,
  [15980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1017), 1,
      anon_sym_RBRACK,
  [15998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      sym_block,
  [16008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
  [16015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym_identifier,
  [16022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_COLON,
  [16029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym_identifier,
  [16036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_SQUOTE,
  [16043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
  [16050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_SQUOTE,
  [16057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
  [16064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [16071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
  [16078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym_identifier,
  [16085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym_identifier,
  [16092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_identifier,
  [16099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_DQUOTE,
  [16106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COLON,
  [16113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_COLON,
  [16120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
  [16127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym_identifier,
  [16134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
  [16141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
  [16148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
  [16155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_identifier,
  [16162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_EQ,
  [16169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 297,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 475,
  [SMALL_STATE(8)] = 568,
  [SMALL_STATE(9)] = 651,
  [SMALL_STATE(10)] = 754,
  [SMALL_STATE(11)] = 845,
  [SMALL_STATE(12)] = 932,
  [SMALL_STATE(13)] = 1007,
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
  [SMALL_STATE(43)] = 3301,
  [SMALL_STATE(44)] = 3395,
  [SMALL_STATE(45)] = 3489,
  [SMALL_STATE(46)] = 3583,
  [SMALL_STATE(47)] = 3677,
  [SMALL_STATE(48)] = 3774,
  [SMALL_STATE(49)] = 3867,
  [SMALL_STATE(50)] = 3964,
  [SMALL_STATE(51)] = 4056,
  [SMALL_STATE(52)] = 4150,
  [SMALL_STATE(53)] = 4241,
  [SMALL_STATE(54)] = 4322,
  [SMALL_STATE(55)] = 4413,
  [SMALL_STATE(56)] = 4504,
  [SMALL_STATE(57)] = 4595,
  [SMALL_STATE(58)] = 4686,
  [SMALL_STATE(59)] = 4777,
  [SMALL_STATE(60)] = 4868,
  [SMALL_STATE(61)] = 4959,
  [SMALL_STATE(62)] = 5050,
  [SMALL_STATE(63)] = 5141,
  [SMALL_STATE(64)] = 5232,
  [SMALL_STATE(65)] = 5323,
  [SMALL_STATE(66)] = 5414,
  [SMALL_STATE(67)] = 5505,
  [SMALL_STATE(68)] = 5586,
  [SMALL_STATE(69)] = 5677,
  [SMALL_STATE(70)] = 5768,
  [SMALL_STATE(71)] = 5849,
  [SMALL_STATE(72)] = 5940,
  [SMALL_STATE(73)] = 6031,
  [SMALL_STATE(74)] = 6122,
  [SMALL_STATE(75)] = 6213,
  [SMALL_STATE(76)] = 6304,
  [SMALL_STATE(77)] = 6395,
  [SMALL_STATE(78)] = 6486,
  [SMALL_STATE(79)] = 6564,
  [SMALL_STATE(80)] = 6642,
  [SMALL_STATE(81)] = 6720,
  [SMALL_STATE(82)] = 6798,
  [SMALL_STATE(83)] = 6876,
  [SMALL_STATE(84)] = 6964,
  [SMALL_STATE(85)] = 7039,
  [SMALL_STATE(86)] = 7114,
  [SMALL_STATE(87)] = 7189,
  [SMALL_STATE(88)] = 7264,
  [SMALL_STATE(89)] = 7339,
  [SMALL_STATE(90)] = 7414,
  [SMALL_STATE(91)] = 7489,
  [SMALL_STATE(92)] = 7564,
  [SMALL_STATE(93)] = 7639,
  [SMALL_STATE(94)] = 7714,
  [SMALL_STATE(95)] = 7789,
  [SMALL_STATE(96)] = 7864,
  [SMALL_STATE(97)] = 7939,
  [SMALL_STATE(98)] = 8014,
  [SMALL_STATE(99)] = 8089,
  [SMALL_STATE(100)] = 8164,
  [SMALL_STATE(101)] = 8239,
  [SMALL_STATE(102)] = 8314,
  [SMALL_STATE(103)] = 8389,
  [SMALL_STATE(104)] = 8464,
  [SMALL_STATE(105)] = 8539,
  [SMALL_STATE(106)] = 8614,
  [SMALL_STATE(107)] = 8689,
  [SMALL_STATE(108)] = 8764,
  [SMALL_STATE(109)] = 8839,
  [SMALL_STATE(110)] = 8914,
  [SMALL_STATE(111)] = 8989,
  [SMALL_STATE(112)] = 9064,
  [SMALL_STATE(113)] = 9139,
  [SMALL_STATE(114)] = 9214,
  [SMALL_STATE(115)] = 9289,
  [SMALL_STATE(116)] = 9364,
  [SMALL_STATE(117)] = 9439,
  [SMALL_STATE(118)] = 9514,
  [SMALL_STATE(119)] = 9589,
  [SMALL_STATE(120)] = 9642,
  [SMALL_STATE(121)] = 9717,
  [SMALL_STATE(122)] = 9792,
  [SMALL_STATE(123)] = 9867,
  [SMALL_STATE(124)] = 9942,
  [SMALL_STATE(125)] = 10017,
  [SMALL_STATE(126)] = 10083,
  [SMALL_STATE(127)] = 10145,
  [SMALL_STATE(128)] = 10211,
  [SMALL_STATE(129)] = 10277,
  [SMALL_STATE(130)] = 10339,
  [SMALL_STATE(131)] = 10401,
  [SMALL_STATE(132)] = 10463,
  [SMALL_STATE(133)] = 10525,
  [SMALL_STATE(134)] = 10591,
  [SMALL_STATE(135)] = 10657,
  [SMALL_STATE(136)] = 10716,
  [SMALL_STATE(137)] = 10776,
  [SMALL_STATE(138)] = 10836,
  [SMALL_STATE(139)] = 10896,
  [SMALL_STATE(140)] = 10956,
  [SMALL_STATE(141)] = 11016,
  [SMALL_STATE(142)] = 11064,
  [SMALL_STATE(143)] = 11118,
  [SMALL_STATE(144)] = 11172,
  [SMALL_STATE(145)] = 11226,
  [SMALL_STATE(146)] = 11280,
  [SMALL_STATE(147)] = 11334,
  [SMALL_STATE(148)] = 11380,
  [SMALL_STATE(149)] = 11434,
  [SMALL_STATE(150)] = 11483,
  [SMALL_STATE(151)] = 11531,
  [SMALL_STATE(152)] = 11579,
  [SMALL_STATE(153)] = 11627,
  [SMALL_STATE(154)] = 11675,
  [SMALL_STATE(155)] = 11723,
  [SMALL_STATE(156)] = 11771,
  [SMALL_STATE(157)] = 11819,
  [SMALL_STATE(158)] = 11867,
  [SMALL_STATE(159)] = 11915,
  [SMALL_STATE(160)] = 11963,
  [SMALL_STATE(161)] = 12008,
  [SMALL_STATE(162)] = 12051,
  [SMALL_STATE(163)] = 12096,
  [SMALL_STATE(164)] = 12141,
  [SMALL_STATE(165)] = 12186,
  [SMALL_STATE(166)] = 12231,
  [SMALL_STATE(167)] = 12276,
  [SMALL_STATE(168)] = 12321,
  [SMALL_STATE(169)] = 12366,
  [SMALL_STATE(170)] = 12411,
  [SMALL_STATE(171)] = 12456,
  [SMALL_STATE(172)] = 12501,
  [SMALL_STATE(173)] = 12546,
  [SMALL_STATE(174)] = 12591,
  [SMALL_STATE(175)] = 12636,
  [SMALL_STATE(176)] = 12673,
  [SMALL_STATE(177)] = 12710,
  [SMALL_STATE(178)] = 12747,
  [SMALL_STATE(179)] = 12784,
  [SMALL_STATE(180)] = 12821,
  [SMALL_STATE(181)] = 12858,
  [SMALL_STATE(182)] = 12895,
  [SMALL_STATE(183)] = 12932,
  [SMALL_STATE(184)] = 12969,
  [SMALL_STATE(185)] = 13002,
  [SMALL_STATE(186)] = 13066,
  [SMALL_STATE(187)] = 13130,
  [SMALL_STATE(188)] = 13194,
  [SMALL_STATE(189)] = 13258,
  [SMALL_STATE(190)] = 13319,
  [SMALL_STATE(191)] = 13380,
  [SMALL_STATE(192)] = 13406,
  [SMALL_STATE(193)] = 13435,
  [SMALL_STATE(194)] = 13464,
  [SMALL_STATE(195)] = 13508,
  [SMALL_STATE(196)] = 13552,
  [SMALL_STATE(197)] = 13578,
  [SMALL_STATE(198)] = 13622,
  [SMALL_STATE(199)] = 13648,
  [SMALL_STATE(200)] = 13692,
  [SMALL_STATE(201)] = 13715,
  [SMALL_STATE(202)] = 13744,
  [SMALL_STATE(203)] = 13767,
  [SMALL_STATE(204)] = 13788,
  [SMALL_STATE(205)] = 13810,
  [SMALL_STATE(206)] = 13832,
  [SMALL_STATE(207)] = 13854,
  [SMALL_STATE(208)] = 13873,
  [SMALL_STATE(209)] = 13892,
  [SMALL_STATE(210)] = 13911,
  [SMALL_STATE(211)] = 13930,
  [SMALL_STATE(212)] = 13949,
  [SMALL_STATE(213)] = 13968,
  [SMALL_STATE(214)] = 13987,
  [SMALL_STATE(215)] = 14006,
  [SMALL_STATE(216)] = 14025,
  [SMALL_STATE(217)] = 14044,
  [SMALL_STATE(218)] = 14063,
  [SMALL_STATE(219)] = 14082,
  [SMALL_STATE(220)] = 14101,
  [SMALL_STATE(221)] = 14120,
  [SMALL_STATE(222)] = 14139,
  [SMALL_STATE(223)] = 14158,
  [SMALL_STATE(224)] = 14177,
  [SMALL_STATE(225)] = 14196,
  [SMALL_STATE(226)] = 14215,
  [SMALL_STATE(227)] = 14234,
  [SMALL_STATE(228)] = 14253,
  [SMALL_STATE(229)] = 14272,
  [SMALL_STATE(230)] = 14291,
  [SMALL_STATE(231)] = 14314,
  [SMALL_STATE(232)] = 14333,
  [SMALL_STATE(233)] = 14352,
  [SMALL_STATE(234)] = 14371,
  [SMALL_STATE(235)] = 14390,
  [SMALL_STATE(236)] = 14409,
  [SMALL_STATE(237)] = 14428,
  [SMALL_STATE(238)] = 14447,
  [SMALL_STATE(239)] = 14466,
  [SMALL_STATE(240)] = 14485,
  [SMALL_STATE(241)] = 14504,
  [SMALL_STATE(242)] = 14523,
  [SMALL_STATE(243)] = 14542,
  [SMALL_STATE(244)] = 14561,
  [SMALL_STATE(245)] = 14580,
  [SMALL_STATE(246)] = 14599,
  [SMALL_STATE(247)] = 14618,
  [SMALL_STATE(248)] = 14637,
  [SMALL_STATE(249)] = 14656,
  [SMALL_STATE(250)] = 14675,
  [SMALL_STATE(251)] = 14694,
  [SMALL_STATE(252)] = 14713,
  [SMALL_STATE(253)] = 14732,
  [SMALL_STATE(254)] = 14751,
  [SMALL_STATE(255)] = 14770,
  [SMALL_STATE(256)] = 14789,
  [SMALL_STATE(257)] = 14808,
  [SMALL_STATE(258)] = 14833,
  [SMALL_STATE(259)] = 14852,
  [SMALL_STATE(260)] = 14877,
  [SMALL_STATE(261)] = 14896,
  [SMALL_STATE(262)] = 14915,
  [SMALL_STATE(263)] = 14940,
  [SMALL_STATE(264)] = 14959,
  [SMALL_STATE(265)] = 14978,
  [SMALL_STATE(266)] = 14997,
  [SMALL_STATE(267)] = 15016,
  [SMALL_STATE(268)] = 15036,
  [SMALL_STATE(269)] = 15058,
  [SMALL_STATE(270)] = 15078,
  [SMALL_STATE(271)] = 15100,
  [SMALL_STATE(272)] = 15122,
  [SMALL_STATE(273)] = 15135,
  [SMALL_STATE(274)] = 15146,
  [SMALL_STATE(275)] = 15165,
  [SMALL_STATE(276)] = 15184,
  [SMALL_STATE(277)] = 15200,
  [SMALL_STATE(278)] = 15210,
  [SMALL_STATE(279)] = 15226,
  [SMALL_STATE(280)] = 15242,
  [SMALL_STATE(281)] = 15258,
  [SMALL_STATE(282)] = 15274,
  [SMALL_STATE(283)] = 15290,
  [SMALL_STATE(284)] = 15300,
  [SMALL_STATE(285)] = 15316,
  [SMALL_STATE(286)] = 15332,
  [SMALL_STATE(287)] = 15346,
  [SMALL_STATE(288)] = 15359,
  [SMALL_STATE(289)] = 15372,
  [SMALL_STATE(290)] = 15385,
  [SMALL_STATE(291)] = 15396,
  [SMALL_STATE(292)] = 15409,
  [SMALL_STATE(293)] = 15420,
  [SMALL_STATE(294)] = 15433,
  [SMALL_STATE(295)] = 15444,
  [SMALL_STATE(296)] = 15457,
  [SMALL_STATE(297)] = 15470,
  [SMALL_STATE(298)] = 15483,
  [SMALL_STATE(299)] = 15494,
  [SMALL_STATE(300)] = 15507,
  [SMALL_STATE(301)] = 15520,
  [SMALL_STATE(302)] = 15533,
  [SMALL_STATE(303)] = 15546,
  [SMALL_STATE(304)] = 15559,
  [SMALL_STATE(305)] = 15572,
  [SMALL_STATE(306)] = 15583,
  [SMALL_STATE(307)] = 15596,
  [SMALL_STATE(308)] = 15609,
  [SMALL_STATE(309)] = 15622,
  [SMALL_STATE(310)] = 15635,
  [SMALL_STATE(311)] = 15648,
  [SMALL_STATE(312)] = 15656,
  [SMALL_STATE(313)] = 15666,
  [SMALL_STATE(314)] = 15674,
  [SMALL_STATE(315)] = 15682,
  [SMALL_STATE(316)] = 15690,
  [SMALL_STATE(317)] = 15700,
  [SMALL_STATE(318)] = 15708,
  [SMALL_STATE(319)] = 15716,
  [SMALL_STATE(320)] = 15724,
  [SMALL_STATE(321)] = 15734,
  [SMALL_STATE(322)] = 15744,
  [SMALL_STATE(323)] = 15754,
  [SMALL_STATE(324)] = 15764,
  [SMALL_STATE(325)] = 15774,
  [SMALL_STATE(326)] = 15784,
  [SMALL_STATE(327)] = 15792,
  [SMALL_STATE(328)] = 15802,
  [SMALL_STATE(329)] = 15812,
  [SMALL_STATE(330)] = 15822,
  [SMALL_STATE(331)] = 15832,
  [SMALL_STATE(332)] = 15840,
  [SMALL_STATE(333)] = 15848,
  [SMALL_STATE(334)] = 15858,
  [SMALL_STATE(335)] = 15866,
  [SMALL_STATE(336)] = 15876,
  [SMALL_STATE(337)] = 15884,
  [SMALL_STATE(338)] = 15894,
  [SMALL_STATE(339)] = 15902,
  [SMALL_STATE(340)] = 15912,
  [SMALL_STATE(341)] = 15920,
  [SMALL_STATE(342)] = 15930,
  [SMALL_STATE(343)] = 15940,
  [SMALL_STATE(344)] = 15950,
  [SMALL_STATE(345)] = 15960,
  [SMALL_STATE(346)] = 15970,
  [SMALL_STATE(347)] = 15980,
  [SMALL_STATE(348)] = 15988,
  [SMALL_STATE(349)] = 15998,
  [SMALL_STATE(350)] = 16008,
  [SMALL_STATE(351)] = 16015,
  [SMALL_STATE(352)] = 16022,
  [SMALL_STATE(353)] = 16029,
  [SMALL_STATE(354)] = 16036,
  [SMALL_STATE(355)] = 16043,
  [SMALL_STATE(356)] = 16050,
  [SMALL_STATE(357)] = 16057,
  [SMALL_STATE(358)] = 16064,
  [SMALL_STATE(359)] = 16071,
  [SMALL_STATE(360)] = 16078,
  [SMALL_STATE(361)] = 16085,
  [SMALL_STATE(362)] = 16092,
  [SMALL_STATE(363)] = 16099,
  [SMALL_STATE(364)] = 16106,
  [SMALL_STATE(365)] = 16113,
  [SMALL_STATE(366)] = 16120,
  [SMALL_STATE(367)] = 16127,
  [SMALL_STATE(368)] = 16134,
  [SMALL_STATE(369)] = 16141,
  [SMALL_STATE(370)] = 16148,
  [SMALL_STATE(371)] = 16155,
  [SMALL_STATE(372)] = 16162,
  [SMALL_STATE(373)] = 16169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_or_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_or_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_and_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_and_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_multiline_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_multiline_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_multiline_repeat1, 2), SHIFT_REPEAT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_expression, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_expression, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_expression, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplication_expression, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_shift_expression, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_shift_expression, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_expression, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_expression, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_expression, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_expression, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_expression, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_expression, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_expression, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_expression, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_arguments, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_arguments, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 6),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_operator, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_operator, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_list, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_list, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 7),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(294),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(98),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(361),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(330),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(98),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(230),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_list_repeat2, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_init, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_align, 4),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_align, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_section, 4),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_section, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_label, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_convention, 4),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_convention, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 8),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 8),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 9),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 9),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payload, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(194),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(363),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(274),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(267),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(320),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(290),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(100),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(327),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(367),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(272),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_container_members_repeat1, 2),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_members_repeat1, 2), SHIFT_REPEAT(371),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_container_members_repeat1, 2), SHIFT_REPEAT(289),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 3),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_usingnamespace_declaration, 3),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declaration, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 5),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_usingnamespace_declaration, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_declaration, 5),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_function_declaration, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_variable_declaration, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_function_declaration, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_variable_declaration, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_comptime, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_variable_declaration, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_declaration, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level_declaration, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_variable_declaration, 1),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level_comptime, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_variable_declaration, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_function_declaration, 3),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_variable_declaration, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_function_declaration, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_singleline_repeat1, 2), SHIFT_REPEAT(273),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_singleline_repeat1, 2), SHIFT_REPEAT(265),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_singleline_repeat1, 2),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_ref, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_escape, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_ref, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_ref, 4),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_list_repeat2, 2), SHIFT_REPEAT(121),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_list_repeat1, 2), SHIFT_REPEAT(324),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_list_repeat1, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_list_repeat1, 2), SHIFT_REPEAT(135),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_list_repeat1, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 10),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 12),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 5),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 6),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 9),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 8),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 11),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 7),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_escape, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1043] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
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
