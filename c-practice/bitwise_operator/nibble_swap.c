#include <stdio.h>

int main()
{
    unsigned char x = 0xAB;
    unsigned char result;

    result = (x << 4) | (x >> 4);

    printf("After nibble swap: 0x%X\n", result);
    return 0;
}
