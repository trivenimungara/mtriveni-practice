#include<stdio.h>
int binarysearch(int a[],int l,int r,int key)
{
	int mid;
	while(l<=r)
	{
	mid=(l+r)/2;
	if(a[mid]==key)
	{
		return mid;
	}
	else if(a[mid]<key)
		l=mid+1;
	else
	        r=mid-1;
	}
	 return -1;
}
int main(void)
{
	int a[]={1,2,3,4,5,6};
	int key=4;
	int n = sizeof(a) / sizeof(a[0]);
	int result=binarysearch(a,0,n-1,key);
	if(result==-1)
		printf("element not present");
	else
		printf("element is present:%d",result);
	return 0;
}


