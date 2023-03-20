// The basic structure is `key value`
// The value can be:
// - a hex color
// - a number
// - a boolean, e.g. yes no
// - a string, which is anything that doesn't match the above

// TODO: update this comment
// This is an array of every known Kitty option. It can be generated with the following command:
//     npm run print-config-options
// Do not remove any option names from this set. Overrides are created by using the `override`
// function defined below the set, for convenience and to make sure the set is never out of sync.
const DIRECTIVE_NAMES = new Set([
  "action_alias",
  "active_border_color",
  "active_tab_background",
  "active_tab_font_style",
  "active_tab_foreground",
  "active_tab_title_template",
  "allow_cloning",
  "allow_hyperlinks",
  "allow_remote_control",
  "background",
  "background_image",
  "background_image_layout",
  "background_image_linear",
  "background_opacity",
  "background_tint",
  "background_tint_gaps",
  "bell_border_color",
  "bell_on_tab",
  "bell_path",
  "bold_font",
  "bold_italic_font",
  "box_drawing_scale",
  "clear_all_mouse_actions",
  "clear_all_shortcuts",
  "click_interval",
  "clipboard_control",
  "clipboard_max_size",
  "clone_source_strategies",
  "close_on_child_death",
  "color0",
  "color1",
  "color2",
  "color3",
  "color4",
  "color5",
  "color6",
  "color7",
  "color8",
  "color9",
  "color10",
  "color11",
  "color12",
  "color13",
  "color14",
  "color15",
  "color16",
  "color17",
  "color18",
  "color19",
  "color20",
  "color21",
  "color22",
  "color23",
  "color24",
  "color25",
  "color26",
  "color27",
  "color28",
  "color29",
  "color30",
  "color31",
  "color32",
  "color33",
  "color34",
  "color35",
  "color36",
  "color37",
  "color38",
  "color39",
  "color40",
  "color41",
  "color42",
  "color43",
  "color44",
  "color45",
  "color46",
  "color47",
  "color48",
  "color49",
  "color50",
  "color51",
  "color52",
  "color53",
  "color54",
  "color55",
  "color56",
  "color57",
  "color58",
  "color59",
  "color60",
  "color61",
  "color62",
  "color63",
  "color64",
  "color65",
  "color66",
  "color67",
  "color68",
  "color69",
  "color70",
  "color71",
  "color72",
  "color73",
  "color74",
  "color75",
  "color76",
  "color77",
  "color78",
  "color79",
  "color80",
  "color81",
  "color82",
  "color83",
  "color84",
  "color85",
  "color86",
  "color87",
  "color88",
  "color89",
  "color90",
  "color91",
  "color92",
  "color93",
  "color94",
  "color95",
  "color96",
  "color97",
  "color98",
  "color99",
  "color100",
  "color101",
  "color102",
  "color103",
  "color104",
  "color105",
  "color106",
  "color107",
  "color108",
  "color109",
  "color110",
  "color111",
  "color112",
  "color113",
  "color114",
  "color115",
  "color116",
  "color117",
  "color118",
  "color119",
  "color120",
  "color121",
  "color122",
  "color123",
  "color124",
  "color125",
  "color126",
  "color127",
  "color128",
  "color129",
  "color130",
  "color131",
  "color132",
  "color133",
  "color134",
  "color135",
  "color136",
  "color137",
  "color138",
  "color139",
  "color140",
  "color141",
  "color142",
  "color143",
  "color144",
  "color145",
  "color146",
  "color147",
  "color148",
  "color149",
  "color150",
  "color151",
  "color152",
  "color153",
  "color154",
  "color155",
  "color156",
  "color157",
  "color158",
  "color159",
  "color160",
  "color161",
  "color162",
  "color163",
  "color164",
  "color165",
  "color166",
  "color167",
  "color168",
  "color169",
  "color170",
  "color171",
  "color172",
  "color173",
  "color174",
  "color175",
  "color176",
  "color177",
  "color178",
  "color179",
  "color180",
  "color181",
  "color182",
  "color183",
  "color184",
  "color185",
  "color186",
  "color187",
  "color188",
  "color189",
  "color190",
  "color191",
  "color192",
  "color193",
  "color194",
  "color195",
  "color196",
  "color197",
  "color198",
  "color199",
  "color200",
  "color201",
  "color202",
  "color203",
  "color204",
  "color205",
  "color206",
  "color207",
  "color208",
  "color209",
  "color210",
  "color211",
  "color212",
  "color213",
  "color214",
  "color215",
  "color216",
  "color217",
  "color218",
  "color219",
  "color220",
  "color221",
  "color222",
  "color223",
  "color224",
  "color225",
  "color226",
  "color227",
  "color228",
  "color229",
  "color230",
  "color231",
  "color232",
  "color233",
  "color234",
  "color235",
  "color236",
  "color237",
  "color238",
  "color239",
  "color240",
  "color241",
  "color242",
  "color243",
  "color244",
  "color245",
  "color246",
  "color247",
  "color248",
  "color249",
  "color250",
  "color251",
  "color252",
  "color253",
  "color254",
  "color255",
  "command_on_bell",
  "confirm_os_window_close",
  "copy_on_select",
  "cursor",
  "cursor_beam_thickness",
  "cursor_blink_interval",
  "cursor_shape",
  "cursor_stop_blinking_after",
  "cursor_text_color",
  "cursor_underline_thickness",
  "default_pointer_shape",
  "detect_urls",
  "dim_opacity",
  "disable_ligatures",
  "draw_minimal_borders",
  "dynamic_background_opacity",
  "editor",
  "enable_audio_bell",
  "enabled_layouts",
  "env",
  "exe_search_path",
  "file_transfer_confirmation_bypass",
  "focus_follows_mouse",
  "font_family",
  "font_features",
  "font_size",
  "force_ltr",
  "foreground",
  "hide_window_decorations",
  "inactive_border_color",
  "inactive_tab_background",
  "inactive_tab_font_style",
  "inactive_tab_foreground",
  "inactive_text_alpha",
  "initial_window_height",
  "initial_window_width",
  "input_delay",
  "italic_font",
  "kitten_alias",
  "kitty_mod",
  "linux_display_server",
  "listen_on",
  "macos_colorspace",
  "macos_custom_beam_cursor",
  "macos_hide_from_tasks",
  "macos_menubar_title_max_length",
  "macos_option_as_alt",
  "macos_quit_when_last_window_closed",
  "macos_show_window_title_in",
  "macos_thicken_font",
  "macos_titlebar_color",
  "macos_traditional_fullscreen",
  "macos_window_resizable",
  "map",
  "mark1_background",
  "mark1_foreground",
  "mark2_background",
  "mark2_foreground",
  "mark3_background",
  "mark3_foreground",
  "modify_font",
  "mouse_hide_wait",
  "mouse_map",
  "narrow_symbols",
  "open_url_with",
  "paste_actions",
  "placement_strategy",
  "pointer_shape_when_dragging",
  "pointer_shape_when_grabbed",
  "remember_window_size",
  "remote_control_password",
  "repaint_delay",
  "resize_debounce_time",
  "resize_draw_strategy",
  "resize_in_steps",
  "scrollback_fill_enlarged_window",
  "scrollback_lines",
  "scrollback_pager",
  "scrollback_pager_history_size",
  "select_by_word_characters",
  "select_by_word_characters_forward",
  "selection_background",
  "selection_foreground",
  "shell",
  "shell_integration",
  "show_hyperlink_targets",
  "single_window_margin_width",
  "startup_session",
  "strip_trailing_spaces",
  "symbol_map",
  "sync_to_monitor",
  "tab_activity_symbol",
  "tab_bar_align",
  "tab_bar_background",
  "tab_bar_edge",
  "tab_bar_margin_color",
  "tab_bar_margin_height",
  "tab_bar_margin_width",
  "tab_bar_min_tabs",
  "tab_bar_style",
  "tab_fade",
  "tab_powerline_style",
  "tab_separator",
  "tab_switch_strategy",
  "tab_title_max_length",
  "tab_title_template",
  "term",
  "touch_scroll_multiplier",
  "undercurl_style",
  "update_check_interval",
  "url_color",
  "url_excluded_characters",
  "url_prefixes",
  "url_style",
  "visual_bell_color",
  "visual_bell_duration",
  "visual_window_select_characters",
  "watcher",
  "wayland_titlebar_color",
  "wheel_scroll_min_lines",
  "wheel_scroll_multiplier",
  "window_alert_on_bell",
  "window_border_width",
  "window_logo_alpha",
  "window_logo_path",
  "window_logo_position",
  "window_margin_width",
  "window_padding_width",
  "window_resize_step_cells",
  "window_resize_step_lines",
]);

// These are special directives that aren't in the list above, but should be
// treated the same as those directives.
DIRECTIVE_NAMES.add("include");
DIRECTIVE_NAMES.add("globinclude");
DIRECTIVE_NAMES.add("envinclude");

// These are all case-insensitive, because of course they fucking are...
// ... I'm just going to pretend they're not, until it becomes an issue.
const FUNCTIONAL_KEYS = [
  "escape",
  "enter",
  "tab",
  "backspace",
  "insert",
  "delete",
  "left",
  "right",
  "up",
  "down",
  "page_up",
  "page_down",
  "home",
  "end",
  "caps_lock",
  "scroll_lock",
  "num_lock",
  "print_screen",
  "pause",
  "menu",
  "f1",
  "f2",
  "f3",
  "f4",
  "f5",
  "f6",
  "f7",
  "f8",
  "f9",
  "f10",
  "f11",
  "f12",
  "f13",
  "f14",
  "f15",
  "f16",
  "f17",
  "f18",
  "f19",
  "f20",
  "f21",
  "f22",
  "f23",
  "f24",
  "f25",
  "f26",
  "f27",
  "f28",
  "f29",
  "f30",
  "f31",
  "f32",
  "f33",
  "f34",
  "f35",
  "kp_0",
  "kp_1",
  "kp_2",
  "kp_3",
  "kp_4",
  "kp_5",
  "kp_6",
  "kp_7",
  "kp_8",
  "kp_9",
  "kp_decimal",
  "kp_divide",
  "kp_multiply",
  "kp_subtract",
  "kp_add",
  "kp_enter",
  "kp_equal",
  "kp_separator",
  "kp_left",
  "kp_right",
  "kp_up",
  "kp_down",
  "kp_page_up",
  "kp_page_down",
  "kp_home",
  "kp_end",
  "kp_insert",
  "kp_delete",
  "kp_begin",
  "media_play",
  "media_pause",
  "media_play_pause",
  "media_reverse",
  "media_stop",
  "media_fast_forward",
  "media_rewind",
  "media_track_next",
  "media_track_previous",
  "media_record",
  "lower_volume",
  "raise_volume",
  "mute_volume",
  "left_shift",
  "left_control",
  "left_alt",
  "left_super",
  "left_hyper",
  "left_meta",
  "right_shift",
  "right_control",
  "right_alt",
  "right_super",
  "right_hyper",
  "right_meta",
  "iso_level3_shift",
  "iso_level5_shift",
];

const MOUSE_BUTTONS = [
  "left",
  "middle",
  "right",
  "b1",
  "b2",
  "b3",
  "b4",
  "b5",
  "b6",
  "b7",
  "b8",
];

const INLINE_WHITESPACE = /[\t ]+/;

const KEYBOARD_MODIFIERS = [
  "⌃",
  "control",
  "ctrl",
  "control",
  "⇧",
  "shift",
  "⌥",
  "alt",
  "option",
  "alt",
  "opt",
  "alt",
  "⌘",
  "super",
  "command",
  "super",
  "cmd",
  "super",
  "kitty_mod",
  "kitty",
];

const ACTIONS = [
  "pass_selection_to_program",
  "new_window",
  "new_tab",
  "new_os_window",
  "new_window_with_cwd",
  "new_tab_with_cwd",
  "new_os_window_with_cwd",
  "launch",
  "mouse_handle_click",
  "send_text",
  "run_kitten",
  "run_simple_kitten",
  "kitten",
  "open_url",
  "goto_tab",
  "detach_window",
  "close_window_with_confirmation",
  "detach_tab",
  "set_background_opacity",
  "goto_layout",
  "toggle_layout",
  "kitty_shell",
  "show_kitty_doc",
  "set_tab_title",
  "set_font_size",
  "signal_child",
  "change_font_size",
  "clear_terminal",
  "copy_to_buffer",
  "paste_from_buffer",
  "paste",
  "neighboring_window",
  "resize_window",
  "move_window",
  "pipe",
  "set_colors",
  "remote_control",
  "nth_os_window",
  "nth_window",
  "scroll_to_prompt",
  "visual_window_select_action_trigger",
  "sleep",
  "disable_ligatures_in",
  "layout_action",
  "toggle_marker",
  "scroll_to_mark",
  "mouse_selection",
  "load_config_file",
];

// Sequence of whitespace-separated rules
const seq_ws = (...rules) =>
  seq(
    ...rules.flatMap((rule, index) => {
      if (index === 0) {
        return [rule];
      }
      return [INLINE_WHITESPACE, rule];
    }),
  );

const checked_grammar = grammar_object => {
  if (grammar_object?.check && DIRECTIVE_NAMES.size !== 0) {
    const percent_defined = (
      (defined_directives.size === 0
        ? 0
        : defined_directives.size / DIRECTIVE_NAMES.size) * 100
    ).toFixed(2);

    const remaining_as_json = [...DIRECTIVE_NAMES]
      .filter(name => !defined_directives.has(name))
      .map(line => "- " + line)
      .join("\n");

    throw new Error(
      `Not all directives are defined as rules (${defined_directives.size} / ${DIRECTIVE_NAMES.size}, ${percent_defined}%)\n${remaining_as_json}`,
    );
  }
  if ("check" in grammar_object) {
    delete grammar_object.check;
  }
  return grammar(grammar_object);
};

const defined_directives = new Set();
const name_usages = new Set();

const _directive_check = name => {
  if (!DIRECTIVE_NAMES.has(name)) {
    throw new Error(
      `The directive name '${name}' was defined, but isn't a valid directive name. Did you make a typo or forget to update the list of rules?`,
    );
  }

  if (!defined_directives.has(name)) {
    throw new Error(
      `The directive name '${name}' was defined in a rule and is a valid name, but there is no rule with the same name.`,
    );
  }

  if (name_usages.has(name)) {
    throw new Error(
      `The directive name '${name}' has been used twice. Search for the name in the grammar file to locate the usages.`,
    );
  }

  name_usages.add(name);
};

const directive_literal = (name, ...values) => {
  _directive_check(name);
  return seq(name, ...values);
};

const directive = new Proxy(
  (name, ...values) => {
    _directive_check(name);
    const name_alias = alias(prec(1, name), name);
    if (values.length === 0) {
      return name_alias;
    }
    return seq_ws(name_alias, ...values);
  },
  {
    // Getting a property is done when defining a new rule. This should be done only once per
    // rule name, so this has to be tracked in another set. It can only use valid names, so that
    // also has to be checked.
    get(_, name) {
      if (!DIRECTIVE_NAMES.has(name)) {
        throw new Error(
          `The rule '${name}' was defined as a directive rule, but isn't a valid directive name. Did you make a typo or forget to update the list of rules?`,
        );
      }

      if (defined_directives.has(name)) {
        throw new Error(
          `The directive name '${name}' has been used twice. Search for the name in the grammar file to locate the usages.`,
        );
      }

      defined_directives.add(name);

      return name;
    },
  },
);

/*
mouse_map button-name event-type modes action
symbol_map codepoints Font Family Name
narrow_symbols codepoints [optionally the number of cells]
map keys action args
map keys combine sep action1 [sep action2...]
*/
module.exports = checked_grammar({
  name: "kittyconf",
  // Need control over whitespace because the grammar is line-based
  extras: $ => [],

  // TODO: When this is done, uncomment this to make sure it *stays* done
  // check: true,

  rules: {
    source_file: $ =>
      repeat(
        choice(
          // Newlines and whitespace are always acceptable
          /\s/,
          // Comments take a whole line
          $.comment,
          // Directives must be on their own lines
          $._directive,
        ),
      ),

    _directive: $ =>
      seq(
        choice(...[...defined_directives].map(rule_name => $[rule_name])),
        optional("\n"),
      ),

    // BEGIN DIRECTIVES
    // Accesses to the magic `directive` object register the directive so
    // it can't get out of sync with the `_directive` rule.
    // Calling `directive` is a whitespace-separated sequence. The directive
    // name must come first. All directive names must be valid and can only be
    // used once.

    [directive.include]: $ => directive("include", $.string),
    [directive.globinclude]: $ => directive("globinclude", $.string),
    [directive.envinclude]: $ => directive("envinclude", $.string),

    [directive.font_size]: $ => directive("font_size", $.number),

    [directive.font_family]: $ =>
      directive("font_family", choice($.string, $.auto)),

    [directive.bold_font]: $ =>
      directive("bold_font", choice($.string, $.auto)),

    [directive.italic_font]: $ =>
      directive("italic_font", choice($.string, $.auto)),

    [directive.bold_italic_font]: $ =>
      directive("bold_italic_font", choice($.string, $.auto)),

    [directive.force_ltr]: $ => directive("force_ltr", $.boolean),

    [directive.bell_on_tab]: $ =>
      directive("bell_on_tab", choice($.string, $.boolean, $.none)),

    [directive.enable_audio_bell]: $ =>
      directive("enable_audio_bell", $.boolean),

    [directive.visual_bell_duration]: $ =>
      directive("visual_bell_duration", $.number),

    [directive.visual_bell_color]: $ =>
      directive("visual_bell_color", choice($.hex_color, $.none)),

    [directive.window_alert_on_bell]: $ =>
      directive("window_alert_on_bell", $.boolean),

    [directive.command_on_bell]: $ =>
      directive("command_on_bell", choice($.boolean, $.none)),

    [directive.bell_path]: $ =>
      directive("bell_path", choice($.string, $.none)),

    [directive.symbol_map]: $ =>
      directive("symbol_map", $.codepoints, $.string),

    [directive.narrow_symbols]: $ =>
      seq(
        directive("narrow_symbols"),
        INLINE_WHITESPACE,
        $.codepoints,
        optional(seq(token.immediate(INLINE_WHITESPACE), $.number)),
      ),

    // TODO: test
    [directive.disable_ligatures]: $ =>
      directive("disable_ligatures", $.disable_ligatures_value),
    disable_ligatures_value: $ => choice("never", "always", "cursor"),

    // TODO: test
    [directive.font_features]: $ =>
      directive("font_features", $.postscript_font_name, $.string),
    postscript_font_name: $ => /\S+/,

    // NOTE: Mapping over all the possible color indices to define the rules individually.
    // There are easier ways to do this, but this works with the current error checking
    // system I made, so I'm keeping this until it can be refactored. Ideally it wouldn't
    // generate an additional 256 rules that could really just be a regex.
    // TODO: test
    ...Array.from({ length: 256 }, (_, index) => `color${index}`).reduce(
      (acc, curr) => ({
        ...acc,
        [directive[curr]]: $ => directive(curr, $.hex_color),
      }),
      {},
    ),

    // ------------------
    // GENERIC DATA TYPES
    // ------------------

    none: $ => "none",
    auto: $ => "auto",

    codepoints: $ =>
      seq(
        choice($.unicode_codepoint, $.unicode_range),
        repeat(seq(",", choice($.unicode_codepoint, $.unicode_range))),
      ),
    unicode_range: $ => seq($.unicode_codepoint, "-", $.unicode_codepoint),
    unicode_codepoint: $ => /U\+[A-Fa-f0-9]+/,

    // Keeping this here so I remember to uncomment it if required
    // signed_number: $ => seq(optional(choice("+", "-")), $.number),

    // Mostly from the Python grammar because Kitty uses Python's `float`
    // to parse numbers. `float` has slightly different syntax to the literal
    // syntax, so that's why it's not the exact same.
    number: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        choice(
          digits,
          seq(digits, ".", optional(digits), optional(exponent)),
          seq(optional(digits), ".", digits, optional(exponent)),
          seq(digits, exponent),
        ),
      );
    },
    boolean: $ => choice("y", "yes", "true", "n", "no", "false"),
    hex_color: $ => /#[0-9a-fA-F]{6}/,

    string: $ => /\S.+/,

    comment: $ => token(/#.*\n/),
  },
});
