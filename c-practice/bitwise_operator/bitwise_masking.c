#include<stdio.h>
void main()
{
	int n,num;
	int setbit,clearbit,togglebit,checkbit;
	printf("enter num:");
	scanf("%d",&num);
	printf("enter n:");
	scanf("%d",&n);
	setbit=num|(1<<n);
	printf("%d\n",setbit);
	clearbit=num&~(1<<n);
	printf("%d\n",clearbit);
	togglebit=num^(1<<n);
	printf("%d\n",togglebit);
	checkbit=(num>>n)&1;
	printf("%d\n",checkbit);
}

