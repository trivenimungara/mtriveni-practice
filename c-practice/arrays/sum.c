
#include<stdio.h>
void main()
{
	int a[100],i,n,sum=0;
	printf("sum of all elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of all stored elements:%d",sum);
}

