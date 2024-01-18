// STRUCTURE OF BOOK WITH BOOK NAME,AUTHOR,PUBLISHER.
#include <stdio.h>
#include <string.h>
struct book
{
    char name[40];
    char author[40];
    char publisher[30];
};
int main()
{
    struct book s[50];
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("Enter the name of book, author and publisher of book %d:", i + 1);
        scanf("%s%s%s", s[i].name, s[i].author, s[i].publisher);
    }
    for (i = 0; i < 50; i++)
    {
        if (strcmp(s[i].publisher, "XYZ") == 0)
        {
            printf("Name of book:%s, Author:%s, Publisher:%s\n", s[i].name, s[i].author, s[i].publisher);
        }
    }
    return 0;
}

// clang 2078.c -o ank && ./ank