#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int global_var = 10;

int main() {
    pid_t pid;

    printf("Before vfork: Only one process here.\n");

    pid = vfork();  // create new process

    if (pid < 0) {
        perror("vfork failed");
        exit(1);
    }
    else if (pid == 0) {
        // Child process
        printf("Child: PID = %d, Parent PID = %d\n", getpid(), getppid());
        global_var += 5;  // modifying shared variable
        printf("Child: global_var = %d\n", global_var);

        // Child should exit or exec
        _exit(0);  // use _exit() instead of exit() inside vfork
    }
    else {
        // Parent process (resumes after child exits)
        printf("Parent: PID = %d, Child PID = %d\n", getpid(), pid);
        printf("Parent: global_var = %d\n", global_var);
    }

    return 0;
}

