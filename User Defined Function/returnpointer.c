#include <stdio.h>
int *returnPointer(int) 
int main()
{
    int a = 5;
    int *p = &a;
    p = returnPointer(a);
    printf("%d", p);
}