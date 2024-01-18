// WAP TO CALCULATE H.C.F OF ANY TWO INTEGERS OR GREATEST COMMON FACTOR USING RECURSIVE FUNCTION.
// HCF OF GIVEN TWO NUMBERS.
#include <stdio.h>
int hcf(int, int);
int main()
{
    int a, b, h;
    printf("Enter any two number:");
    scanf("%d%d", &a, &b);
    h = hcf(a, b);
    printf("HCF=%d", h);
}
int hcf(int x, int y)
{
    int r;          // x=2 y=4 4%2==0
    if (x % y == 0) // 2%4=2 hcf(4,2)
        return y;
    else
        r = hcf(y, x % y);
    return r;
}
// clang hcf.c -o fact && ./fact