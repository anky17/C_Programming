// WAP to find transpose of matrix.

#include <stdio.h>
int main()
{
    int a[4][3], i, j;
    printf("Enter the array element:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Before transpose:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of matrix is:\n"); // m*n==>n*m
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}