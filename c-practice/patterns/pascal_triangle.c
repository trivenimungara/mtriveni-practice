#include <stdio.h>

int main()
{
    int n, i, j, k, coef = 1;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (k = 1; k <= n - i; k++)
       	{
            printf("  ");
        }
        
        for (j = 0; j <= i; j++)
       	{
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);  
        }
        printf("\n");
    }

    return 0;
}

