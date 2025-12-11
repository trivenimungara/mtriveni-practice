#include <stdio.h>

int main() {
    int a[] = {5, 2, 9, 1, 3};
    int n = 5;
    int i, j, temp;

    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(a[j] < a[i]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

