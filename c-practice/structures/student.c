#include<stdio.h>
struct student
{
	char name[20];
	float marks;
	float average;
};
void main()
{
	struct student a,b;
	printf("enter name of a:");
	scanf("%s",a.name);
	printf("enter name of b:");
	scanf("%s",b.name);
	printf("enter marks of a:");
	scanf("%f",&a.marks);
	printf("enter marks of b:");
	scanf("%f",&b.marks);
	printf("name:%s %s",a.name,b.name);
	printf("marks:%f %f",a.marks,b.marks);
	float averagemarks=(a.marks+b.marks/2);
	printf("average:%2f",averagemarks);
}

