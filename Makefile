main : main.c
	gcc -lncurses -o read read.c
clean :
	rm read
