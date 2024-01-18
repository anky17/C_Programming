#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch[25];
    fp = fopen("hey.txt", "w");
    if (fp == NULL)
    {
        printf("Error! FILE CANNOT BE CREATED.");
        exit(1);
    }
    printf("Enter any string:");
    while ((strlen(gets(ch))) != 0)
    {
        fputs(ch, fp);
    }
    fclose(fp);
    return 0;
}
