#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.txt", "w");
    if (fp == NULL)
    {
        printf("Error! File cannot be created.");
        exit(1);
    }
    printf("Enter some character:");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}