%{
#include "y.tab.h"
#include <stdlib.h>
#define NODE_NUMBER 1

struct AstNode {
    int type;
    char value;
    char operator;
    struct AstNode* left;
    struct AstNode* right;
};

struct AstNode* create_node(int value) {
    struct AstNode* node = (struct AstNode*)malloc(sizeof(struct AstNode));
    node->type = NODE_NUMBER;
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}
%}

%%

[0-9]+ {
    yylval.x = create_node(atoi(yytext)); // Convert yytext to an integer
    return NUMBER;
}

[-+*/] { return yytext[0]; }

"("     { return LPAREN; }
")"     { return RPAREN; }

[\t\n ] { return 0; }

.       { fprintf(stderr, "Invalid character: %s\n", yytext); }
