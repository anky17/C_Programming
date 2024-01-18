/*WAP TO PRINT THE LARGEST ELEMENT OF THE EACH ROW OF THE MATRIX*/
#include<stdio.h>
int main()
{
    int a[100][100],i,j,sum,p,q;
    printf("Enter the value of P and Q:");
    scanf("%d%d",&p,&q);
    printf("Enter the array elements:");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is:\n");
     for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<p; i++)
    {
        large=a[0][0];
        for(j=0; j<q; j++)
        {
            if(large<a[i][j])
            {
                large=a[i][j];
            }
        }
        printf("Largest of %d row is %d\n",i+1,large);
    }
    return 0;
}
