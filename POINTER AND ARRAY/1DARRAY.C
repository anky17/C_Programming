#include <stdio.h>
int main()
{
     int *p;
     int arr[100], i, n;
     p = arr;
     int sum = 0;
     printf("How many elements are there: ");
     scanf("%d", &n);
     for (i = 0; i < n; i++)
     {
          printf("\n Enter element: ");
          scanf("%d", (p + i));
     }
     printf("\n Printing array element:");
     for (i = 0; i < n; i++)
     {
          sum = sum + *(p + i);
     }
     printf("\nsum = %d", sum);
     return 0;
}
