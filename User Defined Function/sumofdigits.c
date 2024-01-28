// WAP to find the sum of the digits of the given integer.

#include <stdio.h>
int main()
{
    int num, x, sum;
    sum = 0;
    printf("Enter any integer number:");
    scanf("%d", &num);
    while (num != 0)
    {
        x = num % 10;
        sum = sum + x;
        num = num / 10;
    }
    printf("The sum of digit is %d", sum);
    return 0;
}