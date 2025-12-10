#include <stdio.h>
#include<string.h>
int main() {
    char str[20],temp;
    printf("enter string:");
    scanf("%s",str);
    int s1=0,s2=strlen(str)-1;
    while(s1<s2)
    {
        char temp=str[s1];
        str[s1]=str[s2];
        str[s2]=temp;
        s1++;
        s2--;
    }
    printf("reversed string:%s\n",str);

    return 0;
}
