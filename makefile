all: compile
	bin/pqueue

compile: clear
	gcc -w implement/pqueue.c src/functions.c -o bin/pqueue
clear:
	rm -f bin/pqueue

