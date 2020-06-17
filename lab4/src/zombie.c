#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "useless_calculation.h"
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    pid_t proc = fork();
    int eleven;
    if (proc == 0) {
        eleven = put_together(5, 6);
        exit(eleven);
    }
    system("ps -aux");
    int code = wait(0);
    printf("Code: %d\n", code);
    return 0;
}