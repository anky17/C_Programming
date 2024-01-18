// WAP TO FIND THE FACTORIAL OF ANY NUMBER.
#include <stdio.h>
int fact(int);
int main()
{
    int num, f;
    printf("Enter any number:");
    scanf("%d", &num);
    f = fact(num);
    printf("Factorial=%d", f);
}
int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return (x * fact(x - 1));
}