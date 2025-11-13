#include <stdio.h>

int main() {
    int i,n,j;
    printf("enter rows:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           printf("* ");
        }

        printf("\n");
    }
    return 0;
}

