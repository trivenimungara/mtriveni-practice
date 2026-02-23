#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len=strlen(str);
	printf("enter string:");
	scanf("%s",str);
	for(int i=strlen(str)-1;i>=0;i--)
		printf("%c",str[i]);
}
