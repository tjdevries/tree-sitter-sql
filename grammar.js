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
            $._identifier
        ),

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

        statement: $ => choice($.select_statement),

        where: $ => seq(
            $.keyword_where
        ),

        select_statement: $ => seq(
            $.select,
            $.from,
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
