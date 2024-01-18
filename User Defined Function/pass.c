#include <stdio.h>
void pass(int[], int);
int main()
{
  int a[5], i;
  printf("Enter the array elements:");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  pass(a, 5);
}
void pass(int x[], int y)
{

  printf("The array elements are:");
  for (int i = 0; i < y; i++)
  {
    printf("%d ", x[i]);
  }
}
// clang pass.c -o aa && ./aa