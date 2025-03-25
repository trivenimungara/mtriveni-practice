#include<stdio.h>
#define pi 3.14159f
void main()
{
	int r;
	float area;
	printf("enter the radius:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area=%.4f",area);
}

