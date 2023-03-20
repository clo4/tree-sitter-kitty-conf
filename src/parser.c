#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LF = 2,
  anon_sym_include = 3,
  aux_sym_include_token1 = 4,
  anon_sym_globinclude = 5,
  anon_sym_envinclude = 6,
  anon_sym_font_size = 7,
  anon_sym_font_family = 8,
  anon_sym_bold_font = 9,
  anon_sym_italic_font = 10,
  anon_sym_bold_italic_font = 11,
  anon_sym_force_ltr = 12,
  anon_sym_bell_on_tab = 13,
  anon_sym_enable_audio_bell = 14,
  anon_sym_visual_bell_duration = 15,
  anon_sym_visual_bell_color = 16,
  anon_sym_window_alert_on_bell = 17,
  anon_sym_command_on_bell = 18,
  anon_sym_bell_path = 19,
  anon_sym_symbol_map = 20,
  anon_sym_narrow_symbols = 21,
  sym_none = 22,
  sym_auto = 23,
  anon_sym_COMMA = 24,
  anon_sym_DASH = 25,
  sym_unicode_codepoint = 26,
  sym_number = 27,
  anon_sym_y = 28,
  anon_sym_yes = 29,
  anon_sym_true = 30,
  anon_sym_n = 31,
  anon_sym_no = 32,
  anon_sym_false = 33,
  sym_hex_color = 34,
  sym_string = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym__directive = 38,
  sym_include = 39,
  sym_globinclude = 40,
  sym_envinclude = 41,
  sym_font_size = 42,
  sym_font_family = 43,
  sym_bold_font = 44,
  sym_italic_font = 45,
  sym_bold_italic_font = 46,
  sym_force_ltr = 47,
  sym_bell_on_tab = 48,
  sym_enable_audio_bell = 49,
  sym_visual_bell_duration = 50,
  sym_visual_bell_color = 51,
  sym_window_alert_on_bell = 52,
  sym_command_on_bell = 53,
  sym_bell_path = 54,
  sym_symbol_map = 55,
  sym_narrow_symbols = 56,
  sym_codepoints = 57,
  sym_unicode_range = 58,
  sym_boolean = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_codepoints_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_include] = "include",
  [aux_sym_include_token1] = "include_token1",
  [anon_sym_globinclude] = "globinclude",
  [anon_sym_envinclude] = "envinclude",
  [anon_sym_font_size] = "font_size",
  [anon_sym_font_family] = "font_family",
  [anon_sym_bold_font] = "bold_font",
  [anon_sym_italic_font] = "italic_font",
  [anon_sym_bold_italic_font] = "bold_italic_font",
  [anon_sym_force_ltr] = "force_ltr",
  [anon_sym_bell_on_tab] = "bell_on_tab",
  [anon_sym_enable_audio_bell] = "enable_audio_bell",
  [anon_sym_visual_bell_duration] = "visual_bell_duration",
  [anon_sym_visual_bell_color] = "visual_bell_color",
  [anon_sym_window_alert_on_bell] = "window_alert_on_bell",
  [anon_sym_command_on_bell] = "command_on_bell",
  [anon_sym_bell_path] = "bell_path",
  [anon_sym_symbol_map] = "symbol_map",
  [anon_sym_narrow_symbols] = "narrow_symbols",
  [sym_none] = "none",
  [sym_auto] = "auto",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [sym_unicode_codepoint] = "unicode_codepoint",
  [sym_number] = "number",
  [anon_sym_y] = "y",
  [anon_sym_yes] = "yes",
  [anon_sym_true] = "true",
  [anon_sym_n] = "n",
  [anon_sym_no] = "no",
  [anon_sym_false] = "false",
  [sym_hex_color] = "hex_color",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__directive] = "_directive",
  [sym_include] = "include",
  [sym_globinclude] = "globinclude",
  [sym_envinclude] = "envinclude",
  [sym_font_size] = "font_size",
  [sym_font_family] = "font_family",
  [sym_bold_font] = "bold_font",
  [sym_italic_font] = "italic_font",
  [sym_bold_italic_font] = "bold_italic_font",
  [sym_force_ltr] = "force_ltr",
  [sym_bell_on_tab] = "bell_on_tab",
  [sym_enable_audio_bell] = "enable_audio_bell",
  [sym_visual_bell_duration] = "visual_bell_duration",
  [sym_visual_bell_color] = "visual_bell_color",
  [sym_window_alert_on_bell] = "window_alert_on_bell",
  [sym_command_on_bell] = "command_on_bell",
  [sym_bell_path] = "bell_path",
  [sym_symbol_map] = "symbol_map",
  [sym_narrow_symbols] = "narrow_symbols",
  [sym_codepoints] = "codepoints",
  [sym_unicode_range] = "unicode_range",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_codepoints_repeat1] = "codepoints_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [anon_sym_globinclude] = anon_sym_globinclude,
  [anon_sym_envinclude] = anon_sym_envinclude,
  [anon_sym_font_size] = anon_sym_font_size,
  [anon_sym_font_family] = anon_sym_font_family,
  [anon_sym_bold_font] = anon_sym_bold_font,
  [anon_sym_italic_font] = anon_sym_italic_font,
  [anon_sym_bold_italic_font] = anon_sym_bold_italic_font,
  [anon_sym_force_ltr] = anon_sym_force_ltr,
  [anon_sym_bell_on_tab] = anon_sym_bell_on_tab,
  [anon_sym_enable_audio_bell] = anon_sym_enable_audio_bell,
  [anon_sym_visual_bell_duration] = anon_sym_visual_bell_duration,
  [anon_sym_visual_bell_color] = anon_sym_visual_bell_color,
  [anon_sym_window_alert_on_bell] = anon_sym_window_alert_on_bell,
  [anon_sym_command_on_bell] = anon_sym_command_on_bell,
  [anon_sym_bell_path] = anon_sym_bell_path,
  [anon_sym_symbol_map] = anon_sym_symbol_map,
  [anon_sym_narrow_symbols] = anon_sym_narrow_symbols,
  [sym_none] = sym_none,
  [sym_auto] = sym_auto,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_unicode_codepoint] = sym_unicode_codepoint,
  [sym_number] = sym_number,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_false] = anon_sym_false,
  [sym_hex_color] = sym_hex_color,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__directive] = sym__directive,
  [sym_include] = sym_include,
  [sym_globinclude] = sym_globinclude,
  [sym_envinclude] = sym_envinclude,
  [sym_font_size] = sym_font_size,
  [sym_font_family] = sym_font_family,
  [sym_bold_font] = sym_bold_font,
  [sym_italic_font] = sym_italic_font,
  [sym_bold_italic_font] = sym_bold_italic_font,
  [sym_force_ltr] = sym_force_ltr,
  [sym_bell_on_tab] = sym_bell_on_tab,
  [sym_enable_audio_bell] = sym_enable_audio_bell,
  [sym_visual_bell_duration] = sym_visual_bell_duration,
  [sym_visual_bell_color] = sym_visual_bell_color,
  [sym_window_alert_on_bell] = sym_window_alert_on_bell,
  [sym_command_on_bell] = sym_command_on_bell,
  [sym_bell_path] = sym_bell_path,
  [sym_symbol_map] = sym_symbol_map,
  [sym_narrow_symbols] = sym_narrow_symbols,
  [sym_codepoints] = sym_codepoints,
  [sym_unicode_range] = sym_unicode_range,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_codepoints_repeat1] = aux_sym_codepoints_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_globinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_envinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_family] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_italic_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold_italic_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_ltr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bell_on_tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_audio_bell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visual_bell_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visual_bell_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_alert_on_bell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command_on_bell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bell_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_narrow_symbols] = {
    .visible = true,
    .named = false,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym_auto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_unicode_codepoint] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_color] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_globinclude] = {
    .visible = true,
    .named = true,
  },
  [sym_envinclude] = {
    .visible = true,
    .named = true,
  },
  [sym_font_size] = {
    .visible = true,
    .named = true,
  },
  [sym_font_family] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_font] = {
    .visible = true,
    .named = true,
  },
  [sym_italic_font] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_italic_font] = {
    .visible = true,
    .named = true,
  },
  [sym_force_ltr] = {
    .visible = true,
    .named = true,
  },
  [sym_bell_on_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_audio_bell] = {
    .visible = true,
    .named = true,
  },
  [sym_visual_bell_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_visual_bell_color] = {
    .visible = true,
    .named = true,
  },
  [sym_window_alert_on_bell] = {
    .visible = true,
    .named = true,
  },
  [sym_command_on_bell] = {
    .visible = true,
    .named = true,
  },
  [sym_bell_path] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_map] = {
    .visible = true,
    .named = true,
  },
  [sym_narrow_symbols] = {
    .visible = true,
    .named = true,
  },
  [sym_codepoints] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_range] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codepoints_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 4,
  [39] = 8,
  [40] = 40,
  [41] = 41,
  [42] = 7,
  [43] = 6,
  [44] = 5,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 9,
  [49] = 49,
  [50] = 50,
  [51] = 10,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(216);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'U') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(203);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(211);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 194:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 195:
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 198:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 199:
      if (lookahead == 'z') ADVANCE(66);
      END_STATE();
    case 200:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 212:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(216);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 213:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 214:
      if (eof) ADVANCE(215);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_globinclude);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_envinclude);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_font_size);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_font_family);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bold_font);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_italic_font);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_bold_italic_font);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_force_ltr);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bell_on_tab);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_enable_audio_bell);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_visual_bell_duration);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_visual_bell_color);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_window_alert_on_bell);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_command_on_bell);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_bell_path);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_symbol_map);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_narrow_symbols);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_none);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_auto);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unicode_codepoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '_') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_hex_color);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 214},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 212},
  [5] = {.lex_state = 212},
  [6] = {.lex_state = 212},
  [7] = {.lex_state = 212},
  [8] = {.lex_state = 212},
  [9] = {.lex_state = 212},
  [10] = {.lex_state = 212},
  [11] = {.lex_state = 212},
  [12] = {.lex_state = 213},
  [13] = {.lex_state = 213},
  [14] = {.lex_state = 213},
  [15] = {.lex_state = 213},
  [16] = {.lex_state = 213},
  [17] = {.lex_state = 213},
  [18] = {.lex_state = 213},
  [19] = {.lex_state = 213},
  [20] = {.lex_state = 213},
  [21] = {.lex_state = 213},
  [22] = {.lex_state = 213},
  [23] = {.lex_state = 213},
  [24] = {.lex_state = 213},
  [25] = {.lex_state = 213},
  [26] = {.lex_state = 213},
  [27] = {.lex_state = 213},
  [28] = {.lex_state = 213},
  [29] = {.lex_state = 213},
  [30] = {.lex_state = 213},
  [31] = {.lex_state = 213},
  [32] = {.lex_state = 214},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 80},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 80},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 129},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 210},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 210},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 210},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 77},
  [74] = {.lex_state = 77},
  [75] = {.lex_state = 77},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 77},
  [78] = {.lex_state = 77},
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [aux_sym_include_token1] = ACTIONS(1),
    [anon_sym_globinclude] = ACTIONS(1),
    [anon_sym_envinclude] = ACTIONS(1),
    [anon_sym_font_size] = ACTIONS(1),
    [anon_sym_font_family] = ACTIONS(1),
    [anon_sym_bold_font] = ACTIONS(1),
    [anon_sym_italic_font] = ACTIONS(1),
    [anon_sym_bold_italic_font] = ACTIONS(1),
    [anon_sym_force_ltr] = ACTIONS(1),
    [anon_sym_bell_on_tab] = ACTIONS(1),
    [anon_sym_enable_audio_bell] = ACTIONS(1),
    [anon_sym_visual_bell_duration] = ACTIONS(1),
    [anon_sym_visual_bell_color] = ACTIONS(1),
    [anon_sym_window_alert_on_bell] = ACTIONS(1),
    [anon_sym_command_on_bell] = ACTIONS(1),
    [anon_sym_bell_path] = ACTIONS(1),
    [anon_sym_symbol_map] = ACTIONS(1),
    [anon_sym_narrow_symbols] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [sym_auto] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_unicode_codepoint] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_hex_color] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym__directive] = STATE(2),
    [sym_include] = STATE(22),
    [sym_globinclude] = STATE(22),
    [sym_envinclude] = STATE(22),
    [sym_font_size] = STATE(22),
    [sym_font_family] = STATE(22),
    [sym_bold_font] = STATE(22),
    [sym_italic_font] = STATE(22),
    [sym_bold_italic_font] = STATE(22),
    [sym_force_ltr] = STATE(22),
    [sym_bell_on_tab] = STATE(22),
    [sym_enable_audio_bell] = STATE(22),
    [sym_visual_bell_duration] = STATE(22),
    [sym_visual_bell_color] = STATE(22),
    [sym_window_alert_on_bell] = STATE(22),
    [sym_command_on_bell] = STATE(22),
    [sym_bell_path] = STATE(22),
    [sym_symbol_map] = STATE(22),
    [sym_narrow_symbols] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_globinclude] = ACTIONS(9),
    [anon_sym_envinclude] = ACTIONS(11),
    [anon_sym_font_size] = ACTIONS(13),
    [anon_sym_font_family] = ACTIONS(15),
    [anon_sym_bold_font] = ACTIONS(17),
    [anon_sym_italic_font] = ACTIONS(19),
    [anon_sym_bold_italic_font] = ACTIONS(21),
    [anon_sym_force_ltr] = ACTIONS(23),
    [anon_sym_bell_on_tab] = ACTIONS(25),
    [anon_sym_enable_audio_bell] = ACTIONS(27),
    [anon_sym_visual_bell_duration] = ACTIONS(29),
    [anon_sym_visual_bell_color] = ACTIONS(31),
    [anon_sym_window_alert_on_bell] = ACTIONS(33),
    [anon_sym_command_on_bell] = ACTIONS(35),
    [anon_sym_bell_path] = ACTIONS(37),
    [anon_sym_symbol_map] = ACTIONS(39),
    [anon_sym_narrow_symbols] = ACTIONS(41),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym__directive] = STATE(3),
    [sym_include] = STATE(22),
    [sym_globinclude] = STATE(22),
    [sym_envinclude] = STATE(22),
    [sym_font_size] = STATE(22),
    [sym_font_family] = STATE(22),
    [sym_bold_font] = STATE(22),
    [sym_italic_font] = STATE(22),
    [sym_bold_italic_font] = STATE(22),
    [sym_force_ltr] = STATE(22),
    [sym_bell_on_tab] = STATE(22),
    [sym_enable_audio_bell] = STATE(22),
    [sym_visual_bell_duration] = STATE(22),
    [sym_visual_bell_color] = STATE(22),
    [sym_window_alert_on_bell] = STATE(22),
    [sym_command_on_bell] = STATE(22),
    [sym_bell_path] = STATE(22),
    [sym_symbol_map] = STATE(22),
    [sym_narrow_symbols] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_source_file_token1] = ACTIONS(45),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_globinclude] = ACTIONS(9),
    [anon_sym_envinclude] = ACTIONS(11),
    [anon_sym_font_size] = ACTIONS(13),
    [anon_sym_font_family] = ACTIONS(15),
    [anon_sym_bold_font] = ACTIONS(17),
    [anon_sym_italic_font] = ACTIONS(19),
    [anon_sym_bold_italic_font] = ACTIONS(21),
    [anon_sym_force_ltr] = ACTIONS(23),
    [anon_sym_bell_on_tab] = ACTIONS(25),
    [anon_sym_enable_audio_bell] = ACTIONS(27),
    [anon_sym_visual_bell_duration] = ACTIONS(29),
    [anon_sym_visual_bell_color] = ACTIONS(31),
    [anon_sym_window_alert_on_bell] = ACTIONS(33),
    [anon_sym_command_on_bell] = ACTIONS(35),
    [anon_sym_bell_path] = ACTIONS(37),
    [anon_sym_symbol_map] = ACTIONS(39),
    [anon_sym_narrow_symbols] = ACTIONS(41),
    [sym_comment] = ACTIONS(45),
  },
  [3] = {
    [sym__directive] = STATE(3),
    [sym_include] = STATE(22),
    [sym_globinclude] = STATE(22),
    [sym_envinclude] = STATE(22),
    [sym_font_size] = STATE(22),
    [sym_font_family] = STATE(22),
    [sym_bold_font] = STATE(22),
    [sym_italic_font] = STATE(22),
    [sym_bold_italic_font] = STATE(22),
    [sym_force_ltr] = STATE(22),
    [sym_bell_on_tab] = STATE(22),
    [sym_enable_audio_bell] = STATE(22),
    [sym_visual_bell_duration] = STATE(22),
    [sym_visual_bell_color] = STATE(22),
    [sym_window_alert_on_bell] = STATE(22),
    [sym_command_on_bell] = STATE(22),
    [sym_bell_path] = STATE(22),
    [sym_symbol_map] = STATE(22),
    [sym_narrow_symbols] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_source_file_token1] = ACTIONS(49),
    [anon_sym_include] = ACTIONS(52),
    [anon_sym_globinclude] = ACTIONS(55),
    [anon_sym_envinclude] = ACTIONS(58),
    [anon_sym_font_size] = ACTIONS(61),
    [anon_sym_font_family] = ACTIONS(64),
    [anon_sym_bold_font] = ACTIONS(67),
    [anon_sym_italic_font] = ACTIONS(70),
    [anon_sym_bold_italic_font] = ACTIONS(73),
    [anon_sym_force_ltr] = ACTIONS(76),
    [anon_sym_bell_on_tab] = ACTIONS(79),
    [anon_sym_enable_audio_bell] = ACTIONS(82),
    [anon_sym_visual_bell_duration] = ACTIONS(85),
    [anon_sym_visual_bell_color] = ACTIONS(88),
    [anon_sym_window_alert_on_bell] = ACTIONS(91),
    [anon_sym_command_on_bell] = ACTIONS(94),
    [anon_sym_bell_path] = ACTIONS(97),
    [anon_sym_symbol_map] = ACTIONS(100),
    [anon_sym_narrow_symbols] = ACTIONS(103),
    [sym_comment] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym_codepoints_repeat1,
    ACTIONS(108), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(106), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [37] = 4,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_codepoints_repeat1,
    ACTIONS(116), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(114), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [71] = 3,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(114), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      anon_sym_COMMA,
      sym_comment,
  [103] = 4,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_codepoints_repeat1,
    ACTIONS(123), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(121), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [137] = 4,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_codepoints_repeat1,
    ACTIONS(108), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(106), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [171] = 2,
    ACTIONS(127), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(125), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      anon_sym_COMMA,
      sym_comment,
  [200] = 2,
    ACTIONS(116), 2,
      aux_sym_source_file_token1,
      aux_sym_include_token1,
    ACTIONS(114), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      anon_sym_COMMA,
      sym_comment,
  [229] = 3,
    ACTIONS(131), 1,
      aux_sym_source_file_token1,
    ACTIONS(133), 1,
      aux_sym_include_token1,
    ACTIONS(129), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [259] = 2,
    ACTIONS(137), 1,
      aux_sym_source_file_token1,
    ACTIONS(135), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [286] = 2,
    ACTIONS(141), 1,
      aux_sym_source_file_token1,
    ACTIONS(139), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [313] = 2,
    ACTIONS(145), 1,
      aux_sym_source_file_token1,
    ACTIONS(143), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [340] = 2,
    ACTIONS(149), 1,
      aux_sym_source_file_token1,
    ACTIONS(147), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [367] = 2,
    ACTIONS(153), 1,
      aux_sym_source_file_token1,
    ACTIONS(151), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [394] = 2,
    ACTIONS(157), 1,
      aux_sym_source_file_token1,
    ACTIONS(155), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [421] = 2,
    ACTIONS(161), 1,
      aux_sym_source_file_token1,
    ACTIONS(159), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [448] = 2,
    ACTIONS(165), 1,
      aux_sym_source_file_token1,
    ACTIONS(163), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [475] = 2,
    ACTIONS(169), 1,
      aux_sym_source_file_token1,
    ACTIONS(167), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [502] = 2,
    ACTIONS(173), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [529] = 3,
    ACTIONS(177), 1,
      aux_sym_source_file_token1,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(175), 20,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [558] = 2,
    ACTIONS(183), 1,
      aux_sym_source_file_token1,
    ACTIONS(181), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [585] = 2,
    ACTIONS(187), 1,
      aux_sym_source_file_token1,
    ACTIONS(185), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [612] = 2,
    ACTIONS(191), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [639] = 2,
    ACTIONS(195), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [666] = 2,
    ACTIONS(199), 1,
      aux_sym_source_file_token1,
    ACTIONS(197), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [693] = 2,
    ACTIONS(203), 1,
      aux_sym_source_file_token1,
    ACTIONS(201), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [720] = 2,
    ACTIONS(207), 1,
      aux_sym_source_file_token1,
    ACTIONS(205), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [747] = 2,
    ACTIONS(211), 1,
      aux_sym_source_file_token1,
    ACTIONS(209), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [774] = 2,
    ACTIONS(215), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [801] = 1,
    ACTIONS(217), 21,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_include,
      anon_sym_globinclude,
      anon_sym_envinclude,
      anon_sym_font_size,
      anon_sym_font_family,
      anon_sym_bold_font,
      anon_sym_italic_font,
      anon_sym_bold_italic_font,
      anon_sym_force_ltr,
      anon_sym_bell_on_tab,
      anon_sym_enable_audio_bell,
      anon_sym_visual_bell_duration,
      anon_sym_visual_bell_color,
      anon_sym_window_alert_on_bell,
      anon_sym_command_on_bell,
      anon_sym_bell_path,
      anon_sym_symbol_map,
      anon_sym_narrow_symbols,
      sym_comment,
  [825] = 3,
    STATE(28), 1,
      sym_boolean,
    ACTIONS(219), 2,
      sym_none,
      sym_string,
    ACTIONS(221), 6,
      anon_sym_y,
      anon_sym_yes,
      anon_sym_true,
      anon_sym_n,
      anon_sym_no,
      anon_sym_false,
  [841] = 4,
    ACTIONS(223), 1,
      sym_none,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(221), 3,
      anon_sym_y,
      anon_sym_n,
      anon_sym_no,
    ACTIONS(225), 3,
      anon_sym_yes,
      anon_sym_true,
      anon_sym_false,
  [858] = 3,
    STATE(27), 1,
      sym_boolean,
    ACTIONS(221), 2,
      anon_sym_y,
      anon_sym_n,
    ACTIONS(225), 4,
      anon_sym_yes,
      anon_sym_true,
      anon_sym_no,
      anon_sym_false,
  [872] = 3,
    STATE(13), 1,
      sym_boolean,
    ACTIONS(221), 2,
      anon_sym_y,
      anon_sym_n,
    ACTIONS(225), 4,
      anon_sym_yes,
      anon_sym_true,
      anon_sym_no,
      anon_sym_false,
  [886] = 3,
    STATE(24), 1,
      sym_boolean,
    ACTIONS(221), 2,
      anon_sym_y,
      anon_sym_n,
    ACTIONS(225), 4,
      anon_sym_yes,
      anon_sym_true,
      anon_sym_no,
      anon_sym_false,
  [900] = 4,
    ACTIONS(106), 1,
      aux_sym_include_token1,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_codepoints_repeat1,
  [913] = 3,
    ACTIONS(106), 1,
      aux_sym_include_token1,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_codepoints_repeat1,
  [923] = 3,
    ACTIONS(231), 1,
      sym_unicode_codepoint,
    STATE(39), 1,
      sym_unicode_range,
    STATE(61), 1,
      sym_codepoints,
  [933] = 3,
    ACTIONS(233), 1,
      sym_unicode_codepoint,
    STATE(8), 1,
      sym_unicode_range,
    STATE(11), 1,
      sym_codepoints,
  [943] = 3,
    ACTIONS(121), 1,
      aux_sym_include_token1,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_codepoints_repeat1,
  [953] = 2,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(114), 2,
      aux_sym_include_token1,
      anon_sym_COMMA,
  [961] = 3,
    ACTIONS(114), 1,
      aux_sym_include_token1,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_codepoints_repeat1,
  [971] = 1,
    ACTIONS(238), 2,
      sym_auto,
      sym_string,
  [976] = 2,
    ACTIONS(240), 1,
      sym_unicode_codepoint,
    STATE(51), 1,
      sym_unicode_range,
  [983] = 2,
    ACTIONS(242), 1,
      sym_unicode_codepoint,
    STATE(10), 1,
      sym_unicode_range,
  [990] = 1,
    ACTIONS(125), 2,
      aux_sym_include_token1,
      anon_sym_COMMA,
  [995] = 1,
    ACTIONS(244), 2,
      sym_none,
      sym_string,
  [1000] = 1,
    ACTIONS(246), 2,
      sym_none,
      sym_hex_color,
  [1005] = 1,
    ACTIONS(114), 2,
      aux_sym_include_token1,
      anon_sym_COMMA,
  [1010] = 1,
    ACTIONS(248), 2,
      sym_auto,
      sym_string,
  [1015] = 1,
    ACTIONS(250), 2,
      sym_auto,
      sym_string,
  [1020] = 1,
    ACTIONS(252), 2,
      sym_auto,
      sym_string,
  [1025] = 1,
    ACTIONS(254), 1,
      aux_sym_include_token1,
  [1029] = 1,
    ACTIONS(256), 1,
      sym_number,
  [1033] = 1,
    ACTIONS(258), 1,
      sym_string,
  [1037] = 1,
    ACTIONS(260), 1,
      sym_string,
  [1041] = 1,
    ACTIONS(262), 1,
      aux_sym_include_token1,
  [1045] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1049] = 1,
    ACTIONS(266), 1,
      aux_sym_include_token1,
  [1053] = 1,
    ACTIONS(268), 1,
      aux_sym_include_token1,
  [1057] = 1,
    ACTIONS(270), 1,
      aux_sym_include_token1,
  [1061] = 1,
    ACTIONS(272), 1,
      aux_sym_include_token1,
  [1065] = 1,
    ACTIONS(274), 1,
      sym_unicode_codepoint,
  [1069] = 1,
    ACTIONS(276), 1,
      aux_sym_include_token1,
  [1073] = 1,
    ACTIONS(278), 1,
      sym_string,
  [1077] = 1,
    ACTIONS(280), 1,
      sym_number,
  [1081] = 1,
    ACTIONS(282), 1,
      sym_string,
  [1085] = 1,
    ACTIONS(284), 1,
      sym_number,
  [1089] = 1,
    ACTIONS(286), 1,
      aux_sym_include_token1,
  [1093] = 1,
    ACTIONS(288), 1,
      aux_sym_include_token1,
  [1097] = 1,
    ACTIONS(290), 1,
      aux_sym_include_token1,
  [1101] = 1,
    ACTIONS(292), 1,
      aux_sym_include_token1,
  [1105] = 1,
    ACTIONS(294), 1,
      aux_sym_include_token1,
  [1109] = 1,
    ACTIONS(296), 1,
      aux_sym_include_token1,
  [1113] = 1,
    ACTIONS(298), 1,
      aux_sym_include_token1,
  [1117] = 1,
    ACTIONS(300), 1,
      aux_sym_include_token1,
  [1121] = 1,
    ACTIONS(302), 1,
      aux_sym_include_token1,
  [1125] = 1,
    ACTIONS(304), 1,
      aux_sym_include_token1,
  [1129] = 1,
    ACTIONS(306), 1,
      aux_sym_include_token1,
  [1133] = 1,
    ACTIONS(308), 1,
      aux_sym_include_token1,
  [1137] = 1,
    ACTIONS(310), 1,
      sym_unicode_codepoint,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 259,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 313,
  [SMALL_STATE(15)] = 340,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 394,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 475,
  [SMALL_STATE(21)] = 502,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 558,
  [SMALL_STATE(24)] = 585,
  [SMALL_STATE(25)] = 612,
  [SMALL_STATE(26)] = 639,
  [SMALL_STATE(27)] = 666,
  [SMALL_STATE(28)] = 693,
  [SMALL_STATE(29)] = 720,
  [SMALL_STATE(30)] = 747,
  [SMALL_STATE(31)] = 774,
  [SMALL_STATE(32)] = 801,
  [SMALL_STATE(33)] = 825,
  [SMALL_STATE(34)] = 841,
  [SMALL_STATE(35)] = 858,
  [SMALL_STATE(36)] = 872,
  [SMALL_STATE(37)] = 886,
  [SMALL_STATE(38)] = 900,
  [SMALL_STATE(39)] = 913,
  [SMALL_STATE(40)] = 923,
  [SMALL_STATE(41)] = 933,
  [SMALL_STATE(42)] = 943,
  [SMALL_STATE(43)] = 953,
  [SMALL_STATE(44)] = 961,
  [SMALL_STATE(45)] = 971,
  [SMALL_STATE(46)] = 976,
  [SMALL_STATE(47)] = 983,
  [SMALL_STATE(48)] = 990,
  [SMALL_STATE(49)] = 995,
  [SMALL_STATE(50)] = 1000,
  [SMALL_STATE(51)] = 1005,
  [SMALL_STATE(52)] = 1010,
  [SMALL_STATE(53)] = 1015,
  [SMALL_STATE(54)] = 1020,
  [SMALL_STATE(55)] = 1025,
  [SMALL_STATE(56)] = 1029,
  [SMALL_STATE(57)] = 1033,
  [SMALL_STATE(58)] = 1037,
  [SMALL_STATE(59)] = 1041,
  [SMALL_STATE(60)] = 1045,
  [SMALL_STATE(61)] = 1049,
  [SMALL_STATE(62)] = 1053,
  [SMALL_STATE(63)] = 1057,
  [SMALL_STATE(64)] = 1061,
  [SMALL_STATE(65)] = 1065,
  [SMALL_STATE(66)] = 1069,
  [SMALL_STATE(67)] = 1073,
  [SMALL_STATE(68)] = 1077,
  [SMALL_STATE(69)] = 1081,
  [SMALL_STATE(70)] = 1085,
  [SMALL_STATE(71)] = 1089,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1097,
  [SMALL_STATE(74)] = 1101,
  [SMALL_STATE(75)] = 1105,
  [SMALL_STATE(76)] = 1109,
  [SMALL_STATE(77)] = 1113,
  [SMALL_STATE(78)] = 1117,
  [SMALL_STATE(79)] = 1121,
  [SMALL_STATE(80)] = 1125,
  [SMALL_STATE(81)] = 1129,
  [SMALL_STATE(82)] = 1133,
  [SMALL_STATE(83)] = 1137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codepoints, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codepoints, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codepoints_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codepoints_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codepoints_repeat1, 2), SHIFT_REPEAT(47),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codepoints, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codepoints, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_range, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_range, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narrow_symbols, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_narrow_symbols, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_ltr, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_force_ltr, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narrow_symbols, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_narrow_symbols, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_map, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_map, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_globinclude, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_globinclude, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font_size, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font_size, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font_family, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font_family, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_font, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_font, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_font, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_font, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_path, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bell_path, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_on_bell, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_on_bell, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_alert_on_bell, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_alert_on_bell, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visual_bell_color, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visual_bell_color, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visual_bell_duration, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visual_bell_duration, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_audio_bell, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enable_audio_bell, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_on_tab, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bell_on_tab, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_envinclude, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_envinclude, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_italic_font, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_italic_font, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codepoints_repeat1, 2), SHIFT_REPEAT(46),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [264] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
