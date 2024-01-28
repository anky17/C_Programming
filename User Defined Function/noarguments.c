// WAP TO ILLUSTRATE FUNCTION WITHOUT ANY ARGUMENT

#include <stdio.h>
int sum();

int main()
{
    int c;
    c = sum();
    printf("sum=%d", c);
}
int sum()
{
    int x, y, z;
    printf("Enter any two number:");
    scanf("%d%d", &x, &y);
    z = x + y;
    return z;
}

// clang noarguments.c -o zz