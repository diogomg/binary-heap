CC = gcc

all: compile clean run
#coverage -fprofile-arcs -ftest-coverage
compile: *.c
	$(CC) -g main.c heap.c -lm -o heap

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./heap

test: test.c heap.c
	$(CC) -fprofile-arcs -ftest-coverage -g test.c heap.c -lm -o test
	./test

coverage: veb.gcda
	gcov veb.gcda

run:
	./heap

clean: *.o
	rm *.o
#*.gc*
