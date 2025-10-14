#include<stdio.h>
void main()
{
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
	if(n&(1<<(sizeof(int)*8-1)))
		printf("Bit is set\n");
	else
		printf("Not set\n");
}
