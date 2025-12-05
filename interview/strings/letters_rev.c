#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
	
    int len = strlen(str);

    while (end <= len) {

        
        if (str[end] == ' ' || str[end] == '\0') {

            
            int i = start, j = end - 1;
            while (i < j) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }

            start = end + 1;  
        }
        end++;
    }

    printf("Output: %s\n", str);
    return 0;
}
