#include<stdio.h>
void main()
{
	int a[5]={7,6,5,1,3};
	int i,min;
	min=a[0];
	for(i=1;i<5;i++)
		if(a[i]<min)
		{
			min=a[i];
		}
	printf("minimun:%d\n",min);
}

