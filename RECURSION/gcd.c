// WAP TO CALCULATE GCD OF ANY TWO INTEGERS OR GREATEST COMMON FACTOR USING RECURSIVE FUNCTION.

#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b, h;
    printf("Enter any two number:");
    scanf("%d%d", &a, &b);
    h = gcd(a, b);
    printf("GCD=%d", h);
}
int gcd(int x, int y)
{
    int r;          // x=2 y=4 4%2==0
    if (x % y == 0) // 2%4=2 hcf(4,2)
        return y;
    else
        r = gcd(y, x % y);
    return r;
}
