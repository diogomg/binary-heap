CC = gcc

all: compile clean run

compile: *.c
	$(CC) -g main.c heap.c -lm -o heap

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./heap

run:
	./heap

clean: *.o
	rm *.o
#*.gc*
