// The basic structure is `key value`
// The value can be:
// - a hex color
// - a number
// - a bool, e.g. yes no
// - a string, which is anything that doesn't match the above

// Generate with `bun kitty-directives`
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

// The colorN rules are handled by their own rule
for (const name of DIRECTIVE_NAMES) {
  if (name.startsWith("color")) {
    DIRECTIVE_NAMES.delete(name);
  }
}

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
  "clear_selection",
  "copy_and_clear_or_interrupt",
  "copy_ansi_to_clipboard",
  "copy_or_interrupt",
  "copy_to_clipboard",
  "pass_selection_to_program",
  "paste",
  "show_first_command_output_on_screen",
  "show_last_command_output",
  "show_last_non_empty_command_output",
  "show_last_visited_command_output",
  "show_scrollback",
  "copy_to_buffer",
  "paste_from_buffer",
  "paste_from_clipboard",
  "paste_from_selection",
  "dump_lines_with_attrs",
  "close_shared_ssh_connections",
  "debug_config",
  "show_kitty_env_vars",
  "goto_layout",
  "last_used_layout",
  "layout_action",
  "next_layout",
  "toggle_layout",
  "remove_marker",
  "scroll_to_mark",
  "toggle_marker",
  "create_marker",
  "send_text",
  "show_kitty_doc",
  "signal_child",
  "clear_terminal",
  "combine",
  "disable_ligatures_in",
  "discard_event",
  "edit_config_file",
  "hide_macos_app",
  "hide_macos_other_apps",
  "input_unicode_character",
  "kitten",
  "kitty_shell",
  "launch",
  "load_config_file",
  "minimize_macos_window",
  "open_url",
  "open_url_with_hints",
  "remote_control",
  "set_colors",
  "sleep",
  "toggle_macos_secure_keyboard_entry",
  "no_op",
  "mouse_click_url",
  "mouse_click_url_or_select",
  "mouse_handle_click",
  "mouse_select_command_output",
  "mouse_selection",
  "mouse_show_command_output",
  "paste_selection",
  "paste_selection_or_clipboard",
  "scroll_end",
  "scroll_home",
  "scroll_line_down",
  "scroll_line_up",
  "scroll_page_down",
  "scroll_page_up",
  "scroll_prompt_to_bottom",
  "scroll_prompt_to_top",
  "scroll_to_prompt",
  "close_other_tabs_in_os_window",
  "close_tab",
  "detach_tab",
  "goto_tab",
  "move_tab_backward",
  "move_tab_forward",
  "new_tab",
  "new_tab_with_cwd",
  "next_tab",
  "previous_tab",
  "select_tab",
  "set_tab_title",
  "close_other_windows_in_tab",
  "eighth_window",
  "fifth_window",
  "first_window",
  "focus_visible_window",
  "fourth_window",
  "move_window",
  "move_window_backward",
  "move_window_forward",
  "move_window_to_top",
  "neighboring_window",
  "next_window",
  "ninth_window",
  "nth_window",
  "previous_window",
  "reset_window_sizes",
  "resize_window",
  "second_window",
  "seventh_window",
  "sixth_window",
  "swap_with_window",
  "tenth_window",
  "third_window",
  "change_font_size",
  "close_os_window",
  "close_window",
  "close_window_with_confirmation",
  "detach_window",
  "new_os_window",
  "new_os_window_with_cwd",
  "new_window",
  "new_window_with_cwd",
  "nth_os_window",
  "quit",
  "set_background_opacity",
  "start_resizing_window",
  "toggle_fullscreen",
  "toggle_maximized",
];

ACTIONS.push("no_op");

const SCROLLBACK_PAGER_KEYWORDS = [
  "INPUT_LINE_NUMBER",
  "CURSOR_LINE",
  "CURSOR_COLUMN",
];

const checked_grammar = grammar_object => {
  if (
    process.env["TREE_SITTER_KITTY_CONF_ENSURE_COMPLETE"] === "1" &&
    DIRECTIVE_NAMES.size !== 0
  ) {
    const percent_remaining = (
      100 -
      (defined_directives.size === 0
        ? 0
        : defined_directives.size / DIRECTIVE_NAMES.size) *
        100
    ).toFixed(2);

    const remaining_as_json = [...DIRECTIVE_NAMES]
      .filter(name => !defined_directives.has(name))
      .map(line => "- " + line)
      .join("\n");

    throw new Error(
      `Not all directives are defined as rules (${defined_directives.size} / ${DIRECTIVE_NAMES.size}, ${percent_remaining}% remaining)\n${remaining_as_json}`,
    );
  }

  return grammar(grammar_object);
};

const defined_directives = new Set();
const name_usages = new Set();

const _directive_check = name => {
  // There are three things to check here:
  // 1. The directive name is valid
  // 2. The directive has been defined as a rule
  // 3. The directive name hasn't been used before
  // These are safeguards against typos. The grammar won't build if you mess it up.
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

// `directive` is an addition to the DSL that makes it easy to define new Kitty directives.
// You must access it to create the rule name, then call it as a function to define the rule.
// When used as a fuction, each rule is whitespace separated. You can use square brackets
// [like so] around a rule to make it optional.
const directive = new Proxy(
  ($, name, ...values) => {
    _directive_check(name);
    const name_alias = alias(prec(1, name), $[name]);
    if (values.length === 0) {
      return name_alias;
    }
    const rules = [name_alias];
    for (const rule of values) {
      // An array indicates a sequence of consecutive optional values.
      // This may contain many values or only one value.
      if (Array.isArray(rule)) {
        if (rule.length === 0) {
          throw new Error(
            "An optional directive group must contain at least one rule",
          );
        }
        const optional_rules = [];
        for (const optional_rule of rule) {
          optional_rules.push(
            token.immediate(INLINE_WHITESPACE),
            optional_rule,
          );
        }
        rules.push(optional(seq(...optional_rules)));
      } else {
        rules.push(token.immediate(INLINE_WHITESPACE), rule);
      }
    }
    return seq(...rules);
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

// TODO: I want to make the grammar less specific. Eg if the directive takes 1-4 numbers, there's
// no reason to break after 4. Instead it can just take any number of numbers.
// There shouldn't be a distinction between floats, ints, signed numbers, numbers with units, etc.
//
// TODO: explore if adding `word` means I can get away with less explicit control over the whitespace.
//
// It's important that each directive be individually defined because certain directives will
// only interpret their input as a string even if you provide a number. The highlighting should
// reflect this.
module.exports = checked_grammar({
  name: "kittyconf",
  // Need control over whitespace because the grammar is line-based
  extras: $ => [],

  // word: $ => $.identifier,

  rules: {
    varstring_part: $ => /[^$]*/,

    // Kitty uses pathlib.Path.glob, which uses fnmatch syntax
    glob_pattern: $ =>
      repeat1(
        choice(
          $.glob_pattern_star,
          $.glob_pattern_qmark,
          $.glob_pattern_literal,
          $.glob_pattern_literal_glob_op,
          $.glob_pattern_seq,
        ),
      ),
    glob_pattern_star: $ => "*",
    glob_pattern_qmark: $ => "?",
    glob_pattern_literal_glob_op: $ => choice("[*]", "[?]"),
    glob_pattern_seq: $ => seq("[", optional("!"), /[^\]]+/, "]"),
    // One or more characters that aren't special to the glob syntax
    glob_pattern_literal: $ => /[^\*\?\[]+/,

    string: $ => /\S.+/,

    // HACK: This has to be below $.number to be lowest priority. I'm sure if I understood more
    // about how tree-sitter works I could avoid this, but alas I don't, so I can't (be bothered).
    layout_option_atom: $ => /[^\s;:=,]+/,

    // identifier: $ => /[a-zA-Z0-9_]+/,
    comment: $ => token(/#.*\n/),
  },
});
