#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("enter string:");
	scanf("%s",str);
	int s1=0,s2=strlen(str)-1;
	while(s1<s2)
	{
		if(str[s1]!=str[s2])
		{
			printf("string is not palindrome\n");
			return ;
		}
		s1++;
		s2--;
	}
	printf("string is palindrome\n");
}
