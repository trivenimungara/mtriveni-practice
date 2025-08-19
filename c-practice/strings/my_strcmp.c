#include<stdio.h>
int my_strcmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0'&&s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
		{
			return s1[i]-s2[i];
		}
		i++;
	}
	return s1[i]-s2[i];
}
void main()
{
        char s1[10];
        char s2[20];
        printf("enter the strings:");
        scanf("%s %s",s1,s2);
        if(my_strcmp(s1,s2)==0)
        {
                printf("strings are equal\n");
        }
        else
        {
		printf("strings are not equal\n");
        }
}
