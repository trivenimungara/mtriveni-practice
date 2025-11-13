#include<stdio.h>
void main()
{
        int i,j,n,m;
        printf("enter rows:");
        scanf("%d",&n);
        printf("enter columns:");
        scanf("%d",&m);

        for(i=1;i<=n;i++)
        {
                for(j=1;j<=m;j++)
                {
			if(i==1||i==n||j==1||j==m)
                        	printf("* ");
			else
				printf("  ");
                }
                printf("\n");
        }
}


