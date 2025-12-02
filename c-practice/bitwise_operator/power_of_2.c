#include<stdio.h>
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num>0&&(num&(num-1))==0)
		printf("num is power of 2\n");
	else
		printf("num is not a power of 2\n");
}
