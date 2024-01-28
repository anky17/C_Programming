// WAP to find the second largest element of an 1D array.

#include <stdio.h>
int main()
{
    int a[5], i, max, secmax;
    printf("Enter the array elements:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    secmax = a[0];
    for (i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] > secmax && a[i] != max)
        {
            secmax = a[i];
        }
    }
    printf("Second largest element=%d\n", secmax);
    return 0;
}
