scanner: main.c scan.c
	$(CC) -o scanner main.c scan.c
parser: main.c scan.c expr.c interp.c tree.c
	$(CC) -o parser main.c scan.c expr.c interp.c tree.c
parser2: main.c scan.c expr2.c interp.c tree.c
	$(CC) -o parser2 main.c scan.c expr2.c interp.c tree.c    
    
cmp1: main.c scan.c expr.c interp.c tree.c cg.c gen.c
	$(CC) -o cmp1 main.c scan.c expr.c interp.c tree.c cg.c gen.c