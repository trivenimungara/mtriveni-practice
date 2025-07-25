#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();  
    if (pid == 0) {
        printf("Child process: PID = %d\n", getpid());
        printf("Child exiting...\n");
    }
    else 
    {
	printf("Parent process: PID = %d\n", getpid());
        printf("Parent exiting immediately.\n");
        
    }

    return 0;
}

