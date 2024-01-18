#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch[50];
    fp = fopen("string.h", "w+");
    if (fp == NULL)
    {
        printf("Error! File cannot be created.");
        exit(1);
    }
    printf("Enter the string:");
    while ((strlen(gets(ch))) != 0)
    {
        fputs(ch, fp);
    }
    rewind(fp);
    printf("The string is:\n");
    while ((fgets(ch, 50, fp)) != NULL)
    {
        puts(ch);
    }
    fclose(fp);
    return 0;
}