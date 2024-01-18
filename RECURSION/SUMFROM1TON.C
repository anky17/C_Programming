// SUM FROM 1 TO N.
#include <stdio.h>
int sum(int);
int main()
{
    int n, s;
    printf("Enter any number:");
    scanf("%d", &n);
    s = sum(n);
    printf("SUM=%d", s);
}
int sum(int x)
{

    if (x == 1)
        return 1;
    else
        return (x + sum(x - 1));
}