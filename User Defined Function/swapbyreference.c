// Wap to swap the value of any two variables using pass by reference.

#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    printf("Before Swapping\na=%d,b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping\na=%d,b=%d", a, b);
}
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
