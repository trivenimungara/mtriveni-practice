#include<stdio.h>
int main()
{
	int i,j,flag=1;
	int a[2][2],b[2][2];
	printf("enter a matrix:");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	printf("enter b matrix:");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(a[i][j]!=b[i][j])
			{
				flag=0;
		                break;
			}
                }
	}
			
	if(flag==1)
	{
		printf("a and b matrix are equal");
	}
	else
		printf("a and b matrix are not equal");
	return 0;
}
		
