#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,2,4},i,j;
	printf("duplicate element:");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
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
