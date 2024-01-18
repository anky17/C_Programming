#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%3==0)
    {
        printf("The number is exactly divisible by 3.\n");
        if(num%2==0)
        {
            printf("It is even number");
        }
        else{
            printf("It is odd number");
        }
    }
    else
    {
        printf("The number is not divisible by 3.");
    }
    return 0;

}