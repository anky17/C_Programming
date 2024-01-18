/* Create a structure student having data, members name, roll-number and percentage. Complete the program to display the name of student
having percentage greater than or equal to 60. */
#include <stdio.h>
int i;
struct student
{
    char name[20];
    int roll;
    float per;
} s;
int main()
{
    struct student s[5];
    // Input in the structure
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the name,roll number,percentage of student %d:", i + 1);
        scanf("%s%d%f", s[i].name, &s[i].roll, &s[i].per);
    }
    // Output in the structure
    printf("The details of the student having percentage greater than or equal to 60 is:\n");
    for (i = 0; i < 5; i++)
    {
        if (s[i].per >= 60)
        {
            printf("Name=%s, Roll number=%d, Percentage=%f\n", s[i].name, s[i].roll, s[i].per);
        }
    }
    return 0;
}

// clang 2077.c -o ank && ./ank
//  printf("\nThe details of the student having percentage greater than or equal to 60 is:\n");