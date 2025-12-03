#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("enter string:");
	scanf("%s",str);
	int start=0,end=strlen(str)-1;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			printf("string is not palindrome\n");
			return;
		}
		start++;
		end--;
	}
	printf("string is palindrome\n");
}

