#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,2,4,6,1,3};
	int n=9;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n-1;k++)
				{
					arr[k]=arr[k+1];
				}
					n--;
					j--;
			}
		}
	}
	printf("array after removing duplicates:\n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	printf("\n");
}

