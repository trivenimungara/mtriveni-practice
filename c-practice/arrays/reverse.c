#include<stdio.h>
void main()
{
	int n;
	int arr[n];
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("elements-%d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("reverse order:\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
