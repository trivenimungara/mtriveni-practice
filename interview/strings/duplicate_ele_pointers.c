#include <stdio.h>

int main() {
    char str[50];
    char *p,*q;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Duplicate elements:\n");

    for (p=str;*p!='\0'; p++) {
        for (q = p + 1; *q!= '\0'; q++) {
            if (*p == *q) {
                printf("%c\n",*p);
                break;
            }
        }
    }
    return 0;
}

