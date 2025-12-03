#include <stdio.h>

int main()
{
    char s1[20], s2[20];
    int i = 0;

    printf("enter s1: ");
    scanf("%s", s1);

    printf("enter s2: ");
    scanf("%s", s2);

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            printf("strings are not equal\n");
            return 0;
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
        printf("strings are equal\n");

    return 0;
}



