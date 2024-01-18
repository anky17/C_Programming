// WAP TO FIND THE COMBINATION OF N.

#include <stdio.h>
int fact(int);
int combination(int, int);
int main()
{
  int n, r, d;
  printf("Enter the value of n and r:");
  scanf("%d%d", &n, &r);
  d = combination(n, r);
  printf("COMBINATION=%d", d);
}

int combination(int x, int y)
{
  int c;
  c = fact(x) / (fact(y) * fact(x - y));
  return c;
}

int fact(int f)
{
  int i;
  int nfact = 1;
  for (i = 2; i <= f; i++)
  {
    nfact = nfact * i;
  }

  return nfact;
}
// clang combination.c -o ii && ./ii