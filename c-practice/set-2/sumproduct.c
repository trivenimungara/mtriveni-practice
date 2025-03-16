#include<stdio.h>
void main()
{
	int n,sum=0,product=1,digit;
	printf("enter the value n:");
	scanf("%d",&n);
	if(n==0)
	{
		sum=0;
		product=0;
	}
	while(n!=0)
	{
	   digit=n%10;
           sum+=digit;
           product*=digit;
	   n/=10;
	}
         printf("sum of all digits:%d",sum);
         printf("product of all digits:%d",product);

}

