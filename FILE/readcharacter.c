#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("Error in the file opening");
        exit(1);
    }
    printf("The character from the file are:\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
