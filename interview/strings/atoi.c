#include<stdio.h>
int my_atoi(char str[])
{
	int i=0,num=0;
	while(str[i]!='\0')
	{
		if(str[i]<'0'||str[i]>'9')
			return -1;
		num=num*10+(str[i]-'0');
		i++;
	}
		return num;
}
void main()
{
	char str[50];
	printf("enter string:");
	scanf("%s",str);
	int val=my_atoi(str);
	if(val==-1)
		printf("invalid numeric\n");
	else
		printf("valid:%d\n",val);
}
