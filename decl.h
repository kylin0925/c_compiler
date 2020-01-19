int scan(struct token *t);
int interpretAST(struct ASTnode *n);
struct ASTnode *binexpr(int);

struct ASTnode *mkastnode(int op, struct ASTnode *left,
                            struct ASTnode *right, int intvalue);
struct ASTnode *mkastleaf(int op, int intvalue);

struct ASTnode *mkastunary(int op, struct ASTnode *left, int intvalue);                            