#include<stdio.h>
void main()
{
	int i,n,first=0,second=1,next;
	prinf("enter value n:");
	scanf("%d",&n);
	printf("enter fibonacci series:");
	for(i=0;i<=n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		while(i!=1)
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d",next);
	}
}

