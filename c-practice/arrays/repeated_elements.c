#include<stdio.h>
void main()
{
	int a[5]={2,-1,4,2,3};
	int n=5;
	for(int i=0;i<n;i++)
	{
		int count=1;
		if(a[i]==-1)
		{
		 continue;
		}
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=-1;
			}
		}
		if(count>1)
	        printf("%d is repeated %d times",a[i],count);
	}
}
