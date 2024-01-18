#include <stdio.h>
int main()
{
    int i, len = 0, flag = 1;
    char ch[20];
    printf("Enter any string:");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i <= len / 2; i++)
    {
        if (ch[i] != ch[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    return 0;
}