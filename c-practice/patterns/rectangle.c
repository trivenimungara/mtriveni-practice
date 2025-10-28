#include<stdio.h>
int main()
{
        int rows,cols;
        printf("enter no of rows:");
        scanf("%d",&rows);
	printf("enter no of cols:");
	scanf("%d",&cols);
        for(int i=0;i<rows;i++)
        {
        for(int j=0;j<cols;j++)
        {
	   printf("* ");
	}
        printf("\n");
        }
        return 0;
}

