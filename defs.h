#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// token
struct token {
   int token;
   int intvalue;
};
enum {
    T_EOF, T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT
};

// ast node types
enum {
    A_ADD, A_SUBTRACT, A_MULTIPLY,A_DIVIDE, A_INTLIT
};
struct ASTnode{
    int op;
    struct ASTnode *left;
    struct ASTnode *right;
    int intvalue;
};