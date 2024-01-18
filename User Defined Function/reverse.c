/* WAP TO INPUT ANY INTEGER AND PASS IT TO A FUNCTION THAT RETURNS ITS REVERSE NUMBER. DISPLAY FROM THE
MAIN FUNCTION WHETHER THE NUMBER IS PALINDROME OR NOT.*/

#include <stdio.h>
int reverse(int);
int main()
{
  int num, c;
  printf("Enter any number:");
  scanf("%d", &num);
  c = reverse(num);
  printf("Reverse=%d\n", c);
  if (c == num)
    printf("Palindrome");
  else
    printf("Not Palindrome");
  return 0;
}
int reverse(int a)
{
  int x, rev = 0;
  while (a != 0)
  {
    x = a % 10;
    rev = rev * 10 + x;
    a = a / 10;
  }
  return rev;
}
// clang reverse.c -o nn && ./nn