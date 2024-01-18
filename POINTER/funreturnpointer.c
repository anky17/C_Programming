// WAP FUNCTION RETURNING POINTER.
#include<stdio.h>
int *ptr();
int main()
{
    int i, *array;
    array=ptr();
    printf("The array is:\n");
    for(i=0; i<3; i++)
    {
        printf("%d ",*(array+i));
    }
}
int *ptr()
{
    static int arr[]={1,2,3};
    return arr;
}