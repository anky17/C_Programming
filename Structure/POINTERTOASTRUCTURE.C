#include <stdio.h>
struct student
{
    char name[20];
    float marks;
    int roll;
};
int main()
{
    struct student s = {"Ankit", 57.45, 11};
    struct student *ptr;
    ptr = &s;
    printf("\nName\tMarks\tRoll\t");
    printf("\n%s\t%.2f\t%d", ptr->name, ptr->marks, ptr->roll);
    return 0;
}
