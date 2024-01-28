// WAP TO SORT THE GIVEN STRING.

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    int i, j, temp, len;
    printf("Enter any string:");
    gets(ch);
    len = strlen(ch);
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (ch[j] > ch[j + 1])
            {
                temp = ch[j];
                ch[j] = ch[j + 1];
                ch[j + 1] = temp;
            }
        }
    }
    printf("The sorted string is %s", ch);
    return 0;
}