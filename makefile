CC=gcc
FLAGS=-Wall -g

all: main.c my_mat.c
	$(CC) $(FLAGS) -o all main.c my_mat.h my_mat.c -lm -I.

.PHONY: clean
clean:
	rm -f all *.o