#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
 int stack[2];
 pipe(stack);
 char output[4096];
 pid_t child_pid = fork();
 char* argv1[3] = {"sequential_min_max", argv[1], argv[2]};
    if (child_pid >= 0) {

        if (child_pid == 0) {
        // child process   
        dup2(stack[1], STDOUT_FILENO);
        execv("sequential_min_max", argv1);
        }
         else {
        //parent process
        close(stack[1]);
        int nbytes = read(stack[0], output, sizeof(output));
        printf("Output:\n%.*s\n", nbytes, output);
        wait(NULL);
        }
    }

  return 0;
}