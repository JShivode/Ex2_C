CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g
EXE=connections

#target commands
all: $(EXE)
connections: $(OBJECTS_MAIN) my_mat.h
	$(CC) $(FLAGS) -o connections main.c my_mat.c my_mat.h 

main.o: main.c my_mat.h my_mat.c  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so $(EXE)
