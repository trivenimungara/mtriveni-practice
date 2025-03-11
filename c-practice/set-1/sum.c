#include<stdio.h>
void main()
{
	float num1,num2, sum,average;
	printf("enter first number:");
	scanf("%f",&num1);
	printf("enter second number:");
	scanf("%f",&num2);
	sum=num1+num2;
	average=sum/2;
	printf("sum=%.2f\n",sum);
	printf("average=%.2f\n",average);
}

