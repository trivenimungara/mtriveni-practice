#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("enter n value:\n");
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n-2*i;k++)
			printf("*");
		printf("\n");
	}
}

