// WAP TO FIND THE LARGEST NUMBER FROM GIVEN 3 INPUTS.

#include <stdio.h>
int main()
{
    int a, b, c, largest = 0;
    printf("Enter the value of x,y,z:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            largest = a;
        else
            largest = c;
    }
    else
    {
        if (b > c)
            largest = b;
        else
            largest = c;
    }
    printf("Largest number=%d", largest);
    return 0;
}