#include<stdio.h>
int main()
{
   float n;
    printf("Enter any integer:");
    scanf("%f",&n);
    printf("%f\n",n);
    printf("%5.0f\n",n);
     printf("%-6.1f\n",n);
      printf("%5.4f\n",n);
       printf("%-+5.1f\n",n);
       printf("%e\n",n);
    
    return 0;
   }
//  clang lab2.c -o ss