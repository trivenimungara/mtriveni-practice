#include<stdio.h>
void main()
{
	int arr[100],n,i,j;
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicate elements:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d",arr[i]);
				break;
			}
		}
	}
	printf("\n");
}
