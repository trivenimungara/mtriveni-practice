#include<stdio.h>
void main()
{
	int n,temp,sum=0,d,fact,i;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		fact=1;
		for(i=1;i<=d;i++)
			fact*=i;
		sum+=fact;
		temp/=10;
	}
	if(sum==n)
		printf("strong number\n");
	else
		printf("not a strong number\n");
}
