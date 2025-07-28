#include<stdio.h>
void main()
{
	int i,n;
	int fact=1;
	printf("enter n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of n:%d\n",fact);
}

