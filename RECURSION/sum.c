// WAP TO FIND THE SUM OF DIGITS OF THE GIVEN INTEGER USING RECURSION.

#include <stdio.h>
int sum(int);
int main()
{
    int num, d;
    printf("Enter any integer:");
    scanf("%d", &num);
    d = sum(num);
    printf("SUM OF DIGITS=%d", d);
}
int sum(int x)
{
    if (x == 0)
        return 0;
    else
        return (x % 10 + sum(x / 10));
}