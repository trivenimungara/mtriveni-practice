#include<stdio.h>
#include<string.h>
void rev(char a[])
{
	char t;
	int i,j;
	int len=strlen(a);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
}
int main(void)
{
	int s;
	char a[]="abcd";
	rev(a);
	printf("%s",a);
	return 0;
}


