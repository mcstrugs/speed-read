main : read.c
	gcc -lncurses -o read read.c
clean :
	rm read
