#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  sym_comment = 1,
  sym_keyword_select = 2,
  sym_keyword_distinct = 3,
  sym_keyword_all = 4,
  sym_keyword_from = 5,
  sym_keyword_where = 6,
  anon_sym_COMMA = 7,
  anon_sym_STAR = 8,
  anon_sym_GT = 9,
  anon_sym_LT = 10,
  anon_sym_EQ = 11,
  anon_sym_LT_GT = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_AND = 16,
  anon_sym_OR = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_DOT = 22,
  sym__identifier = 23,
  anon_sym_LPAREN = 24,
  anon_sym_TODO = 25,
  anon_sym_RPAREN = 26,
  sym_decimal_integer_literal = 27,
  sym_program = 28,
  sym_select = 29,
  sym_from = 30,
  sym_select_expression = 31,
  sym_select_item = 32,
  sym_expression = 33,
  sym_primary_expression = 34,
  sym_binary_expression = 35,
  sym_table_expression = 36,
  sym_schema_name = 37,
  sym_table_name = 38,
  sym_column_def = 39,
  sym__literal = 40,
  sym_statement = 41,
  sym_where = 42,
  sym_select_statement = 43,
  aux_sym_from_repeat1 = 44,
  aux_sym_select_expression_repeat1 = 45,
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
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_program] = "program",
  [sym_select] = "select",
  [sym_from] = "from",
  [sym_select_expression] = "select_expression",
  [sym_select_item] = "select_item",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_table_expression] = "table_expression",
  [sym_schema_name] = "schema_name",
  [sym_table_name] = "table_name",
  [sym_column_def] = "column_def",
  [sym__literal] = "_literal",
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
  [sym_decimal_integer_literal] = sym_decimal_integer_literal,
  [sym_program] = sym_program,
  [sym_select] = sym_select,
  [sym_from] = sym_from,
  [sym_select_expression] = sym_select_expression,
  [sym_select_item] = sym_select_item,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_table_expression] = sym_table_expression,
  [sym_schema_name] = sym_schema_name,
  [sym_table_name] = sym_table_name,
  [sym_column_def] = sym_column_def,
  [sym__literal] = sym__literal,
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
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
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
  field_operator = 2,
  field_right = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ']') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == ']') SKIP(6)
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'H') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == ']') SKIP(0)
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keyword_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
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
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
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
    [sym_decimal_integer_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(45),
    [sym_select] = STATE(35),
    [sym_statement] = STATE(47),
    [sym_select_statement] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(7), 4,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
    ACTIONS(13), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [29] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AND,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_OR,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(13), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [62] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(7), 3,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(13), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [93] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(15), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(7), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_PLUS,
  [118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(7), 12,
      ts_builtin_sym_end,
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
  [141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(23), 12,
      ts_builtin_sym_end,
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
  [164] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AND,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_OR,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(13), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(31), 12,
      ts_builtin_sym_end,
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
  [222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_expression,
    STATE(9), 1,
      sym__literal,
    ACTIONS(35), 2,
      sym__identifier,
      sym_decimal_integer_literal,
    STATE(7), 2,
      sym_primary_expression,
      sym_binary_expression,
  [240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(32), 1,
      sym_select_item,
    STATE(41), 1,
      sym_select_expression,
    ACTIONS(37), 2,
      sym_keyword_distinct,
      sym_keyword_all,
  [260] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(2), 1,
      sym_expression,
    STATE(9), 1,
      sym__literal,
    ACTIONS(35), 2,
      sym__identifier,
      sym_decimal_integer_literal,
    STATE(7), 2,
      sym_primary_expression,
      sym_binary_expression,
  [278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      sym_expression,
    STATE(9), 1,
      sym__literal,
    ACTIONS(35), 2,
      sym__identifier,
      sym_decimal_integer_literal,
    STATE(7), 2,
      sym_primary_expression,
      sym_binary_expression,
  [296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_expression,
    STATE(9), 1,
      sym__literal,
    ACTIONS(35), 2,
      sym__identifier,
      sym_decimal_integer_literal,
    STATE(7), 2,
      sym_primary_expression,
      sym_binary_expression,
  [314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_expression,
    STATE(9), 1,
      sym__literal,
    ACTIONS(35), 2,
      sym__identifier,
      sym_decimal_integer_literal,
    STATE(7), 2,
      sym_primary_expression,
      sym_binary_expression,
  [332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_expression,
    STATE(9), 1,
      sym__literal,
    ACTIONS(35), 2,
      sym__identifier,
      sym_decimal_integer_literal,
    STATE(7), 2,
      sym_primary_expression,
      sym_binary_expression,
  [350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym__identifier,
    STATE(19), 1,
      sym_table_expression,
    STATE(25), 1,
      sym_table_name,
    STATE(42), 1,
      sym_schema_name,
  [366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_from_repeat1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_column_def,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_from_repeat1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_from_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(60), 1,
      sym__identifier,
    STATE(32), 1,
      sym_select_item,
    STATE(40), 1,
      sym_select_expression,
  [438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_keyword_from,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_select_expression_repeat1,
  [463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_keyword_from,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_select_expression_repeat1,
  [485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_keyword_where,
    STATE(48), 1,
      sym_where,
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      sym_keyword_from,
    STATE(26), 1,
      aux_sym_select_expression_repeat1,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      sym_keyword_from,
      anon_sym_COMMA,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(30), 1,
      sym_table_name,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_keyword_from,
    STATE(31), 1,
      sym_from,
  [575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym__identifier,
    STATE(33), 1,
      sym_select_item,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_column_def,
  [595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym_keyword_from,
      anon_sym_COMMA,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_TODO,
  [610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_keyword_from,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_keyword_from,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOT,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_keyword_from,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 332,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 408,
  [SMALL_STATE(22)] = 422,
  [SMALL_STATE(23)] = 438,
  [SMALL_STATE(24)] = 450,
  [SMALL_STATE(25)] = 463,
  [SMALL_STATE(26)] = 472,
  [SMALL_STATE(27)] = 485,
  [SMALL_STATE(28)] = 494,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 534,
  [SMALL_STATE(33)] = 547,
  [SMALL_STATE(34)] = 555,
  [SMALL_STATE(35)] = 565,
  [SMALL_STATE(36)] = 575,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 603,
  [SMALL_STATE(40)] = 610,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 624,
  [SMALL_STATE(43)] = 631,
  [SMALL_STATE(44)] = 638,
  [SMALL_STATE(45)] = 645,
  [SMALL_STATE(46)] = 652,
  [SMALL_STATE(47)] = 659,
  [SMALL_STATE(48)] = 666,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2), SHIFT_REPEAT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_item, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
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
