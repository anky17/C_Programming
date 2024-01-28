// PROBLEM OF BSc.CSIT I SEM.

#include <stdio.h>
#include <string.h>
struct football
{
    char name[20];
    char country[20];
    int goal;
};
int main()
{
    struct football s[5], temp;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name:");
        scanf("%s", s[i].name);
        printf("Enter the country:");
        scanf("%s", s[i].country);
        printf("Enter the number of goal scored:");
        scanf("%d", &s[i].goal);
    }
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - 1 - i; j++)
        {
            if (strcmp(s[j].country, s[j + 1].country) > 0)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Country wise list of players are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %s %d\n", s[i].name, s[i].country, s[i].goal);
    }
    return 0;
}