#include <stdio.h>
void sum(int, int);
int main()
{
    int x, y;
    printf("Enter any two number:");
    scanf("%d%d", &x, &y);
    sum(x, y);
}
void sum(int a, int b)
{
    int c;
    c = a + b;
    printf("sum=%d", c);
}
