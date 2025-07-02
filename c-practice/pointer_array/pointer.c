#include<stdio.h>
void main()
{
	int a=5;
	int *p=&a;
	p=&a;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%p\n",&p);
}
