#include<stdio.h>
void main()
{
	int a1[]={2,3,4,1,1};
	int n=sizeof(a1)/sizeof(a1[0]);
	int a2[n];
	for(int i=0;i<n;i++)
	{
		a2[i]=a1[i];
	}
	printf("original array:\n");
	for(int i=0;i<n;i++){
		printf("%d",a1[i]);
	}
	printf("copied array:\n");
	for(int i=0;i<n;i++){
		printf("%d",a2[i]);
	}

}
