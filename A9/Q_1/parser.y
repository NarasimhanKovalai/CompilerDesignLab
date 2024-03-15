%{
#include <stdio.h>
#include <stdlib.h> 
// Define constants for AST node types
#define NODE_NUMBER 1
#define NODE_OPERATOR 2
#define NODE_ERROR 3
int yylex(void);
void yyerror(const char *s);
// Define the AST node structure
struct AstNode {
    int type;  // NODE_NUMBER for numbers, NODE_OPERATOR for operators, NODE_ERROR for errors
    char value; // For NODE_NUMBER nodes
    char operator; // For NODE_OPERATOR nodes
    struct AstNode* left;
    struct AstNode* right;
};
void preorder(struct AstNode* root);
void inorder(struct AstNode* root);


// Functions for creating AST nodes
struct AstNode* create_number_node(int value) {
    struct AstNode* node = (struct AstNode*)malloc(sizeof(struct AstNode));
    node->type = NODE_NUMBER;
    node->value = value;
    node->operator = 0;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct AstNode* create_operator_node(char operator,struct AstNode* left, struct AstNode* right) {
    struct AstNode* node = (struct AstNode*)malloc(sizeof(struct AstNode));
    node->type = NODE_OPERATOR;
    node->operator = operator;
    node->value='#';
    node->left = (left);
    node->right =(right);
    return node;
}

struct AstNode* create_error_node() {
    struct AstNode* node = (struct AstNode*)malloc(sizeof(struct AstNode));
    node->type = NODE_ERROR;
    node->operator = 'E';
    node->left = NULL;
    node->right = NULL;
    return node;
}



%}
%union{
    struct AstNode* x;
}
%start calc
%token <x> NUMBER
%token LPAREN RPAREN
%left '+' '-'
%left '*' '/'
%type <x> calc expr term factor
%%

calc:   expr {  printf("\nPreorder Traversal  is : \n");
                preorder($1);
                 printf("\nInorder Traversal  is : \n");
                inorder($1);
                printf("\n");
                return 0; }
    ;

expr:   term { $$ = $1; }
    | expr '+' term { $$ = create_operator_node('+', $1, $3); }
    | expr '-' term { $$ = create_operator_node('-', $1,$3); }
    ;

term:   factor { $$ = $1; }
    | term '*' factor { $$ = create_operator_node('*', $1,$3); }
    | term '/' factor {
        if ($3->value == 0) {
            printf( "Error: Division by zero\n");
            $$ = create_error_node();
            printf("Error Node Operator : %c\n",$$->operator);
            exit(0);
        } else {
            $$ = create_operator_node('/', $1, $3);
        }
    }
    ;

factor: NUMBER { $$ = $1; }
    | LPAREN expr RPAREN { $$ = $2; }
    ;

%%
// Define the yyerror function
void yyerror(const char *s) {
    fprintf(stderr, "Parse error: %s\n", s);
}
void preorder(struct AstNode* root){
    if(!root){
        return;
    }
    if(root->value!='#'){
        /*It is a number node*/
        printf("%d ",root->value);
    }
    else{
        printf("%c ",root->operator);
    }
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct AstNode* root){
    if(!root){
        return ;
    }
    inorder(root->left);
    if(root->value!='#'){
        /*It is a number node*/
        printf("%d ",root->value);
    }
    else{
        printf("%c ",root->operator);
    }
    inorder(root->right);



}
int main() {
    printf("Enter the expression to be evaluated : \n");
    yyparse();
    return 0;
}
