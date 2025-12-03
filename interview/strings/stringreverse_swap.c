#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	int start=0,end=strlen(str)-1;
	while(start<end)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	printf("reverse string:%s",str);
}
