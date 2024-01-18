#include <stdio.h>
struct booklist {
    char title[50];
    char author[50];
    float cost;
};

int main() 
{
    struct booklist books[4];
    float totalCost = 0.0;
   // Input book details
    for (int i = 0; i < 4; i++) 
    {
        printf("Details of Book %d\n", i + 1);

        printf("Title: ");
        scanf("%s", books[i].title);

        printf("Author: ");
        scanf("%s", books[i].author);

        printf("Cost: $");
        scanf("%f", &books[i].cost);

        printf("\n");
    }
    for (int i = 0; i < 4; i++) 
    {
        totalCost += books[i].cost;

    }
            
    printf("Total cost of all books: $%f\n", totalCost);

    return 0;
}
