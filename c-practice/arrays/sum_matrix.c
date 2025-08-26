#include <stdio.h>

int main() {
    int i, j;
    int a[3][3] = {0};
    int b[3][3] = {0};
    int sum[3][3];

    printf("Enter elements of array A:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            
                scanf("%d", &a[i][j]);

    printf("Enter elements of array B :\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
           
                scanf("%d", &b[i][j]);

    // Calculate sum
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
         
                sum[i][j] = a[i][j] + b[i][j];

    // Print result
    printf("Sum of arrays:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
          
                printf("%d ", sum[i][j]);
          
        }
        printf("\n");
    }

    return 0;
}

