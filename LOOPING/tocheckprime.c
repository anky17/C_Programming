#include <stdio.h>
int main()
{
    int i = 1, fact = 0, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            fact++;
        }
        i++;
    }
    if (fact == 2)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }
    return 0;
}
// clang prime.c -o ank && ./ank
