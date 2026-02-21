#include<stdio.h>
void main()
{
int n;
printf("enter n:");
scanf("%d",&n);
if ((n & (n - 1)) == 0 && (n & 0x55555555)) //power of 2 + even bit position
    printf("Power of 4\n");
else
    printf("Not Power of 4\n"); 
}
