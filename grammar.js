const DIGITS = token(sep1(/[0-9]+/, /_+/))
const PREC = {
  COMMA: -1,
  DECLARATION: 1,
  COMMENT: 1,
  ASSIGN: 0,
  OR: 2,
  AND: 3,
  PLUS: 4,
  REL: 5,
  TIMES: 6,
  NOT: 7,
};


module.exports = grammar({
    name: 'sql',

    extras: $ => [/\s\n]/, /\s/, $.comment],

    rules: {
        // TODO: add the actual grammar rules
        program: $ => $.statement,

        comment: $ => /--.*\n/,

        keyword_select: _ => make_keyword("select"),
        keyword_distinct: _ => make_keyword("distinct"),
        keyword_all: _ => make_keyword("all"),
        keyword_from: _ => make_keyword("from"),
        keyword_where: _ => make_keyword("where"),

        select: $ => seq(
            $.keyword_select,
            optional(choice(
                $.keyword_distinct,
                $.keyword_all,
            )),
            $.select_expression
        ),

        from: $ => seq(
            $.keyword_from,
            $.table_expression,
            optional(list_of($.column_def, ",", false)),
        ),

        select_expression: $ => choice(
            "*",
            list_of($.select_item, ",", false)
        ),

        select_item: $ => choice(
            $.expression
        ),

        expression: $ => choice(
            $.binary_expression,
            $.primary_expression,
        ),

        primary_expression: $ => choice(
            $._literal,
            $._identifier,
        ),

        binary_expression: $ => choice(
          ...[
          ['>', PREC.REL],
          ['<', PREC.REL],
          ['=', PREC.REL],
          ['<>', PREC.REL],
          ['!=', PREC.REL],
          ['<=', PREC.REL],
          ['>=', PREC.REL],
          ['AND', PREC.AND],
          ['OR', PREC.OR],
          ['+', PREC.PLUS],
          ['-', PREC.PLUS],
          ['*', PREC.TIMES],
          ['/', PREC.TIMES],
          ['%', PREC.TIMES],
        ].map(([operator, precedence]) =>
          prec.left(precedence, seq(
            field('left', $.expression),
            field('operator', operator),
            field('right', $.expression)
          ))
        )),

        table_expression: $ => seq(
            optional(seq(
                $.schema_name,
                "."
            )),
            $.table_name,
        ),

        _identifier: _ => /[a-zA-Z_$][0-9a-zA-Z_]*/,

        schema_name: $ => $._identifier,
        table_name: $ => $._identifier,

        column_def: $ => seq(
            "(",
            "TODO",
            ")"
        ),


        _literal: $ => choice(
            $.number_literal,
            $.string_literal,
        ),

        number_literal: $ => token(DIGITS),

        string_literal: $ => choice(
            seq("'", "'"),
            seq("'", $._string_content, "'")
        ),
            
        _string_content: $ => repeat1(
            // TODO: support escape sequences
            token.immediate(/[^']+/),
        ),

        statement: $ => choice($.select_statement),

        where: $ => seq(
            $.keyword_where,
            $.expression
        ),

        select_statement: $ => seq(
            $.select,
            optional($.from),
            optional($.where),
        ),
    }
});

function make_keyword(word) {
    return new RegExp(word + "|" + word.toUpperCase());
}

function any_amount_of() {
    return repeat(seq(...arguments));
}

function list_of(match, sep, trailing) {
    return trailing
        ? seq(match, any_amount_of(sep, match), optional(sep))
        : seq(match, any_amount_of(sep, match));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
