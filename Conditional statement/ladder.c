#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
      printf("largest=%d",a);
    
    else if(b>a && b>c)
     printf("largest=%d",b);
    
    else
      printf("largest=%d",c);
}
//clang ladder.c -o aki