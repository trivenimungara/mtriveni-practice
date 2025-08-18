#include <stdio.h>
void main()
{
        int n,p;
        printf("enter n:");
        scanf("%d",&n);
        printf("enter pos:");
        scanf("%d",&p);
        n=n|(n<<p);
        printf("%d",n,p);
}


