#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int number;
    printf("Enter any interger you want to make the sum:");
    scanf("%d",&number);
    for (i=0; i<=number; i++)
    {
        sum+=i;
       
    }
    printf("The sum of the number you entered is = %d\n",sum);
    return 0;
}