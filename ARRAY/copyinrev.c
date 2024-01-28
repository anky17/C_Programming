// COPY THE CONTENT OF ONE ARRAY TO ANOTHER ARRAY IN REVERSE ORDER.

#include <stdio.h>
int main()
{
    int a[3], b[3], i, j;
    printf("Enter the array elements:");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0, j = 3 - 1; i < 3; i++, j--)
    {
        b[i] = a[j];
    }
    printf("Copied array elements in reverse order are:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}