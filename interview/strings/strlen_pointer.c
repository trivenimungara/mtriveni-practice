#include<stdio.h>
void main()
{
	char str[20],*p=str;
	printf("enter string:");
	scanf("%s",str);
	int count=0;
	while(*p!='\0')
	{
		p++;
		count++;
	}
	printf("length=%d\n",count);
}

