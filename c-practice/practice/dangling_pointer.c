#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr=(int *)malloc(sizeof(int));
	*ptr=10;
	printf("value before free:%d\n",*ptr);
	free(ptr);
	printf("value after free:%d\n",*ptr);
}

