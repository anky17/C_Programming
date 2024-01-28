// WAP TO PRINT PRIME NUMBERS BETWEEN 1 TO 50.

#include <stdio.h>
int main()
{
    int i, j, fact = 0, count = 0;
    ;
    for (i = 1; i <= 50; i++)
    {
        fact = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                fact++;
        }
        if (fact == 2)
        {
            count++;
            printf("%d\t", i);
        }
    }
    printf("Total prime number=%d", count);
    return 0;
}