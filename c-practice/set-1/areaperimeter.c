#include<stdio.h>
#define pi 3.14f
void main()
{
	int radius;
	float area,perimeter;
	printf("enter radius of circle:");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("area=%.2f",area);
	perimeter=2*pi*radius;
	printf("\nperimeter=%.2f",perimeter);
}

