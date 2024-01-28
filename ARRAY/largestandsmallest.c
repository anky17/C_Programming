// WAP to find the largest and smallest element in an array.

#include <stdio.h>
int main()
{
  int a[5], i, min, max;
  printf("Enter the array elements:");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  min = a[0];
  max = a[0];
  for (i = 0; i < 5; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
    if (a[i] < min)
    {
      min = a[i];
    }
  }
  printf("Largest element=%d\n", max);
  printf("Smallest element=%d", min);
  return 0;
}
