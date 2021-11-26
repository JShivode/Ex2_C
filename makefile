	
.PHONY= all clean
CC=gcc
#OBJS=my_mat.o main.o 
EXEC=connections 
DEBUG= -g
CFLAGS= -Wall -Werror $(DEBUG)

all: $(EXEC)
	$(cc) -o $(EXEC) main.c my_mat.h my_mat.c 
	
clean:
	rm -f *.o *.a connections
