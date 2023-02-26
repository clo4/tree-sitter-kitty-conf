#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  sym_setting_name = 2,
  sym_setting_value = 3,
  sym_doc_comment = 4,
  sym_comment = 5,
  aux_sym__blank_token1 = 6,
  sym_config = 7,
  sym__value = 8,
  sym_setting = 9,
  sym__blank = 10,
  aux_sym_config_repeat1 = 11,
  aux_sym_config_repeat2 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_setting_name] = "setting_name",
  [sym_setting_value] = "setting_value",
  [sym_doc_comment] = "doc_comment",
  [sym_comment] = "comment",
  [aux_sym__blank_token1] = "_blank_token1",
  [sym_config] = "config",
  [sym__value] = "_value",
  [sym_setting] = "setting",
  [sym__blank] = "_blank",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_config_repeat2] = "config_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_setting_name] = sym_setting_name,
  [sym_setting_value] = sym_setting_value,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment] = sym_comment,
  [aux_sym__blank_token1] = aux_sym__blank_token1,
  [sym_config] = sym_config,
  [sym__value] = sym__value,
  [sym_setting] = sym_setting,
  [sym__blank] = sym__blank,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_config_repeat2] = aux_sym_config_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_value] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__blank_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_config_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_blank = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
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
  [13] = 13,
  [14] = 14,
  [15] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_setting_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__blank_token1);
      if (lookahead == '\n') ADVANCE(13);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__blank] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_setting_name] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym__blank_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(12),
    [sym__value] = STATE(8),
    [sym_setting] = STATE(13),
    [sym__blank] = STATE(1),
    [aux_sym_config_repeat1] = STATE(2),
    [aux_sym_config_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_setting_name] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [aux_sym__blank_token1] = ACTIONS(11),
  },
  [2] = {
    [sym__value] = STATE(8),
    [sym_setting] = STATE(13),
    [sym__blank] = STATE(2),
    [aux_sym_config_repeat1] = STATE(6),
    [aux_sym_config_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_setting_name] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [aux_sym__blank_token1] = ACTIONS(11),
  },
  [3] = {
    [sym__value] = STATE(8),
    [sym_setting] = STATE(13),
    [sym__blank] = STATE(3),
    [aux_sym_config_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_setting_name] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [aux_sym__blank_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(8),
    [sym_setting] = STATE(13),
    [sym__blank] = STATE(4),
    [aux_sym_config_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_setting_name] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [aux_sym__blank_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(8),
    [sym_setting] = STATE(13),
    [sym__blank] = STATE(5),
    [aux_sym_config_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_setting_name] = ACTIONS(19),
    [sym_doc_comment] = ACTIONS(22),
    [sym_comment] = ACTIONS(22),
    [aux_sym__blank_token1] = ACTIONS(3),
  },
  [6] = {
    [sym__blank] = STATE(6),
    [aux_sym_config_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_setting_name] = ACTIONS(27),
    [sym_doc_comment] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
    [aux_sym__blank_token1] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym__blank_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym__blank,
    ACTIONS(34), 3,
      sym_setting_name,
      sym_doc_comment,
      sym_comment,
  [15] = 4,
    ACTIONS(3), 1,
      aux_sym__blank_token1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym__blank,
    ACTIONS(38), 3,
      sym_setting_name,
      sym_doc_comment,
      sym_comment,
  [30] = 4,
    ACTIONS(3), 1,
      aux_sym__blank_token1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__blank,
    ACTIONS(42), 3,
      sym_setting_name,
      sym_doc_comment,
      sym_comment,
  [45] = 3,
    STATE(10), 1,
      sym__blank,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
    ACTIONS(46), 3,
      sym_setting_name,
      sym_doc_comment,
      sym_comment,
  [58] = 4,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym_setting_value,
    ACTIONS(52), 1,
      aux_sym__blank_token1,
    STATE(11), 1,
      sym__blank,
  [71] = 3,
    ACTIONS(3), 1,
      aux_sym__blank_token1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym__blank,
  [81] = 3,
    ACTIONS(52), 1,
      aux_sym__blank_token1,
    ACTIONS(56), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__blank,
  [91] = 3,
    ACTIONS(52), 1,
      aux_sym__blank_token1,
    ACTIONS(58), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__blank,
  [101] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 15,
  [SMALL_STATE(9)] = 30,
  [SMALL_STATE(10)] = 45,
  [SMALL_STATE(11)] = 58,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 81,
  [SMALL_STATE(14)] = 91,
  [SMALL_STATE(15)] = 101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat2, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat2, 2), SHIFT_REPEAT(11),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat2, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat2, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat2, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kittyconf(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
