#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter rows: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++) {
        
        for (j = i; j < n; j++) {
            printf(" ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i ==n)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

