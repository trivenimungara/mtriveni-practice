#include<stdio.h>
void main()
{
        int rows,i,j,cols;
        printf("enter rows:");
        scanf("%d",&rows);
	printf("enter columns:");
	scanf("%d",&cols);
        for(i=0;i<rows;i++)
        {
                for(j=0;j<cols;j++)
                {
                        if(i==0||i==rows-1||j==0||j==cols-1)
                        {
                                printf("* ");
                        }
                        else
                        {
                                printf("  ");
                        }
                }
                printf("\n");
        }
}


