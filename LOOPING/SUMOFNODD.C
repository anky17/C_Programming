// WAP TO PRINT SUM OF FIRST 10 ODD NUMBER.
#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Enter the number upto which you want to print the sum of of odd number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 2 * i - 1;
    }

    printf("The sum of first %d odd numbers is %d", n, sum);
    return 0;
}