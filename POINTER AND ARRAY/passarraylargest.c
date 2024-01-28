// WAP THAT PASSES AN ARRAY TO FUNCTION AND PRINT THE LARGEST AND SMALLEST ELEMENT.

#include <stdio.h>
void pass(int[], int);
int main()
{
    int a[100], n, i;
    printf("Enter how many elements:");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    pass(a, n);
}
void pass(int x[], int y)
{
    int i, max, min;
    max = x[0];
    min = x[0];
    for (i = 0; i < y; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    printf("Largest Element=%d\t", max);
    printf("Smallest Element=%d", min);
}