#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("info.txt","w");
    if(fp==NULL)
    {
        printf("Error! File cannot be created.");
        exit(1);
    }
    fputs("Welcome to Nepal",fp);
    fclose(fp);
    return 0;
}    