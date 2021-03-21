#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_number_literal = 27,
  anon_sym_SQUOTE = 28,
  aux_sym__string_content_token1 = 29,
  sym_program = 30,
  sym_select = 31,
  sym_from = 32,
  sym_select_expression = 33,
  sym_select_item = 34,
  sym_expression = 35,
  sym_primary_expression = 36,
  sym_binary_expression = 37,
  sym_table_expression = 38,
  sym_schema_name = 39,
  sym_table_name = 40,
  sym_column_def = 41,
  sym__literal = 42,
  sym_string_literal = 43,
  aux_sym__string_content = 44,
  sym_statement = 45,
  sym_where = 46,
  sym_select_statement = 47,
  aux_sym_from_repeat1 = 48,
  aux_sym_select_expression_repeat1 = 49,
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
      if (eof) ADVANCE(61);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == ']') SKIP(6)
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ']') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 59:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == ']') SKIP(0)
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keyword_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(115);
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
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
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
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(50),
    [sym_select] = STATE(24),
    [sym_statement] = STATE(49),
    [sym_select_statement] = STATE(52),
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
  [28] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_AND,
    ACTIONS(21), 1,
      anon_sym_OR,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
    ACTIONS(17), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [66] = 3,
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
  [92] = 3,
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
  [118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 5,
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
  [150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(35), 15,
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
  [176] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_AND,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(15), 2,
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
    ACTIONS(17), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 5,
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
  [246] = 3,
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
  [272] = 3,
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
  [298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_AND,
    ACTIONS(21), 1,
      anon_sym_OR,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 5,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [333] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_number_literal,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_expression,
    STATE(22), 1,
      sym_select_item,
    STATE(42), 1,
      sym_select_expression,
    ACTIONS(45), 2,
      sym_keyword_distinct,
      sym_keyword_all,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [370] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_expression,
    STATE(22), 1,
      sym_select_item,
    STATE(37), 1,
      sym_select_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [401] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_expression,
    STATE(29), 1,
      sym_select_item,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_expression,
    ACTIONS(51), 2,
      sym__identifier,
      sym_number_literal,
    STATE(5), 2,
      sym__literal,
      sym_string_literal,
    STATE(10), 2,
      sym_primary_expression,
      sym_binary_expression,
  [558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_keyword_from,
    ACTIONS(68), 1,
      sym_keyword_where,
    STATE(41), 1,
      sym_from,
    STATE(51), 1,
      sym_where,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_select_expression_repeat1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym__identifier,
    STATE(31), 1,
      sym_table_expression,
    STATE(36), 1,
      sym_table_name,
    STATE(54), 1,
      sym_schema_name,
  [638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_from_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_from_repeat1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
      anon_sym_COMMA,
  [676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_from_repeat1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_column_def,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [716] = 4,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      aux_sym__string_content_token1,
    STATE(40), 1,
      aux_sym__string_content,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [783] = 4,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      aux_sym__string_content_token1,
    STATE(40), 1,
      aux_sym__string_content,
  [796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_keyword_where,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_where,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [818] = 4,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      aux_sym__string_content_token1,
    STATE(33), 1,
      aux_sym__string_content,
  [831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_where,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_column_def,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__identifier,
    STATE(38), 1,
      sym_table_name,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_TODO,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DOT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 333,
  [SMALL_STATE(14)] = 370,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 470,
  [SMALL_STATE(19)] = 492,
  [SMALL_STATE(20)] = 514,
  [SMALL_STATE(21)] = 536,
  [SMALL_STATE(22)] = 558,
  [SMALL_STATE(23)] = 573,
  [SMALL_STATE(24)] = 588,
  [SMALL_STATE(25)] = 607,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 638,
  [SMALL_STATE(28)] = 652,
  [SMALL_STATE(29)] = 666,
  [SMALL_STATE(30)] = 676,
  [SMALL_STATE(31)] = 690,
  [SMALL_STATE(32)] = 704,
  [SMALL_STATE(33)] = 716,
  [SMALL_STATE(34)] = 729,
  [SMALL_STATE(35)] = 738,
  [SMALL_STATE(36)] = 747,
  [SMALL_STATE(37)] = 756,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 774,
  [SMALL_STATE(40)] = 783,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 809,
  [SMALL_STATE(43)] = 818,
  [SMALL_STATE(44)] = 831,
  [SMALL_STATE(45)] = 840,
  [SMALL_STATE(46)] = 850,
  [SMALL_STATE(47)] = 860,
  [SMALL_STATE(48)] = 867,
  [SMALL_STATE(49)] = 874,
  [SMALL_STATE(50)] = 881,
  [SMALL_STATE(51)] = 888,
  [SMALL_STATE(52)] = 895,
  [SMALL_STATE(53)] = 902,
  [SMALL_STATE(54)] = 909,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_item, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
