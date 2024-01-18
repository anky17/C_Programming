#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.txt", "w+");
    if (fp == NULL)
    {
        printf("Error! File cannot be created.");
        exit(1);
    }
    printf("Enter some characters:\n");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    rewind(fp);
    printf("The characters from the file are:\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}