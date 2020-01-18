#include "defs.h"
#include "data.h"
#include "decl.h"


char *tokstr[] = {"+", "-", "*", "/", "intlit"};

static void init(){
    Line = 1;
    Putback = '\n';
}
static void scanfile(){
    struct token T;
    
    while(scan(&T)) {
        printf("Token %s", tokstr[T.token]);
        if(T.token == T_INTLIT)
            printf(", value %d", T.intvalue);
        printf("\n");
    }
}
void main(int argc,char **argv){
    struct ASTnode *n;
    init();
    printf("start scan %s\n",argv[1]);
    Infile = fopen(argv[1], "r");
    
    //scanfile();   
    scan(&Token);
    printf("binexpr\n");
    n = binexpr();
    printf("interpretAST\n");
    printf("%d\n", interpretAST(n));
    exit(0);
}