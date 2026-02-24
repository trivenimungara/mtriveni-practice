#include<stdio.h>
void main()
{
	unsigned int x=1;
	char *c;
	c=(char *)&x;
	if(*c==1)
		printf("Little endian system\n");
	else
		printf("Big endian system\n");
}
