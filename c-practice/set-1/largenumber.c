#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	printf("enter third number:");
	scanf("%d",&num3);
	if(num1>=num2)
		printf("enter large number",num1);
	if(num2>=num3)
		printf("enter large number",num2);
	else
		printf("enter large number",num3);
}

