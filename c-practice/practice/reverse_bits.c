#include <stdio.h>

int main() 
{
    int x;
    int b0, b1, b2, b3;

    printf("Enter number: ");
    scanf("%d", &x);   

    
    b3 = x % 10; 
    x /= 10;
    b2 = x % 10;
    x /= 10;
    b1 = x % 10;
    x /= 10;
    b0 = x % 10;

    printf("Reversed bits: %d%d%d%d\n", b3, b2, b1, b0);

    return 0;
}

