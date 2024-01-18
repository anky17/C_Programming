/*WAP TO PRINT THE SUM OF THE DIAGONAL ELEMENTS OF THE MATRIX*/
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("Enter the first array elements:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    printf("SUM=%d",sum);
    return 0;
}
