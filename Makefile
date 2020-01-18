scanner: main.c scan.c
	$(CC) -o scanner main.c scan.c
parser: main.c scan.c expr.c interp.c tree.c
	$(CC) -o paser main.c scan.c expr.c interp.c tree.c