#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (fork() > 0)  // Parent exits
        exit(0);

    // Child becomes daemon
    while (1) {
        sleep(5);  // Daemon doing background work
    }

    return 0;
}

