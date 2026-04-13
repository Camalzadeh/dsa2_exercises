# -*- Makefile -*-

CC = gcc
FLAGS = -Wall -g
LIBS = 

OBJS = main.o heap.o
EXE = heap

all : $(EXE)

$(EXE): $(OBJS)
	@echo "Building $@"
	@$(CC) -o $@ $(OBJS) $(LIBS) $(FLAGS)

main.o : main.c heap.h
	@echo "Building $@"
	@$(CC) $(FLAGS) -c main.c

heap.o : heap.c heap.h
	@echo "Building $@"
	@$(CC) $(FLAGS) -c heap.c

clean:
	rm -rf $(EXE) *.o *.dSYM *~
