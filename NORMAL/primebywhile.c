// CHECK PRIME OR NOT BY USING WHILE LOOP

#include <stdio.h>
int main()
{
    int num, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        if (num % i == 0)
            break;
        i++;
    }
    if (i == num)
        printf("\n%d is a Prime Number", num);
    else
        printf("\n%d is not a Prime Number", num);
    return 0;
}
