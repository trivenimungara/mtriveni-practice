#include<stdio.h>
void main()
{
	char str[100],*p=str;
	int count=0;
	printf("enter a string:");
	gets(str);
	while(*p)
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
			count++;
		p++;
	}
	printf("vowels=%d\n",count);
}
