#include <stdio.h>
void main()
{
        int n,p;
        printf("enter n:");
        scanf("%d",&n);
        printf("enter pos:");
        scanf("%d",&p);
        n=n&(~(1<<p));
        printf("%d",n,p);
}

