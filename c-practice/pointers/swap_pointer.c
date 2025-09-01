#include <stdio.h>

int main() {
    int a=10,b=20;
    int *p=NULL,*q=NULL,*temp=NULL;
    p=&a;
    printf("Add of p:%d\n",*p);
    q=&b;
    printf("Add of q:%d\n",*q);
    temp=p;
    p=q;
    q=temp;
    printf("swap:%d %d\n",*p,*q);
    return 0;
}
