// WAP TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT.

#include <stdio.h>
int main()
{
    int i, n, factorial = 0;
    printf("Enter any number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factorial++;
        }
    }
    if (factorial == 2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
    return 0;
}