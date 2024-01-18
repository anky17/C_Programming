// WAP TO PRINT ARRAY OF THE SUM

#include <stdio.h>
int sum(int[], int);
int main()
{
    int a[3], i;
    int s = 0;
    printf("Enter the array elements:");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    s = sum(a, 3);
    printf("sum of array elements=%d", s);
}
int sum(int x[], int y)
{
    int i, z = 0;
    for (i = 0; i < y; i++)
        z += x[i];
    return z;
}

// clang arraysum.c -o aa && ./aa