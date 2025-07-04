#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int (*fptr)(int a, int b) = add;
        int result=(*fptr)(3,4);
	printf("Add:%d\n",result);
}
