module.exports = grammar({
  name: "kittyconf",
  extras: $ => [
    /\s/,
    $._blank,
  ],
  rules: {
    config: $ => seq(repeat($._blank), repeat($._value)),

    // TODO: Add map and mouse_map syntax
    _value: $ => choice(
      seq($.setting, "\n"),
      $.doc_comment,
      $.comment,
    ),

    setting: $ => seq($.setting_name, optional($.setting_value)),

    setting_name: $ => /[\w_]+/,
    setting_value: $ => /.+/,

    doc_comment: $ => token(
      seq('#:', /.*/, "\n")
    ),
    comment: $ => token(
      seq('#', /.*/),
    ),

    _blank: () => field('blank', /\n/),
  }
});