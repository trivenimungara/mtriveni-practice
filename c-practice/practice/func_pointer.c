#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int(*fp)(int,int);
		fp=add;
	int result=fp(10,20);
	printf("sum=%d\n",result);
}
