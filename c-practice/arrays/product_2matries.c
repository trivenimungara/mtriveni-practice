#include <stdio.h>

int main() {
    int i, j;
    int a[3][3] = {0};
    int b[3][3] = {0};
    int product[3][3]={0};

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

                product[i][j] = a[i][j] * b[i][j];

    // Print result
    printf("product of arrays:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {

                printf("%d ", product[i][j]);

        }
        printf("\n");
    }

    return 0;
}


