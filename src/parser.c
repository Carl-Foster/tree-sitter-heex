#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT_BANG = 1,
  anon_sym_DOCTYPE = 2,
  anon_sym_html = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  anon_sym_LT_SLASH = 6,
  anon_sym_SLASH_GT = 7,
  anon_sym_LT_COLON = 8,
  anon_sym_LT_SLASH_COLON = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  aux_sym__expression_value_token1 = 12,
  anon_sym_EQ = 13,
  anon_sym_COLONlet = 14,
  anon_sym_COLONfor = 15,
  anon_sym_COLONstream = 16,
  sym_attribute_value = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_quoted_attribute_value_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_quoted_attribute_value_token2 = 21,
  anon_sym_LT_PERCENT = 22,
  anon_sym_LT_PERCENT_EQ = 23,
  anon_sym_LT_PERCENT_PERCENT = 24,
  anon_sym_LT_PERCENT_PERCENT_EQ = 25,
  anon_sym_PERCENT_GT = 26,
  anon_sym_LT_BANG_DASH_DASH = 27,
  aux_sym__html_comment_token1 = 28,
  anon_sym_DASH_DASH_GT = 29,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 30,
  anon_sym_DASH_DASH_PERCENT_GT = 31,
  anon_sym_LT_PERCENT_POUND = 32,
  aux_sym_partial_expression_value_token1 = 33,
  anon_sym_do = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_POUND = 36,
  anon_sym_DOT = 37,
  sym_module = 38,
  sym_function = 39,
  sym__code = 40,
  sym_tag_name = 41,
  sym_attribute_name = 42,
  sym_text = 43,
  sym_fragment = 44,
  sym__node = 45,
  sym_doctype = 46,
  sym_tag = 47,
  sym_component = 48,
  sym_slot = 49,
  sym_start_tag = 50,
  sym_end_tag = 51,
  sym_self_closing_tag = 52,
  sym_start_component = 53,
  sym_end_component = 54,
  sym_self_closing_component = 55,
  sym_start_slot = 56,
  sym_end_slot = 57,
  sym_expression = 58,
  sym__expression_value = 59,
  sym_special_attribute = 60,
  sym_special_attribute_name = 61,
  sym_attribute = 62,
  sym_quoted_attribute_value = 63,
  sym_directive = 64,
  sym_comment = 65,
  sym__html_comment = 66,
  sym__bang_comment = 67,
  sym__hash_comment = 68,
  sym_expression_value = 69,
  sym_partial_expression_value = 70,
  sym_component_name = 71,
  aux_sym_fragment_repeat1 = 72,
  aux_sym_component_repeat1 = 73,
  aux_sym_start_tag_repeat1 = 74,
  aux_sym_self_closing_component_repeat1 = 75,
  aux_sym_expression_repeat1 = 76,
  aux_sym__html_comment_repeat1 = 77,
  aux_sym__hash_comment_repeat1 = 78,
  alias_sym_slot_name = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_html] = "html",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_LT_SLASH_COLON] = "</:",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_value_token1] = "_expression_value_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_COLONlet] = ":let",
  [anon_sym_COLONfor] = ":for",
  [anon_sym_COLONstream] = ":stream",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT_PERCENT_EQ] = "<%%=",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__html_comment_token1] = "_html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = "<%!--",
  [anon_sym_DASH_DASH_PERCENT_GT] = "--%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [aux_sym_partial_expression_value_token1] = "partial_expression_value_token1",
  [anon_sym_do] = "do",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_POUND] = "#",
  [anon_sym_DOT] = ".",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym__code] = "_code",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_doctype] = "doctype",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_slot] = "slot",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_start_slot] = "start_slot",
  [sym_end_slot] = "end_slot",
  [sym_expression] = "expression",
  [sym__expression_value] = "_expression_value",
  [sym_special_attribute] = "special_attribute",
  [sym_special_attribute_name] = "special_attribute_name",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [sym__html_comment] = "_html_comment",
  [sym__bang_comment] = "_bang_comment",
  [sym__hash_comment] = "_hash_comment",
  [sym_expression_value] = "expression_value",
  [sym_partial_expression_value] = "partial_expression_value",
  [sym_component_name] = "component_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_self_closing_component_repeat1] = "self_closing_component_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym__html_comment_repeat1] = "_html_comment_repeat1",
  [aux_sym__hash_comment_repeat1] = "_hash_comment_repeat1",
  [alias_sym_slot_name] = "slot_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_LT_SLASH_COLON] = anon_sym_LT_SLASH_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_value_token1] = aux_sym__expression_value_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLONlet] = anon_sym_COLONlet,
  [anon_sym_COLONfor] = anon_sym_COLONfor,
  [anon_sym_COLONstream] = anon_sym_COLONstream,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT_PERCENT_EQ] = anon_sym_LT_PERCENT_PERCENT_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__html_comment_token1] = aux_sym__html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = anon_sym_LT_PERCENT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_PERCENT_GT] = anon_sym_DASH_DASH_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [aux_sym_partial_expression_value_token1] = aux_sym_partial_expression_value_token1,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym__code] = sym__code,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_doctype] = sym_doctype,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_slot] = sym_slot,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_start_slot] = sym_start_slot,
  [sym_end_slot] = sym_end_slot,
  [sym_expression] = sym_expression,
  [sym__expression_value] = sym__expression_value,
  [sym_special_attribute] = sym_special_attribute,
  [sym_special_attribute_name] = sym_special_attribute_name,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [sym__html_comment] = sym__html_comment,
  [sym__bang_comment] = sym__bang_comment,
  [sym__hash_comment] = sym__hash_comment,
  [sym_expression_value] = sym_expression_value,
  [sym_partial_expression_value] = sym_partial_expression_value,
  [sym_component_name] = sym_component_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_self_closing_component_repeat1] = aux_sym_self_closing_component_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym__html_comment_repeat1] = aux_sym__html_comment_repeat1,
  [aux_sym__hash_comment_repeat1] = aux_sym__hash_comment_repeat1,
  [alias_sym_slot_name] = alias_sym_slot_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOCTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONstream] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__html_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_partial_expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_end_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_value] = {
    .visible = false,
    .named = true,
  },
  [sym_special_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_special_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__html_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__bang_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_self_closing_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__html_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hash_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_slot_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_slot_name,
  },
  [2] = {
    [1] = sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_expression_repeat1, 2,
    aux_sym_expression_repeat1,
    sym_expression_value,
  0,
};

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_module_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? (c >= '-' && c <= '/')
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_tag_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '<'
      ? (c < ':'
        ? c == '/'
        : c <= ':')
      : (c <= '>' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 45:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLONlet);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLONfor);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLONstream);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(45);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(117);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(50);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(113);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(114);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(118);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(116);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(91);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(51);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(120);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(119);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(94);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(121);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 46},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_LT_SLASH_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLONlet] = ACTIONS(1),
    [anon_sym_COLONfor] = ACTIONS(1),
    [anon_sym_COLONstream] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [aux_sym_partial_expression_value_token1] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(104),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(23),
    [sym_start_component] = STATE(2),
    [sym_self_closing_component] = STATE(13),
    [sym_directive] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__html_comment] = STATE(14),
    [sym__bang_comment] = STATE(14),
    [sym__hash_comment] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_COLON,
    ACTIONS(25), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(22), 1,
      sym_end_component,
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(3), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [66] = 18,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_COLON,
    ACTIONS(27), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(19), 1,
      sym_end_component,
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [132] = 17,
    ACTIONS(29), 1,
      anon_sym_LT_BANG,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      anon_sym_LT_COLON,
    ACTIONS(46), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(52), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(55), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(40), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(43), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [195] = 16,
    ACTIONS(60), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      anon_sym_LT_SLASH,
    ACTIONS(74), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(80), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(83), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(68), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [255] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(88), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(36), 1,
      sym_end_slot,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [314] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(90), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(38), 1,
      sym_end_slot,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(6), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [373] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(88), 1,
      sym_text,
    ACTIONS(92), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(25), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [432] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(92), 1,
      anon_sym_LT_SLASH,
    ACTIONS(94), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(31), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(8), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [491] = 15,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(88), 1,
      sym_text,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [547] = 2,
    ACTIONS(100), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [566] = 2,
    ACTIONS(104), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [585] = 2,
    ACTIONS(108), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [604] = 2,
    ACTIONS(112), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [623] = 2,
    ACTIONS(116), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [642] = 2,
    ACTIONS(120), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [661] = 2,
    ACTIONS(124), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [680] = 2,
    ACTIONS(128), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [699] = 2,
    ACTIONS(132), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [718] = 2,
    ACTIONS(136), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [737] = 2,
    ACTIONS(140), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [756] = 2,
    ACTIONS(144), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [775] = 2,
    ACTIONS(148), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [794] = 2,
    ACTIONS(152), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(150), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [813] = 2,
    ACTIONS(156), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [832] = 2,
    ACTIONS(160), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [851] = 2,
    ACTIONS(164), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [870] = 2,
    ACTIONS(168), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [889] = 2,
    ACTIONS(172), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [908] = 2,
    ACTIONS(176), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [927] = 2,
    ACTIONS(180), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [946] = 9,
    ACTIONS(182), 1,
      anon_sym_GT,
    ACTIONS(184), 1,
      anon_sym_SLASH_GT,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    STATE(60), 1,
      aux_sym_self_closing_component_repeat1,
    STATE(95), 1,
      sym_special_attribute_name,
    STATE(41), 2,
      sym_special_attribute,
      aux_sym_start_tag_repeat1,
    STATE(52), 2,
      sym_expression,
      sym_attribute,
    ACTIONS(188), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
  [978] = 7,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    ACTIONS(192), 1,
      anon_sym_GT,
    ACTIONS(194), 1,
      anon_sym_SLASH_GT,
    STATE(95), 1,
      sym_special_attribute_name,
    ACTIONS(188), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
    STATE(35), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1005] = 2,
    ACTIONS(196), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(198), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1022] = 6,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      sym_attribute_name,
    STATE(95), 1,
      sym_special_attribute_name,
    ACTIONS(200), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(205), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
    STATE(35), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1047] = 2,
    ACTIONS(211), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(213), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1064] = 2,
    ACTIONS(215), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(217), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1081] = 2,
    ACTIONS(219), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(221), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1098] = 7,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    ACTIONS(223), 1,
      anon_sym_GT,
    ACTIONS(225), 1,
      anon_sym_SLASH_GT,
    STATE(95), 1,
      sym_special_attribute_name,
    ACTIONS(188), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
    STATE(33), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1125] = 2,
    ACTIONS(227), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(229), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1142] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    ACTIONS(231), 1,
      anon_sym_GT,
    STATE(95), 1,
      sym_special_attribute_name,
    ACTIONS(188), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
    STATE(35), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1166] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    ACTIONS(233), 1,
      anon_sym_GT,
    STATE(95), 1,
      sym_special_attribute_name,
    ACTIONS(188), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
    STATE(46), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1190] = 2,
    ACTIONS(235), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(237), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1206] = 2,
    ACTIONS(239), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(241), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1222] = 2,
    ACTIONS(243), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(245), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1238] = 6,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    ACTIONS(247), 1,
      anon_sym_GT,
    STATE(95), 1,
      sym_special_attribute_name,
    ACTIONS(188), 3,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
    STATE(35), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1262] = 2,
    ACTIONS(249), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(251), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1278] = 2,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(253), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1291] = 3,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(261), 1,
      sym_attribute_name,
    ACTIONS(257), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
  [1306] = 1,
    ACTIONS(263), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1316] = 1,
    ACTIONS(265), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1326] = 3,
    ACTIONS(269), 1,
      anon_sym_SLASH_GT,
    ACTIONS(271), 2,
      anon_sym_LBRACE,
      sym_attribute_name,
    ACTIONS(267), 4,
      anon_sym_GT,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
  [1340] = 1,
    ACTIONS(274), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1350] = 5,
    ACTIONS(276), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(280), 1,
      sym__code,
    STATE(65), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(278), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(97), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [1368] = 1,
    ACTIONS(282), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1378] = 1,
    ACTIONS(284), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1388] = 1,
    ACTIONS(286), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1398] = 1,
    ACTIONS(288), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1408] = 1,
    ACTIONS(290), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      sym_attribute_name,
  [1418] = 4,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym_attribute_name,
    ACTIONS(292), 1,
      anon_sym_SLASH_GT,
    STATE(62), 3,
      sym_expression,
      sym_attribute,
      aux_sym_self_closing_component_repeat1,
  [1433] = 5,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      sym_attribute_value,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(58), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1450] = 4,
    ACTIONS(300), 1,
      anon_sym_SLASH_GT,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      sym_attribute_name,
    STATE(62), 3,
      sym_expression,
      sym_attribute,
      aux_sym_self_closing_component_repeat1,
  [1465] = 3,
    ACTIONS(310), 1,
      sym__code,
    STATE(63), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(308), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1477] = 5,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      aux_sym__expression_value_token1,
    STATE(67), 1,
      aux_sym_expression_repeat1,
    STATE(76), 1,
      sym__expression_value,
  [1493] = 4,
    ACTIONS(319), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(323), 1,
      sym__code,
    STATE(63), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(321), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1507] = 5,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 1,
      aux_sym__expression_value_token1,
    STATE(66), 1,
      aux_sym_expression_repeat1,
    STATE(76), 1,
      sym__expression_value,
  [1523] = 5,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      aux_sym__expression_value_token1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_expression_repeat1,
    STATE(76), 1,
      sym__expression_value,
  [1539] = 4,
    ACTIONS(335), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_module,
    ACTIONS(339), 1,
      sym_tag_name,
    STATE(32), 1,
      sym_component_name,
  [1552] = 4,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      aux_sym__expression_value_token1,
    STATE(115), 1,
      sym__expression_value,
  [1565] = 4,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      aux_sym__expression_value_token1,
    STATE(96), 1,
      sym__expression_value,
  [1578] = 3,
    ACTIONS(351), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(353), 1,
      sym__code,
    STATE(75), 1,
      aux_sym__hash_comment_repeat1,
  [1588] = 2,
    ACTIONS(357), 1,
      aux_sym__expression_value_token1,
    ACTIONS(355), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1596] = 3,
    ACTIONS(359), 1,
      aux_sym__html_comment_token1,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH_GT,
    STATE(85), 1,
      aux_sym__html_comment_repeat1,
  [1606] = 3,
    ACTIONS(363), 1,
      aux_sym__html_comment_token1,
    ACTIONS(366), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(74), 1,
      aux_sym__html_comment_repeat1,
  [1616] = 3,
    ACTIONS(308), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(368), 1,
      sym__code,
    STATE(75), 1,
      aux_sym__hash_comment_repeat1,
  [1626] = 2,
    ACTIONS(373), 1,
      aux_sym__expression_value_token1,
    ACTIONS(371), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1634] = 3,
    ACTIONS(375), 1,
      aux_sym__html_comment_token1,
    ACTIONS(377), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(88), 1,
      aux_sym__html_comment_repeat1,
  [1644] = 3,
    ACTIONS(379), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(381), 1,
      sym__code,
    STATE(71), 1,
      aux_sym__hash_comment_repeat1,
  [1654] = 3,
    ACTIONS(366), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(383), 1,
      aux_sym__html_comment_token1,
    STATE(79), 1,
      aux_sym__html_comment_repeat1,
  [1664] = 3,
    ACTIONS(386), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(388), 1,
      sym__code,
    STATE(86), 1,
      aux_sym__hash_comment_repeat1,
  [1674] = 3,
    ACTIONS(353), 1,
      sym__code,
    ACTIONS(386), 1,
      anon_sym_PERCENT_GT,
    STATE(75), 1,
      aux_sym__hash_comment_repeat1,
  [1684] = 3,
    ACTIONS(353), 1,
      sym__code,
    ACTIONS(390), 1,
      anon_sym_PERCENT_GT,
    STATE(75), 1,
      aux_sym__hash_comment_repeat1,
  [1694] = 3,
    ACTIONS(392), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(394), 1,
      sym__code,
    STATE(81), 1,
      aux_sym__hash_comment_repeat1,
  [1704] = 2,
    ACTIONS(398), 1,
      aux_sym__expression_value_token1,
    ACTIONS(396), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1712] = 3,
    ACTIONS(400), 1,
      aux_sym__html_comment_token1,
    ACTIONS(402), 1,
      anon_sym_DASH_DASH_GT,
    STATE(79), 1,
      aux_sym__html_comment_repeat1,
  [1722] = 3,
    ACTIONS(353), 1,
      sym__code,
    ACTIONS(404), 1,
      anon_sym_PERCENT_GT,
    STATE(75), 1,
      aux_sym__hash_comment_repeat1,
  [1732] = 3,
    ACTIONS(404), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(406), 1,
      sym__code,
    STATE(82), 1,
      aux_sym__hash_comment_repeat1,
  [1742] = 3,
    ACTIONS(408), 1,
      aux_sym__html_comment_token1,
    ACTIONS(410), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(74), 1,
      aux_sym__html_comment_repeat1,
  [1752] = 3,
    ACTIONS(335), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      sym_module,
    STATE(114), 1,
      sym_component_name,
  [1762] = 2,
    ACTIONS(412), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(414), 1,
      anon_sym_POUND,
  [1769] = 2,
    ACTIONS(416), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(418), 1,
      anon_sym_POUND,
  [1776] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_expression,
  [1783] = 2,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      aux_sym_quoted_attribute_value_token2,
  [1790] = 2,
    ACTIONS(420), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      aux_sym_quoted_attribute_value_token1,
  [1797] = 1,
    ACTIONS(426), 1,
      anon_sym_EQ,
  [1801] = 1,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [1805] = 1,
    ACTIONS(430), 1,
      anon_sym_PERCENT_GT,
  [1809] = 1,
    ACTIONS(432), 1,
      anon_sym_EQ,
  [1813] = 1,
    ACTIONS(434), 1,
      sym_tag_name,
  [1817] = 1,
    ACTIONS(436), 1,
      sym_function,
  [1821] = 1,
    ACTIONS(438), 1,
      sym_function,
  [1825] = 1,
    ACTIONS(440), 1,
      sym_tag_name,
  [1829] = 1,
    ACTIONS(442), 1,
      anon_sym_html,
  [1833] = 1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
  [1837] = 1,
    ACTIONS(446), 1,
      anon_sym_GT,
  [1841] = 1,
    ACTIONS(448), 1,
      anon_sym_GT,
  [1845] = 1,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
  [1849] = 1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
  [1853] = 1,
    ACTIONS(452), 1,
      anon_sym_DOCTYPE,
  [1857] = 1,
    ACTIONS(454), 1,
      sym_tag_name,
  [1861] = 1,
    ACTIONS(456), 1,
      anon_sym_GT,
  [1865] = 1,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
  [1869] = 1,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
  [1873] = 1,
    ACTIONS(458), 1,
      anon_sym_GT,
  [1877] = 1,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 255,
  [SMALL_STATE(7)] = 314,
  [SMALL_STATE(8)] = 373,
  [SMALL_STATE(9)] = 432,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 547,
  [SMALL_STATE(12)] = 566,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 623,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 661,
  [SMALL_STATE(18)] = 680,
  [SMALL_STATE(19)] = 699,
  [SMALL_STATE(20)] = 718,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 775,
  [SMALL_STATE(24)] = 794,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 832,
  [SMALL_STATE(27)] = 851,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 889,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 927,
  [SMALL_STATE(32)] = 946,
  [SMALL_STATE(33)] = 978,
  [SMALL_STATE(34)] = 1005,
  [SMALL_STATE(35)] = 1022,
  [SMALL_STATE(36)] = 1047,
  [SMALL_STATE(37)] = 1064,
  [SMALL_STATE(38)] = 1081,
  [SMALL_STATE(39)] = 1098,
  [SMALL_STATE(40)] = 1125,
  [SMALL_STATE(41)] = 1142,
  [SMALL_STATE(42)] = 1166,
  [SMALL_STATE(43)] = 1190,
  [SMALL_STATE(44)] = 1206,
  [SMALL_STATE(45)] = 1222,
  [SMALL_STATE(46)] = 1238,
  [SMALL_STATE(47)] = 1262,
  [SMALL_STATE(48)] = 1278,
  [SMALL_STATE(49)] = 1291,
  [SMALL_STATE(50)] = 1306,
  [SMALL_STATE(51)] = 1316,
  [SMALL_STATE(52)] = 1326,
  [SMALL_STATE(53)] = 1340,
  [SMALL_STATE(54)] = 1350,
  [SMALL_STATE(55)] = 1368,
  [SMALL_STATE(56)] = 1378,
  [SMALL_STATE(57)] = 1388,
  [SMALL_STATE(58)] = 1398,
  [SMALL_STATE(59)] = 1408,
  [SMALL_STATE(60)] = 1418,
  [SMALL_STATE(61)] = 1433,
  [SMALL_STATE(62)] = 1450,
  [SMALL_STATE(63)] = 1465,
  [SMALL_STATE(64)] = 1477,
  [SMALL_STATE(65)] = 1493,
  [SMALL_STATE(66)] = 1507,
  [SMALL_STATE(67)] = 1523,
  [SMALL_STATE(68)] = 1539,
  [SMALL_STATE(69)] = 1552,
  [SMALL_STATE(70)] = 1565,
  [SMALL_STATE(71)] = 1578,
  [SMALL_STATE(72)] = 1588,
  [SMALL_STATE(73)] = 1596,
  [SMALL_STATE(74)] = 1606,
  [SMALL_STATE(75)] = 1616,
  [SMALL_STATE(76)] = 1626,
  [SMALL_STATE(77)] = 1634,
  [SMALL_STATE(78)] = 1644,
  [SMALL_STATE(79)] = 1654,
  [SMALL_STATE(80)] = 1664,
  [SMALL_STATE(81)] = 1674,
  [SMALL_STATE(82)] = 1684,
  [SMALL_STATE(83)] = 1694,
  [SMALL_STATE(84)] = 1704,
  [SMALL_STATE(85)] = 1712,
  [SMALL_STATE(86)] = 1722,
  [SMALL_STATE(87)] = 1732,
  [SMALL_STATE(88)] = 1742,
  [SMALL_STATE(89)] = 1752,
  [SMALL_STATE(90)] = 1762,
  [SMALL_STATE(91)] = 1769,
  [SMALL_STATE(92)] = 1776,
  [SMALL_STATE(93)] = 1783,
  [SMALL_STATE(94)] = 1790,
  [SMALL_STATE(95)] = 1797,
  [SMALL_STATE(96)] = 1801,
  [SMALL_STATE(97)] = 1805,
  [SMALL_STATE(98)] = 1809,
  [SMALL_STATE(99)] = 1813,
  [SMALL_STATE(100)] = 1817,
  [SMALL_STATE(101)] = 1821,
  [SMALL_STATE(102)] = 1825,
  [SMALL_STATE(103)] = 1829,
  [SMALL_STATE(104)] = 1833,
  [SMALL_STATE(105)] = 1837,
  [SMALL_STATE(106)] = 1841,
  [SMALL_STATE(107)] = 1845,
  [SMALL_STATE(108)] = 1849,
  [SMALL_STATE(109)] = 1853,
  [SMALL_STATE(110)] = 1857,
  [SMALL_STATE(111)] = 1861,
  [SMALL_STATE(112)] = 1865,
  [SMALL_STATE(113)] = 1869,
  [SMALL_STATE(114)] = 1873,
  [SMALL_STATE(115)] = 1877,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(109),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(99),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(54),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(54),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(77),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(78),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(109),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(73),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(77),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(78),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(64),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(98),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(48),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 1),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1), REDUCE(aux_sym_self_closing_component_repeat1, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 2), SHIFT_REPEAT(64),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 2), SHIFT_REPEAT(48),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(63),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(70),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(76),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(74),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(75),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(79),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute_name, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [444] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_heex(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
