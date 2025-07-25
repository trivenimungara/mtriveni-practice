#include <stdio.h>
#include <unistd.h>

int main() {
    fork();  

    int i = 0;
    while (1) {
        printf("Hello from process! PID = %d, PPID = %d, i = %d\n", getpid(), getppid(), i);
        
    }

    return 0;
}

