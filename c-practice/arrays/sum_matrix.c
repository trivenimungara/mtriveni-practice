#include <stdio.h>

int main() {
    int i, j, p;
    int a[3][3][3] = {0};
    int b[3][3][3] = {0};
    int sum[3][3][3];

    printf("Enter elements of array A (27 numbers):\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            for(p=0; p<3; p++)
                scanf("%d", &a[i][j][p]);

    printf("Enter elements of array B (27 numbers):\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            for(p=0; p<3; p++)
                scanf("%d", &b[i][j][p]);

    // Calculate sum
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            for(p=0; p<3; p++)
                sum[i][j][p] = a[i][j][p] + b[i][j][p];

    // Print result
    printf("\nSum of arrays:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            for(p=0; p<3; p++)
                printf("%3d ", sum[i][j][p]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}

