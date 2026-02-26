#include<stdio.h>
void main()
{
        int i,n,j,k;
        printf("enter n:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(k=1;k<=n-i;k++)
                        printf("  ");
                 for(j=1;j<=2*i-1;j++)
                        printf("* ");
                printf("\n");
        }
	 for(i=n;i>0;i--)
        {
                for(k=1;k<=n-i;k++)
                        printf("  ");
                 for(j=1;j<=2*i-1;j++)
                        printf("* ");
                printf("\n");
        }
}

