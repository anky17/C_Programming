#include <stdio.h>
#include <math.h>
int main()
{
    float radius;

    printf("Enter radius of a sphere: ");
    scanf("%f", &radius);

    float area = 4 / 3 * M_PI * pow(radius, 3);
    printf("The area of sphere is  %f ", area);

    return 0;
}