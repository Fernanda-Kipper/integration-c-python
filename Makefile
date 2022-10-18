run: calculate.c
	gcc -fPIC -c calculate.c
	gcc -shared -o shared-lib.so calculate.o