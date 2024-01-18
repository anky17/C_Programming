#include<stdio.h>
int main()
{
     int arr[25][25],i,j,m,n;
     printf("Enter the size of matrix:");
     scanf("%d%d",&m,&n);
     printf("Enter the array elements:\n");
     for(i=0; i<n; i++)
     {
        for(j=0; j<m; j++)
        {
            scanf("%d",(*(arr+i)+j));
        }
     }

     printf("Printing array element:\n");
     for(i=0; i<n; i++)
     { 
        for(j=0; j<m; j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
     }
     return 0;
 }
