// WAP to check identical array.

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], i, j, flag = 0;
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
            if (a[i][j] == b[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Two matrix are identical");
    else
        printf("Two matrix are not identical");
    return 0;
}
