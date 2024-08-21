#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_path_token1 = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_path_token2 = 4,
  sym_owner = 5,
  sym_empty_line = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym_ownership_rule = 9,
  sym_path = 10,
  sym_owners = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_owners_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_path_token2] = "path_token2",
  [sym_owner] = "owner",
  [sym_empty_line] = "empty_line",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_ownership_rule] = "ownership_rule",
  [sym_path] = "path",
  [sym_owners] = "owners",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_owners_repeat1] = "owners_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [sym_owner] = sym_owner,
  [sym_empty_line] = sym_empty_line,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_ownership_rule] = sym_ownership_rule,
  [sym_path] = sym_path,
  [sym_owners] = sym_owners,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_owners_repeat1] = aux_sym_owners_repeat1,
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
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_owner] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_ownership_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_owners] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_owners_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '@') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '@') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '@') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '@') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_owner);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_owner] = ACTIONS(1),
    [sym_empty_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__definition] = STATE(2),
    [sym_ownership_rule] = STATE(2),
    [sym_path] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym_path_token1] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_empty_line] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_ownership_rule] = STATE(3),
    [sym_path] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_path_token1] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_empty_line] = ACTIONS(13),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_ownership_rule] = STATE(3),
    [sym_path] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [aux_sym_path_token1] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_empty_line] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_owner,
    STATE(5), 1,
      aux_sym_owners_repeat1,
    ACTIONS(28), 4,
      sym_comment,
      aux_sym_path_token1,
      anon_sym_DQUOTE,
      sym_empty_line,
  [16] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_owner,
    STATE(5), 1,
      aux_sym_owners_repeat1,
    ACTIONS(34), 4,
      sym_comment,
      aux_sym_path_token1,
      anon_sym_DQUOTE,
      sym_empty_line,
  [32] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 4,
      sym_comment,
      aux_sym_path_token1,
      anon_sym_DQUOTE,
      sym_empty_line,
  [42] = 3,
    ACTIONS(43), 1,
      sym_owner,
    STATE(4), 1,
      aux_sym_owners_repeat1,
    STATE(6), 1,
      sym_owners,
  [52] = 1,
    ACTIONS(45), 1,
      sym_owner,
  [56] = 1,
    ACTIONS(47), 1,
      aux_sym_path_token2,
  [60] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [64] = 1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
  [68] = 1,
    ACTIONS(53), 1,
      sym_owner,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 64,
  [SMALL_STATE(12)] = 68,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_owners, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_owners, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_owners_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_owners_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_owners_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ownership_rule, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ownership_rule, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_CODEOWNERS(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
