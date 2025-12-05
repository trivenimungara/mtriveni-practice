#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],temp;
	printf("enter string:");
	scanf("%s",str);
	char *s1=str,*s2=str+strlen(str)-1;
	while(s1<s2)
	{
		char temp=*s1;
		*s1=*s2;
		*s2=temp;
		s1++;
		s2--;
	}
	printf("reversed string:%s\n",str);
}
