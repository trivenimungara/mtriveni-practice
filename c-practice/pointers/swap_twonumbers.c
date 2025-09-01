#include<stdio.h>
void main()
{
        int a,b,temp;
        int *p1,*p2;
        printf("enter a and b:");
        scanf("%d %d",&a,&b);
        p1=&a;
        p2=&b;
        temp=*p1;
	*p1=*p2;
	*p2=temp;
        printf("after swapping:\n");
	printf("%d",a);
	printf("%d",b);
}

