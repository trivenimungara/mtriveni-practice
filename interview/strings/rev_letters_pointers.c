#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    char *s1, *s2;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    s1 = s2 = str;

    while (1)
    {
        if (*s2 == ' ' || *s2 == '\0')
        {
           
            char *i = s1;
            char *j = s2 - 1;

            while (i < j)
            {
                temp = *i;
                *i = *j;
                *j = temp;
                i++;
                j--;
            }

            if (*s2 == '\0')   
                break;

            s1 = s2 + 1;     
        }

        s2++;  
    }

    printf("reversed string: %s\n", str);
    return 0;
}

