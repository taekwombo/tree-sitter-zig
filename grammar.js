'use strict';

const BASIC_TYPES = require('./grammar/basic-types.js');

const PREC = {
    STATEMENT: 1,
    ASSIGNMENT_EXPRESSION: 0,
    BOOLEAN_OR_EXPRESSION: 1,
    BOOLEAN_AND_EXPRESSION: 2,
    COMPARISON_EXPRESSION: 3,
    BITWISE_EXPRESSION: 4,
    BIT_SHIFT_EXPRESSION: 5,
    ADDITION_EXPRESSION: 6,
    MULTIPLICATION_EXPRESSION: 7,
    PREFIX_EXPRESSION: 8,
    _: 9,
    __: 10,
    SUFFIX_EXPRESSION: 11,
};

module.exports = grammar({
    name: 'zig',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    inline: $ => [
        $.container_members,
        $.container_declarations,
        // $.top_level_declaration,

        $.primary_expression,

        $.assignment_operator,
        $.comparison_operator,
        $.bitwise_operator,
        $.bit_shift_operator,
        $.addition_operator,
        $.multiplication_operator,
        $.prefix_operator,
        $.suffix_operator,

        $.identifier_list,
        $.switch_prong_list,
        $.assembly_input_list,
        $.assembly_output_list,
        $.string_list,
        $.parameter_declaration_list,
        $.expression_list,

        $.literal,
        $.mb_utf8_literal,
        $.string_character,
        $.string_literal_multiline,
        $.string_literal_singleline,
    ],

    rules: {
        // TODO
        root: $ => repeat($.container_members),

        /*
         * ContainerMembers <- ContainerDeclarations (ContainerField COMMA)* (ContainerField / ContainerDeclarations)
         */
        container_members: $ => seq(
            $.container_declarations,
            repeat(seq(
                $.container_field,
                ',',
            )),
            choice(
                $.container_field,
                $.container_declarations,
            ),
        ),
        /*
         * ContainerDeclarations
         *     <- TestDecl ContainerDeclarations
         *      / TopLevelComptime ContainerDeclarations
         *      / doc_comment? KEYWORD_pub? TopLevelDecl ContainerDeclarations
         */
        container_declarations: $ => choice(
            $.test_declaration,
            $.top_level_comptime,
            seq(
                optional('pub'),
                $.top_level_declaration,
            ),
        ),
        /*
         * TestDecl <- doc_comment? KEYWORD_test STRINGLITERALSINGLE? Block
         */
        test_declaration: $ => seq(
            'test',
            $.string_literal_singleline,
            $.block,
        ),

        /*
         * TopLevelComptime <- doc_comment? KEYWORD_comptime BlockExpr
         */
        top_level_comptime: $ => seq(
            'comptime',
            $.block_expression,
        ),

        /*
         * TopLevelDecl
         *     <- (KEYWORD_export / KEYWORD_extern STRINGLITERALSINGLE? / (KEYWORD_inline / KEYWORD_noinline))? FnProto (SEMICOLON / Block)
         *      / (KEYWORD_export / KEYWORD_extern STRINGLITERALSINGLE?)? KEYWORD_threadlocal? VarDecl
         *      / KEYWORD_usingnamespace Expr SEMICOLON
         */
        top_level_declaration: $ => choice(
            $.top_function_declaration,
            $.top_variable_declaration,
            $.top_usingnamespace_declaration,
        ),
        top_function_declaration: $ => seq(
            optional(choice(
                'export',
                $.extern_ref,
                choice(
                    'inline',
                    'noinline',
                ),
            )),
            $.function_prototype,
            choice(
                ';',
                $.block,
            ),
        ),
        top_variable_declaration: $ => seq(
            optional(choice(
                'export',
                $.extern_ref,
            )),
            optional('threadlocal'),
            $.variable_declaration,
        ),
        top_usingnamespace_declaration: $ => seq(
            'usingnamespace',
            $._expression,
            ';',
        ),

        /*
         * FnProto <- KEYWORD_fn IDENTIFIER? LPAREN ParamDeclList RPAREN ByteAlign? LinkSection? CallConv? EXCLAMATIONMARK? TypeExpr
         */
        function_prototype: $ => seq(
            'fn',
            optional($.identifier),
            '(',
            optional($.parameter_declaration_list),
            ')',
            optional($.byte_align),
            optional($.link_section),
            optional($.call_convention),
            optional('!'),
            // TODO rename into type expression
            $.basic_type,
        ),

        /*
         * VarDecl <- (KEYWORD_const / KEYWORD_var) IDENTIFIER (COLON TypeExpr)? ByteAlign? LinkSection? (EQUAL Expr)? SEMICOLON
         */
        variable_declaration: $ => seq(
            choice(
                'const',
                'var',
            ),
            $.identifier,
            optional(seq(
                ':',
                // TODO: rename into type expression
                $.basic_type,
            )),
            optional($.byte_align),
            optional($.link_section),
            optional(seq(
                '=',
                $._expression,
            )),
            ';',
        ),

        /*
         * ContainerField <- doc_comment? KEYWORD_comptime? IDENTIFIER (COLON (KEYWORD_anytype / TypeExpr) ByteAlign?)? (EQUAL Expr)?
         */
        container_field: $ => seq(
            optional('comptime'),
            $.identifier,
            // TODO: ": u8" extract into rule
            optional(seq(
                ':',
                // TODO: rename into type expression
                $.basic_type,
                optional($.byte_align),
            )),
            optional(seq(
                '=',
                $._expression,
            )),
        ),

        /*
         * Statement
         *     <- KEYWORD_comptime? VarDecl
         *      / KEYWORD_comptime BlockExprStatement
         *      / KEYWORD_nosuspend BlockExprStatement
         *      / KEYWORD_suspend BlockExprStatement
         *      / KEYWORD_defer BlockExprStatement
         *      / KEYWORD_errdefer Payload? BlockExprStatement
         *      / IfStatement
         *      / LabeledStatement
         *      / SwitchExpr
         *      / AssignExpr SEMICOLON
         */
        statement: $ => prec(PREC.STATEMENT, choice(
            seq(
                optional('comptime'),
                $.variable_declaration,
            ),
            // $.if_statement,
            // $.labeled_statement,
            $.switch_expression,
            seq(
                $._expression,
                ';',
            ),
        )),
        // if_statement: $ => seq(
        // labeled_statement: $ => seq(
        // loop_statement: $ => seq(
        // for_statement: $ => seq(
        // while_statement: $ => seq(
        // block_expression_statement: $ => seq(

        /*
         * BlockExpr <- BlockLabel? Block
         */
        block_expression: $ => seq(
            optional($.block_label),
            $.block,
        ),

        _expression: $ => choice(
            $.primary_expression,
            $.function_call_expression,
            $.assignment_expression,
            $.boolean_or_expression,
            $.boolean_and_expression,
            $.comparison_expression,
            $.bitwise_expression,
            $.bit_shift_expression,
            $.addition_expression,
            $.multiplication_expression,
            $.prefix_expression,
            $.block,
            $.if_expression,
            $.loop_expression,
            $.suffix_expression,
            $.switch_expression,
        ),

        /*
         * AssignExpr <- Expr (AssignOp Expr)?
         */
        assignment_expression: $ => prec.right(PREC.ASSIGNMENT_EXPRESSION, seq(
            $._expression,
            $.assignment_operator,
            $._expression,
        )),

        /*
         * BoolOrExpr <- BoolAndExpr (KEYWORD_or BoolAndExpr)*
         */
        boolean_or_expression: $ => prec.left(PREC.BOOLEAN_OR_EXPRESSION, seq(
            $._expression,
            'or',
            $._expression,
        )),

        /*
         * BoolAndExpr <- CompareExpr (KEYWORD_and CompareExpr)*
         */
        boolean_and_expression: $ => prec.left(PREC.BOOLEAN_AND_EXPRESSION, seq(
            $._expression,
            'and',
            $._expression,
        )),

        /*
         * CompareExpr <- BitwiseExpr (CompareOp BitwiseExpr)?
         */
        comparison_expression: $ => prec.right(PREC.COMPARISON_EXPRESSION, seq(
            $._expression,
            $.comparison_operator,
            $._expression,
        )),

        /*
         * BitwiseExpr <- BitShiftExpr (BitwiseOp BitShiftExpr)*
         */
        bitwise_expression: $ => prec.left(PREC.BITWISE_EXPRESSION, seq(
            $._expression,
            $.bitwise_operator,
            $._expression,
        )),

        /*
         * BitShiftExpr <- AdditionExpr (BitShiftOp AdditionExpr)*
         */
        bit_shift_expression: $ => prec.left(PREC.BIT_SHIFT_EXPRESSION, seq(
            $._expression,
            $.bit_shift_operator,
            $._expression,
        )),

        /*
         * AdditionExpr <- MultiplyExpr (AdditionOp MultiplyExpr)*
         */
        addition_expression: $ => prec.left(PREC.ADDITION_EXPRESSION, seq(
            $._expression,
            $.addition_operator,
            $._expression,
        )),

        /*
         * MultiplyExpr <- PrefixExpr (MultiplyOp PrefixExpr)*
         */
        multiplication_expression: $ => prec.left(PREC.MULTIPLICATION_EXPRESSION, seq(
            $._expression,
            $.multiplication_operator,
            $._expression,
        )),
        
        /*
         * PrefixExpr <- PrefixOp* PrimaryExpr
         */
        prefix_expression: $ => prec.right(PREC.PREFIX_EXPRESSION, seq(
            $.prefix_operator,
            $._expression,
        )),

        // primary_expression: $ => (),

        /*
         * IfExpr <- IfPrefix Expr (KEYWORD_else Payload? Expr)?
         */
        if_expression: $ => prec.right(seq(
            $.if_prefix,
            $._expression,
            optional(seq(
                'else',
                optional($.payload),
                $._expression,
            )),
        )),

        /*
         * Block <- LBRACE Statement* RBRACE
         */
        block: $ => seq(
            '{',
                repeat($.statement),
            '}',
        ),

        loop_expression: $ => seq(
            optional('inline'),
            choice(
                $.for_expression,
                $.while_expression,
            ),
        ),

        for_expression: $ => prec.right(seq(
            $.for_prefix,
            $._expression,
            optional(seq(
                'else',
                $._expression,
            )),
        )),

        while_expression: $ => prec.right(seq(
            $.while_prefix,
            $._expression,
            optional(seq(
                'else',
                optional($.payload),
                $._expression,
            )),
        )),

        // curly_suffix_expression: $ => (),

        /*
         * InitList
         *     <- LBRACE FieldInit (COMMA FieldInit)* COMMA? RBRACE
         *      / LBRACE Expr (COMMA Expr)* COMMA? RBRACE
         *      / LBRACE RBRACE
         */
        init_list: $ => seq(
            '{',
            optional(choice(
                commaSeparatedDangle($.field_init),
                commaSeparatedDangle($._expression),
            )),
            '}',
        ),

        // type_expression: $ => (),
        // error_union_expression: $ => (),

        /*
         * SuffixExpr
         *     <- KEYWORD_async PrimaryTypeExpr SuffixOp* FnCallArguments
         *      / PrimaryTypeExpr (SuffixOp / FnCallArguments)*
         */
        suffix_expression: $ => prec.left(PREC.SUFFIX_EXPRESSION, seq(
            $._expression,
            $.suffix_operator,
        )),

        /*
         * SuffixExpr
         *     <- KEYWORD_async PrimaryTypeExpr SuffixOp* FnCallArguments
         *      / PrimaryTypeExpr (SuffixOp / FnCallArguments)*
         */
        async_function_call_expression: $ => seq(
            'async',
            $.function_call_expression,
        ),

        /*
         * SuffixExpr
         *     <- KEYWORD_async PrimaryTypeExpr SuffixOp* FnCallArguments
         *      / PrimaryTypeExpr (SuffixOp / FnCallArguments)*
         */
        function_call_expression: $ => prec.left(PREC.SUFFIX_EXPRESSION, seq(
            $._expression,
            $.function_call_arguments,
        )),

        /*
         * PrimaryTypeExpr
         *     <- BUILTINIDENTIFIER FnCallArguments
         *      / CHAR_LITERAL
         *      / ContainerDecl
         *      / DOT IDENTIFIER
         *      / DOT InitList
         *      / ErrorSetDecl
         *      / FLOAT
         *      / FnProto
         *      / GroupedExpr
         *      / LabeledTypeExpr
         *      / IDENTIFIER
         *      / IfTypeExpr
         *      / INTEGER
         *      / KEYWORD_comptime TypeExpr
         *      / KEYWORD_error DOT IDENTIFIER
         *      / KEYWORD_false
         *      / KEYWORD_null
         *      / KEYWORD_anyframe
         *      / KEYWORD_true
         *      / KEYWORD_undefined
         *      / KEYWORD_unreachable
         *      / STRINGLITERAL
         *      / SwitchExpr
         */
        primary_expression: $ => choice(
            $.literal,
            $.identifier,
            $.builtin_identifier,
            seq(
                '.',
                $.init_list,
            ),
        ),

        // container_declaration: $ => (),
        // error_set_declaration: $ => (),
        // grouped_expression: $ => (),
        // if_type_expression: $ => (),
        // labeled_type_expression: $ => (),
        // loop_type_expression: $ => (),
        // for_type_expression: $ => (),
        // wihle_type_expression: $ => (),

        /*
         * SwitchExpr <- KEYWORD_switch LPAREN Expr RPAREN LBRACE SwitchProngList RBRACE
         */
        switch_expression: $ => seq(
            'switch',
            '(',
            $._expression,
            ')',
            '{',
            $.switch_prong_list,
            '}',
        ),

        /*
         * BreakLabel <- COLON IDENTIFIER
         */
        break_label: $ => seq(
            ':',
            $.identifier,
        ),

        /*
         * BlockLabel <- IDENTIFIER COLON
         */
        block_label: $ => seq(
            $.identifier,
            ':',
        ),

        /*
         * FieldInit <- DOT IDENTIFIER EQUAL Expr
         */
        field_init: $ => seq(
            '.',
            $.identifier,
            '=',
            $._expression,
        ),

        /*
         * WhileContinueExpr <- COLON LPAREN AssignExpr RPAREN
         */
        while_continue_expression: $ => seq(
            ':',
            '(',
            // TODO: change to assignment_expression (or not - needs confirmation)
            $._expression,
            ')',
        ),

        /*
         * LinkSection <- KEYWORD_linksection LPAREN Expr RPAREN
         */
        link_section: $ => seq(
            'linksection',
            '(',
            $._expression,
            ')',
        ),

        /*
         * CallConv <- KEYWORD_callconv LPAREN Expr RPAREN
         */
        call_convention: $ => seq(
            'callconv',
            '(',
            $._expression,
            ')',
        ),

        /*
         * ParamDecl
         *     <- doc_comment? (KEYWORD_noalias / KEYWORD_comptime)? (IDENTIFIER COLON)? ParamType
         *      / DOT3
         */
        parameter_declaration: $ => choice(
            '...',
            seq(
                optional(choice(
                    'noalias',
                    'comptime',
                )),
                optional(seq(
                    $.identifier,
                    ':',
                )),
                // TODO: rename into type expression
                choice(
                    'anytype',
                    $.basic_type,
                ),
            ),
        ),

        /*
         * IfPrefix <- KEYWORD_if LPAREN Expr RPAREN PtrPayload?
         */
        if_prefix: $ => seq(
            'if',
            '(',
            $._expression,
            ')',
            optional($.pointer_payload),
        ),

        /*
         * WhilePrefix <- KEYWORD_while LPAREN Expr RPAREN PtrPayload? WhileContinueExpr?
         */
        while_prefix: $ => seq(
            'while',
            '(',
            $._expression,
            ')',
            optional($.pointer_payload),
            optional($.while_continue_expression),
        ),

        /*
         * ForPrefix <- KEYWORD_for LPAREN Expr RPAREN PtrIndexPayload
         */
        for_prefix: $ => seq(
            'for',
            '(',
            $._expression,
            ')',
            $.pointer_index_payload,
        ),

        /*
         * Payload <- PIPE IDENTIFIER PIPE
         */
        payload: $ => seq(
            '|',
            $.identifier,
            '|',
        ),

        /*
         * PtrPayload <- PIPE ASTERISK? IDENTIFIER PIPE
         */
        pointer_payload: $ => seq(
            '|',
            optional('*'),
            $.identifier,
            '|',
        ),

        /*
         * PtrIndexPayload <- PIPE ASTERISK? IDENTIFIER (COMMA IDENTIFIER)? PIPE
         */
        pointer_index_payload: $ => seq(
            '|',
            optional('*'),
            $.identifier,
            optional(seq(
                ',',
                $.identifier,
            )),
            '|',
        ),

        /*
         * SwitchProng <- SwitchCase EQUALRARROW PtrPayload? AssignExpr
         */
        switch_prong: $ => seq(
            $.switch_case,
            '=>',
            optional($.pointer_payload),
            $._expression,
        ),

        /*
         *
         * SwitchCase
         *     <- SwitchItem (COMMA SwitchItem)* COMMA?
         *      / KEYWORD_else
         */
        switch_case: $ => choice(
            commaSeparatedDangle($.switch_item),
            'else',
        ),

        /*
         * SwitchItem <- Expr (DOT3 Expr)?
         */
        switch_item: $ => seq(
            $._expression,
            optional(seq(
                '...',
                $._expression,
            )),
        ),

        /*
         * AssignOp
         *     <- ASTERISKEQUAL
         *      / SLASHEQUAL
         *      / PERCENTEQUAL
         *      / PLUSEQUAL
         *      / MINUSEQUAL
         *      / LARROW2EQUAL
         *      / RARROW2EQUAL
         *      / AMPERSANDEQUAL
         *      / CARETEQUAL
         *      / PIPEEQUAL
         *      / ASTERISKPERCENTEQUAL
         *      / PLUSPERCENTEQUAL
         *      / MINUSPERCENTEQUAL
         *      / EQUAL
         */
        assignment_operator: $ => choice(
            '=',
            '*=',
            '/=',
            '%=',
            '+=',
            '-=',
            '<<=',
            '>>=',
            '&=',
            '^=',
            '|=',
        ),

        /*
         * CompareOp
         *     <- EQUALEQUAL
         *      / EXCLAMATIONMARKEQUAL
         *      / LARROW
         *      / RARROW
         *      / LARROWEQUAL
         *      / RARROWEQUAL
         */
        comparison_operator: $ => choice(
            '==',
            '!=',
            '<',
            '>',
            '<=',
            '>=',
        ),

        /*
         * BitwiseOp
         *     <- AMPERSAND
         *      / CARET
         *      / PIPE
         *      / KEYWORD_orelse
         *      / KEYWORD_catch Payload?
         */
        bitwise_operator: $ => choice(
            '&',
            '^',
            '|',
            'orelse',
            seq(
                'catch',
                optional($.payload),
            ),
        ),

        /*
         * BitShiftOp
         *     <- LARROW2
         *      / RARROW2
         */
        bit_shift_operator: $ => choice(
            '<<',
            '>>',
        ),

        /*
         * AdditionOp
         *     <- PLUS
         *      / MINUS
         *      / PLUS2
         *      / PLUSPERCENT
         *      / MINUSPERCENT
         */
        addition_operator: $ => choice(
            '+',
            '-',
            '++',
            '+%',
            '-%',
        ),

        /*
         * MultiplyOp
         *     <- PIPE2
         *      / ASTERISK
         *      / SLASH
         *      / PERCENT
         *      / ASTERISK2
         *      / ASTERISKPERCENT
         */
        multiplication_operator: $ => choice(
            '*',
            '/',
            '%',
            '**',
            '*%',
            '||',
        ),

        /*
         * PrefixOp
         *     <- EXCLAMATIONMARK
         *      / MINUS
         *      / TILDE
         *      / MINUSPERCENT
         *      / AMPERSAND
         *      / KEYWORD_try
         *      / KEYWORD_await
         */
        prefix_operator: $ => choice(
            '!',
            '-',
            '~',
            '-%',
            '&',
            'try',
            'await',
        ),

        /*
         * PrefixTypeOp
         *     <- QUESTIONMARK
         *      / KEYWORD_anyframe MINUSRARROW
         *      / SliceTypeStart (ByteAlign / KEYWORD_const / KEYWORD_volatile / KEYWORD_allowzero)*
         *      / PtrTypeStart (KEYWORD_align LPAREN Expr (COLON INTEGER COLON INTEGER)? RPAREN / KEYWORD_const / KEYWORD_volatile / KEYWORD_allowzero)*
         *      / ArrayTypeStart
         */
        prefix_type_operator: $ => choice(
            '?',
            seq(
                'anyframe',
                '->',
            ),
        ),

        /*
         * SuffixOp
         *     <- LBRACKET Expr (DOT2 (Expr? (COLON Expr)?)?)? RBRACKET
         *      / DOT IDENTIFIER
         *      / DOTASTERISK
         *      / DOTQUESTIONMARK
         */
        suffix_operator: $ => choice(
            seq(
                '[',
                optional(seq(
                    '..',
                    optional($._expression),
                    optional(seq(
                        ':',
                        $._expression,
                    )),
                )),
                ']',
            ),
            seq(
                '.',
                $.identifier,
            ),
            '.*',
            '.?',
        ),

        /*
         * FnCallArguments <- LPAREN ExprList RPAREN
         */
        function_call_arguments: $ => seq(
            '(',
            optional($.expression_list),
            ')',
        ),

        /*
         * SliceTypeStart <- LBRACKET (COLON Expr)? RBRACKET
         */
        slice_type_start: $ => seq(
            '[',
            optional(seq(
                ':',
                $._expression,
            )),
            ']',
        ),

        /*
         * PtrTypeStart
         *     <- ASTERISK
         *      / ASTERISK2
         *      / LBRACKET ASTERISK (LETTERC / COLON Expr)? RBRACKET
         */
        pointer_type_start: $ => choice(
            '*',
            '**',
            seq(
                '[',
                '*',
                choice(
                    'c',
                    seq(
                        ':',
                        $._expression,
                    ),
                ),
                ']',
            ),

        ),

        /*
         * ArrayTypeStart <- LBRACKET Expr (COLON Expr)? RBRACKET
         */
        array_type_start: $ => seq(
            '[',
            $._expression,
            optional(seq(
                ':',
                $._expression,
            )),
            ']',
        ),

        // container_declaration_auto
        // container_declaration_type

        /*
         * ByteAlign <- KEYWORD_align LPAREN Expr RPAREN
         */
        byte_align: $ => seq(
            'align',
            '(',
            $._expression,
            ')',
        ),

        /*
         * IdentifierList <- (doc_comment? IDENTIFIER COMMA)* (doc_comment? IDENTIFIER)?
         */
        identifier_list: $ => commaSeparatedDangle(
            $.identifier,
        ),

        /*
         * SwitchProngList <- (SwitchProng COMMA)* SwitchProng?
         */
        switch_prong_list: $ => commaSeparatedDangle(
            $.switch_prong,
        ),

        /*
         * AsmOutputList <- (AsmOutputItem COMMA)* AsmOutputItem?
         */
        assembly_output_list: $ => commaSeparatedDangle(
            $.assembly_output_item,
        ),

        /*
         * AsmInputList <- (AsmInputItem COMMA)* AsmInputItem?
         */
        assembly_input_list: $ => commaSeparatedDangle(
            $.assembly_input_item,
        ),

        /*
         * StringList <- (STRINGLITERAL COMMA)* STRINGLITERAL?
         */
        string_list: $ => commaSeparatedDangle(
            $.string_literal,
        ),

        /*
         * ParamDeclList <- (ParamDecl COMMA)* ParamDecl?
         */
        parameter_declaration_list: $ => commaSeparatedDangle(
            $.parameter_declaration,
        ),

        /*
         * ExprList <- (Expr COMMA)* Expr?
         */
        expression_list: $ => commaSeparatedDangle(
            $._expression,
        ),
        
        /*
         * AsmOutput <- COLON AsmOutputList AsmInput?
         */
        assembly_output: $ => seq(
            ':',
            $.assembly_output_list,
            optional($.assembly_input),
        ),

        /*
         * AsmOutputItem <- LBRACKET IDENTIFIER RBRACKET STRINGLITERAL LPAREN (MINUSRARROW TypeExpr / IDENTIFIER) RPAREN
         */
        assembly_output_item: $ => seq(
            '[',
            $.identifier,
            ']',
            $.string_literal,
            '(',
            choice(
                seq(
                    '->',
                    // TODO: rename into type expression
                    $.basic_type,
                ),
                $.identifier,
            ),
            ')',
        ),

        /*
         * AsmInput <- COLON AsmInputList AsmClobbers?
         */
        assembly_input: $ => seq(
            ':',
            $.assembly_input_list,
            optional($.assembly_clobbers),
        ),

        /*
         * AsmInputItem <- LBRACKET IDENTIFIER RBRACKET STRINGLITERAL LPAREN Expr RPAREN
         */
        assembly_input_item: $ => seq(
            '[',
            $.identifier,
            ']',
            $.string_literal,
            '(',
            $._expression,
            ')',
        ),

        /*
         * AsmClobbers <- COLON StringList
         */
        assembly_clobbers: $ => seq(':', $.string_list),

        basic_type: $ => choice(
            ...BASIC_TYPES,
        ),

        type_name: $ => $.identifier,

        extern_ref: $ => seq(
            'extern',
            optional($.string_literal_singleline),
        ),

        literal: $ => choice(
            $.null_literal,
            $.undefined_literal,
            $.boolean_literal,
            $.string_literal,
            $.integer_literal,
            $.float_literal,
            $.character_literal,
        ),

        undefined_literal: $ => 'undefined',

        null_literal: $ => 'null',

        boolean_literal: $ => choice('true', 'false'),

        /*
         * char_char
         *     <- mb_utf8_literal
         *      / char_escape
         *      / ascii_char_not_nl_slash_squote
         *
         * CHAR_LITERAL <- "'" char_char "'" skip
         */
        character_literal: $ => seq(
            '\'',
            choice(
                $.mb_utf8_literal,
                $.character_escape,
                /[^\n\\']/,
            ),
            '\''
        ),

        /*
         * char_escape
         *     <- "\\x" hex hex
         *      / "\\u{" hex+ "}"
         *      / "\\" [nr\\t'"]
         */
        character_escape: $ => choice(
            /\\x[A-Fa-f0-9]{2}/,
            /\\u{[A-Fa-f0-9]+}/,
            /\\[nr\\t'"]/,
        ),

        /*
         * mb_utf8_literal <-
         *        oxF4      ox80_ox8F ox80_oxBF ox80_oxBF
         *      / oxF1_oxF3 ox80_oxBF ox80_oxBF ox80_oxBF
         *      / oxF0      ox90_0xBF ox80_oxBF ox80_oxBF
         *      / oxEE_oxEF ox80_oxBF ox80_oxBF
         *      / oxED      ox80_ox9F ox80_oxBF
         *      / oxE1_oxEC ox80_oxBF ox80_oxBF
         *      / oxE0      oxA0_oxBF ox80_oxBF
         *      / oxC2_oxDF ox80_oxBF
         *
         * https://lemire.me/blog/2018/05/09/how-quickly-can-you-check-that-a-string-is-valid-unicode-utf-8/
         */
        mb_utf8_literal: $ => choice(
            /\xF4[\x80-\x8F][\x80-\xBF][\x80-\xBF]/,
            /[\xF1-\xF3][\x80-\xBF][\x80-\xBF][\x80-\xBF]/,
            /\xF0[\x90-\xBF][\x80-\xBF][\x80-\xBF]/,
            /[\xEE-\xEF][\x80-\xBF][\x80-\xBF]/,
            /\xED[\x80-\x9F][\x80-\xBF]/,
            /[\xE1-\xEC][\x80-\xBF][\x80-\xBF]/,
            /\xE0[\xA0-\xBF][\x80-\xBF]/,
            /[\xC2-\xDF][\x80-\xBF]/,
        ),

        /*
         * string_char
         *     <- char_escape
         *      / [^\\"\n]
         */
        string_character: $ => choice(
            $.character_escape,
            /[^\\"\n]+/,
        ),

        /*
         * STRINGLITERALSINGLE <- "\"" string_char* "\"" skip
         */
        string_literal_singleline: $ => seq(
            '"',
            repeat($.string_character),
            '"',
        ),

        /*
         * line_string <- ("\\\\" [^\n]* [ \n]*)+
         */
        string_literal_multiline: $ => prec.right(repeat1(
            /\\\\[^\n]*\n*/,
        )),

        /*
         * STRINGLITERAL
         *     <- STRINGLITERALSINGLE
         *      / (line_string                 skip)+
         */
        string_literal: $ => choice(
            $.string_literal_multiline,
            $.string_literal_singleline,
        ),

        /*
         * FLOAT
         *     <- "0x" hex_int "." hex_int ([pP] [-+]? dec_int)? skip
         *      /      dec_int "." dec_int ([eE] [-+]? dec_int)? skip
         *      / "0x" hex_int [pP] [-+]? dec_int skip
         *      /      dec_int [eE] [-+]? dec_int skip
         */
        float_literal: $ => choice(
            /0x[A-Fa-f0-9]+(_?[A-Fa-f0-9]+)*\.[A-Fa-f0-9]+(_?[A-Fa-f0-9]+)*([pP][-+]?([0-9]+(_?[0-9]+)*))?/,
            /[0-9]+(_?[0-9]+)*\.[0-9]+(_?[0-9]+)*([pP][-+]?([0-9]+(_?[0-9]+)*))?/,
            /0x[A-Fa-f0-9](_?[A-Fa-f0-9])*[pP][-+]?[0-9](_?[0-9]+)*/,
            /[0-9]+(_?[0-9]+)*[pP][-+]?[0-9](_?[0-9]+)*/,
        ),

        /*
         * INTEGER
         *     <- "0b" bin_int skip
         *      / "0o" oct_int skip
         *      / "0x" hex_int skip
         *      /      dec_int   skip
         */
        integer_literal: $ => choice(
            /0b[01]+(_?[01]+)*/,
            /0o[0-7]+(_?[0-7]+)*/,
            /[0-9]+(_?[0-9]+)*/,
            /0x[A-Fa-f0-9]+(_?[A-Fa-f0-9]+)*/,
        ),

        /*
         * IDENTIFIER
         *    <- !keyword [A-Za-z_] [A-Za-z0-9_]* skip
         *     / "@\"" string_char* "\""                            skip
         */
        identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

        /*
         * BUILTINIDENTIFIER <- "@"[A-Za-z_][A-Za-z0-9_]* skip
         */
        builtin_identifier: $ => /@[A-Za-z_][A-Za-z0-9_]*/,

        /* 
         * For now, do not differentiate between comment types.
         *
         * line_comment <- '//' ![!/][^\n]* / '////' [^\n]*
         * doc_comment <- ('///' [^\n]* [ \n]*)+
         * container_doc_comment <- ('//!' [^\n]* [ \n]*)+
         */
        comment: $ => /\/\/.*/,
    },
});

function commaSeparatedDangle(rule) {
    return seq(
        rule,
        repeat(seq(
            ',',
            rule,
        )),
        optional(','),
    );
}

function commaSeparated(rule) {
    return seq(
        rule,
        repeat(seq(
            ',',
            rule,
        )),
    );
}
