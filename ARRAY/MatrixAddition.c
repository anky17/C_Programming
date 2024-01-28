// WAP to find the sum of two 3*3 matrix.

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], r1, c1, i, j;
    printf("Enter the number of rows and columns:");
    scanf("%d%d", &r1, &c1);
    printf("Enter the first array element:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second array element:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The sum of matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
