// WAP to read data stored in a file input.txt

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Error in the file opening");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
// clang read.c -o ank && ./ank