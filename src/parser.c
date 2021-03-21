#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  sym_keyword_select = 2,
  sym_keyword_distinct = 3,
  sym_keyword_all = 4,
  sym_keyword_from = 5,
  sym_keyword_where = 6,
  anon_sym_COMMA = 7,
  anon_sym_STAR = 8,
  anon_sym_NOT = 9,
  anon_sym_GT = 10,
  anon_sym_LT = 11,
  anon_sym_EQ = 12,
  anon_sym_LT_GT = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_AND = 17,
  anon_sym_OR = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_SLASH = 21,
  anon_sym_PERCENT = 22,
  anon_sym_DOT = 23,
  sym__identifier = 24,
  anon_sym_LPAREN = 25,
  anon_sym_TODO = 26,
  anon_sym_RPAREN = 27,
  sym_true = 28,
  sym_false = 29,
  sym_number_literal = 30,
  anon_sym_SQUOTE = 31,
  aux_sym__string_content_token1 = 32,
  sym_program = 33,
  sym_select = 34,
  sym_from = 35,
  sym_select_expression = 36,
  sym_select_item = 37,
  sym_expression = 38,
  sym_primary_expression = 39,
  sym_unary_expression = 40,
  sym_binary_expression = 41,
  sym_table_expression = 42,
  sym_schema_name = 43,
  sym_table_name = 44,
  sym_column_def = 45,
  sym__literal = 46,
  sym_string_literal = 47,
  aux_sym__string_content = 48,
  sym_statement = 49,
  sym_where = 50,
  sym_select_statement = 51,
  aux_sym_from_repeat1 = 52,
  aux_sym_select_expression_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_distinct] = "keyword_distinct",
  [sym_keyword_all] = "keyword_all",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_where] = "keyword_where",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_NOT] = "NOT",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT] = ".",
  [sym__identifier] = "_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_TODO] = "TODO",
  [anon_sym_RPAREN] = ")",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym_program] = "program",
  [sym_select] = "select",
  [sym_from] = "from",
  [sym_select_expression] = "select_expression",
  [sym_select_item] = "select_item",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_table_expression] = "table_expression",
  [sym_schema_name] = "schema_name",
  [sym_table_name] = "table_name",
  [sym_column_def] = "column_def",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [aux_sym__string_content] = "_string_content",
  [sym_statement] = "statement",
  [sym_where] = "where",
  [sym_select_statement] = "select_statement",
  [aux_sym_from_repeat1] = "from_repeat1",
  [aux_sym_select_expression_repeat1] = "select_expression_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_distinct] = sym_keyword_distinct,
  [sym_keyword_all] = sym_keyword_all,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_where] = sym_keyword_where,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__identifier] = sym__identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym_program] = sym_program,
  [sym_select] = sym_select,
  [sym_from] = sym_from,
  [sym_select_expression] = sym_select_expression,
  [sym_select_item] = sym_select_item,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_table_expression] = sym_table_expression,
  [sym_schema_name] = sym_schema_name,
  [sym_table_name] = sym_table_name,
  [sym_column_def] = sym_column_def,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_statement] = sym_statement,
  [sym_where] = sym_where,
  [sym_select_statement] = sym_select_statement,
  [aux_sym_from_repeat1] = aux_sym_from_repeat1,
  [aux_sym_select_expression_repeat1] = aux_sym_select_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_all] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_select_item] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_table_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_def] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operand = 2,
  field_operator = 3,
  field_right = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == ']') SKIP(8)
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == ']') SKIP(9)
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ']') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(22);
      if (lookahead == ']') SKIP(0)
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_keyword_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == ']') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_distinct] = ACTIONS(1),
    [sym_keyword_all] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(54),
    [sym_select] = STATE(26),
    [sym_statement] = STATE(52),
    [sym_select_statement] = STATE(51),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(11), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(7), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
  [28] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(15), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(7), 7,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
  [60] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AND,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(7), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_OR,
    ACTIONS(15), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [96] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(15), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_AND,
      anon_sym_OR,
  [130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(7), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(23), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(27), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(31), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [234] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AND,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_OR,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
    ACTIONS(15), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(39), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(43), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [324] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_expression,
    STATE(25), 1,
      sym_select_item,
    STATE(40), 1,
      sym_select_expression,
    ACTIONS(47), 2,
      sym_keyword_distinct,
      sym_keyword_all,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [367] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_expression,
    STATE(25), 1,
      sym_select_item,
    STATE(39), 1,
      sym_select_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [406] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AND,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_OR,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(15), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_expression,
    STATE(32), 1,
      sym_select_item,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [474] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [504] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [534] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [564] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [594] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [624] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [654] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_NOT,
    ACTIONS(55), 1,
      sym_number_literal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_expression,
    STATE(7), 2,
      sym__literal,
      sym_string_literal,
    ACTIONS(53), 3,
      sym__identifier,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_primary_expression,
      sym_unary_expression,
      sym_binary_expression,
  [684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_keyword_from,
    ACTIONS(74), 1,
      sym_keyword_where,
    STATE(44), 1,
      sym_from,
    STATE(56), 1,
      sym_where,
  [733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_column_def,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_from_repeat1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__identifier,
    STATE(28), 1,
      sym_table_expression,
    STATE(37), 1,
      sym_table_name,
    STATE(55), 1,
      sym_schema_name,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
  [814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_from_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_from_repeat1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [869] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      aux_sym__string_content_token1,
    STATE(41), 1,
      aux_sym__string_content,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [900] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      aux_sym__string_content_token1,
    STATE(41), 1,
      aux_sym__string_content,
  [913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [922] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      aux_sym__string_content_token1,
    STATE(38), 1,
      aux_sym__string_content,
  [935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_keyword_where,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_where,
  [948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__identifier,
    STATE(36), 1,
      sym_table_name,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_column_def,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_TODO,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOT,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 234,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 474,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 534,
  [SMALL_STATE(20)] = 564,
  [SMALL_STATE(21)] = 594,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 654,
  [SMALL_STATE(24)] = 684,
  [SMALL_STATE(25)] = 699,
  [SMALL_STATE(26)] = 714,
  [SMALL_STATE(27)] = 733,
  [SMALL_STATE(28)] = 748,
  [SMALL_STATE(29)] = 762,
  [SMALL_STATE(30)] = 776,
  [SMALL_STATE(31)] = 788,
  [SMALL_STATE(32)] = 804,
  [SMALL_STATE(33)] = 814,
  [SMALL_STATE(34)] = 828,
  [SMALL_STATE(35)] = 842,
  [SMALL_STATE(36)] = 851,
  [SMALL_STATE(37)] = 860,
  [SMALL_STATE(38)] = 869,
  [SMALL_STATE(39)] = 882,
  [SMALL_STATE(40)] = 891,
  [SMALL_STATE(41)] = 900,
  [SMALL_STATE(42)] = 913,
  [SMALL_STATE(43)] = 922,
  [SMALL_STATE(44)] = 935,
  [SMALL_STATE(45)] = 948,
  [SMALL_STATE(46)] = 957,
  [SMALL_STATE(47)] = 966,
  [SMALL_STATE(48)] = 976,
  [SMALL_STATE(49)] = 986,
  [SMALL_STATE(50)] = 993,
  [SMALL_STATE(51)] = 1000,
  [SMALL_STATE(52)] = 1007,
  [SMALL_STATE(53)] = 1014,
  [SMALL_STATE(54)] = 1021,
  [SMALL_STATE(55)] = 1028,
  [SMALL_STATE(56)] = 1035,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_item, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2), SHIFT_REPEAT(16),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(48),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(41),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
