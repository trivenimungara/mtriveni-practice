#include<stdio.h>
void main()
{
        int i,j,n;
        printf("enter rows:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=2*n;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}

