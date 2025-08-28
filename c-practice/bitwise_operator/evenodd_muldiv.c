#include<stdio.h>
void main()
{
	int n;
	printf("enter num:");
	scanf("%d",&n);
	printf("multiply:%d\n",(n<<1));
	printf("divide:%d\n",(n>>1));
	if(n&1)
		printf("num is even \n");
	else
		printf("num is odd \n");
}

