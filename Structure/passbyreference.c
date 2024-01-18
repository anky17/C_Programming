#include <stdio.h>
struct student
{
    char name[20];
    float marks;
    int roll;
};
void display(struct student[], int);
int main()
{
    struct student s = {"Ankit", 57.45, 11};
    display(&s);
}
void display(struct student *x)
{
    printf("Name\tMarks\tRoll\t");
    printf("\n%s\t%.2f\t%d", x->name, x->marks, x->roll);
}
