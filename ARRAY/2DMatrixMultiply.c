// WAP to multiply two 2D array.

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], mul[3][3], i, j, k;
    printf("Enter the first array elements:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second array elements:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] = mul[i][j] + a[i][j] * b[i][j];
            }
        }
    }
    printf("MULTIPLIED MATRIX IS:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}
