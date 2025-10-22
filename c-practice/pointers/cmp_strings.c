#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	char *p1,*p2;
	printf("enter string one:");
	scanf("%s",str1);
	printf("enter string two:");
	scanf("%s",str2);
	p1=str1;
	p2=str2;
	while(*p1&&*p2)
	{
		if(*p1!=*p2)
			break;
	p1++;
	p2++;
	}
	if(*p1==*p2)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}
