#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <getopt.h>

pthread_mutex_t lock1, lock2;

void *path1(){

      pthread_mutex_lock(&lock1);

      printf("thread1 is now working\n");  
      system("sleep 2");

      printf("Trying to get resource2\n");
      pthread_mutex_lock(&lock2);
      printf("Aquired resource2\n");
      pthread_mutex_unlock(&lock2);

      printf("thread1 has stopped working\n");

      pthread_mutex_unlock(&lock1);

      pthread_exit(0);

}

void *path2(){

      pthread_mutex_lock(&lock2);

      printf("thread2 is now working\n");
      system("sleep 2");

      printf("Trying to get resource1\n");
      pthread_mutex_lock(&lock1);
      printf("Aquired resource1\n");
      pthread_mutex_unlock(&lock1);

      printf("thread2 has stopped working\n");

      pthread_mutex_unlock(&lock2);

      pthread_exit(0);

}

int main() {

      pthread_mutex_init(&lock1, 0);
      pthread_mutex_init(&lock2, 0);

      pthread_t t1,t2;

      pthread_create(&t1, 0, path1, 0);
      pthread_create(&t2, 0, path2, 0);

      pthread_join(t1, 0);
      pthread_join(t2, 0);

      return 0;

}