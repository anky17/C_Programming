// WAP TO SORT IN ASCENDING ORDER.

#include <stdio.h>
int main()
{
    int a[10] = {4, 5, 3, 5, 6, 2, 45, 33, 59, 9};
    int i, j, temp;
    printf("The Array before sorting:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nThe Array after sorting:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
