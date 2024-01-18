/* Suppose a file named "Num.txt" contains a list of integer. Write a program to extract the prime 
numbers only from the file and write them on "Prime.txt" file. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1;
    int n,i;
    int fact;
    fp=fopen("num.txt","r");
    fp1=fopen("prime.txt","w");
    if(fp==NULL)
    {
        printf("Error! File cannot be opened.");
        exit(1);
    }
    while((fscanf(fp,"%d",&n))!=EOF)
    {
        fact=0;
       for(i=1; i<=n; i++)
       {
        if(n%i==0)
        {
            fact++;
        }
       }
       if(fact==2)
       {
         fputc(n,fp1);
       }
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}