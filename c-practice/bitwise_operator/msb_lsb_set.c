#include<stdio.h>
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int bits=sizeof(int)*8;
	if(num&1)
		printf("lsb is set\n");
	else
		printf("lsb is not set\n");
	if(num&(1<<(bits)-1))
		printf("msb is set\n");
	else
		printf("msb is not set\n");
}
