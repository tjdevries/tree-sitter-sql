#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_keyword_select = 2,
  sym_keyword_distinct = 3,
  sym_keyword_all = 4,
  sym_keyword_from = 5,
  sym_keyword_where = 6,
  anon_sym_COMMA = 7,
  anon_sym_STAR = 8,
  anon_sym_DOT = 9,
  sym__identifier = 10,
  anon_sym_LPAREN = 11,
  anon_sym_TODO = 12,
  anon_sym_RPAREN = 13,
  sym_program = 14,
  sym_select = 15,
  sym_from = 16,
  sym_select_expression = 17,
  sym_select_item = 18,
  sym_table_expression = 19,
  sym_schema_name = 20,
  sym_table_name = 21,
  sym_column_def = 22,
  sym_statement = 23,
  sym_where = 24,
  sym_select_statement = 25,
  aux_sym_from_repeat1 = 26,
  aux_sym_select_expression_repeat1 = 27,
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
  [anon_sym_DOT] = ".",
  [sym__identifier] = "_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_TODO] = "TODO",
  [anon_sym_RPAREN] = ")",
  [sym_program] = "program",
  [sym_select] = "select",
  [sym_from] = "from",
  [sym_select_expression] = "select_expression",
  [sym_select_item] = "select_item",
  [sym_table_expression] = "table_expression",
  [sym_schema_name] = "schema_name",
  [sym_table_name] = "table_name",
  [sym_column_def] = "column_def",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__identifier] = sym__identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_program] = sym_program,
  [sym_select] = sym_select,
  [sym_from] = sym_from,
  [sym_select_expression] = sym_select_expression,
  [sym_select_item] = sym_select_item,
  [sym_table_expression] = sym_table_expression,
  [sym_schema_name] = sym_schema_name,
  [sym_table_name] = sym_table_name,
  [sym_column_def] = sym_column_def,
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
      if (eof) ADVANCE(56);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == ']') SKIP(6)
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ']') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == ']') SKIP(0)
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keyword_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keyword_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 7},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym_select] = STATE(24),
    [sym_statement] = STATE(35),
    [sym_select_statement] = STATE(34),
    [sym_comment] = ACTIONS(3),
    [sym_keyword_select] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      sym__identifier,
    STATE(15), 1,
      sym_select_item,
    STATE(32), 1,
      sym_select_expression,
    ACTIONS(7), 2,
      sym_keyword_distinct,
      sym_keyword_all,
  [20] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_from_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [34] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(18), 1,
      sym__identifier,
    STATE(15), 1,
      sym_select_item,
    STATE(31), 1,
      sym_select_expression,
  [50] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_from_repeat1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [64] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym__identifier,
    STATE(9), 1,
      sym_table_expression,
    STATE(10), 1,
      sym_table_name,
    STATE(25), 1,
      sym_schema_name,
  [80] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_from_repeat1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [94] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DOT,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_column_def,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_keyword_where,
  [120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_COMMA,
  [147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      sym_keyword_where,
      anon_sym_LPAREN,
  [165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_keyword_from,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_select_expression_repeat1,
  [178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym_keyword_where,
    STATE(27), 1,
      sym_where,
  [191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_keyword_from,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_select_expression_repeat1,
  [204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      sym_keyword_from,
    STATE(17), 1,
      aux_sym_select_expression_repeat1,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      sym_keyword_from,
      anon_sym_COMMA,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      sym_keyword_from,
      anon_sym_COMMA,
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym__identifier,
    STATE(20), 1,
      sym_select_item,
  [243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__identifier,
    STATE(13), 1,
      sym_table_name,
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_column_def,
  [263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_keyword_from,
    STATE(16), 1,
      sym_from,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
  [280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_TODO,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_keyword_from,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_keyword_from,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_keyword_from,
  [336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 156,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 233,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 253,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 273,
  [SMALL_STATE(26)] = 280,
  [SMALL_STATE(27)] = 287,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 301,
  [SMALL_STATE(30)] = 308,
  [SMALL_STATE(31)] = 315,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 329,
  [SMALL_STATE(34)] = 336,
  [SMALL_STATE(35)] = 343,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_repeat1, 2), SHIFT_REPEAT(23),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 4),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_expression_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_item, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
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
