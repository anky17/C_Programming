// WAP TO FIND THE REVERSE OF GIVEN STRING.

#include <stdio.h>
#include <string.h>
int main()
{
    {

        char string[100];
        char reverseString[100];

        // Asking user to enter the string of their desire

        printf("Enter any  string: ");
        scanf("%s", &string[100]);

        int length = strlen(string);

        for (int i = 0; i < length; i++)
        {

            reverseString[length - i - 1] = string[i];
        }
        printf("Reverse string of %s is %s\n", string, reverseString);
    }
    return 0;
}
