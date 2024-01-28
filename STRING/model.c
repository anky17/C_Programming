/*Write a program to read a character array input as “TRIBHUVAN UNIVERSITY” from
the user and find out how many times a character "I" occurs in that array? */

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50] = "TRIBHUVAN UNIVERSITY";
    int i, len;
    len = strlen(ch);
    int count = 0;
    for (i = 0; i < len; i++)
    {
        if (ch[i] == 'i' || ch[i] == 'I')
        {
            count++;
        }
    }
    printf("The total I in the string is %d", count);
    return 0;
}