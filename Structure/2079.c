// PROBLEM OF BSc.CSIT I SEM.

#include <stdio.h>
#include <string.h>
struct employee
{
    char name[30];
    char add[40];
    int age;
    int sal;
};
int main()
{

    struct employee s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the Name, Address, Age and Salary of employee %d:", i + 1);
        scanf("%s%s%d%d", s[i].name, s[i].add, &s[i].age, &s[i].sal);
    }
    for (i = 0; i < 3; i++)
    {
        if (s[i].age >= 40 && s[i].age <= 50 && (strcmp(s[i].add, "Kathmandu") == 0))
        {
            printf("The details of employee %d is:\n", i + 1);
            printf("Name=%s, Address=%s, Age=%d, Salary=%d", s[i].name, s[i].add, s[i].age, s[i].sal);
        }
    }
    return 0;
}
