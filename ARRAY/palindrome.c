#include <stdio.h>
#include <string.h>
int main()
{

        char string[100];
        printf("Enter any  stirng: ");
        gets(string);
        int length = strlen(string);
        int isPalindrome=1;
        
        for (int i = 0; i < length / 2; i++)
        {
            if (string[i] != string[length - 1 - i])
            {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome == 1)
        {
            printf("%s is a palindrome\n", string);
        }
        else
        {
            printf("%s is not a palindrome\n", string);
        }
         return 0;
}
   

// clang palindrome.c -o str && ./str