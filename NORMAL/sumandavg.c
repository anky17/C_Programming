// WAP to find the sum and average of first n natural number.

#include<stdio.h>
int main()
{
    int num,i,sum,avg;
    printf("Enter the number of natural number you want to find sum and average:");
    scanf("%d",&num);
    sum=0;
    avg=0;
    for(i=1; i<=num; i++)
    {
       sum=sum+i;
    }
    avg=sum/num;
    printf("sum of first %d natural number=%d\n",num,sum);
    printf("average=%d",avg);
    return 0;

}

// clang sumandavg.c -o ank && ./ank