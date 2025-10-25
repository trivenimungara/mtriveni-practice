#include <stdio.h>
int main()
{
    FILE *fp = fopen("fork.c", "r");
    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
