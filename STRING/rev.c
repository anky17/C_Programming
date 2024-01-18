// WAP TO REVERSE A GIVEN STRING USING STRING FUNCTION

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    char rem[20];
    printf("Enter any word:");
    scanf("%s", &ch);
    strcpy(rem, ch);
    strrev(rem);
    if (strcmp(rem, ch) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}