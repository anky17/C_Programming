// WAP TO PRINT THE FIBONACCI SERIES UPTO nTH TERM.

#include <stdio.h>
int main()
{
    int num, i, firstterm, secterm, thirdterm;
    firstterm = 0;
    secterm = 1;

    printf("Enter the number up to which you want to print the fibonacci series:");
    scanf("%d", &num);
    printf("The fibonacci series upto %dth term is:\n", num);
    printf("%d\t%d\t", firstterm, secterm);

    for (i = 1; i <= num - 2; i++)
    {
        thirdterm = firstterm + secterm;
        printf("%d\t", thirdterm);

        firstterm = secterm;
        secterm = thirdterm;
    }
    return 0;
}