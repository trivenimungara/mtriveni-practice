#include<stdio.h>
void main()
{
        int n,i,j,m;
        printf("enter rows:\n");
        scanf("%d",&n);
	printf("enter columns:\n");
	scanf("%d",&m);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=m;j++)
                {
                        if(i==1||i==n||j==1||j==m)
                        {
                                printf("* ");
                        }
                        else
                        {
                                printf("  ");
                        }
                }
                printf("\n");
        }
}


