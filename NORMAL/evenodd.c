#include <stdio.h>
int main()
{

    // WAP to find if given number is even or odd number.
    int number;
    {
        printf("Enter any number:");
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("%d is even", number);
        }
        else
        {
            printf("%d is odd", number);
        }
    }
    return 0;
}
