#include<stdio.h>
void main()
{
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
	if(n>0&&(n&(n-1))==0&&(n&0x55555555))
		printf("power of 4\n");
	else
		printf("not power of 4\n");
}
