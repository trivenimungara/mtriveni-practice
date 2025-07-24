#include<stdio.h>
int main()
{
        int i,n,j;
        printf("enter rows:\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
        for(j=1;j<=2*n;j++)
        {
                printf("* ");
        }
        printf("\n");
        }
        return 0;
}

