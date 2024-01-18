// Create a structure rectangle with data members length and breadth.
#include <stdio.h>
struct rectangle
{
    float length;
    float breadth;
};
int main()
{
    struct rectangle s;
    printf("Enter the length and breadth of rectangle:");
    scanf("%f%f", &s.length, &s.breadth);
    printf("length=%f, breadth=%f", s.length, s.breadth);
    return 0;
}

// clang rectangle.c -o ank && ./ank