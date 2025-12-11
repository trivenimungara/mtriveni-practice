#include<stdio.h>
void main()
{
	int a[]={5,2,9,1,3};
	int n=5;
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting:");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}
