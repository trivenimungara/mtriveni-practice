#include <stdio.h>
void main()
{
    int count=0,num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0)
	    count=1;
    while(num!=0)
	    count++;
    printf("total number of digits:%d",count);
}

    
  



