#include<stdio.h>
void main()
{
	int n;
	printf("enter num:");
	scanf("%d",&n);
	if(n&1)
	{
		printf("lsb is 1");
	}
	else
		printf("lsb is 0");
}
