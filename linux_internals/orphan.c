#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (fork() == 0) { // Child process
        sleep(3); // Wait for parent to exit
        printf("Child: PID=%d, Parent PID=%d\n", getpid(), getppid());
    } else {
        exit(0); // Parent exits immediately
    }
    return 0;
}

