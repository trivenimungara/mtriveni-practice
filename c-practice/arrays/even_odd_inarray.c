#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5,6};
	int evencount=0,oddcount=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
		if(arr[i]%2==0)
		{
			evencount++;
		}
		else
			oddcount++;
	printf("even numbers:%d\n",evencount);
	printf("odd numbers:%d\n",oddcount);
}
