#include<stdio.h>
void main()
{
	float basic,hra,others,grosssalary;
	printf("enter basic usage amount:");
	scanf("%f",&basic);
	printf("enter houserent:");
	scanf("%f",&hra);
	printf("enter other expenses:");
	scanf("%f",&others);
	grosssalary=basic+hra+others;
	printf("grosssalary=%.2f",grosssalary);
}
