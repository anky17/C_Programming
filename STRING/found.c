#include <stdio.h>
#include <string.h>
int main()
{
    char ch[30];
    char str;
    int i, len, flag = 0;
    printf("Enter any string: ");
    gets(ch);
    printf("Enter any character to check if it in string or not: ");
    scanf("%c", &str);
    len = strlen(ch);
    for (i = 0; i < len; i++)
    {
        if (ch[i] == str)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not found");
    }
    return 0;
}