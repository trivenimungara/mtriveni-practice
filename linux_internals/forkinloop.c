#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    int i = 0;
    while (1) {
        printf("Hello from process! i = %d\n", i);
        i++;
    }

    return 0;
}


