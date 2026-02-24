#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char *s;
	s=malloc(1024 *sizeof(char));
	printf("enter string:");
	scanf("%[^\n]",s);
	s=realloc(s,strlen(s)+1);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
			printf("\n");
		else
			printf("%c",s[i]);
	}
	free(s);
}
