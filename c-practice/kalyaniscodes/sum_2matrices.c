#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],sum[2][2];
	int *p1=&a[0][0],*p2=&b[0][0],*p3=&sum[0][0];
	printf("enter 4 elements of 1st matrix:\n");
	for(int i=0;i<4;i++)
		scanf("%d",p1+i);
	printf("enter 4 elements of 2nd matrix:\n");
        for(int i=0;i<4;i++)
                scanf("%d",p2+i);
	for(int i=0;i<4;i++)
		*(p3+i)=*(p1+i)+*(p2+i);
	printf("sum of matrices:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			printf("%d",sum[i][j]);
		printf("\n");
	}
}

