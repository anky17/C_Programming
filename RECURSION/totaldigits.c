// WAP TO READ AN INTEGER AND FIND THE NUMBER OF DIGITS PRESENT IN IT USING RECURSIVE.

#include <stdio.h>
int count(int);
int main()
{
    int num, result;
    printf("Enter any number:");
    scanf("%d", &num);
    result = count(num);
    printf("total digit=%d", result);
}
int count(int x)
{
    if (x == 0)
        return 0;
    else
        return (1 + count(x / 10));
}