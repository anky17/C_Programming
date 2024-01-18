#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // Input the coefficients of the quadratic equation
    printf("Enter the coefficients (a, b, and c) of the quadratic equation:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Check the value of the discriminant
    if (discriminant > 0) 
    {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %lf\n", root1);
        printf("Root 2 = %lf\n", root2);
    } 
    else if (discriminant == 0) 
    {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("Roots are real and repeated:\n");
        printf("Root 1 = Root 2 = %lf\n", root1);
    } 
    else 
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %lf - %lfi\n", realPart, imaginaryPart);
    }
   return 0;
}
