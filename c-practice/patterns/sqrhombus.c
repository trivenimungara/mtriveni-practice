#include<stdio.h>
void main()
{
        int n,i,j;
        printf("enter rows:\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n-i;j++)
                {
                        printf(" ");
                }
                for(j=1;j<=n;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}


