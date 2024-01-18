// WAP TO CHECK WHETHER A GIVEN INTEGER NUMBER IS ARMSTRONG OR NOT USING RECURSION.

#include <stdio.h>
int armstrong(int);
int main()
{
    int num, x;
    printf("Enter any integer number:");
    scanf("%d", &num);
    x = armstrong(num);
    if (x == num)
        printf("The Number is Armstrong");
    else
        printf("NOT ARMSTRONG");
}
int armstrong(int a)
{
    if (a == 0)
        return 0;
    else
        return ((a % 10) * (a % 10) * (a % 10) + armstrong(a / 10));
}