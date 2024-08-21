/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "CODEOWNERS",

  rules: {
    source_file: ($) => repeat($._definition),
    _definition: ($) => choice($.comment, $.ownership_rule, $.empty_line),
    comment: ($) => /#.*\n/,
    ownership_rule: ($) => seq($.path, $.owners),
    path: ($) => choice(/[^ ]+/, seq('"', /[^"]+/, '"')),
    owners: ($) => repeat1($.owner),
    owner: ($) => /@[^ ]+/,
    empty_line: ($) => /\s*\n/,
  },
});
