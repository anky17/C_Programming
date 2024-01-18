// Write a program to accept n numbers and arrange them in ascending order.
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("How many numbers?");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before arranging in ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nAfter arranging in ascending order:\n");
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}