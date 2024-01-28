#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char name[20];
    int age;
    float height;
    char ch[10];
    fp = fopen("info.txt", "w");
    if (fp == NULL)
    {
        printf("Error! File cannot be created.");
        exit(1);
    }
    do
    {
        printf("Enter your name:");
        scanf("%s", name);
        printf("Enter your age:");
        scanf("%d", &age);
        printf("Enter your height:");
        scanf("%f", &height);
        printf("\nDo you want to continue?:");
        scanf("%s", ch);
        fprintf(fp, "%s\t%d\t%f", name, age, height);
    } while (strcmp(ch, "no") != 0);
    fclose(fp);
    fp = fopen("info.txt", "r");
    while (fscanf(fp, "%s%d%f", name, &age, &height) != EOF)
    {
        printf("\nName=%s\tAge=%d\tHeight=%f\n", name, age, height);
    }
    fclose(fp);
    return 0;
}