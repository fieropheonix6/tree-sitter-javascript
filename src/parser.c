#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 1
#define STATE_COUNT 510
#define SYMBOL_COUNT 98
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0

enum {
    anon_sym_LT = 1,
    anon_sym_COMMA = 2,
    anon_sym_GT = 3,
    anon_sym_extends = 4,
    anon_sym_LPAREN = 5,
    anon_sym_RPAREN = 6,
    anon_sym_any = 7,
    anon_sym_number = 8,
    anon_sym_boolean = 9,
    anon_sym_string = 10,
    anon_sym_symbol = 11,
    anon_sym_void = 12,
    anon_sym_DOT = 13,
    anon_sym_LBRACE = 14,
    anon_sym_RBRACE = 15,
    anon_sym_SEMI = 16,
    anon_sym_LBRACK = 17,
    anon_sym_RBRACK = 18,
    anon_sym_PIPE = 19,
    anon_sym_AMP = 20,
    anon_sym_EQ_GT = 21,
    anon_sym_new = 22,
    anon_sym_typeof = 23,
    anon_sym_this = 24,
    anon_sym_QMARK = 25,
    anon_sym_COLON = 26,
    anon_sym_public = 27,
    anon_sym_private = 28,
    anon_sym_protected = 29,
    anon_sym_DOT_DOT_DOT = 30,
    anon_sym_yield = 31,
    sym_comment = 32,
    sym_string_literal = 33,
    sym_numeric_literal = 34,
    sym_identifier = 35,
    sym__line_break = 36,
    sym_type_parameters = 37,
    sym_type_parameter = 38,
    sym_constraint = 39,
    sym_type_arguments = 40,
    sym_type = 41,
    sym_union_or_intersection_type = 42,
    sym_intersection_or_primary_type = 43,
    sym_primary_type = 44,
    sym_parenthesized_type = 45,
    sym_predefined_type = 46,
    sym_type_reference = 47,
    sym_type_or_namespace_name = 48,
    sym_object_type = 49,
    sym_type_body = 50,
    sym_type_member_list = 51,
    sym_type_member = 52,
    sym_array_type = 53,
    sym_tuple_type = 54,
    sym_tuple_element_types = 55,
    sym_tuple_element_type = 56,
    sym_union_type = 57,
    sym_intersection_type = 58,
    sym_function_type = 59,
    sym_constructor_type = 60,
    sym_type_query = 61,
    sym_type_query_expression = 62,
    sym_this_type = 63,
    sym_property_signature = 64,
    sym_property_name = 65,
    sym_type_annotation = 66,
    sym_call_signature = 67,
    sym_parameter_list = 68,
    sym_required_parameter_list = 69,
    sym_required_parameter = 70,
    sym_accessibility_modifier = 71,
    sym_binding_identifier_or_pattern = 72,
    sym_optional_parameter_list = 73,
    sym_optional_parameter = 74,
    sym_rest_parameter = 75,
    sym_construct_signature = 76,
    sym_index_signature = 77,
    sym_method_signature = 78,
    sym_identifier_reference = 79,
    sym_binding_identifier = 80,
    sym_binding_pattern = 81,
    sym_array_binding_pattern = 82,
    sym_elision = 83,
    sym_binding_elision_element = 84,
    sym_binding_property = 85,
    sym_binding_element = 86,
    sym_single_name_binding = 87,
    sym_binding_rest_element = 88,
    sym_object_binding_pattern = 89,
    aux_sym_type_parameters_repeat1 = 90,
    aux_sym_type_arguments_repeat1 = 91,
    aux_sym_tuple_element_types_repeat1 = 92,
    aux_sym_required_parameter_list_repeat1 = 93,
    aux_sym_optional_parameter_list_repeat1 = 94,
    aux_sym_array_binding_pattern_repeat1 = 95,
    aux_sym_elision_repeat1 = 96,
    aux_sym_object_binding_pattern_repeat1 = 97,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_LT] = "<",
    [anon_sym_COMMA] = ",",
    [anon_sym_GT] = ">",
    [anon_sym_extends] = "extends",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_any] = "any",
    [anon_sym_number] = "number",
    [anon_sym_boolean] = "boolean",
    [anon_sym_string] = "string",
    [anon_sym_symbol] = "symbol",
    [anon_sym_void] = "void",
    [anon_sym_DOT] = ".",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_SEMI] = ";",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_PIPE] = "|",
    [anon_sym_AMP] = "&",
    [anon_sym_EQ_GT] = "=>",
    [anon_sym_new] = "new",
    [anon_sym_typeof] = "typeof",
    [anon_sym_this] = "this",
    [anon_sym_QMARK] = "?",
    [anon_sym_COLON] = ":",
    [anon_sym_public] = "public",
    [anon_sym_private] = "private",
    [anon_sym_protected] = "protected",
    [anon_sym_DOT_DOT_DOT] = "...",
    [anon_sym_yield] = "yield",
    [sym_comment] = "comment",
    [sym_string_literal] = "string_literal",
    [sym_numeric_literal] = "numeric_literal",
    [sym_identifier] = "identifier",
    [sym__line_break] = "_line_break",
    [sym_type_parameters] = "type_parameters",
    [sym_type_parameter] = "type_parameter",
    [sym_constraint] = "constraint",
    [sym_type_arguments] = "type_arguments",
    [sym_type] = "type",
    [sym_union_or_intersection_type] = "union_or_intersection_type",
    [sym_intersection_or_primary_type] = "intersection_or_primary_type",
    [sym_primary_type] = "primary_type",
    [sym_parenthesized_type] = "parenthesized_type",
    [sym_predefined_type] = "predefined_type",
    [sym_type_reference] = "type_reference",
    [sym_type_or_namespace_name] = "type_or_namespace_name",
    [sym_object_type] = "object_type",
    [sym_type_body] = "type_body",
    [sym_type_member_list] = "type_member_list",
    [sym_type_member] = "type_member",
    [sym_array_type] = "array_type",
    [sym_tuple_type] = "tuple_type",
    [sym_tuple_element_types] = "tuple_element_types",
    [sym_tuple_element_type] = "tuple_element_type",
    [sym_union_type] = "union_type",
    [sym_intersection_type] = "intersection_type",
    [sym_function_type] = "function_type",
    [sym_constructor_type] = "constructor_type",
    [sym_type_query] = "type_query",
    [sym_type_query_expression] = "type_query_expression",
    [sym_this_type] = "this_type",
    [sym_property_signature] = "property_signature",
    [sym_property_name] = "property_name",
    [sym_type_annotation] = "type_annotation",
    [sym_call_signature] = "call_signature",
    [sym_parameter_list] = "parameter_list",
    [sym_required_parameter_list] = "required_parameter_list",
    [sym_required_parameter] = "required_parameter",
    [sym_accessibility_modifier] = "accessibility_modifier",
    [sym_binding_identifier_or_pattern] = "binding_identifier_or_pattern",
    [sym_optional_parameter_list] = "optional_parameter_list",
    [sym_optional_parameter] = "optional_parameter",
    [sym_rest_parameter] = "rest_parameter",
    [sym_construct_signature] = "construct_signature",
    [sym_index_signature] = "index_signature",
    [sym_method_signature] = "method_signature",
    [sym_identifier_reference] = "identifier_reference",
    [sym_binding_identifier] = "binding_identifier",
    [sym_binding_pattern] = "binding_pattern",
    [sym_array_binding_pattern] = "array_binding_pattern",
    [sym_elision] = "elision",
    [sym_binding_elision_element] = "binding_elision_element",
    [sym_binding_property] = "binding_property",
    [sym_binding_element] = "binding_element",
    [sym_single_name_binding] = "single_name_binding",
    [sym_binding_rest_element] = "binding_rest_element",
    [sym_object_binding_pattern] = "object_binding_pattern",
    [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
    [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
    [aux_sym_tuple_element_types_repeat1] = "tuple_element_types_repeat1",
    [aux_sym_required_parameter_list_repeat1] = "required_parameter_list_repeat1",
    [aux_sym_optional_parameter_list_repeat1] = "optional_parameter_list_repeat1",
    [aux_sym_array_binding_pattern_repeat1] = "array_binding_pattern_repeat1",
    [aux_sym_elision_repeat1] = "elision_repeat1",
    [aux_sym_object_binding_pattern_repeat1] = "object_binding_pattern_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_extends] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_any] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_number] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_boolean] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_symbol] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_void] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_AMP] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_EQ_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_new] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_typeof] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_this] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_QMARK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_protected] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT_DOT_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_yield] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
        .structural = false,
        .extra = true,
    },
    [sym_string_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_numeric_literal] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__line_break] = {
        .visible = false,
        .named = true,
        .structural = false,
        .extra = true,
    },
    [sym_type_parameters] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_constraint] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_arguments] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_union_or_intersection_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_intersection_or_primary_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_primary_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_parenthesized_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_predefined_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_reference] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_or_namespace_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_object_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_body] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_member_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_member] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_array_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_tuple_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_tuple_element_types] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_tuple_element_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_union_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_intersection_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_function_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_constructor_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_query] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_query_expression] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_this_type] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_property_signature] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_property_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_annotation] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_call_signature] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_required_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_required_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_accessibility_modifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_identifier_or_pattern] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_optional_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_optional_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_rest_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_construct_signature] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_index_signature] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_method_signature] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_identifier_reference] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_identifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_pattern] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_array_binding_pattern] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_elision] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_elision_element] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_property] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_element] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_single_name_binding] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binding_rest_element] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_object_binding_pattern] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_type_parameters_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_type_arguments_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_tuple_element_types_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_required_parameter_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_optional_parameter_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_array_binding_pattern_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_elision_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_object_binding_pattern_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '0')
                ADVANCE(21);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'n')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(sym__line_break);
        case 3:
            if (lookahead == '\"')
                ADVANCE(4);
            if (lookahead == '\\')
                ADVANCE(5);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(3);
            LEX_ERROR();
        case 4:
            ACCEPT_TOKEN(sym_string_literal);
        case 5:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(3);
            LEX_ERROR();
        case 6:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(sym_identifier);
        case 7:
            ACCEPT_TOKEN(anon_sym_AMP);
        case 8:
            if (lookahead == '\'')
                ADVANCE(4);
            if (lookahead == '\\')
                ADVANCE(9);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(8);
            LEX_ERROR();
        case 9:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(8);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 11:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 12:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 13:
            if (lookahead == '.')
                ADVANCE(14);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 14:
            if (lookahead == '.')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 16:
            if (lookahead == '*')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(20);
            LEX_ERROR();
        case 17:
            if (lookahead == '*')
                ADVANCE(18);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(17);
            LEX_ERROR();
        case 18:
            if (lookahead == '/')
                ADVANCE(19);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(17);
            LEX_ERROR();
        case 19:
            ACCEPT_TOKEN(sym_comment);
        case 20:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(20);
            ACCEPT_TOKEN(sym_comment);
        case 21:
            if (lookahead == '.')
                ADVANCE(22);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == 'x')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_numeric_literal);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_numeric_literal);
        case 23:
            if (lookahead == '.')
                ADVANCE(22);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_numeric_literal);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(25);
            LEX_ERROR();
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'F') ||
                ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(25);
            ACCEPT_TOKEN(sym_numeric_literal);
        case 26:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 27:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 28:
            ACCEPT_TOKEN(anon_sym_LT);
        case 29:
            if (lookahead == '>')
                ADVANCE(30);
            LEX_ERROR();
        case 30:
            ACCEPT_TOKEN(anon_sym_EQ_GT);
        case 31:
            ACCEPT_TOKEN(anon_sym_GT);
        case 32:
            ACCEPT_TOKEN(anon_sym_QMARK);
        case 33:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 34:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 35:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'n')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == 'y')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_any);
        case 38:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'o')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'o')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'l')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'n')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_boolean);
        case 45:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == 'x')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'n')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'd')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 's')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_extends);
        case 52:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(53);
            if (lookahead == 'u')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'w')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_new);
        case 55:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'm')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'b')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'r')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_number);
        case 60:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'r')
                ADVANCE(61);
            if (lookahead == 'u')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'o')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'v')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_private);
        case 67:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'c')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'd')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_protected);
        case 74:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'b')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'l')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'c')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_public);
        case 79:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'y')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'r')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'n')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'g')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_string);
        case 85:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'm')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'b')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'o')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'l')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_symbol);
        case 90:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == 'h')
                ADVANCE(91);
            if (lookahead == 'y')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 's')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_this);
        case 94:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'p')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'o')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'f')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_typeof);
        case 99:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'o')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'd')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_void);
        case 103:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'i')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier);
        case 105:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'l')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'd')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            ACCEPT_TOKEN(anon_sym_yield);
        case 108:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 109:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 110:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 111:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            LEX_ERROR();
        case 112:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == 'y')
                ADVANCE(103);
            LEX_ERROR();
        case 113:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 115:
            if (lookahead == 'x')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 't')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'e')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'n')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'd')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 's')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_extends);
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '>')
                ADVANCE(31);
            LEX_ERROR();
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(115);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('c' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(52);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('c' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 126:
            if (lookahead == '.')
                ADVANCE(14);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '0')
                ADVANCE(21);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(129);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 129:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 135:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(135);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('c' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(140);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 140:
            if ((lookahead == '$') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == 'u')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(29);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '0')
                ADVANCE(21);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 148:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == '?')
                ADVANCE(32);
            LEX_ERROR();
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '?')
                ADVANCE(32);
            LEX_ERROR();
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('c' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(52);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 157:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(6);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '0')
                ADVANCE(21);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(129);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('c' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(52);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '0')
                ADVANCE(21);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == 'y')
                ADVANCE(103);
            LEX_ERROR();
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == 'n')
                ADVANCE(176);
            if (lookahead == 's')
                ADVANCE(182);
            LEX_ERROR();
        case 176:
            if (lookahead == 'u')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'm')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 'b')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'e')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'r')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            ACCEPT_TOKEN(anon_sym_number);
        case 182:
            if (lookahead == 't')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'r')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 'i')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'n')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 'g')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            ACCEPT_TOKEN(anon_sym_string);
        case 188:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
            if (lookahead == '\n')
                ADVANCE(2);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            LEX_ERROR();
        case 191:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(191);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(16);
            LEX_ERROR();
        case 192:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if ((lookahead == '$') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('c' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                (lookahead == 'w') ||
                (lookahead == 'x') ||
                (lookahead == 'z'))
                ADVANCE(6);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(126);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '0')
                ADVANCE(21);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(52);
            if (lookahead == 'p')
                ADVANCE(60);
            if (lookahead == 's')
                ADVANCE(79);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'v')
                ADVANCE(99);
            if (lookahead == 'y')
                ADVANCE(103);
            if (lookahead == '{')
                ADVANCE(108);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 193:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 194:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 195:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 199:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 200:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 201:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 203:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(203);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 204:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == ';')
                ADVANCE(27);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(115);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(34);
            LEX_ERROR();
        case 207:
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(26);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '?')
                ADVANCE(32);
            if (lookahead == '[')
                ADVANCE(33);
            if (lookahead == ']')
                ADVANCE(34);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0},
    [1] = {.lex_state = 111},
    [2] = {.lex_state = 112},
    [3] = {.lex_state = 113},
    [4] = {.lex_state = 114},
    [5] = {.lex_state = 114},
    [6] = {.lex_state = 122},
    [7] = {.lex_state = 123},
    [8] = {.lex_state = 124},
    [9] = {.lex_state = 122},
    [10] = {.lex_state = 125},
    [11] = {.lex_state = 127},
    [12] = {.lex_state = 128},
    [13] = {.lex_state = 124},
    [14] = {.lex_state = 130},
    [15] = {.lex_state = 112},
    [16] = {.lex_state = 127},
    [17] = {.lex_state = 131},
    [18] = {.lex_state = 133},
    [19] = {.lex_state = 122},
    [20] = {.lex_state = 134},
    [21] = {.lex_state = 135},
    [22] = {.lex_state = 127},
    [23] = {.lex_state = 127},
    [24] = {.lex_state = 136},
    [25] = {.lex_state = 134},
    [26] = {.lex_state = 135},
    [27] = {.lex_state = 137},
    [28] = {.lex_state = 136},
    [29] = {.lex_state = 124},
    [30] = {.lex_state = 112},
    [31] = {.lex_state = 127},
    [32] = {.lex_state = 136},
    [33] = {.lex_state = 122},
    [34] = {.lex_state = 124},
    [35] = {.lex_state = 127},
    [36] = {.lex_state = 122},
    [37] = {.lex_state = 124},
    [38] = {.lex_state = 127},
    [39] = {.lex_state = 122},
    [40] = {.lex_state = 122},
    [41] = {.lex_state = 138},
    [42] = {.lex_state = 127},
    [43] = {.lex_state = 139},
    [44] = {.lex_state = 124},
    [45] = {.lex_state = 127},
    [46] = {.lex_state = 125},
    [47] = {.lex_state = 130},
    [48] = {.lex_state = 133},
    [49] = {.lex_state = 141},
    [50] = {.lex_state = 127},
    [51] = {.lex_state = 139},
    [52] = {.lex_state = 135},
    [53] = {.lex_state = 142},
    [54] = {.lex_state = 143},
    [55] = {.lex_state = 144},
    [56] = {.lex_state = 145},
    [57] = {.lex_state = 146},
    [58] = {.lex_state = 112},
    [59] = {.lex_state = 141},
    [60] = {.lex_state = 147},
    [61] = {.lex_state = 147},
    [62] = {.lex_state = 146},
    [63] = {.lex_state = 148},
    [64] = {.lex_state = 141},
    [65] = {.lex_state = 147},
    [66] = {.lex_state = 148},
    [67] = {.lex_state = 148},
    [68] = {.lex_state = 149},
    [69] = {.lex_state = 150},
    [70] = {.lex_state = 147},
    [71] = {.lex_state = 151},
    [72] = {.lex_state = 147},
    [73] = {.lex_state = 151},
    [74] = {.lex_state = 146},
    [75] = {.lex_state = 152},
    [76] = {.lex_state = 147},
    [77] = {.lex_state = 148},
    [78] = {.lex_state = 153},
    [79] = {.lex_state = 154},
    [80] = {.lex_state = 147},
    [81] = {.lex_state = 125},
    [82] = {.lex_state = 130},
    [83] = {.lex_state = 147},
    [84] = {.lex_state = 133},
    [85] = {.lex_state = 155},
    [86] = {.lex_state = 142},
    [87] = {.lex_state = 143},
    [88] = {.lex_state = 141},
    [89] = {.lex_state = 143},
    [90] = {.lex_state = 124},
    [91] = {.lex_state = 137},
    [92] = {.lex_state = 124},
    [93] = {.lex_state = 137},
    [94] = {.lex_state = 156},
    [95] = {.lex_state = 156},
    [96] = {.lex_state = 157},
    [97] = {.lex_state = 156},
    [98] = {.lex_state = 142},
    [99] = {.lex_state = 133},
    [100] = {.lex_state = 142},
    [101] = {.lex_state = 143},
    [102] = {.lex_state = 141},
    [103] = {.lex_state = 143},
    [104] = {.lex_state = 124},
    [105] = {.lex_state = 137},
    [106] = {.lex_state = 124},
    [107] = {.lex_state = 137},
    [108] = {.lex_state = 143},
    [109] = {.lex_state = 141},
    [110] = {.lex_state = 124},
    [111] = {.lex_state = 137},
    [112] = {.lex_state = 125},
    [113] = {.lex_state = 130},
    [114] = {.lex_state = 133},
    [115] = {.lex_state = 158},
    [116] = {.lex_state = 138},
    [117] = {.lex_state = 158},
    [118] = {.lex_state = 124},
    [119] = {.lex_state = 158},
    [120] = {.lex_state = 124},
    [121] = {.lex_state = 158},
    [122] = {.lex_state = 158},
    [123] = {.lex_state = 127},
    [124] = {.lex_state = 142},
    [125] = {.lex_state = 143},
    [126] = {.lex_state = 141},
    [127] = {.lex_state = 143},
    [128] = {.lex_state = 124},
    [129] = {.lex_state = 124},
    [130] = {.lex_state = 142},
    [131] = {.lex_state = 133},
    [132] = {.lex_state = 142},
    [133] = {.lex_state = 143},
    [134] = {.lex_state = 141},
    [135] = {.lex_state = 143},
    [136] = {.lex_state = 124},
    [137] = {.lex_state = 124},
    [138] = {.lex_state = 143},
    [139] = {.lex_state = 141},
    [140] = {.lex_state = 124},
    [141] = {.lex_state = 142},
    [142] = {.lex_state = 127},
    [143] = {.lex_state = 112},
    [144] = {.lex_state = 130},
    [145] = {.lex_state = 159},
    [146] = {.lex_state = 159},
    [147] = {.lex_state = 133},
    [148] = {.lex_state = 160},
    [149] = {.lex_state = 161},
    [150] = {.lex_state = 161},
    [151] = {.lex_state = 161},
    [152] = {.lex_state = 159},
    [153] = {.lex_state = 162},
    [154] = {.lex_state = 124},
    [155] = {.lex_state = 161},
    [156] = {.lex_state = 161},
    [157] = {.lex_state = 125},
    [158] = {.lex_state = 130},
    [159] = {.lex_state = 133},
    [160] = {.lex_state = 142},
    [161] = {.lex_state = 143},
    [162] = {.lex_state = 141},
    [163] = {.lex_state = 143},
    [164] = {.lex_state = 124},
    [165] = {.lex_state = 124},
    [166] = {.lex_state = 142},
    [167] = {.lex_state = 133},
    [168] = {.lex_state = 142},
    [169] = {.lex_state = 143},
    [170] = {.lex_state = 141},
    [171] = {.lex_state = 143},
    [172] = {.lex_state = 124},
    [173] = {.lex_state = 124},
    [174] = {.lex_state = 143},
    [175] = {.lex_state = 141},
    [176] = {.lex_state = 124},
    [177] = {.lex_state = 127},
    [178] = {.lex_state = 143},
    [179] = {.lex_state = 163},
    [180] = {.lex_state = 164},
    [181] = {.lex_state = 165},
    [182] = {.lex_state = 165},
    [183] = {.lex_state = 141},
    [184] = {.lex_state = 166},
    [185] = {.lex_state = 149},
    [186] = {.lex_state = 112},
    [187] = {.lex_state = 167},
    [188] = {.lex_state = 167},
    [189] = {.lex_state = 168},
    [190] = {.lex_state = 158},
    [191] = {.lex_state = 158},
    [192] = {.lex_state = 138},
    [193] = {.lex_state = 166},
    [194] = {.lex_state = 166},
    [195] = {.lex_state = 149},
    [196] = {.lex_state = 146},
    [197] = {.lex_state = 158},
    [198] = {.lex_state = 146},
    [199] = {.lex_state = 149},
    [200] = {.lex_state = 158},
    [201] = {.lex_state = 138},
    [202] = {.lex_state = 149},
    [203] = {.lex_state = 169},
    [204] = {.lex_state = 170},
    [205] = {.lex_state = 171},
    [206] = {.lex_state = 171},
    [207] = {.lex_state = 172},
    [208] = {.lex_state = 149},
    [209] = {.lex_state = 171},
    [210] = {.lex_state = 172},
    [211] = {.lex_state = 149},
    [212] = {.lex_state = 171},
    [213] = {.lex_state = 171},
    [214] = {.lex_state = 146},
    [215] = {.lex_state = 171},
    [216] = {.lex_state = 158},
    [217] = {.lex_state = 138},
    [218] = {.lex_state = 173},
    [219] = {.lex_state = 159},
    [220] = {.lex_state = 159},
    [221] = {.lex_state = 124},
    [222] = {.lex_state = 124},
    [223] = {.lex_state = 137},
    [224] = {.lex_state = 161},
    [225] = {.lex_state = 161},
    [226] = {.lex_state = 128},
    [227] = {.lex_state = 161},
    [228] = {.lex_state = 142},
    [229] = {.lex_state = 174},
    [230] = {.lex_state = 141},
    [231] = {.lex_state = 174},
    [232] = {.lex_state = 161},
    [233] = {.lex_state = 161},
    [234] = {.lex_state = 142},
    [235] = {.lex_state = 133},
    [236] = {.lex_state = 142},
    [237] = {.lex_state = 174},
    [238] = {.lex_state = 141},
    [239] = {.lex_state = 174},
    [240] = {.lex_state = 161},
    [241] = {.lex_state = 161},
    [242] = {.lex_state = 174},
    [243] = {.lex_state = 141},
    [244] = {.lex_state = 161},
    [245] = {.lex_state = 170},
    [246] = {.lex_state = 175},
    [247] = {.lex_state = 138},
    [248] = {.lex_state = 170},
    [249] = {.lex_state = 161},
    [250] = {.lex_state = 174},
    [251] = {.lex_state = 141},
    [252] = {.lex_state = 161},
    [253] = {.lex_state = 143},
    [254] = {.lex_state = 141},
    [255] = {.lex_state = 124},
    [256] = {.lex_state = 143},
    [257] = {.lex_state = 141},
    [258] = {.lex_state = 124},
    [259] = {.lex_state = 152},
    [260] = {.lex_state = 153},
    [261] = {.lex_state = 124},
    [262] = {.lex_state = 147},
    [263] = {.lex_state = 147},
    [264] = {.lex_state = 148},
    [265] = {.lex_state = 151},
    [266] = {.lex_state = 147},
    [267] = {.lex_state = 151},
    [268] = {.lex_state = 147},
    [269] = {.lex_state = 146},
    [270] = {.lex_state = 153},
    [271] = {.lex_state = 153},
    [272] = {.lex_state = 147},
    [273] = {.lex_state = 188},
    [274] = {.lex_state = 147},
    [275] = {.lex_state = 141},
    [276] = {.lex_state = 189},
    [277] = {.lex_state = 141},
    [278] = {.lex_state = 143},
    [279] = {.lex_state = 124},
    [280] = {.lex_state = 190},
    [281] = {.lex_state = 124},
    [282] = {.lex_state = 141},
    [283] = {.lex_state = 124},
    [284] = {.lex_state = 142},
    [285] = {.lex_state = 133},
    [286] = {.lex_state = 142},
    [287] = {.lex_state = 143},
    [288] = {.lex_state = 141},
    [289] = {.lex_state = 143},
    [290] = {.lex_state = 124},
    [291] = {.lex_state = 124},
    [292] = {.lex_state = 143},
    [293] = {.lex_state = 141},
    [294] = {.lex_state = 124},
    [295] = {.lex_state = 143},
    [296] = {.lex_state = 141},
    [297] = {.lex_state = 124},
    [298] = {.lex_state = 142},
    [299] = {.lex_state = 143},
    [300] = {.lex_state = 141},
    [301] = {.lex_state = 143},
    [302] = {.lex_state = 124},
    [303] = {.lex_state = 124},
    [304] = {.lex_state = 142},
    [305] = {.lex_state = 133},
    [306] = {.lex_state = 142},
    [307] = {.lex_state = 143},
    [308] = {.lex_state = 141},
    [309] = {.lex_state = 143},
    [310] = {.lex_state = 124},
    [311] = {.lex_state = 124},
    [312] = {.lex_state = 143},
    [313] = {.lex_state = 141},
    [314] = {.lex_state = 124},
    [315] = {.lex_state = 143},
    [316] = {.lex_state = 141},
    [317] = {.lex_state = 124},
    [318] = {.lex_state = 112},
    [319] = {.lex_state = 191},
    [320] = {.lex_state = 122},
    [321] = {.lex_state = 112},
    [322] = {.lex_state = 191},
    [323] = {.lex_state = 122},
    [324] = {.lex_state = 122},
    [325] = {.lex_state = 124},
    [326] = {.lex_state = 192},
    [327] = {.lex_state = 193},
    [328] = {.lex_state = 125},
    [329] = {.lex_state = 194},
    [330] = {.lex_state = 127},
    [331] = {.lex_state = 112},
    [332] = {.lex_state = 163},
    [333] = {.lex_state = 195},
    [334] = {.lex_state = 164},
    [335] = {.lex_state = 195},
    [336] = {.lex_state = 124},
    [337] = {.lex_state = 130},
    [338] = {.lex_state = 196},
    [339] = {.lex_state = 154},
    [340] = {.lex_state = 112},
    [341] = {.lex_state = 197},
    [342] = {.lex_state = 198},
    [343] = {.lex_state = 199},
    [344] = {.lex_state = 191},
    [345] = {.lex_state = 122},
    [346] = {.lex_state = 137},
    [347] = {.lex_state = 135},
    [348] = {.lex_state = 127},
    [349] = {.lex_state = 161},
    [350] = {.lex_state = 158},
    [351] = {.lex_state = 155},
    [352] = {.lex_state = 161},
    [353] = {.lex_state = 141},
    [354] = {.lex_state = 147},
    [355] = {.lex_state = 148},
    [356] = {.lex_state = 147},
    [357] = {.lex_state = 147},
    [358] = {.lex_state = 141},
    [359] = {.lex_state = 131},
    [360] = {.lex_state = 114},
    [361] = {.lex_state = 149},
    [362] = {.lex_state = 158},
    [363] = {.lex_state = 171},
    [364] = {.lex_state = 167},
    [365] = {.lex_state = 167},
    [366] = {.lex_state = 138},
    [367] = {.lex_state = 149},
    [368] = {.lex_state = 154},
    [369] = {.lex_state = 200},
    [370] = {.lex_state = 153},
    [371] = {.lex_state = 147},
    [372] = {.lex_state = 147},
    [373] = {.lex_state = 201},
    [374] = {.lex_state = 124},
    [375] = {.lex_state = 161},
    [376] = {.lex_state = 125},
    [377] = {.lex_state = 130},
    [378] = {.lex_state = 133},
    [379] = {.lex_state = 137},
    [380] = {.lex_state = 142},
    [381] = {.lex_state = 143},
    [382] = {.lex_state = 141},
    [383] = {.lex_state = 143},
    [384] = {.lex_state = 124},
    [385] = {.lex_state = 124},
    [386] = {.lex_state = 142},
    [387] = {.lex_state = 133},
    [388] = {.lex_state = 142},
    [389] = {.lex_state = 143},
    [390] = {.lex_state = 141},
    [391] = {.lex_state = 143},
    [392] = {.lex_state = 124},
    [393] = {.lex_state = 124},
    [394] = {.lex_state = 143},
    [395] = {.lex_state = 141},
    [396] = {.lex_state = 124},
    [397] = {.lex_state = 143},
    [398] = {.lex_state = 141},
    [399] = {.lex_state = 124},
    [400] = {.lex_state = 142},
    [401] = {.lex_state = 201},
    [402] = {.lex_state = 141},
    [403] = {.lex_state = 201},
    [404] = {.lex_state = 124},
    [405] = {.lex_state = 161},
    [406] = {.lex_state = 137},
    [407] = {.lex_state = 124},
    [408] = {.lex_state = 161},
    [409] = {.lex_state = 137},
    [410] = {.lex_state = 202},
    [411] = {.lex_state = 125},
    [412] = {.lex_state = 163},
    [413] = {.lex_state = 130},
    [414] = {.lex_state = 147},
    [415] = {.lex_state = 133},
    [416] = {.lex_state = 142},
    [417] = {.lex_state = 143},
    [418] = {.lex_state = 141},
    [419] = {.lex_state = 143},
    [420] = {.lex_state = 124},
    [421] = {.lex_state = 124},
    [422] = {.lex_state = 142},
    [423] = {.lex_state = 133},
    [424] = {.lex_state = 142},
    [425] = {.lex_state = 143},
    [426] = {.lex_state = 141},
    [427] = {.lex_state = 143},
    [428] = {.lex_state = 124},
    [429] = {.lex_state = 124},
    [430] = {.lex_state = 143},
    [431] = {.lex_state = 141},
    [432] = {.lex_state = 124},
    [433] = {.lex_state = 203},
    [434] = {.lex_state = 143},
    [435] = {.lex_state = 141},
    [436] = {.lex_state = 124},
    [437] = {.lex_state = 154},
    [438] = {.lex_state = 155},
    [439] = {.lex_state = 142},
    [440] = {.lex_state = 133},
    [441] = {.lex_state = 142},
    [442] = {.lex_state = 201},
    [443] = {.lex_state = 141},
    [444] = {.lex_state = 201},
    [445] = {.lex_state = 201},
    [446] = {.lex_state = 141},
    [447] = {.lex_state = 137},
    [448] = {.lex_state = 195},
    [449] = {.lex_state = 204},
    [450] = {.lex_state = 195},
    [451] = {.lex_state = 131},
    [452] = {.lex_state = 161},
    [453] = {.lex_state = 201},
    [454] = {.lex_state = 124},
    [455] = {.lex_state = 161},
    [456] = {.lex_state = 137},
    [457] = {.lex_state = 125},
    [458] = {.lex_state = 163},
    [459] = {.lex_state = 164},
    [460] = {.lex_state = 130},
    [461] = {.lex_state = 205},
    [462] = {.lex_state = 133},
    [463] = {.lex_state = 122},
    [464] = {.lex_state = 206},
    [465] = {.lex_state = 158},
    [466] = {.lex_state = 147},
    [467] = {.lex_state = 141},
    [468] = {.lex_state = 114},
    [469] = {.lex_state = 158},
    [470] = {.lex_state = 171},
    [471] = {.lex_state = 167},
    [472] = {.lex_state = 142},
    [473] = {.lex_state = 201},
    [474] = {.lex_state = 141},
    [475] = {.lex_state = 201},
    [476] = {.lex_state = 124},
    [477] = {.lex_state = 125},
    [478] = {.lex_state = 130},
    [479] = {.lex_state = 133},
    [480] = {.lex_state = 142},
    [481] = {.lex_state = 143},
    [482] = {.lex_state = 141},
    [483] = {.lex_state = 143},
    [484] = {.lex_state = 124},
    [485] = {.lex_state = 142},
    [486] = {.lex_state = 133},
    [487] = {.lex_state = 142},
    [488] = {.lex_state = 143},
    [489] = {.lex_state = 141},
    [490] = {.lex_state = 143},
    [491] = {.lex_state = 124},
    [492] = {.lex_state = 124},
    [493] = {.lex_state = 143},
    [494] = {.lex_state = 141},
    [495] = {.lex_state = 124},
    [496] = {.lex_state = 143},
    [497] = {.lex_state = 141},
    [498] = {.lex_state = 124},
    [499] = {.lex_state = 142},
    [500] = {.lex_state = 133},
    [501] = {.lex_state = 142},
    [502] = {.lex_state = 201},
    [503] = {.lex_state = 141},
    [504] = {.lex_state = 201},
    [505] = {.lex_state = 201},
    [506] = {.lex_state = 141},
    [507] = {.lex_state = 207},
    [508] = {.lex_state = 201},
    [509] = {.lex_state = 141},
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_type_parameters] = STATE(344),
        [sym_type_parameter] = STATE(345),
        [sym_constraint] = STATE(9),
        [sym_type_arguments] = STATE(31),
        [sym_type] = STATE(346),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(347),
        [sym_primary_type] = STATE(348),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_type_body] = STATE(148),
        [sym_type_member_list] = STATE(149),
        [sym_type_member] = STATE(349),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_types] = STATE(116),
        [sym_tuple_element_type] = STATE(350),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_type_query_expression] = STATE(94),
        [sym_this_type] = STATE(23),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(220),
        [sym_type_annotation] = STATE(351),
        [sym_call_signature] = STATE(352),
        [sym_parameter_list] = STATE(353),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(354),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(355),
        [sym_optional_parameter_list] = STATE(356),
        [sym_optional_parameter] = STATE(357),
        [sym_rest_parameter] = STATE(358),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [sym_identifier_reference] = STATE(359),
        [sym_binding_identifier] = STATE(360),
        [sym_binding_pattern] = STATE(361),
        [sym_array_binding_pattern] = STATE(68),
        [sym_elision] = STATE(189),
        [sym_binding_elision_element] = STATE(362),
        [sym_binding_property] = STATE(363),
        [sym_binding_element] = STATE(364),
        [sym_single_name_binding] = STATE(365),
        [sym_binding_rest_element] = STATE(366),
        [sym_object_binding_pattern] = STATE(68),
        [aux_sym_type_parameters_repeat1] = STATE(320),
        [aux_sym_type_arguments_repeat1] = STATE(36),
        [aux_sym_tuple_element_types_repeat1] = STATE(119),
        [aux_sym_required_parameter_list_repeat1] = STATE(266),
        [aux_sym_optional_parameter_list_repeat1] = STATE(72),
        [aux_sym_array_binding_pattern_repeat1] = STATE(197),
        [aux_sym_elision_repeat1] = STATE(193),
        [aux_sym_object_binding_pattern_repeat1] = STATE(209),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(3),
        [anon_sym_COMMA] = ACTIONS(5),
        [anon_sym_GT] = ACTIONS(7),
        [anon_sym_extends] = ACTIONS(9),
        [anon_sym_LPAREN] = ACTIONS(11),
        [anon_sym_RPAREN] = ACTIONS(13),
        [anon_sym_any] = ACTIONS(15),
        [anon_sym_number] = ACTIONS(17),
        [anon_sym_boolean] = ACTIONS(15),
        [anon_sym_string] = ACTIONS(17),
        [anon_sym_symbol] = ACTIONS(15),
        [anon_sym_void] = ACTIONS(15),
        [anon_sym_DOT] = ACTIONS(19),
        [anon_sym_LBRACE] = ACTIONS(21),
        [anon_sym_RBRACE] = ACTIONS(23),
        [anon_sym_SEMI] = ACTIONS(25),
        [anon_sym_LBRACK] = ACTIONS(27),
        [anon_sym_RBRACK] = ACTIONS(29),
        [anon_sym_PIPE] = ACTIONS(31),
        [anon_sym_AMP] = ACTIONS(33),
        [anon_sym_EQ_GT] = ACTIONS(35),
        [anon_sym_new] = ACTIONS(37),
        [anon_sym_typeof] = ACTIONS(39),
        [anon_sym_this] = ACTIONS(41),
        [anon_sym_QMARK] = ACTIONS(43),
        [anon_sym_COLON] = ACTIONS(45),
        [anon_sym_public] = ACTIONS(47),
        [anon_sym_private] = ACTIONS(47),
        [anon_sym_protected] = ACTIONS(47),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(49),
        [anon_sym_yield] = ACTIONS(51),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(55),
        [sym_numeric_literal] = ACTIONS(57),
        [sym_identifier] = ACTIONS(59),
        [sym__line_break] = ACTIONS(61),
    },
    [1] = {
        [sym_type_parameters] = STATE(3),
        [anon_sym_LT] = ACTIONS(63),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [2] = {
        [sym_type_parameter] = STATE(6),
        [sym_binding_identifier] = STATE(7),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [3] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [4] = {
        [anon_sym_COMMA] = ACTIONS(71),
        [anon_sym_GT] = ACTIONS(71),
        [anon_sym_extends] = ACTIONS(71),
        [anon_sym_RPAREN] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(71),
        [anon_sym_RBRACK] = ACTIONS(71),
        [anon_sym_QMARK] = ACTIONS(71),
        [anon_sym_COLON] = ACTIONS(71),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [5] = {
        [anon_sym_COMMA] = ACTIONS(73),
        [anon_sym_GT] = ACTIONS(73),
        [anon_sym_extends] = ACTIONS(73),
        [anon_sym_RPAREN] = ACTIONS(73),
        [anon_sym_RBRACE] = ACTIONS(73),
        [anon_sym_RBRACK] = ACTIONS(73),
        [anon_sym_QMARK] = ACTIONS(73),
        [anon_sym_COLON] = ACTIONS(73),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [6] = {
        [aux_sym_type_parameters_repeat1] = STATE(320),
        [anon_sym_COMMA] = ACTIONS(75),
        [anon_sym_GT] = ACTIONS(77),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [7] = {
        [sym_constraint] = STATE(9),
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_GT] = ACTIONS(79),
        [anon_sym_extends] = ACTIONS(81),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [8] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(19),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [9] = {
        [anon_sym_COMMA] = ACTIONS(101),
        [anon_sym_GT] = ACTIONS(101),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [10] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(316),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(105),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [11] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_GT] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [anon_sym_PIPE] = ACTIONS(121),
        [anon_sym_AMP] = ACTIONS(121),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [12] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_body] = STATE(148),
        [sym_type_member_list] = STATE(149),
        [sym_type_member] = STATE(150),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(152),
        [sym_call_signature] = STATE(151),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(129),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym__line_break] = ACTIONS(61),
    },
    [13] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(115),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_types] = STATE(116),
        [sym_tuple_element_type] = STATE(117),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [14] = {
        [sym_type_parameters] = STATE(305),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(141),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [15] = {
        [sym_type_query_expression] = STATE(94),
        [sym_identifier_reference] = STATE(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [16] = {
        [anon_sym_COMMA] = ACTIONS(143),
        [anon_sym_GT] = ACTIONS(143),
        [anon_sym_RPAREN] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_SEMI] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_RBRACK] = ACTIONS(143),
        [anon_sym_PIPE] = ACTIONS(143),
        [anon_sym_AMP] = ACTIONS(143),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [17] = {
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(145),
        [anon_sym_GT] = ACTIONS(145),
        [anon_sym_RPAREN] = ACTIONS(145),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(145),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(145),
        [anon_sym_PIPE] = ACTIONS(145),
        [anon_sym_AMP] = ACTIONS(145),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [18] = {
        [anon_sym_LPAREN] = ACTIONS(147),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [19] = {
        [anon_sym_COMMA] = ACTIONS(149),
        [anon_sym_GT] = ACTIONS(149),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [20] = {
        [anon_sym_COMMA] = ACTIONS(151),
        [anon_sym_GT] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_RBRACK] = ACTIONS(151),
        [anon_sym_PIPE] = ACTIONS(153),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [21] = {
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_GT] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [22] = {
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_GT] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [23] = {
        [anon_sym_COMMA] = ACTIONS(163),
        [anon_sym_GT] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(163),
        [anon_sym_RBRACE] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(163),
        [anon_sym_RBRACK] = ACTIONS(163),
        [anon_sym_PIPE] = ACTIONS(163),
        [anon_sym_AMP] = ACTIONS(163),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [24] = {
        [sym_type_arguments] = STATE(31),
        [anon_sym_LT] = ACTIONS(165),
        [anon_sym_DOT] = ACTIONS(167),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [25] = {
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_GT] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [26] = {
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_GT] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [27] = {
        [anon_sym_COMMA] = ACTIONS(151),
        [anon_sym_GT] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_RBRACK] = ACTIONS(151),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [28] = {
        [anon_sym_LT] = ACTIONS(169),
        [anon_sym_DOT] = ACTIONS(169),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [29] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(33),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [30] = {
        [sym_identifier_reference] = STATE(32),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [31] = {
        [anon_sym_COMMA] = ACTIONS(171),
        [anon_sym_GT] = ACTIONS(171),
        [anon_sym_RPAREN] = ACTIONS(171),
        [anon_sym_RBRACE] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(171),
        [anon_sym_RBRACK] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(171),
        [anon_sym_AMP] = ACTIONS(171),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [32] = {
        [anon_sym_LT] = ACTIONS(173),
        [anon_sym_DOT] = ACTIONS(173),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [33] = {
        [aux_sym_type_arguments_repeat1] = STATE(36),
        [anon_sym_COMMA] = ACTIONS(175),
        [anon_sym_GT] = ACTIONS(177),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [34] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(40),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [35] = {
        [anon_sym_COMMA] = ACTIONS(179),
        [anon_sym_GT] = ACTIONS(179),
        [anon_sym_RPAREN] = ACTIONS(179),
        [anon_sym_RBRACE] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACK] = ACTIONS(179),
        [anon_sym_PIPE] = ACTIONS(179),
        [anon_sym_AMP] = ACTIONS(179),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [36] = {
        [anon_sym_COMMA] = ACTIONS(181),
        [anon_sym_GT] = ACTIONS(183),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [37] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(39),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(185),
        [anon_sym_GT] = ACTIONS(185),
        [anon_sym_RPAREN] = ACTIONS(185),
        [anon_sym_RBRACE] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_LBRACK] = ACTIONS(185),
        [anon_sym_RBRACK] = ACTIONS(185),
        [anon_sym_PIPE] = ACTIONS(185),
        [anon_sym_AMP] = ACTIONS(185),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [39] = {
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_GT] = ACTIONS(187),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(189),
        [anon_sym_GT] = ACTIONS(189),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [41] = {
        [anon_sym_RBRACK] = ACTIONS(191),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(193),
        [anon_sym_GT] = ACTIONS(193),
        [anon_sym_RPAREN] = ACTIONS(193),
        [anon_sym_RBRACE] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(193),
        [anon_sym_PIPE] = ACTIONS(193),
        [anon_sym_AMP] = ACTIONS(193),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [43] = {
        [sym_primary_type] = STATE(45),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [44] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(197),
        [anon_sym_GT] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(197),
        [anon_sym_RBRACE] = ACTIONS(197),
        [anon_sym_SEMI] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_RBRACK] = ACTIONS(197),
        [anon_sym_PIPE] = ACTIONS(197),
        [anon_sym_AMP] = ACTIONS(197),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [46] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(296),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(199),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [47] = {
        [sym_type_parameters] = STATE(285),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(201),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [48] = {
        [anon_sym_LPAREN] = ACTIONS(203),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [49] = {
        [anon_sym_RPAREN] = ACTIONS(205),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_GT] = ACTIONS(207),
        [anon_sym_RPAREN] = ACTIONS(207),
        [anon_sym_RBRACE] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(207),
        [anon_sym_PIPE] = ACTIONS(207),
        [anon_sym_AMP] = ACTIONS(207),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [51] = {
        [sym_intersection_or_primary_type] = STATE(52),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_intersection_type] = STATE(26),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_GT] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_RBRACE] = ACTIONS(209),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(209),
        [anon_sym_AMP] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [53] = {
        [sym_parameter_list] = STATE(59),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(211),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [54] = {
        [anon_sym_EQ_GT] = ACTIONS(217),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [55] = {
        [sym_property_name] = STATE(204),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(205),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_RBRACE] = ACTIONS(219),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(221),
        [sym__line_break] = ACTIONS(61),
    },
    [56] = {
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_elision] = STATE(189),
        [sym_binding_elision_element] = STATE(190),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(188),
        [sym_binding_rest_element] = STATE(192),
        [sym_object_binding_pattern] = STATE(68),
        [aux_sym_elision_repeat1] = STATE(193),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(225),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [57] = {
        [anon_sym_LBRACE] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_yield] = ACTIONS(231),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(233),
        [sym__line_break] = ACTIONS(61),
    },
    [58] = {
        [sym_binding_identifier] = STATE(280),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [59] = {
        [anon_sym_RPAREN] = ACTIONS(235),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_RPAREN] = ACTIONS(239),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [61] = {
        [aux_sym_required_parameter_list_repeat1] = STATE(266),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RPAREN] = ACTIONS(243),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [62] = {
        [sym_binding_identifier_or_pattern] = STATE(264),
        [sym_binding_identifier] = STATE(77),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [63] = {
        [sym_type_annotation] = STATE(263),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_QMARK] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [64] = {
        [anon_sym_RPAREN] = ACTIONS(239),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [65] = {
        [aux_sym_optional_parameter_list_repeat1] = STATE(72),
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_QMARK] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(257),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(260),
        [anon_sym_RPAREN] = ACTIONS(260),
        [anon_sym_QMARK] = ACTIONS(260),
        [anon_sym_COLON] = ACTIONS(260),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(262),
        [anon_sym_RPAREN] = ACTIONS(262),
        [anon_sym_RBRACE] = ACTIONS(262),
        [anon_sym_RBRACK] = ACTIONS(262),
        [anon_sym_QMARK] = ACTIONS(262),
        [anon_sym_COLON] = ACTIONS(262),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [69] = {
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(264),
        [sym__line_break] = ACTIONS(61),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(266),
        [anon_sym_RPAREN] = ACTIONS(266),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [71] = {
        [sym_accessibility_modifier] = STATE(74),
        [sym_binding_identifier_or_pattern] = STATE(75),
        [sym_optional_parameter] = STATE(262),
        [sym_binding_identifier] = STATE(77),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(268),
        [anon_sym_RPAREN] = ACTIONS(270),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [73] = {
        [sym_accessibility_modifier] = STATE(74),
        [sym_binding_identifier_or_pattern] = STATE(75),
        [sym_optional_parameter] = STATE(76),
        [sym_binding_identifier] = STATE(77),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [74] = {
        [sym_binding_identifier_or_pattern] = STATE(259),
        [sym_binding_identifier] = STATE(77),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [75] = {
        [anon_sym_QMARK] = ACTIONS(247),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(272),
        [anon_sym_RPAREN] = ACTIONS(272),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_QMARK] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(255),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [78] = {
        [sym_type_annotation] = STATE(80),
        [anon_sym_COMMA] = ACTIONS(274),
        [anon_sym_RPAREN] = ACTIONS(274),
        [anon_sym_COLON] = ACTIONS(276),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [79] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(282),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(284),
        [anon_sym_RPAREN] = ACTIONS(284),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [81] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(257),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(286),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [82] = {
        [sym_type_parameters] = STATE(99),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(288),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(290),
        [anon_sym_RPAREN] = ACTIONS(290),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [84] = {
        [anon_sym_LPAREN] = ACTIONS(292),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [85] = {
        [anon_sym_COMMA] = ACTIONS(294),
        [anon_sym_RPAREN] = ACTIONS(294),
        [anon_sym_RBRACE] = ACTIONS(294),
        [anon_sym_SEMI] = ACTIONS(294),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [86] = {
        [sym_parameter_list] = STATE(88),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(296),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [87] = {
        [anon_sym_EQ_GT] = ACTIONS(298),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [88] = {
        [anon_sym_RPAREN] = ACTIONS(300),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [89] = {
        [anon_sym_EQ_GT] = ACTIONS(302),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [90] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(304),
        [anon_sym_GT] = ACTIONS(304),
        [anon_sym_RPAREN] = ACTIONS(304),
        [anon_sym_RBRACE] = ACTIONS(304),
        [anon_sym_SEMI] = ACTIONS(304),
        [anon_sym_RBRACK] = ACTIONS(304),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [92] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(306),
        [anon_sym_GT] = ACTIONS(306),
        [anon_sym_RPAREN] = ACTIONS(306),
        [anon_sym_RBRACE] = ACTIONS(306),
        [anon_sym_SEMI] = ACTIONS(306),
        [anon_sym_RBRACK] = ACTIONS(306),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(308),
        [anon_sym_GT] = ACTIONS(308),
        [anon_sym_RPAREN] = ACTIONS(308),
        [anon_sym_DOT] = ACTIONS(310),
        [anon_sym_RBRACE] = ACTIONS(308),
        [anon_sym_SEMI] = ACTIONS(308),
        [anon_sym_LBRACK] = ACTIONS(308),
        [anon_sym_RBRACK] = ACTIONS(308),
        [anon_sym_PIPE] = ACTIONS(308),
        [anon_sym_AMP] = ACTIONS(308),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(312),
        [anon_sym_GT] = ACTIONS(312),
        [anon_sym_RPAREN] = ACTIONS(312),
        [anon_sym_DOT] = ACTIONS(312),
        [anon_sym_RBRACE] = ACTIONS(312),
        [anon_sym_SEMI] = ACTIONS(312),
        [anon_sym_LBRACK] = ACTIONS(312),
        [anon_sym_RBRACK] = ACTIONS(312),
        [anon_sym_PIPE] = ACTIONS(312),
        [anon_sym_AMP] = ACTIONS(312),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [96] = {
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(314),
        [sym__line_break] = ACTIONS(61),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(316),
        [anon_sym_GT] = ACTIONS(316),
        [anon_sym_RPAREN] = ACTIONS(316),
        [anon_sym_DOT] = ACTIONS(316),
        [anon_sym_RBRACE] = ACTIONS(316),
        [anon_sym_SEMI] = ACTIONS(316),
        [anon_sym_LBRACK] = ACTIONS(316),
        [anon_sym_RBRACK] = ACTIONS(316),
        [anon_sym_PIPE] = ACTIONS(316),
        [anon_sym_AMP] = ACTIONS(316),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [98] = {
        [sym_parameter_list] = STATE(109),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(318),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [99] = {
        [anon_sym_LPAREN] = ACTIONS(320),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [100] = {
        [sym_parameter_list] = STATE(102),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(322),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [101] = {
        [anon_sym_EQ_GT] = ACTIONS(324),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [102] = {
        [anon_sym_RPAREN] = ACTIONS(326),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [103] = {
        [anon_sym_EQ_GT] = ACTIONS(328),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [104] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(330),
        [anon_sym_GT] = ACTIONS(330),
        [anon_sym_RPAREN] = ACTIONS(330),
        [anon_sym_RBRACE] = ACTIONS(330),
        [anon_sym_SEMI] = ACTIONS(330),
        [anon_sym_RBRACK] = ACTIONS(330),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [106] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(332),
        [anon_sym_GT] = ACTIONS(332),
        [anon_sym_RPAREN] = ACTIONS(332),
        [anon_sym_RBRACE] = ACTIONS(332),
        [anon_sym_SEMI] = ACTIONS(332),
        [anon_sym_RBRACK] = ACTIONS(332),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [108] = {
        [anon_sym_EQ_GT] = ACTIONS(334),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [109] = {
        [anon_sym_RPAREN] = ACTIONS(322),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [110] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(336),
        [anon_sym_GT] = ACTIONS(336),
        [anon_sym_RPAREN] = ACTIONS(336),
        [anon_sym_RBRACE] = ACTIONS(336),
        [anon_sym_SEMI] = ACTIONS(336),
        [anon_sym_RBRACK] = ACTIONS(336),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [112] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(254),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(338),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [113] = {
        [sym_type_parameters] = STATE(131),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(340),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [114] = {
        [anon_sym_LPAREN] = ACTIONS(342),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(344),
        [anon_sym_RBRACK] = ACTIONS(344),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [116] = {
        [anon_sym_RBRACK] = ACTIONS(346),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [117] = {
        [aux_sym_tuple_element_types_repeat1] = STATE(119),
        [anon_sym_COMMA] = ACTIONS(348),
        [anon_sym_RBRACK] = ACTIONS(350),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [118] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(115),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_type] = STATE(122),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(352),
        [anon_sym_RBRACK] = ACTIONS(354),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [120] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(115),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_type] = STATE(121),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [121] = {
        [anon_sym_COMMA] = ACTIONS(356),
        [anon_sym_RBRACK] = ACTIONS(356),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(358),
        [anon_sym_RBRACK] = ACTIONS(358),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(360),
        [anon_sym_GT] = ACTIONS(360),
        [anon_sym_RPAREN] = ACTIONS(360),
        [anon_sym_RBRACE] = ACTIONS(360),
        [anon_sym_SEMI] = ACTIONS(360),
        [anon_sym_LBRACK] = ACTIONS(360),
        [anon_sym_RBRACK] = ACTIONS(360),
        [anon_sym_PIPE] = ACTIONS(360),
        [anon_sym_AMP] = ACTIONS(360),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [124] = {
        [sym_parameter_list] = STATE(126),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(362),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [125] = {
        [anon_sym_EQ_GT] = ACTIONS(364),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [126] = {
        [anon_sym_RPAREN] = ACTIONS(366),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [127] = {
        [anon_sym_EQ_GT] = ACTIONS(368),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [128] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [129] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [130] = {
        [sym_parameter_list] = STATE(139),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(370),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [131] = {
        [anon_sym_LPAREN] = ACTIONS(372),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [132] = {
        [sym_parameter_list] = STATE(134),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(374),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [133] = {
        [anon_sym_EQ_GT] = ACTIONS(376),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [134] = {
        [anon_sym_RPAREN] = ACTIONS(378),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [135] = {
        [anon_sym_EQ_GT] = ACTIONS(380),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [136] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [137] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [138] = {
        [anon_sym_EQ_GT] = ACTIONS(382),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [139] = {
        [anon_sym_RPAREN] = ACTIONS(374),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [140] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [141] = {
        [sym_parameter_list] = STATE(251),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(384),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [142] = {
        [anon_sym_COMMA] = ACTIONS(386),
        [anon_sym_GT] = ACTIONS(386),
        [anon_sym_RPAREN] = ACTIONS(386),
        [anon_sym_RBRACE] = ACTIONS(386),
        [anon_sym_SEMI] = ACTIONS(386),
        [anon_sym_LBRACK] = ACTIONS(386),
        [anon_sym_RBRACK] = ACTIONS(386),
        [anon_sym_PIPE] = ACTIONS(386),
        [anon_sym_AMP] = ACTIONS(386),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [143] = {
        [sym_binding_identifier] = STATE(245),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [144] = {
        [sym_type_parameters] = STATE(235),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(388),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [145] = {
        [anon_sym_LT] = ACTIONS(390),
        [anon_sym_COMMA] = ACTIONS(390),
        [anon_sym_LPAREN] = ACTIONS(390),
        [anon_sym_RBRACE] = ACTIONS(390),
        [anon_sym_SEMI] = ACTIONS(390),
        [anon_sym_QMARK] = ACTIONS(390),
        [anon_sym_COLON] = ACTIONS(390),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [146] = {
        [anon_sym_LT] = ACTIONS(392),
        [anon_sym_COMMA] = ACTIONS(392),
        [anon_sym_LPAREN] = ACTIONS(392),
        [anon_sym_RBRACE] = ACTIONS(392),
        [anon_sym_SEMI] = ACTIONS(392),
        [anon_sym_QMARK] = ACTIONS(392),
        [anon_sym_COLON] = ACTIONS(392),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [147] = {
        [anon_sym_LPAREN] = ACTIONS(394),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [148] = {
        [anon_sym_RBRACE] = ACTIONS(396),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [149] = {
        [anon_sym_COMMA] = ACTIONS(398),
        [anon_sym_RBRACE] = ACTIONS(400),
        [anon_sym_SEMI] = ACTIONS(398),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(402),
        [anon_sym_RBRACE] = ACTIONS(402),
        [anon_sym_SEMI] = ACTIONS(402),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(404),
        [anon_sym_RBRACE] = ACTIONS(404),
        [anon_sym_SEMI] = ACTIONS(404),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [152] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_annotation] = STATE(155),
        [sym_call_signature] = STATE(156),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(406),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(406),
        [anon_sym_SEMI] = ACTIONS(406),
        [anon_sym_QMARK] = ACTIONS(408),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [153] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_annotation] = STATE(224),
        [sym_call_signature] = STATE(225),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(412),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(412),
        [anon_sym_SEMI] = ACTIONS(412),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [154] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(412),
        [anon_sym_RBRACE] = ACTIONS(412),
        [anon_sym_SEMI] = ACTIONS(412),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [156] = {
        [anon_sym_COMMA] = ACTIONS(418),
        [anon_sym_RBRACE] = ACTIONS(418),
        [anon_sym_SEMI] = ACTIONS(418),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [157] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(183),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(420),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [158] = {
        [sym_type_parameters] = STATE(167),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(422),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [159] = {
        [anon_sym_LPAREN] = ACTIONS(424),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [160] = {
        [sym_parameter_list] = STATE(162),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(426),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [161] = {
        [anon_sym_EQ_GT] = ACTIONS(428),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [162] = {
        [anon_sym_RPAREN] = ACTIONS(430),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [163] = {
        [anon_sym_EQ_GT] = ACTIONS(432),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [164] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [165] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [166] = {
        [sym_parameter_list] = STATE(175),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(434),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [167] = {
        [anon_sym_LPAREN] = ACTIONS(436),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [168] = {
        [sym_parameter_list] = STATE(170),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(438),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [169] = {
        [anon_sym_EQ_GT] = ACTIONS(440),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [170] = {
        [anon_sym_RPAREN] = ACTIONS(442),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [171] = {
        [anon_sym_EQ_GT] = ACTIONS(444),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [172] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [173] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [174] = {
        [anon_sym_EQ_GT] = ACTIONS(446),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [175] = {
        [anon_sym_RPAREN] = ACTIONS(438),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [176] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(448),
        [anon_sym_GT] = ACTIONS(448),
        [anon_sym_RPAREN] = ACTIONS(448),
        [anon_sym_RBRACE] = ACTIONS(448),
        [anon_sym_SEMI] = ACTIONS(448),
        [anon_sym_LBRACK] = ACTIONS(448),
        [anon_sym_RBRACK] = ACTIONS(448),
        [anon_sym_PIPE] = ACTIONS(448),
        [anon_sym_AMP] = ACTIONS(448),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [178] = {
        [anon_sym_EQ_GT] = ACTIONS(450),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [179] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_body] = STATE(148),
        [sym_type_member_list] = STATE(149),
        [sym_type_member] = STATE(150),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(220),
        [sym_call_signature] = STATE(151),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(205),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(452),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(454),
        [sym__line_break] = ACTIONS(61),
    },
    [180] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(115),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_types] = STATE(116),
        [sym_tuple_element_type] = STATE(117),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_elision] = STATE(189),
        [sym_binding_elision_element] = STATE(190),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(188),
        [sym_binding_rest_element] = STATE(192),
        [sym_object_binding_pattern] = STATE(68),
        [aux_sym_elision_repeat1] = STATE(193),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_RBRACK] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [181] = {
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(71),
        [anon_sym_GT] = ACTIONS(71),
        [anon_sym_extends] = ACTIONS(71),
        [anon_sym_RPAREN] = ACTIONS(71),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(71),
        [anon_sym_RBRACK] = ACTIONS(71),
        [anon_sym_QMARK] = ACTIONS(71),
        [anon_sym_COLON] = ACTIONS(71),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [182] = {
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(73),
        [anon_sym_GT] = ACTIONS(73),
        [anon_sym_extends] = ACTIONS(73),
        [anon_sym_RPAREN] = ACTIONS(73),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(73),
        [anon_sym_RBRACK] = ACTIONS(73),
        [anon_sym_QMARK] = ACTIONS(73),
        [anon_sym_COLON] = ACTIONS(73),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [183] = {
        [anon_sym_RPAREN] = ACTIONS(426),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [184] = {
        [anon_sym_COMMA] = ACTIONS(456),
        [anon_sym_RBRACK] = ACTIONS(456),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(456),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(458),
        [anon_sym_RPAREN] = ACTIONS(458),
        [anon_sym_RBRACE] = ACTIONS(458),
        [anon_sym_RBRACK] = ACTIONS(458),
        [anon_sym_QMARK] = ACTIONS(458),
        [anon_sym_COLON] = ACTIONS(458),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [186] = {
        [sym_binding_identifier] = STATE(217),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [187] = {
        [anon_sym_COMMA] = ACTIONS(460),
        [anon_sym_RBRACE] = ACTIONS(460),
        [anon_sym_RBRACK] = ACTIONS(460),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(462),
        [anon_sym_RBRACE] = ACTIONS(462),
        [anon_sym_RBRACK] = ACTIONS(462),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [189] = {
        [sym_binding_rest_element] = STATE(201),
        [anon_sym_RBRACK] = ACTIONS(464),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [190] = {
        [aux_sym_array_binding_pattern_repeat1] = STATE(197),
        [anon_sym_COMMA] = ACTIONS(466),
        [anon_sym_RBRACK] = ACTIONS(464),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [191] = {
        [anon_sym_COMMA] = ACTIONS(468),
        [anon_sym_RBRACK] = ACTIONS(468),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [192] = {
        [anon_sym_RBRACK] = ACTIONS(464),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [193] = {
        [anon_sym_COMMA] = ACTIONS(470),
        [anon_sym_RBRACK] = ACTIONS(472),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(472),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [194] = {
        [anon_sym_COMMA] = ACTIONS(474),
        [anon_sym_RBRACK] = ACTIONS(474),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(474),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [195] = {
        [anon_sym_COMMA] = ACTIONS(476),
        [anon_sym_RPAREN] = ACTIONS(476),
        [anon_sym_RBRACE] = ACTIONS(476),
        [anon_sym_RBRACK] = ACTIONS(476),
        [anon_sym_QMARK] = ACTIONS(476),
        [anon_sym_COLON] = ACTIONS(476),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [196] = {
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_binding_elision_element] = STATE(216),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(188),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [197] = {
        [anon_sym_COMMA] = ACTIONS(478),
        [anon_sym_RBRACK] = ACTIONS(480),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [198] = {
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_binding_elision_element] = STATE(200),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(188),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [199] = {
        [anon_sym_COMMA] = ACTIONS(482),
        [anon_sym_RPAREN] = ACTIONS(482),
        [anon_sym_RBRACE] = ACTIONS(482),
        [anon_sym_RBRACK] = ACTIONS(482),
        [anon_sym_QMARK] = ACTIONS(482),
        [anon_sym_COLON] = ACTIONS(482),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [200] = {
        [anon_sym_COMMA] = ACTIONS(484),
        [anon_sym_RBRACK] = ACTIONS(484),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [201] = {
        [anon_sym_RBRACK] = ACTIONS(480),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [202] = {
        [anon_sym_COMMA] = ACTIONS(486),
        [anon_sym_RPAREN] = ACTIONS(486),
        [anon_sym_RBRACE] = ACTIONS(486),
        [anon_sym_RBRACK] = ACTIONS(486),
        [anon_sym_QMARK] = ACTIONS(486),
        [anon_sym_COLON] = ACTIONS(486),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [203] = {
        [anon_sym_COMMA] = ACTIONS(73),
        [anon_sym_RBRACE] = ACTIONS(73),
        [anon_sym_COLON] = ACTIONS(392),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [204] = {
        [anon_sym_COLON] = ACTIONS(488),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [205] = {
        [aux_sym_object_binding_pattern_repeat1] = STATE(209),
        [anon_sym_COMMA] = ACTIONS(490),
        [anon_sym_RBRACE] = ACTIONS(492),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [206] = {
        [anon_sym_COMMA] = ACTIONS(494),
        [anon_sym_RBRACE] = ACTIONS(494),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [207] = {
        [sym_property_name] = STATE(204),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(213),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(221),
        [sym__line_break] = ACTIONS(61),
    },
    [208] = {
        [anon_sym_COMMA] = ACTIONS(496),
        [anon_sym_RPAREN] = ACTIONS(496),
        [anon_sym_RBRACE] = ACTIONS(496),
        [anon_sym_RBRACK] = ACTIONS(496),
        [anon_sym_QMARK] = ACTIONS(496),
        [anon_sym_COLON] = ACTIONS(496),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(498),
        [anon_sym_RBRACE] = ACTIONS(500),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [210] = {
        [sym_property_name] = STATE(204),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(212),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(221),
        [sym__line_break] = ACTIONS(61),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(502),
        [anon_sym_RPAREN] = ACTIONS(502),
        [anon_sym_RBRACE] = ACTIONS(502),
        [anon_sym_RBRACK] = ACTIONS(502),
        [anon_sym_QMARK] = ACTIONS(502),
        [anon_sym_COLON] = ACTIONS(502),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(504),
        [anon_sym_RBRACE] = ACTIONS(504),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [213] = {
        [anon_sym_COMMA] = ACTIONS(506),
        [anon_sym_RBRACE] = ACTIONS(506),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [214] = {
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_binding_element] = STATE(215),
        [sym_single_name_binding] = STATE(188),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [215] = {
        [anon_sym_COMMA] = ACTIONS(508),
        [anon_sym_RBRACE] = ACTIONS(508),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [216] = {
        [anon_sym_COMMA] = ACTIONS(510),
        [anon_sym_RBRACK] = ACTIONS(510),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [217] = {
        [anon_sym_RBRACK] = ACTIONS(512),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [218] = {
        [anon_sym_COMMA] = ACTIONS(486),
        [anon_sym_RPAREN] = ACTIONS(486),
        [anon_sym_RBRACE] = ACTIONS(486),
        [anon_sym_SEMI] = ACTIONS(386),
        [anon_sym_LBRACK] = ACTIONS(386),
        [anon_sym_RBRACK] = ACTIONS(486),
        [anon_sym_PIPE] = ACTIONS(386),
        [anon_sym_AMP] = ACTIONS(386),
        [anon_sym_QMARK] = ACTIONS(486),
        [anon_sym_COLON] = ACTIONS(486),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [219] = {
        [anon_sym_LT] = ACTIONS(392),
        [anon_sym_COMMA] = ACTIONS(514),
        [anon_sym_LPAREN] = ACTIONS(392),
        [anon_sym_RBRACE] = ACTIONS(514),
        [anon_sym_SEMI] = ACTIONS(392),
        [anon_sym_QMARK] = ACTIONS(392),
        [anon_sym_COLON] = ACTIONS(392),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [220] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_annotation] = STATE(155),
        [sym_call_signature] = STATE(156),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(406),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(406),
        [anon_sym_SEMI] = ACTIONS(406),
        [anon_sym_QMARK] = ACTIONS(408),
        [anon_sym_COLON] = ACTIONS(517),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [221] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_binding_element] = STATE(215),
        [sym_single_name_binding] = STATE(188),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [222] = {
        [sym_type_parameters] = STATE(159),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(414),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(416),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [223] = {
        [anon_sym_COMMA] = ACTIONS(519),
        [anon_sym_GT] = ACTIONS(519),
        [anon_sym_RPAREN] = ACTIONS(519),
        [anon_sym_RBRACE] = ACTIONS(519),
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_RBRACK] = ACTIONS(519),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [224] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_SEMI] = ACTIONS(521),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [225] = {
        [anon_sym_COMMA] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(523),
        [anon_sym_SEMI] = ACTIONS(523),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [226] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_member] = STATE(227),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(152),
        [sym_call_signature] = STATE(151),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(129),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(135),
        [sym__line_break] = ACTIONS(61),
    },
    [227] = {
        [anon_sym_COMMA] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_SEMI] = ACTIONS(527),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [228] = {
        [sym_parameter_list] = STATE(230),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(529),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [229] = {
        [sym_type_annotation] = STATE(233),
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_SEMI] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [230] = {
        [anon_sym_RPAREN] = ACTIONS(533),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [231] = {
        [sym_type_annotation] = STATE(232),
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [232] = {
        [anon_sym_COMMA] = ACTIONS(537),
        [anon_sym_RBRACE] = ACTIONS(537),
        [anon_sym_SEMI] = ACTIONS(537),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [233] = {
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [234] = {
        [sym_parameter_list] = STATE(243),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(539),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [235] = {
        [anon_sym_LPAREN] = ACTIONS(541),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [236] = {
        [sym_parameter_list] = STATE(238),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(543),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [237] = {
        [sym_type_annotation] = STATE(241),
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [238] = {
        [anon_sym_RPAREN] = ACTIONS(547),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [239] = {
        [sym_type_annotation] = STATE(240),
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [240] = {
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_RBRACE] = ACTIONS(551),
        [anon_sym_SEMI] = ACTIONS(551),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [241] = {
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [242] = {
        [sym_type_annotation] = STATE(244),
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [243] = {
        [anon_sym_RPAREN] = ACTIONS(543),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [244] = {
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [245] = {
        [anon_sym_COLON] = ACTIONS(555),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [246] = {
        [anon_sym_number] = ACTIONS(557),
        [anon_sym_string] = ACTIONS(557),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [247] = {
        [anon_sym_RBRACK] = ACTIONS(559),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [248] = {
        [sym_type_annotation] = STATE(249),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [249] = {
        [anon_sym_COMMA] = ACTIONS(561),
        [anon_sym_RBRACE] = ACTIONS(561),
        [anon_sym_SEMI] = ACTIONS(561),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [250] = {
        [sym_type_annotation] = STATE(252),
        [anon_sym_COMMA] = ACTIONS(563),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_SEMI] = ACTIONS(563),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [251] = {
        [anon_sym_RPAREN] = ACTIONS(529),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [252] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_SEMI] = ACTIONS(531),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [253] = {
        [anon_sym_EQ_GT] = ACTIONS(565),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [254] = {
        [anon_sym_RPAREN] = ACTIONS(362),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [255] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [256] = {
        [anon_sym_EQ_GT] = ACTIONS(567),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [257] = {
        [anon_sym_RPAREN] = ACTIONS(296),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [258] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [259] = {
        [anon_sym_QMARK] = ACTIONS(569),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [260] = {
        [sym_type_annotation] = STATE(83),
        [anon_sym_COMMA] = ACTIONS(284),
        [anon_sym_RPAREN] = ACTIONS(284),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [261] = {
        [sym_type_parameters] = STATE(84),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(278),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(280),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [262] = {
        [anon_sym_COMMA] = ACTIONS(571),
        [anon_sym_RPAREN] = ACTIONS(571),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [263] = {
        [anon_sym_COMMA] = ACTIONS(573),
        [anon_sym_RPAREN] = ACTIONS(573),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [264] = {
        [sym_type_annotation] = STATE(70),
        [anon_sym_COMMA] = ACTIONS(573),
        [anon_sym_RPAREN] = ACTIONS(573),
        [anon_sym_QMARK] = ACTIONS(569),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [265] = {
        [sym_required_parameter] = STATE(272),
        [sym_accessibility_modifier] = STATE(269),
        [sym_binding_identifier_or_pattern] = STATE(270),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [266] = {
        [anon_sym_COMMA] = ACTIONS(575),
        [anon_sym_RPAREN] = ACTIONS(577),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [267] = {
        [sym_required_parameter] = STATE(268),
        [sym_accessibility_modifier] = STATE(269),
        [sym_binding_identifier_or_pattern] = STATE(270),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [268] = {
        [anon_sym_COMMA] = ACTIONS(579),
        [anon_sym_RPAREN] = ACTIONS(579),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [269] = {
        [sym_binding_identifier_or_pattern] = STATE(271),
        [sym_binding_identifier] = STATE(77),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [270] = {
        [sym_type_annotation] = STATE(263),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [271] = {
        [sym_type_annotation] = STATE(70),
        [anon_sym_COMMA] = ACTIONS(573),
        [anon_sym_RPAREN] = ACTIONS(573),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [272] = {
        [anon_sym_COMMA] = ACTIONS(581),
        [anon_sym_RPAREN] = ACTIONS(581),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [273] = {
        [sym_accessibility_modifier] = STATE(74),
        [sym_binding_identifier_or_pattern] = STATE(75),
        [sym_optional_parameter_list] = STATE(274),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(275),
        [sym_binding_identifier] = STATE(77),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [274] = {
        [anon_sym_COMMA] = ACTIONS(583),
        [anon_sym_RPAREN] = ACTIONS(585),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [275] = {
        [anon_sym_RPAREN] = ACTIONS(585),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [276] = {
        [sym_rest_parameter] = STATE(277),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [277] = {
        [anon_sym_RPAREN] = ACTIONS(587),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [278] = {
        [anon_sym_EQ_GT] = ACTIONS(589),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [279] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [280] = {
        [sym_type_annotation] = STATE(282),
        [anon_sym_RPAREN] = ACTIONS(591),
        [anon_sym_COLON] = ACTIONS(593),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [281] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [282] = {
        [anon_sym_RPAREN] = ACTIONS(595),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [283] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [284] = {
        [sym_parameter_list] = STATE(293),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(597),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [285] = {
        [anon_sym_LPAREN] = ACTIONS(599),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [286] = {
        [sym_parameter_list] = STATE(288),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(601),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [287] = {
        [anon_sym_EQ_GT] = ACTIONS(603),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [288] = {
        [anon_sym_RPAREN] = ACTIONS(605),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [289] = {
        [anon_sym_EQ_GT] = ACTIONS(607),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [290] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [291] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [292] = {
        [anon_sym_EQ_GT] = ACTIONS(609),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [293] = {
        [anon_sym_RPAREN] = ACTIONS(601),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [294] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [295] = {
        [anon_sym_EQ_GT] = ACTIONS(611),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [296] = {
        [anon_sym_RPAREN] = ACTIONS(211),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [297] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [298] = {
        [sym_parameter_list] = STATE(300),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(613),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [299] = {
        [anon_sym_EQ_GT] = ACTIONS(615),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [300] = {
        [anon_sym_RPAREN] = ACTIONS(617),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [301] = {
        [anon_sym_EQ_GT] = ACTIONS(619),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [302] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [303] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [304] = {
        [sym_parameter_list] = STATE(313),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(621),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [305] = {
        [anon_sym_LPAREN] = ACTIONS(623),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [306] = {
        [sym_parameter_list] = STATE(308),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(625),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [307] = {
        [anon_sym_EQ_GT] = ACTIONS(627),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [308] = {
        [anon_sym_RPAREN] = ACTIONS(629),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [309] = {
        [anon_sym_EQ_GT] = ACTIONS(631),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [310] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [311] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [312] = {
        [anon_sym_EQ_GT] = ACTIONS(633),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [313] = {
        [anon_sym_RPAREN] = ACTIONS(625),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [314] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [315] = {
        [anon_sym_EQ_GT] = ACTIONS(635),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [316] = {
        [anon_sym_RPAREN] = ACTIONS(613),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [317] = {
        [sym_type_parameters] = STATE(18),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [318] = {
        [sym_type_parameter] = STATE(324),
        [sym_binding_identifier] = STATE(7),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [319] = {
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_LPAREN] = ACTIONS(637),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [320] = {
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_GT] = ACTIONS(641),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [321] = {
        [sym_type_parameter] = STATE(323),
        [sym_binding_identifier] = STATE(7),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_LPAREN] = ACTIONS(643),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [323] = {
        [anon_sym_COMMA] = ACTIONS(645),
        [anon_sym_GT] = ACTIONS(645),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [324] = {
        [anon_sym_COMMA] = ACTIONS(647),
        [anon_sym_GT] = ACTIONS(647),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [325] = {
        [sym_type_parameters] = STATE(18),
        [sym_type_parameter] = STATE(6),
        [sym_type] = STATE(33),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(7),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [326] = {
        [sym_type_parameters] = STATE(462),
        [sym_type_parameter] = STATE(463),
        [sym_type] = STATE(464),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_type_member] = STATE(227),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_type] = STATE(465),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(220),
        [sym_call_signature] = STATE(151),
        [sym_required_parameter] = STATE(466),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(274),
        [sym_optional_parameter] = STATE(357),
        [sym_rest_parameter] = STATE(467),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(468),
        [sym_binding_pattern] = STATE(361),
        [sym_array_binding_pattern] = STATE(68),
        [sym_binding_elision_element] = STATE(469),
        [sym_binding_property] = STATE(470),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(471),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_LPAREN] = ACTIONS(652),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(654),
        [anon_sym_RBRACE] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(656),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_new] = ACTIONS(658),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(660),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(664),
        [sym__line_break] = ACTIONS(61),
    },
    [327] = {
        [ts_builtin_sym_end] = ACTIONS(666),
        [anon_sym_COMMA] = ACTIONS(669),
        [anon_sym_GT] = ACTIONS(669),
        [anon_sym_LPAREN] = ACTIONS(666),
        [anon_sym_RPAREN] = ACTIONS(669),
        [anon_sym_RBRACE] = ACTIONS(669),
        [anon_sym_SEMI] = ACTIONS(669),
        [anon_sym_LBRACK] = ACTIONS(669),
        [anon_sym_RBRACK] = ACTIONS(669),
        [anon_sym_PIPE] = ACTIONS(669),
        [anon_sym_AMP] = ACTIONS(669),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [328] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(353),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(672),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [329] = {
        [sym_type_annotation] = STATE(452),
        [anon_sym_COMMA] = ACTIONS(674),
        [anon_sym_GT] = ACTIONS(207),
        [anon_sym_RPAREN] = ACTIONS(207),
        [anon_sym_RBRACE] = ACTIONS(674),
        [anon_sym_SEMI] = ACTIONS(674),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(207),
        [anon_sym_PIPE] = ACTIONS(207),
        [anon_sym_AMP] = ACTIONS(207),
        [anon_sym_EQ_GT] = ACTIONS(682),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [330] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_GT] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(684),
        [anon_sym_PIPE] = ACTIONS(121),
        [anon_sym_AMP] = ACTIONS(121),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [331] = {
        [sym_identifier_reference] = STATE(32),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(687),
        [sym__line_break] = ACTIONS(61),
    },
    [332] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_body] = STATE(148),
        [sym_type_member_list] = STATE(149),
        [sym_type_member] = STATE(150),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(220),
        [sym_call_signature] = STATE(151),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(205),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(454),
        [sym__line_break] = ACTIONS(61),
    },
    [333] = {
        [anon_sym_COMMA] = ACTIONS(691),
        [anon_sym_GT] = ACTIONS(697),
        [anon_sym_RPAREN] = ACTIONS(691),
        [anon_sym_RBRACE] = ACTIONS(691),
        [anon_sym_SEMI] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [anon_sym_RBRACK] = ACTIONS(691),
        [anon_sym_PIPE] = ACTIONS(697),
        [anon_sym_AMP] = ACTIONS(697),
        [anon_sym_QMARK] = ACTIONS(700),
        [anon_sym_COLON] = ACTIONS(700),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [334] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(115),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_types] = STATE(116),
        [sym_tuple_element_type] = STATE(117),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(449),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_elision] = STATE(189),
        [sym_binding_elision_element] = STATE(190),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(188),
        [sym_binding_rest_element] = STATE(192),
        [sym_object_binding_pattern] = STATE(68),
        [aux_sym_elision_repeat1] = STATE(193),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_RBRACK] = ACTIONS(704),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [335] = {
        [sym_type_annotation] = STATE(249),
        [anon_sym_COMMA] = ACTIONS(706),
        [anon_sym_GT] = ACTIONS(712),
        [anon_sym_RPAREN] = ACTIONS(706),
        [anon_sym_RBRACE] = ACTIONS(706),
        [anon_sym_SEMI] = ACTIONS(712),
        [anon_sym_LBRACK] = ACTIONS(712),
        [anon_sym_RBRACK] = ACTIONS(706),
        [anon_sym_PIPE] = ACTIONS(712),
        [anon_sym_AMP] = ACTIONS(712),
        [anon_sym_QMARK] = ACTIONS(715),
        [anon_sym_COLON] = ACTIONS(719),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [336] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(447),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [337] = {
        [sym_type_parameters] = STATE(440),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(728),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [338] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_annotation] = STATE(438),
        [sym_call_signature] = STATE(225),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(730),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RPAREN] = ACTIONS(734),
        [anon_sym_RBRACE] = ACTIONS(412),
        [anon_sym_SEMI] = ACTIONS(412),
        [anon_sym_COLON] = ACTIONS(737),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [339] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_binding_element] = STATE(215),
        [sym_single_name_binding] = STATE(188),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(741),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(741),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(747),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [340] = {
        [sym_binding_identifier] = STATE(410),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [341] = {
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(749),
        [anon_sym_GT] = ACTIONS(749),
        [anon_sym_extends] = ACTIONS(71),
        [anon_sym_RPAREN] = ACTIONS(749),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(749),
        [anon_sym_SEMI] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(749),
        [anon_sym_PIPE] = ACTIONS(145),
        [anon_sym_AMP] = ACTIONS(145),
        [anon_sym_QMARK] = ACTIONS(71),
        [anon_sym_COLON] = ACTIONS(71),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [342] = {
        [anon_sym_LT] = ACTIONS(390),
        [anon_sym_COMMA] = ACTIONS(752),
        [anon_sym_LPAREN] = ACTIONS(390),
        [anon_sym_RPAREN] = ACTIONS(756),
        [anon_sym_RBRACE] = ACTIONS(390),
        [anon_sym_SEMI] = ACTIONS(390),
        [anon_sym_QMARK] = ACTIONS(390),
        [anon_sym_COLON] = ACTIONS(390),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [343] = {
        [anon_sym_LT] = ACTIONS(759),
        [anon_sym_COMMA] = ACTIONS(762),
        [anon_sym_GT] = ACTIONS(767),
        [anon_sym_extends] = ACTIONS(73),
        [anon_sym_LPAREN] = ACTIONS(392),
        [anon_sym_RPAREN] = ACTIONS(767),
        [anon_sym_DOT] = ACTIONS(771),
        [anon_sym_RBRACE] = ACTIONS(762),
        [anon_sym_SEMI] = ACTIONS(774),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_RBRACK] = ACTIONS(767),
        [anon_sym_PIPE] = ACTIONS(771),
        [anon_sym_AMP] = ACTIONS(771),
        [anon_sym_QMARK] = ACTIONS(514),
        [anon_sym_COLON] = ACTIONS(514),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [anon_sym_LPAREN] = ACTIONS(778),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [345] = {
        [aux_sym_type_parameters_repeat1] = STATE(320),
        [anon_sym_COMMA] = ACTIONS(780),
        [anon_sym_GT] = ACTIONS(784),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [346] = {
        [aux_sym_type_arguments_repeat1] = STATE(36),
        [anon_sym_COMMA] = ACTIONS(788),
        [anon_sym_GT] = ACTIONS(801),
        [anon_sym_RPAREN] = ACTIONS(812),
        [anon_sym_RBRACE] = ACTIONS(821),
        [anon_sym_SEMI] = ACTIONS(821),
        [anon_sym_RBRACK] = ACTIONS(829),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [347] = {
        [anon_sym_COMMA] = ACTIONS(837),
        [anon_sym_GT] = ACTIONS(837),
        [anon_sym_RPAREN] = ACTIONS(837),
        [anon_sym_RBRACE] = ACTIONS(837),
        [anon_sym_SEMI] = ACTIONS(837),
        [anon_sym_RBRACK] = ACTIONS(837),
        [anon_sym_PIPE] = ACTIONS(837),
        [anon_sym_AMP] = ACTIONS(157),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [348] = {
        [anon_sym_COMMA] = ACTIONS(840),
        [anon_sym_GT] = ACTIONS(840),
        [anon_sym_RPAREN] = ACTIONS(840),
        [anon_sym_RBRACE] = ACTIONS(840),
        [anon_sym_SEMI] = ACTIONS(840),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_RBRACK] = ACTIONS(840),
        [anon_sym_PIPE] = ACTIONS(840),
        [anon_sym_AMP] = ACTIONS(840),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [349] = {
        [anon_sym_COMMA] = ACTIONS(843),
        [anon_sym_RBRACE] = ACTIONS(843),
        [anon_sym_SEMI] = ACTIONS(843),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [350] = {
        [aux_sym_tuple_element_types_repeat1] = STATE(119),
        [anon_sym_COMMA] = ACTIONS(846),
        [anon_sym_RBRACK] = ACTIONS(850),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [351] = {
        [anon_sym_COMMA] = ACTIONS(854),
        [anon_sym_RPAREN] = ACTIONS(868),
        [anon_sym_RBRACE] = ACTIONS(874),
        [anon_sym_SEMI] = ACTIONS(874),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [352] = {
        [anon_sym_COMMA] = ACTIONS(884),
        [anon_sym_RBRACE] = ACTIONS(884),
        [anon_sym_SEMI] = ACTIONS(884),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [353] = {
        [anon_sym_RPAREN] = ACTIONS(888),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [354] = {
        [aux_sym_required_parameter_list_repeat1] = STATE(266),
        [anon_sym_COMMA] = ACTIONS(890),
        [anon_sym_RPAREN] = ACTIONS(895),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [355] = {
        [sym_type_annotation] = STATE(371),
        [anon_sym_COMMA] = ACTIONS(899),
        [anon_sym_RPAREN] = ACTIONS(899),
        [anon_sym_QMARK] = ACTIONS(902),
        [anon_sym_COLON] = ACTIONS(249),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [356] = {
        [anon_sym_COMMA] = ACTIONS(583),
        [anon_sym_RPAREN] = ACTIONS(904),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [357] = {
        [aux_sym_optional_parameter_list_repeat1] = STATE(72),
        [anon_sym_COMMA] = ACTIONS(907),
        [anon_sym_RPAREN] = ACTIONS(912),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [358] = {
        [anon_sym_RPAREN] = ACTIONS(916),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [359] = {
        [anon_sym_LT] = ACTIONS(920),
        [anon_sym_COMMA] = ACTIONS(312),
        [anon_sym_GT] = ACTIONS(312),
        [anon_sym_RPAREN] = ACTIONS(312),
        [anon_sym_DOT] = ACTIONS(923),
        [anon_sym_RBRACE] = ACTIONS(312),
        [anon_sym_SEMI] = ACTIONS(312),
        [anon_sym_LBRACK] = ACTIONS(312),
        [anon_sym_RBRACK] = ACTIONS(312),
        [anon_sym_PIPE] = ACTIONS(312),
        [anon_sym_AMP] = ACTIONS(312),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [360] = {
        [sym_constraint] = STATE(9),
        [sym_type_annotation] = STATE(282),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_GT] = ACTIONS(79),
        [anon_sym_extends] = ACTIONS(81),
        [anon_sym_RPAREN] = ACTIONS(931),
        [anon_sym_RBRACE] = ACTIONS(460),
        [anon_sym_RBRACK] = ACTIONS(934),
        [anon_sym_QMARK] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(937),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [361] = {
        [anon_sym_COMMA] = ACTIONS(940),
        [anon_sym_RPAREN] = ACTIONS(260),
        [anon_sym_RBRACE] = ACTIONS(462),
        [anon_sym_RBRACK] = ACTIONS(462),
        [anon_sym_QMARK] = ACTIONS(260),
        [anon_sym_COLON] = ACTIONS(260),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [362] = {
        [aux_sym_array_binding_pattern_repeat1] = STATE(197),
        [anon_sym_COMMA] = ACTIONS(943),
        [anon_sym_RBRACK] = ACTIONS(947),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [363] = {
        [aux_sym_object_binding_pattern_repeat1] = STATE(209),
        [anon_sym_COMMA] = ACTIONS(951),
        [anon_sym_RBRACE] = ACTIONS(955),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [364] = {
        [anon_sym_COMMA] = ACTIONS(959),
        [anon_sym_RBRACE] = ACTIONS(508),
        [anon_sym_RBRACK] = ACTIONS(468),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [365] = {
        [anon_sym_COMMA] = ACTIONS(962),
        [anon_sym_RBRACE] = ACTIONS(962),
        [anon_sym_RBRACK] = ACTIONS(462),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [366] = {
        [anon_sym_RBRACK] = ACTIONS(965),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [367] = {
        [anon_sym_COMMA] = ACTIONS(967),
        [anon_sym_RPAREN] = ACTIONS(967),
        [anon_sym_RBRACE] = ACTIONS(967),
        [anon_sym_RBRACK] = ACTIONS(967),
        [anon_sym_QMARK] = ACTIONS(967),
        [anon_sym_COLON] = ACTIONS(967),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [368] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(741),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(741),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(264),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [369] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(559),
        [anon_sym_PIPE] = ACTIONS(121),
        [anon_sym_AMP] = ACTIONS(121),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [370] = {
        [sym_type_annotation] = STATE(372),
        [anon_sym_COMMA] = ACTIONS(734),
        [anon_sym_RPAREN] = ACTIONS(734),
        [anon_sym_COLON] = ACTIONS(276),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [371] = {
        [anon_sym_COMMA] = ACTIONS(970),
        [anon_sym_RPAREN] = ACTIONS(970),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [372] = {
        [anon_sym_COMMA] = ACTIONS(973),
        [anon_sym_RPAREN] = ACTIONS(973),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [373] = {
        [sym_type_annotation] = STATE(375),
        [anon_sym_COMMA] = ACTIONS(976),
        [anon_sym_RBRACE] = ACTIONS(976),
        [anon_sym_SEMI] = ACTIONS(976),
        [anon_sym_EQ_GT] = ACTIONS(981),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [374] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(379),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [375] = {
        [anon_sym_COMMA] = ACTIONS(983),
        [anon_sym_RBRACE] = ACTIONS(983),
        [anon_sym_SEMI] = ACTIONS(983),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [376] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(398),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(988),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [377] = {
        [sym_type_parameters] = STATE(387),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(990),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [378] = {
        [anon_sym_LPAREN] = ACTIONS(992),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [379] = {
        [anon_sym_COMMA] = ACTIONS(994),
        [anon_sym_GT] = ACTIONS(994),
        [anon_sym_RPAREN] = ACTIONS(994),
        [anon_sym_RBRACE] = ACTIONS(994),
        [anon_sym_SEMI] = ACTIONS(994),
        [anon_sym_RBRACK] = ACTIONS(994),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [380] = {
        [sym_parameter_list] = STATE(382),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [381] = {
        [anon_sym_EQ_GT] = ACTIONS(1001),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [382] = {
        [anon_sym_RPAREN] = ACTIONS(1003),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [383] = {
        [anon_sym_EQ_GT] = ACTIONS(1005),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [384] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [385] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [386] = {
        [sym_parameter_list] = STATE(395),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1007),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [387] = {
        [anon_sym_LPAREN] = ACTIONS(1009),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [388] = {
        [sym_parameter_list] = STATE(390),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1011),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [389] = {
        [anon_sym_EQ_GT] = ACTIONS(1013),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [390] = {
        [anon_sym_RPAREN] = ACTIONS(1015),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [391] = {
        [anon_sym_EQ_GT] = ACTIONS(1017),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [392] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [393] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [394] = {
        [anon_sym_EQ_GT] = ACTIONS(1019),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [395] = {
        [anon_sym_RPAREN] = ACTIONS(1011),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [396] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [397] = {
        [anon_sym_EQ_GT] = ACTIONS(1021),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [398] = {
        [anon_sym_RPAREN] = ACTIONS(999),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [399] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [400] = {
        [sym_parameter_list] = STATE(402),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1023),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [401] = {
        [sym_type_annotation] = STATE(408),
        [anon_sym_COMMA] = ACTIONS(1025),
        [anon_sym_RBRACE] = ACTIONS(1025),
        [anon_sym_SEMI] = ACTIONS(1025),
        [anon_sym_EQ_GT] = ACTIONS(1028),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [402] = {
        [anon_sym_RPAREN] = ACTIONS(1030),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [403] = {
        [sym_type_annotation] = STATE(405),
        [anon_sym_COMMA] = ACTIONS(1032),
        [anon_sym_RBRACE] = ACTIONS(1032),
        [anon_sym_SEMI] = ACTIONS(1032),
        [anon_sym_EQ_GT] = ACTIONS(1035),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [404] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(406),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [405] = {
        [anon_sym_COMMA] = ACTIONS(1037),
        [anon_sym_RBRACE] = ACTIONS(1037),
        [anon_sym_SEMI] = ACTIONS(1037),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [406] = {
        [anon_sym_COMMA] = ACTIONS(1040),
        [anon_sym_GT] = ACTIONS(1040),
        [anon_sym_RPAREN] = ACTIONS(1040),
        [anon_sym_RBRACE] = ACTIONS(1040),
        [anon_sym_SEMI] = ACTIONS(1040),
        [anon_sym_RBRACK] = ACTIONS(1040),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [407] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(409),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [408] = {
        [anon_sym_COMMA] = ACTIONS(1032),
        [anon_sym_RBRACE] = ACTIONS(1032),
        [anon_sym_SEMI] = ACTIONS(1032),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [409] = {
        [anon_sym_COMMA] = ACTIONS(1043),
        [anon_sym_GT] = ACTIONS(1043),
        [anon_sym_RPAREN] = ACTIONS(1043),
        [anon_sym_RBRACE] = ACTIONS(1043),
        [anon_sym_SEMI] = ACTIONS(1043),
        [anon_sym_RBRACK] = ACTIONS(1043),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [410] = {
        [sym_type_annotation] = STATE(282),
        [anon_sym_RPAREN] = ACTIONS(591),
        [anon_sym_RBRACK] = ACTIONS(512),
        [anon_sym_COLON] = ACTIONS(593),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [411] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(435),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(1046),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [412] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_body] = STATE(148),
        [sym_type_member_list] = STATE(149),
        [sym_type_member] = STATE(150),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(220),
        [sym_call_signature] = STATE(151),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(205),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(1048),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(454),
        [sym__line_break] = ACTIONS(61),
    },
    [413] = {
        [sym_type_parameters] = STATE(423),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1050),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [414] = {
        [anon_sym_COMMA] = ACTIONS(756),
        [anon_sym_RPAREN] = ACTIONS(756),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [415] = {
        [anon_sym_LPAREN] = ACTIONS(1052),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [416] = {
        [sym_parameter_list] = STATE(418),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1054),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [417] = {
        [anon_sym_EQ_GT] = ACTIONS(1056),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [418] = {
        [anon_sym_RPAREN] = ACTIONS(1058),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [419] = {
        [anon_sym_EQ_GT] = ACTIONS(1060),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [420] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [421] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [422] = {
        [sym_parameter_list] = STATE(431),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1062),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [423] = {
        [anon_sym_LPAREN] = ACTIONS(1064),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [424] = {
        [sym_parameter_list] = STATE(426),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1066),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [425] = {
        [anon_sym_EQ_GT] = ACTIONS(1068),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [426] = {
        [anon_sym_RPAREN] = ACTIONS(1070),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [427] = {
        [anon_sym_EQ_GT] = ACTIONS(1072),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [428] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [429] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [430] = {
        [anon_sym_EQ_GT] = ACTIONS(1074),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [431] = {
        [anon_sym_RPAREN] = ACTIONS(1066),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [432] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [433] = {
        [anon_sym_COMMA] = ACTIONS(1076),
        [anon_sym_RPAREN] = ACTIONS(386),
        [anon_sym_RBRACE] = ACTIONS(1076),
        [anon_sym_SEMI] = ACTIONS(386),
        [anon_sym_LBRACK] = ACTIONS(386),
        [anon_sym_PIPE] = ACTIONS(386),
        [anon_sym_AMP] = ACTIONS(386),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [434] = {
        [anon_sym_EQ_GT] = ACTIONS(1079),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [435] = {
        [anon_sym_RPAREN] = ACTIONS(1054),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [436] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [437] = {
        [sym_type_parameters] = STATE(415),
        [sym_type] = STATE(85),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(739),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(745),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(282),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [438] = {
        [anon_sym_COMMA] = ACTIONS(1081),
        [anon_sym_RPAREN] = ACTIONS(973),
        [anon_sym_RBRACE] = ACTIONS(521),
        [anon_sym_SEMI] = ACTIONS(521),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [439] = {
        [sym_parameter_list] = STATE(446),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1085),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [440] = {
        [anon_sym_LPAREN] = ACTIONS(1087),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [441] = {
        [sym_parameter_list] = STATE(443),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1089),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [442] = {
        [sym_type_annotation] = STATE(241),
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_EQ_GT] = ACTIONS(1013),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [443] = {
        [anon_sym_RPAREN] = ACTIONS(1091),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [444] = {
        [sym_type_annotation] = STATE(240),
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [anon_sym_EQ_GT] = ACTIONS(1017),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [445] = {
        [sym_type_annotation] = STATE(244),
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_EQ_GT] = ACTIONS(1019),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [446] = {
        [anon_sym_RPAREN] = ACTIONS(1089),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [447] = {
        [anon_sym_COMMA] = ACTIONS(1093),
        [anon_sym_GT] = ACTIONS(1093),
        [anon_sym_RPAREN] = ACTIONS(1093),
        [anon_sym_RBRACE] = ACTIONS(1093),
        [anon_sym_SEMI] = ACTIONS(1093),
        [anon_sym_RBRACK] = ACTIONS(1093),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [448] = {
        [anon_sym_COMMA] = ACTIONS(1100),
        [anon_sym_GT] = ACTIONS(193),
        [anon_sym_RPAREN] = ACTIONS(1100),
        [anon_sym_RBRACE] = ACTIONS(1100),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(1100),
        [anon_sym_PIPE] = ACTIONS(193),
        [anon_sym_AMP] = ACTIONS(193),
        [anon_sym_QMARK] = ACTIONS(458),
        [anon_sym_COLON] = ACTIONS(458),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [449] = {
        [anon_sym_COMMA] = ACTIONS(460),
        [anon_sym_RBRACK] = ACTIONS(460),
        [anon_sym_COLON] = ACTIONS(555),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [450] = {
        [anon_sym_COMMA] = ACTIONS(1076),
        [anon_sym_GT] = ACTIONS(386),
        [anon_sym_RPAREN] = ACTIONS(1076),
        [anon_sym_RBRACE] = ACTIONS(1076),
        [anon_sym_SEMI] = ACTIONS(386),
        [anon_sym_LBRACK] = ACTIONS(386),
        [anon_sym_RBRACK] = ACTIONS(1076),
        [anon_sym_PIPE] = ACTIONS(386),
        [anon_sym_AMP] = ACTIONS(386),
        [anon_sym_QMARK] = ACTIONS(486),
        [anon_sym_COLON] = ACTIONS(486),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [451] = {
        [anon_sym_LT] = ACTIONS(145),
        [anon_sym_COMMA] = ACTIONS(316),
        [anon_sym_GT] = ACTIONS(316),
        [anon_sym_RPAREN] = ACTIONS(316),
        [anon_sym_DOT] = ACTIONS(771),
        [anon_sym_RBRACE] = ACTIONS(316),
        [anon_sym_SEMI] = ACTIONS(316),
        [anon_sym_LBRACK] = ACTIONS(316),
        [anon_sym_RBRACK] = ACTIONS(316),
        [anon_sym_PIPE] = ACTIONS(316),
        [anon_sym_AMP] = ACTIONS(316),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [452] = {
        [anon_sym_COMMA] = ACTIONS(1103),
        [anon_sym_RBRACE] = ACTIONS(1103),
        [anon_sym_SEMI] = ACTIONS(1103),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [453] = {
        [sym_type_annotation] = STATE(455),
        [anon_sym_COMMA] = ACTIONS(1110),
        [anon_sym_RBRACE] = ACTIONS(1110),
        [anon_sym_SEMI] = ACTIONS(1110),
        [anon_sym_EQ_GT] = ACTIONS(1115),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [454] = {
        [sym_type_parameters] = STATE(378),
        [sym_type] = STATE(456),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(724),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(726),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [455] = {
        [anon_sym_COMMA] = ACTIONS(976),
        [anon_sym_RBRACE] = ACTIONS(976),
        [anon_sym_SEMI] = ACTIONS(976),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [456] = {
        [anon_sym_COMMA] = ACTIONS(1117),
        [anon_sym_GT] = ACTIONS(1117),
        [anon_sym_RPAREN] = ACTIONS(1117),
        [anon_sym_RBRACE] = ACTIONS(1117),
        [anon_sym_SEMI] = ACTIONS(1117),
        [anon_sym_RBRACK] = ACTIONS(1117),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [457] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(509),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(1122),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [458] = {
        [sym_type_parameters] = STATE(147),
        [sym_type_body] = STATE(148),
        [sym_type_member_list] = STATE(149),
        [sym_type_member] = STATE(150),
        [sym_property_signature] = STATE(151),
        [sym_property_name] = STATE(220),
        [sym_call_signature] = STATE(151),
        [sym_construct_signature] = STATE(151),
        [sym_index_signature] = STATE(151),
        [sym_method_signature] = STATE(151),
        [sym_binding_identifier] = STATE(187),
        [sym_binding_property] = STATE(205),
        [sym_single_name_binding] = STATE(206),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(1124),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_string_literal] = ACTIONS(131),
        [sym_numeric_literal] = ACTIONS(133),
        [sym_identifier] = ACTIONS(454),
        [sym__line_break] = ACTIONS(61),
    },
    [459] = {
        [sym_type_parameters] = STATE(114),
        [sym_type] = STATE(115),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_tuple_element_types] = STATE(116),
        [sym_tuple_element_type] = STATE(117),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(449),
        [sym_binding_pattern] = STATE(188),
        [sym_array_binding_pattern] = STATE(68),
        [sym_elision] = STATE(189),
        [sym_binding_elision_element] = STATE(190),
        [sym_binding_element] = STATE(191),
        [sym_single_name_binding] = STATE(188),
        [sym_binding_rest_element] = STATE(192),
        [sym_object_binding_pattern] = STATE(68),
        [aux_sym_elision_repeat1] = STATE(193),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_RBRACK] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(139),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [460] = {
        [sym_type_parameters] = STATE(500),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1126),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [461] = {
        [anon_sym_LT] = ACTIONS(759),
        [anon_sym_COMMA] = ACTIONS(514),
        [anon_sym_GT] = ACTIONS(73),
        [anon_sym_extends] = ACTIONS(73),
        [anon_sym_LPAREN] = ACTIONS(392),
        [anon_sym_RPAREN] = ACTIONS(73),
        [anon_sym_DOT] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(514),
        [anon_sym_SEMI] = ACTIONS(392),
        [anon_sym_RBRACK] = ACTIONS(73),
        [anon_sym_QMARK] = ACTIONS(514),
        [anon_sym_COLON] = ACTIONS(514),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [462] = {
        [anon_sym_LPAREN] = ACTIONS(1128),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [463] = {
        [anon_sym_COMMA] = ACTIONS(1130),
        [anon_sym_GT] = ACTIONS(1130),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [464] = {
        [anon_sym_COMMA] = ACTIONS(1133),
        [anon_sym_GT] = ACTIONS(1137),
        [anon_sym_RBRACK] = ACTIONS(344),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [465] = {
        [anon_sym_COMMA] = ACTIONS(1140),
        [anon_sym_RBRACK] = ACTIONS(1140),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [466] = {
        [anon_sym_COMMA] = ACTIONS(1143),
        [anon_sym_RPAREN] = ACTIONS(1143),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [467] = {
        [anon_sym_RPAREN] = ACTIONS(1146),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [468] = {
        [sym_constraint] = STATE(9),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_GT] = ACTIONS(79),
        [anon_sym_extends] = ACTIONS(81),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_RBRACE] = ACTIONS(460),
        [anon_sym_RBRACK] = ACTIONS(460),
        [anon_sym_QMARK] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(257),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [469] = {
        [anon_sym_COMMA] = ACTIONS(1149),
        [anon_sym_RBRACK] = ACTIONS(1149),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [470] = {
        [anon_sym_COMMA] = ACTIONS(1152),
        [anon_sym_RBRACE] = ACTIONS(1152),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [471] = {
        [anon_sym_COMMA] = ACTIONS(962),
        [anon_sym_RBRACE] = ACTIONS(494),
        [anon_sym_RBRACK] = ACTIONS(462),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [472] = {
        [sym_parameter_list] = STATE(474),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1155),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [473] = {
        [sym_type_annotation] = STATE(233),
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(531),
        [anon_sym_SEMI] = ACTIONS(531),
        [anon_sym_EQ_GT] = ACTIONS(1157),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [474] = {
        [anon_sym_RPAREN] = ACTIONS(1159),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [475] = {
        [sym_type_annotation] = STATE(232),
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [anon_sym_SEMI] = ACTIONS(535),
        [anon_sym_EQ_GT] = ACTIONS(1161),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [476] = {
        [sym_type_parameters] = STATE(479),
        [sym_type] = STATE(91),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1163),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(1165),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [477] = {
        [sym_type_parameters] = STATE(48),
        [sym_type] = STATE(49),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_parameter_list] = STATE(497),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_identifier_reference] = STATE(28),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(103),
        [anon_sym_RPAREN] = ACTIONS(1167),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(117),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(119),
        [sym__line_break] = ACTIONS(61),
    },
    [478] = {
        [sym_type_parameters] = STATE(486),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1169),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [479] = {
        [anon_sym_LPAREN] = ACTIONS(1171),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [480] = {
        [sym_parameter_list] = STATE(482),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1173),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [481] = {
        [anon_sym_EQ_GT] = ACTIONS(1157),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [482] = {
        [anon_sym_RPAREN] = ACTIONS(1175),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [483] = {
        [anon_sym_EQ_GT] = ACTIONS(1161),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [484] = {
        [sym_type_parameters] = STATE(479),
        [sym_type] = STATE(93),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1163),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(1165),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [485] = {
        [sym_parameter_list] = STATE(494),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1177),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [486] = {
        [anon_sym_LPAREN] = ACTIONS(1179),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [487] = {
        [sym_parameter_list] = STATE(489),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1181),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [488] = {
        [anon_sym_EQ_GT] = ACTIONS(1183),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [489] = {
        [anon_sym_RPAREN] = ACTIONS(1185),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [490] = {
        [anon_sym_EQ_GT] = ACTIONS(1187),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [491] = {
        [sym_type_parameters] = STATE(479),
        [sym_type] = STATE(105),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1163),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(1165),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [492] = {
        [sym_type_parameters] = STATE(479),
        [sym_type] = STATE(107),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1163),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(1165),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [493] = {
        [anon_sym_EQ_GT] = ACTIONS(1189),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [494] = {
        [anon_sym_RPAREN] = ACTIONS(1181),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [495] = {
        [sym_type_parameters] = STATE(479),
        [sym_type] = STATE(111),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1163),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(1165),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [496] = {
        [anon_sym_EQ_GT] = ACTIONS(1191),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [497] = {
        [anon_sym_RPAREN] = ACTIONS(1173),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [498] = {
        [sym_type_parameters] = STATE(479),
        [sym_type] = STATE(223),
        [sym_union_or_intersection_type] = STATE(20),
        [sym_intersection_or_primary_type] = STATE(21),
        [sym_primary_type] = STATE(22),
        [sym_parenthesized_type] = STATE(23),
        [sym_predefined_type] = STATE(23),
        [sym_type_reference] = STATE(23),
        [sym_type_or_namespace_name] = STATE(24),
        [sym_object_type] = STATE(23),
        [sym_array_type] = STATE(23),
        [sym_tuple_type] = STATE(23),
        [sym_union_type] = STATE(25),
        [sym_intersection_type] = STATE(26),
        [sym_function_type] = STATE(27),
        [sym_constructor_type] = STATE(27),
        [sym_type_query] = STATE(23),
        [sym_this_type] = STATE(23),
        [sym_identifier_reference] = STATE(28),
        [anon_sym_LT] = ACTIONS(63),
        [anon_sym_LPAREN] = ACTIONS(1163),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_number] = ACTIONS(85),
        [anon_sym_boolean] = ACTIONS(85),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_symbol] = ACTIONS(85),
        [anon_sym_void] = ACTIONS(85),
        [anon_sym_LBRACE] = ACTIONS(87),
        [anon_sym_LBRACK] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(1165),
        [anon_sym_typeof] = ACTIONS(93),
        [anon_sym_this] = ACTIONS(95),
        [anon_sym_yield] = ACTIONS(97),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(99),
        [sym__line_break] = ACTIONS(61),
    },
    [499] = {
        [sym_parameter_list] = STATE(506),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1193),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [500] = {
        [anon_sym_LPAREN] = ACTIONS(1195),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [501] = {
        [sym_parameter_list] = STATE(503),
        [sym_required_parameter_list] = STATE(60),
        [sym_required_parameter] = STATE(61),
        [sym_accessibility_modifier] = STATE(62),
        [sym_binding_identifier_or_pattern] = STATE(63),
        [sym_optional_parameter_list] = STATE(64),
        [sym_optional_parameter] = STATE(65),
        [sym_rest_parameter] = STATE(64),
        [sym_binding_identifier] = STATE(66),
        [sym_binding_pattern] = STATE(67),
        [sym_array_binding_pattern] = STATE(68),
        [sym_object_binding_pattern] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1197),
        [anon_sym_LBRACE] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
        [anon_sym_yield] = ACTIONS(65),
        [sym_comment] = ACTIONS(53),
        [sym_identifier] = ACTIONS(67),
        [sym__line_break] = ACTIONS(61),
    },
    [502] = {
        [sym_type_annotation] = STATE(241),
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_EQ_GT] = ACTIONS(1183),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [503] = {
        [anon_sym_RPAREN] = ACTIONS(1199),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [504] = {
        [sym_type_annotation] = STATE(240),
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RBRACE] = ACTIONS(549),
        [anon_sym_SEMI] = ACTIONS(549),
        [anon_sym_EQ_GT] = ACTIONS(1187),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [505] = {
        [sym_type_annotation] = STATE(244),
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_EQ_GT] = ACTIONS(1189),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [506] = {
        [anon_sym_RPAREN] = ACTIONS(1197),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [507] = {
        [anon_sym_COMMA] = ACTIONS(1076),
        [anon_sym_GT] = ACTIONS(386),
        [anon_sym_RPAREN] = ACTIONS(486),
        [anon_sym_LBRACK] = ACTIONS(386),
        [anon_sym_RBRACK] = ACTIONS(1076),
        [anon_sym_PIPE] = ACTIONS(386),
        [anon_sym_AMP] = ACTIONS(386),
        [anon_sym_QMARK] = ACTIONS(486),
        [anon_sym_COLON] = ACTIONS(486),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [508] = {
        [sym_type_annotation] = STATE(252),
        [anon_sym_COMMA] = ACTIONS(563),
        [anon_sym_RBRACE] = ACTIONS(563),
        [anon_sym_SEMI] = ACTIONS(563),
        [anon_sym_EQ_GT] = ACTIONS(1191),
        [anon_sym_COLON] = ACTIONS(410),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
    [509] = {
        [anon_sym_RPAREN] = ACTIONS(1155),
        [sym_comment] = ACTIONS(53),
        [sym__line_break] = ACTIONS(61),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(325),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(326),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(327),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(8),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(328),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(329),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(11),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(330),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(331),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(332),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(226),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(334),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(335),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(51),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(43),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(336),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(337),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(15),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(338),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(339),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(57),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(340),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(341),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(342),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(145),
    [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(343),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_identifier, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binding_identifier, 1),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
    [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
    [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_this_type, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_identifier_reference, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constraint, 2),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_union_or_intersection_type, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intersection_or_primary_type, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_type, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_or_namespace_name, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_reference, 2),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_or_namespace_name, 3),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 3),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intersection_type, 3),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_union_type, 3),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_accessibility_modifier, 1),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_accessibility_modifier, 1),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_accessibility_modifier, 1),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 1),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_required_parameter_list, 1),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 1),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_optional_parameter_list, 1),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binding_identifier_or_pattern, 1),
    [257] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binding_identifier_or_pattern, 1), SHIFT(69),
    [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_identifier_or_pattern, 1),
    [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_pattern, 1),
    [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 3),
    [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_optional_parameter_list, 2),
    [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_optional_parameter_list_repeat1, 3),
    [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_optional_parameter, 2),
    [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
    [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_optional_parameter, 3),
    [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_optional_parameter, 4),
    [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_annotation, 2),
    [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 6),
    [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 5),
    [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_query, 2),
    [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_query_expression, 1),
    [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
    [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_query_expression, 3),
    [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_type, 7),
    [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_type, 6),
    [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_type, 5),
    [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_type, 1),
    [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_types, 1),
    [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_types, 2),
    [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_element_types_repeat1, 3),
    [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_element_types_repeat1, 2),
    [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_type, 3),
    [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_object_type, 2),
    [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_name, 1),
    [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_property_name, 1),
    [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_body, 1),
    [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_member_list, 1),
    [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_member, 1),
    [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 1),
    [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 2),
    [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
    [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_signature, 2),
    [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object_type, 3),
    [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
    [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_elision_repeat1, 1),
    [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 2),
    [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_name_binding, 1),
    [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_element, 1),
    [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_elision_element, 1),
    [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elision, 1),
    [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_elision_repeat1, 2),
    [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 3),
    [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 4),
    [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_binding_pattern_repeat1, 3),
    [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object_binding_pattern, 2),
    [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_property, 1),
    [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object_binding_pattern, 3),
    [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object_binding_pattern, 4),
    [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_binding_pattern_repeat1, 3),
    [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_binding_pattern_repeat1, 2),
    [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_property, 3),
    [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_binding_pattern_repeat1, 2),
    [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_rest_element, 2),
    [514] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_property_name, 1), REDUCE_FRAGILE(sym_binding_identifier, 1),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 4),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 3),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_signature, 3),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_body, 2),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_member_list, 3),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 3),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 4),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 5),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_construct_signature, 4),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_construct_signature, 5),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_construct_signature, 6),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_construct_signature, 3),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_index_signature, 6),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 2),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_optional_parameter_list_repeat1, 2),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 2),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_required_parameter_list, 2),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_required_parameter_list_repeat1, 3),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_required_parameter_list_repeat1, 2),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 5),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_rest_parameter, 2),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_rest_parameter, 3),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 4),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 3),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2),
    [649] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_elision_repeat1, 1), REDUCE(aux_sym_elision_repeat1, 2),
    [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
    [660] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_elision_repeat1, 1), REDUCE(aux_sym_elision_repeat1, 2), SHIFT(58),
    [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(461),
    [666] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3), REDUCE(sym_type_parameters, 4),
    [669] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3), REDUCE(sym_type_arguments, 4),
    [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [674] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 2), REDUCE(sym_parenthesized_type, 3), REDUCE(sym_call_signature, 3), REDUCE(sym_construct_signature, 3), REDUCE(sym_call_signature, 4), REDUCE(sym_construct_signature, 4), REDUCE(sym_construct_signature, 5),
    [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [684] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_predefined_type, 1), SHIFT(248),
    [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(451),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [691] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_object_type, 2), REDUCE(sym_object_binding_pattern, 2), REDUCE(sym_object_type, 3), REDUCE(sym_object_binding_pattern, 3), REDUCE(sym_object_binding_pattern, 4),
    [697] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_object_type, 2), REDUCE(sym_object_type, 3),
    [700] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object_binding_pattern, 2), REDUCE(sym_object_binding_pattern, 3), REDUCE(sym_object_binding_pattern, 4),
    [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [706] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 2), REDUCE(sym_array_type, 3), REDUCE(sym_tuple_type, 3), REDUCE(sym_array_binding_pattern, 3), REDUCE(sym_array_binding_pattern, 4),
    [712] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 3), REDUCE(sym_tuple_type, 3),
    [715] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 2), REDUCE(sym_array_binding_pattern, 3), REDUCE(sym_array_binding_pattern, 4),
    [719] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 2), REDUCE(sym_array_binding_pattern, 3), REDUCE(sym_array_binding_pattern, 4), SHIFT(154),
    [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [730] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 2), REDUCE(sym_optional_parameter, 2), REDUCE(sym_optional_parameter, 3),
    [734] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_optional_parameter, 2), REDUCE(sym_optional_parameter, 3),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [749] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_identifier_reference, 1), REDUCE(sym_binding_identifier, 1),
    [752] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_name, 1), REDUCE(sym_required_parameter, 3), REDUCE(sym_optional_parameter, 4),
    [756] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 3), REDUCE(sym_optional_parameter, 4),
    [759] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_property_name, 1), REDUCE(sym_identifier_reference, 1),
    [762] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_property_name, 1), REDUCE(sym_identifier_reference, 1), REDUCE_FRAGILE(sym_binding_identifier, 1), REDUCE(sym_type_query_expression, 3),
    [767] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_identifier_reference, 1), REDUCE_FRAGILE(sym_binding_identifier, 1), REDUCE(sym_type_query_expression, 3),
    [771] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_identifier_reference, 1), REDUCE(sym_type_query_expression, 3),
    [774] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_property_name, 1), REDUCE(sym_identifier_reference, 1), REDUCE(sym_type_query_expression, 3),
    [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
    [780] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), REDUCE(aux_sym_type_parameters_repeat1, 3), SHIFT(318),
    [784] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), REDUCE(aux_sym_type_parameters_repeat1, 3), SHIFT(319),
    [788] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_type, 1), REDUCE(sym_constraint, 2), REDUCE(sym_type_annotation, 2), REDUCE(aux_sym_type_arguments_repeat1, 2), REDUCE(aux_sym_type_arguments_repeat1, 3), REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7), SHIFT(34),
    [801] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constraint, 2), REDUCE(aux_sym_type_arguments_repeat1, 2), REDUCE(aux_sym_type_arguments_repeat1, 3), REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7), SHIFT(35),
    [812] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_annotation, 2), REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7), SHIFT(50),
    [821] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_annotation, 2), REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7),
    [829] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_type, 1), REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7),
    [837] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_union_or_intersection_type, 1), REDUCE(sym_union_type, 3),
    [840] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intersection_or_primary_type, 1), REDUCE(sym_intersection_type, 3),
    [843] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_member_list, 1), REDUCE(sym_type_member_list, 3),
    [846] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_element_types_repeat1, 2), REDUCE(aux_sym_tuple_element_types_repeat1, 3), SHIFT(118),
    [850] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_types, 1), REDUCE(aux_sym_tuple_element_types_repeat1, 2), REDUCE(aux_sym_tuple_element_types_repeat1, 3),
    [854] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 2), REDUCE(sym_required_parameter, 2), REDUCE(sym_property_signature, 3), REDUCE(sym_call_signature, 3), REDUCE(sym_required_parameter, 3), REDUCE(sym_optional_parameter, 3), REDUCE(sym_call_signature, 4), REDUCE(sym_optional_parameter, 4), REDUCE(sym_construct_signature, 4), REDUCE(sym_call_signature, 5), REDUCE(sym_construct_signature, 5), REDUCE(sym_construct_signature, 6), REDUCE(sym_index_signature, 6),
    [868] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 2), REDUCE(sym_required_parameter, 3), REDUCE(sym_optional_parameter, 3), REDUCE(sym_rest_parameter, 3), REDUCE(sym_optional_parameter, 4),
    [874] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 2), REDUCE(sym_property_signature, 3), REDUCE(sym_call_signature, 3), REDUCE(sym_call_signature, 4), REDUCE(sym_construct_signature, 4), REDUCE(sym_call_signature, 5), REDUCE(sym_construct_signature, 5), REDUCE(sym_construct_signature, 6), REDUCE(sym_index_signature, 6),
    [884] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_member, 1), REDUCE(sym_method_signature, 2), REDUCE(sym_method_signature, 3),
    [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [890] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_required_parameter_list, 1), REDUCE(aux_sym_required_parameter_list_repeat1, 2), REDUCE(aux_sym_required_parameter_list_repeat1, 3), SHIFT(265),
    [895] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_required_parameter_list, 1), REDUCE(aux_sym_required_parameter_list_repeat1, 2), REDUCE(aux_sym_required_parameter_list_repeat1, 3),
    [899] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 1), REDUCE(sym_required_parameter, 2),
    [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [904] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 1), REDUCE(sym_parameter_list, 3),
    [907] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_optional_parameter_list, 1), REDUCE(aux_sym_optional_parameter_list_repeat1, 2), REDUCE(aux_sym_optional_parameter_list_repeat1, 3), SHIFT(71),
    [912] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_optional_parameter_list, 1), REDUCE(aux_sym_optional_parameter_list_repeat1, 2), REDUCE(aux_sym_optional_parameter_list_repeat1, 3),
    [916] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 1), REDUCE(sym_parameter_list, 3), REDUCE(sym_parameter_list, 5),
    [920] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_or_namespace_name, 1), REDUCE(sym_type_or_namespace_name, 3),
    [923] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_or_namespace_name, 1), REDUCE(sym_type_query_expression, 1), REDUCE(sym_type_or_namespace_name, 3),
    [927] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1), REDUCE_FRAGILE(sym_binding_identifier_or_pattern, 1), REDUCE(sym_single_name_binding, 1),
    [931] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binding_identifier_or_pattern, 1), REDUCE(sym_rest_parameter, 2),
    [934] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_name_binding, 1), REDUCE(sym_binding_rest_element, 2),
    [937] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binding_identifier_or_pattern, 1), SHIFT(368),
    [940] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_identifier_or_pattern, 1), REDUCE(sym_binding_element, 1),
    [943] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_binding_pattern_repeat1, 2), REDUCE(aux_sym_array_binding_pattern_repeat1, 3), SHIFT(196),
    [947] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_binding_pattern_repeat1, 2), REDUCE(aux_sym_array_binding_pattern_repeat1, 3), SHIFT(195),
    [951] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_binding_pattern_repeat1, 2), REDUCE(aux_sym_object_binding_pattern_repeat1, 3), SHIFT(207),
    [955] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_binding_pattern_repeat1, 2), REDUCE(aux_sym_object_binding_pattern_repeat1, 3), SHIFT(208),
    [959] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_elision_element, 1), REDUCE(sym_binding_property, 3),
    [962] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binding_property, 1), REDUCE(sym_binding_element, 1),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [967] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 3), REDUCE(sym_array_binding_pattern, 4),
    [970] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_required_parameter, 2), REDUCE(sym_required_parameter, 3),
    [973] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_optional_parameter, 3), REDUCE(sym_optional_parameter, 4),
    [976] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 3), REDUCE(sym_call_signature, 4), REDUCE(sym_construct_signature, 4), REDUCE(sym_construct_signature, 5),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
    [983] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 4), REDUCE(sym_call_signature, 5), REDUCE(sym_construct_signature, 5), REDUCE(sym_construct_signature, 6),
    [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [994] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
    [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
    [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [1025] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 3), REDUCE(sym_construct_signature, 4),
    [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
    [1032] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 4), REDUCE(sym_construct_signature, 5),
    [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [1037] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 5), REDUCE(sym_construct_signature, 6),
    [1040] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 7),
    [1043] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 6),
    [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
    [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
    [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1076] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_object_type, 2), REDUCE(sym_object_binding_pattern, 2),
    [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1081] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_property_signature, 3), REDUCE(sym_optional_parameter, 3), REDUCE(sym_optional_parameter, 4),
    [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [1093] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_function_type, 6), REDUCE(sym_constructor_type, 6), REDUCE(sym_constructor_type, 7),
    [1100] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_binding_pattern, 2), REDUCE(sym_array_type, 3),
    [1103] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 3), REDUCE(sym_call_signature, 4), REDUCE(sym_construct_signature, 4), REDUCE(sym_call_signature, 5), REDUCE(sym_construct_signature, 5), REDUCE(sym_construct_signature, 6),
    [1110] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_signature, 2), REDUCE(sym_call_signature, 3), REDUCE(sym_construct_signature, 3), REDUCE(sym_construct_signature, 4),
    [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
    [1117] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 4), REDUCE(sym_function_type, 5), REDUCE(sym_constructor_type, 5), REDUCE(sym_constructor_type, 6),
    [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
    [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [1130] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), REDUCE(aux_sym_type_parameters_repeat1, 3),
    [1133] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_element_type, 1), REDUCE(aux_sym_type_arguments_repeat1, 2), REDUCE(aux_sym_type_arguments_repeat1, 3),
    [1137] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2), REDUCE(aux_sym_type_arguments_repeat1, 3),
    [1140] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_element_types_repeat1, 2), REDUCE(aux_sym_tuple_element_types_repeat1, 3),
    [1143] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_required_parameter_list_repeat1, 2), REDUCE(aux_sym_required_parameter_list_repeat1, 3),
    [1146] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter_list, 3), REDUCE(sym_parameter_list, 5),
    [1149] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_binding_pattern_repeat1, 2), REDUCE(aux_sym_array_binding_pattern_repeat1, 3),
    [1152] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_binding_pattern_repeat1, 2), REDUCE(aux_sym_object_binding_pattern_repeat1, 3),
    [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
    [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
    [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
};

const TSLanguage *tree_sitter_javascript() {
    GET_LANGUAGE();
}
