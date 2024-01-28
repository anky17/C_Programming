// WAP TO FIND THE SD OF THE MARKS OF THE STUDENT

#include <stdio.h>
#include <math.h>
int main()
{
  int n, i;
  float sum = 0, mean, sigma, sd = 0;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  float marks[n];
  printf("Enter the marks of the students:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%f", &marks[i]);
  }
  /*
  σ = √(Σ(x - μ)² / N)
  where:
  σ represents the  standard deviation.
  x represents each individual value(i.e marks).
  μ represents the mean of the marks.
  Σ (sigma) represents the sum of the values.
  N represents the total number of students in the class.*/
  for (i = 0; i < n; i++)
  {
    sum = sum + marks[i];
  }
  mean = sum / n;
  for (i = 0; i < n; i++)
  {
    sigma = sigma + pow(marks[i] - mean, 2); // euta student ko marks 30 ani mean marks 15
  }
  sd = sqrt(sigma / n);
  printf("The standard deviation is %f", sd);
  return 0;
}
