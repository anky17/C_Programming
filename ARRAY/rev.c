// WAP TO REVERSE THE GIVEN STRING

#include <stdio.h>
#include <string.h>
int main()
{
   char rev[30];
   char ch;
   int l;
   printf("Enter any string:");
   gets(rev);
   l = strlen(rev);
   for (int i = 0; i < l / 2; i++)
   {
      ch = rev[i];
      rev[i] = rev[l - 1 - i];
      rev[l - 1 - i] = ch;
   }
   printf("Reverse is %s", rev);
   return 0;
}

