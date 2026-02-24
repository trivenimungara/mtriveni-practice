#include<stdio.h>
void main()
{
	int rows,cols,sum=0;
	int arr[20][20];
	int i,j;
	printf("enter no.of rows:");
	scanf("%d",&rows);
	printf("enter no.of cols:");
	scanf("%d",&cols);
	printf("array elements:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
			sum+=arr[i][j];
	}
	printf("sum of elements:%d\n",sum);

}

