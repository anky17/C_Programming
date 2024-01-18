#include <stdio.h>
int main()
{
  int num, i = 1, j, check;
  printf("Enter the number of prime number to be printed: ");
  scanf("%d", &num);
  printf("The first %d prime numbers are\n", num);

  for (check = 0; check < num; i++)
  {
    int isPrime = 0;

    for (j = 1; j <= i; j++)
    {
      if (i % j == 0)
        isPrime++;
    }

    if (isPrime == 2)
    {
      printf("%d ", i);
      check++;
    }
    
  }
  return 0;
}
