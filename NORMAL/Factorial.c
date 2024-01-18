#include <stdio.h>
int main()
{
   
    int number;
    long factorial = 1;
  
// askiing user for a number to find factorial
    
    printf("Enter any integral number:");
    scanf("%d", &number);

//if number is less than 0 then show error
   
    if (number < 0)
    {
        printf("Error: Factorial of negative numbers does not exist.");
    }
    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d is equal to %ld\n", number, factorial);
    }

    return 0;
}
// clang Factorial.c -o fact && ./fact