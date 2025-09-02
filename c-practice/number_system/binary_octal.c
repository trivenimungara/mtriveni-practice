#include<stdio.h>
void main()
{
	int binary,decimal=0,octal=0;
	int base=1,rem;
	printf("enter binary:");
	scanf("%d",&binary);
	while(binary>0)
	{
		rem=binary%10;
		decimal=decimal+rem*base;
		base=base*2;
		binary=binary/10;
	}
	base=1;
	while(decimal>0)
	{
		rem=decimal%8;
		octal=octal+rem*base;
		base=base*10;
		decimal=decimal/8;
	}
	printf("binary to octal:%d\n",octal);
}
