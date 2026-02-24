#include<stdio.h>
void main()
{
        int i,n,j,k;
        printf("enter n:");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(k=1;k<=n-i;k++)
                        printf(" ");
                 for(j=1;j<=i;j++)
                        printf("* ");
                printf("\n");
        }
}

