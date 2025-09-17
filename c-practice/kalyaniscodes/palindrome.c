#include<stdio.h>
void main()
{
	int n,r,temp,rev=0;
	printf("enter number:\n");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	printf("%s\n",temp==rev?"palindrome":"not palindrome");
}


