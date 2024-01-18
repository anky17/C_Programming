// WAP to input the marks of 5 students in a class using 1D array and then display avarage marks and sum marks.
#include<stdio.h>
int main()
{
    int a[5],i,n,sum;
    float avg;
    n=0;
    printf("Enter the marks of 5 students:");
   for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        n++;
    }
       sum=0;
    for(i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("Sum=%d\n",sum);
    printf("Average=%f",avg);
    return 0;
}

// clang sumandaverage.c -o ank && ./ank