#include<stdio.h>
void main()
{
	int length,width;
	float area;
	printf("enter the length:");
	scanf("%d",&length);
	printf("enter the width:");
	scanf("%d",&width);
	area=length*width;
	printf("area=%.2f",area);
}

