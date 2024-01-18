#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,fact=1;
    char ch;
    do
    {
    printf("\n Choose an option:\n");
    printf("A. Find the odd or even\n");
    printf("B. Find the positive or negative\n");
    printf("C. Find the factorial value\n");
    printf("D. Exit\n");
    printf("\nEnter your choice:");
    scanf(" %c",&ch);
    printf("\nEnter any number:");
    scanf("%d",&num);
    switch(ch)
      {
        case 'A':
        case 'a':
            if(num%2==0)
            printf("%d is even\n",num);
            else
            printf("%d is odd\n",num);
            break;
        case 'B':
        case 'b':
            if(num>=0)
            printf("%d is positive\n",num);
            else
            printf("%d is negative\n",num);
            break;
        case 'C':
        case 'c':
            if(num<0)
            printf("Invalid:Factorial of negative number does not exist.\n");
            else
            {
                for(int i=1; i<=num; i++)
                    fact=fact*i;
                printf("Factorial=%d\n",fact);
            }
            break;
        case 'D':
        case 'd':
        printf("Exiting program.\n");
        exit(0);
        default:
        printf("Invalid choice.\n");
        break;
     }
    }while(ch!='D' && ch!='d');
    return 0;
}

// clang menu.c -o ank && ./ank