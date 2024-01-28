/* Create a structure student having data, members name, roll-number and percentage. Complete the program to display the name of student
having percentage greater than or equal to 60. */

#include <stdio.h>
int main()
{
    int i;
    struct student
    {
        char name[20];
        int roll;
        float per;
    } s[5];
    // Input in the structure
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the name of student %d:", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the roll-number and percentage:");
        scanf("%d%f", &s[i].roll, &s[i].per);
    }
    // Output in the structure

    for (i = 0; i < 5; i++)
    {
        if (s[i].per >= 60)
        {
            printf("\nThe details of student %d\n", i + 1);
            printf("Name=%s, Roll number=%d, Percentage=%f\n", s[i].name, s[i].roll, s[i].per);
        }
    }
    return 0;
}
