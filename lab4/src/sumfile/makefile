CC=gcc

utils.o : utils.h
	$(CC) -o utils.o -c utils.c -std=c99

parallel_sum : parallel_sum.c sum.c utils.o
	$(CC) -o parallel_sum parallel_sum.c sum.c utils.c -std=c99 -lpthread

clean :
	rm parallel_min_max utils.o find_min_max.o process_memory parallel_sum