#include <stdio.h>

int main()
{
    int x;
    int bits[4];

    printf("Enter number: ");
    scanf("%d", &x);

    for (int i = 3; i >= 0; i--) {  
        bits[i] = x % 10;  
        x /= 10;           
    }

   
    printf("Reversed bits: ");
    for (int i = 3; i >= 0; i--) {  
        printf("%d", bits[i]);
    }

    printf("\n");
    return 0;
}

