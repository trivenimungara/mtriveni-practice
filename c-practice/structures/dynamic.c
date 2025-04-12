#include<stdio.h>
void main()
{
	int *ptr;
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter number of elements:%d",n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated.\n");
		exit(0);
	}
	else
	{
		printf("memory allocated.\n");
		for(i=0;i<n;i++)
		{
			ptr[i]=i+1;
		}
		printf("the elements of array:");
		for(i=0;i<n;i++)
		{
			printf("%d",ptr[i]);
		}
	}
}
