.PHONY= all clean
CC=gcc
OBJS=my_mat.o main.o
EXEC=connections 
DEBUG= -g
CFLAGS= -Wall -Werror $(DEBUG)

all: $(EXEC)
$(EXEC): $(OBJS)
	$(cc) $(OBJS) -o $(EXEC)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c
	
clean:
	rm -f *.o *.a connections
