// WAP to swap the values of two variables without introducing the third variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    // LOGIC;
    /* let us suppose a=5 and b=6.
       Suppose a=a+b then, the value of a becomes a=11,
       let b=a-b;
       now logic is b=a-b since (a=a+b) we can say that b=a+b-b so the value of b becomes a
       now let a=a-b;
       (since the value of b is already equals of a))
       (i.e a=a+b-a) */
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping\na=%d\nb=%d", a, b);
    return 0;
}
// clang swapwithoutthird.c -o aa && ./aa