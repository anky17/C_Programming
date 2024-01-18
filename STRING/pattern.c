#include <stdio.h>
#include <string.h>
int main()
{
    char ch[30] = "ENGINEERING";
    int i, j, len;
    len = strlen(ch);
    for (i = len; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", ch[j]);
        }
        printf("\n");
    }
    return 0;
}