#include<stdio.h>
void main()
{
        int a,b,product;
        int *p1,*p2;
        printf("enter a and b:");
        scanf("%d %d",&a,&b);
        p1=&a;
        p2=&b;
        product=*p1*(*p2);
        printf("product of 2 numbers:%d\n",product);
}

