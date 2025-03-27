#include<stdio.h>
void main()
{
	int original[10];
	int copied[10];
	int i;
	for(i=0;i<10;i++)
	{
		copied[i]=original[i];
	}
	printf("original->copied\n");
	for(i=0;i<10;i++)
	{
		printf("%d   %d\n",original[i],copied[i]);
	}
}
