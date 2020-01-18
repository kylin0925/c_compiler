#include "defs.h"
#define extern_
#include "data.h"
#undef extern_
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
    
    init();
    printf("start scan %s\n",argv[1]);
    Infile = fopen(argv[1], "r");
    
    scanfile();   
    exit(0);
}