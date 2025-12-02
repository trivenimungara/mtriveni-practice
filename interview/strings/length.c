#include<stdio.h>
void main()
{
	char str[50];
	printf("enter string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("length=%d\n",i);
}
