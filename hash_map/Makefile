CC = gcc
CFLAGS = -Wall -O3 -g -std=c99 -Ihashmap-students/dsa2-hashmap/students
LDFLAGS= -lm

SRC1=main-hash-test.c hashtable.c
SRC2=main-hash.c hashtable.c

OBJS1=${SRC1:.c=.o}
OBJS2=${SRC2:.c=.o}

all: main-hash-test main-hash

.c.o : 
	$(CC)  $(CFLAGS) -c $<

main-hash-test : $(OBJS1) 
	$(CC) $(CFLAGS) $(OBJS1) -o $@ $(LDFLAGS)  

main-hash : $(OBJS2) 
	$(CC) $(CFLAGS) $(OBJS2) -o $@ $(LDFLAGS)  

clean :
	@del /f main-hash-test.exe main-hash.exe *.o *~ 2>nul
