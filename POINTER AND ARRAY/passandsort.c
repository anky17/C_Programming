// WAP THAT PASSES AN ARRAY TO FUNCTION AND PRINT THE SORTED ARRAY.

#include <stdio.h>
void sort(int[], int);
void disp(int[], int);
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
    printf("\nArray elements before sorting:");
    disp(a, n);
    sort(a, n);
    printf("\nArray elements after sorting:");
    disp(a, n);
}
void sort(int x[], int y)
{
    int i, j, temp;
    for (i = 0; i < y - 1; i++)
    {
        for (j = 0; j < y - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
void disp(int d[], int e)
{
    int i;
    for (i = 0; i < e; i++)
    {
        printf("%d ", d[i]);
    }
}
