#include<stdio.h>
void main()
{
        int num,onescomp;
	printf("enter num:");
	scanf("%d",&num);
	onescomp=~num;
	printf("1's complement:%d\n",onescomp);
}
