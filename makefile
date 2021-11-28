CC=gcc
OBJECTS_MAIN=main.o my_mat.o
FLAGS= -Wall -g
EXE=connections

#target commands
all: $(EXE)
$(EXE): $(OBJECTS_MAIN)
 	$(CC) $(FLAGS) $(OBJECTS_MAIN) -o $(EXE)
my_mat.o: my_mat.c my_mat.h
 	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h  
 	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
 	rm -f *.o *.a *.so $(EXE)
