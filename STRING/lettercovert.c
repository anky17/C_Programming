// WAP TO CONVERT THE CASE OF THE ALHPABETS.

#include <stdio.h>
int main()
{
    char ch[20];
    int i;
    printf("Enter any string:");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
        else
        {
            ch[i] = ch[i] + 32;
        }
    }
    printf("The converted string is %s", ch);
    return 0;
}