# tree-sitter-kitty-conf

A Tree-sitter grammar for the Kitty terminal's configuration file.

The configuration file is a line-separated list of directives that control how Kitty works.

Here's a small sample of the config language.

```kitty-conf
# You can optionally store your configuration across multiple files.
# I don't know quite why you would do that, but clearly at least one person
# wanted this feature.
globinclude kitty.d/**/*.conf

# Kitty literally uses Python's `str.replace` method to replace
# the INPUT_LINE_NUMBER var, which leads to some... fun (???) hacks.
scrollback_pager less --chop-long-lines --RAW-CONTROL-CHARS +INPUT_LINE_NUMBER

# Don't need to use a patched font with Kitty!
symbol_map U+E0A0-U+E0A3,U+E0C0-U+E0C7 PowerlineSymbols

# Ligatures make code harder to read for me personally, so I never want to see them.
disable_ligatures always

font_size 11.0
cursor_beam_thickness 1.5
cursor_blink_interval -1
```

There's no formal definition of the language outside of the code and the documentation, so you need to reference both when building this grammar.

It's better to be slightly more permissive than Kitty in order to provide correct highlights and queries, and leave the error reporting up to the terminal itself.
