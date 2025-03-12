#include <stdio.h>
void main()
{
    int count=0,num=0;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0)
	    count=1;
    while(num!=0)
    {
	    count++;
            num=num/10;
    }
    printf("total number of digits:%d",count);
}

    
  



