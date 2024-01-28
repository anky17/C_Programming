// WAP TO CHECK WHETHER A GIVEN INTEGER NUMBER IS ARMSTRONG OR NOT.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, num1, x, sum = 0;
    printf("Enter any integer number:");
    scanf("%d", &num);
    num1 = num;
    while (num != 0)
    {
        x = num % 10;
        sum = sum + pow(x, 3);
        num = num / 10;
    }
    if (sum == num1)
        printf("The Number is Armstrong");
    else
        printf("NOT ARMSTRONG");
    return 0;
}