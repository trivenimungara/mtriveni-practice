#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("I am child, PID = %d\n", getpid());
    } else if (pid > 0) {
        // Parent process
        printf("I am parent, PID = %d, child PID = %d\n", getpid(), pid);
    } else {
        // Fork failed
        perror("fork");
    }

    return 0;
}

