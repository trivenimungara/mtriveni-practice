#include<stdio.h>
#include<string.h>
int my_strcmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0'&&s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
		{
			return 1;
		}
		i++;
	}
	if(s1[i]=='\0'&&s2[i]=='\0')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
 char s1[10],s2[20];
printf("enter string1:");
scanf("%s",s1);
printf("enter string2:");
scanf("%s",s2);
int result=my_strcmp(s1,s2);
if(result==0)
{
	printf("strings are equal\n");
}
else

	printf("strings are not equal\n");
    return 0;
}


   



