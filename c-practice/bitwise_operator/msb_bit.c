#include<stdio.h>
void main()
{
	int n;
	printf("enter num:");
	scanf("%d",&n);
	if(n&(1<<31))
	{
		printf("msb is 1");
	}
	else
		printf("msb is 0");
}
