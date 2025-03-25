#include<stdio.h>
void main()
{
	int x=10,a,c;
	scanf("%d",&x);
	c=x++;
	printf("postincrement num:%d",c);
	a=+x;
	printf("preincrement num:%d",a);
}
