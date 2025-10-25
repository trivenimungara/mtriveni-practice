#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (fork() == 0) {
       
        printf("Child exiting\n"); //child exists
        exit(0);
    } else {
       
        printf("Parent PID=%d, sleeping...\n", getpid()); //parent sleep,
        sleep(10);  // Observe zombie using `ps`
    }
    return 0;
}


