#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int str;
    printf("Enter any string:");
    scanf("%s",&string[100]);
    str=strlen(string[100]);
    printf("The length of the string you entered is %d",str);
    return 0;
}