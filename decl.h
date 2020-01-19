int scan(struct token *t);
int interpretAST(struct ASTnode *n);
struct ASTnode *binexpr(int);

struct ASTnode *mkastnode(int op, struct ASTnode *left,
                            struct ASTnode *right, int intvalue);
struct ASTnode *mkastleaf(int op, int intvalue);

struct ASTnode *mkastunary(int op, struct ASTnode *left, int intvalue);                            


void cgprintint(int r);
int cgdiv(int r1,int r2);
void cgpostamble();
void cgpreamble();
int cgload(int value);
int cgadd(int r1,int r2);
int cgsub(int r1,int r2);
int cgmul(int r1,int r2);
void generatecode(struct ASTnode *n);