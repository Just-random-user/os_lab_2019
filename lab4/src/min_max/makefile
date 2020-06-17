CC=gcc

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c -std=c99

process_memory : process_memory.c
	$(CC) -o process_memory process_memory.c

utils.o : utils.h
	$(CC) -o utils.o -c utils.c -std=c99

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c -std=c99

clean :
	rm parallel_min_max utils.o find_min_max.o process_memory