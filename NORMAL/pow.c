// WAP TO FIND THE VALUE OF X^Y WITHOUT USING POW FUNCTION.
 #include<stdio.h>
 int main()
 {
    int x,y,i;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    int pow=1;
    for(i=1; i<=y; i++)
    {
        pow=pow*x;
    }
    printf("The value of x^y=%d",pow);
    return 0;
 }
 // clang pow.c -o ank && ./ank