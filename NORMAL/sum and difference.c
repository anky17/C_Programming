#include<stdio.h>
int main()
{
    int num1,num2,S,D;
    printf("Enter any two number:");
    scanf("%d%d",&num1,&num2);
    S=num1+num2;
    D=num1-num2;
    printf("The sum is %d and difference is %d.",S,D);
    return 0;

}