#include<stdio.h>
void bubblesort(int a[5],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
	for(j=i;j<n;j++)
	{
		if(a[j]>a[i])
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	}
}
void main()
{
	int i, a[5]={0,1,2,3,4};
	printf("enter array elements:");
	for(i=0;i<5;i++);
	{
	scanf("%d",&a[i]);
	printf("sorted elements:%d",a[i]);
}
}





