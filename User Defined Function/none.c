#include<stdio.h>
void sum();
int main()
{
 sum();
}
void sum()
{
    int a,b,c;
    printf("Enter any two number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}

