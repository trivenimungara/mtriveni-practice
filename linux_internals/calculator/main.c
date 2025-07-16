#include <stdio.h>
#include "calc.h"

int main(void) {
    int a = 10, b = 3;
    printf("add = %d\n", add(a, b));
    printf("sub = %d\n", sub(a, b));
    printf("mul = %d\n", mul(a, b));
    printf("div = %d\n", divide(a, b));
    return 0;
}



