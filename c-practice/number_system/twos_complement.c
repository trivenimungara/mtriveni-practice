#include<stdio.h>
void main()
{
        int num,twoscomp;
	printf("enter num:");
	scanf("%d",&num);
	twoscomp=(~num)+1;
	printf("2's complement:%d\n",twoscomp);
}
