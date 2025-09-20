#include<stdio.h>
void dectobi(int n)
{
	if(n==0)
		return;
	dectobi(n/2);
	printf("%d",n%2);
}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num==0)
		printf("0 \n");
	else
		dectobi(num);
	return 0;
}
