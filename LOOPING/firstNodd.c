// WAP TO PRINT FIRST N ODD NUMBER.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The first %d odd numbers are ", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);
    }
    return 0;
}