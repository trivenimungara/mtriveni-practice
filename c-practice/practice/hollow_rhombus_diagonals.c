#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter n: ");
    scanf("%d", &n);

  for (i = 1; i <= n; i++)
    {
        
        for (k = 1; k <= n - i; k++)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            if (j == 1 ||j == i ||i == n ||j == (i + 1) / 2)        
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (k = 1; k <= n - i; k++)
            printf(" ");

        for (j = 1; j <= i; j++)
        {
            if (j == 1 ||j == i ||j == (i + 1) / 2)         
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}


