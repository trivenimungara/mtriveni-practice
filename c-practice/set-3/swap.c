#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the a and b values:");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swap:%d %d",a,b);
}

