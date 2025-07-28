#include<stdio.h>
void main()
{
	int n,i;
	int a=0,b=1,c;
	printf("enter terms:\n");
	scanf("%d",&n);
	printf("fibonacci series:");
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
