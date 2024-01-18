#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    char t[100];
    printf("Enter any string ");
    scanf("%s",&string);
    int length=strlen(string);
    for (int i=0; i<length; i++)
    {
       t[length-1-i]=string[i];
    }
    printf("\nReverse string of %s is %s",string,t);
   return 0;
}