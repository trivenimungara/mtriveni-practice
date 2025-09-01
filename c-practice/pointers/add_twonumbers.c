#include<stdio.h>
void main()
{
	int a,b,sum;
	int *p1,*p2;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	sum=*p1+*p2;
	printf("sum of 2 numbers:%d\n",sum);
}
