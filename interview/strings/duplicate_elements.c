#include <stdio.h>

int main() {
    char str[50];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);  

    printf("Duplicate elements:\n");

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                break;               
            }
        }
    }
    return 0;
} 
