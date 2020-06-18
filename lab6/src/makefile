CC = gcc
CCFLAGS = -I.

all : client server

client : miscellanea.o miscellanea.h
	$(CC) -o client miscellanea.o client.c -lpthread -std=c99 $(CCFLAGS)

server : miscellanea.o miscellanea.h
	$(CC) -o server miscellanea.o server.c -lpthread -std=c99 $(CCFLAGS)

miscellanea.o : miscellanea.h
	$(CC) -o miscellanea.o -c miscellanea.c -std=c99 $(CCFLAGS)

clean :
	rm miscellanea.o server client