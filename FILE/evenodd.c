/*WAP TO CREATE AND WRITE N NUMBERS IN A FILE "NUMBER.TXT". OPEN THIS FILE THEN READ ITS CONTENT AND
PULL EVEN NUMBERS IN EVEN.TXT FILE AND ODD NUMBERS IN ANOTHER ODD.TXT FILE*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1,*fp2;
    int i,n;
    fp=fopen("number.txt","w");
    if(fp==NULL)
    {
        printf("Error! File cannot be created.");
    }
    printf("Enter how many number you wanna write:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fprintf(fp,"%d\n",i);
    }
    fclose(fp);
    fp=fopen("number.txt","r");
    fp1=fopen("even.txt","w");
    fp2=fopen("odd.txt","w");
    for(i=1; i<=n; i++)
    {
        fscanf(fp,"%d",&i);
        if(i%2==0)
        {
            fprintf(fp1,"%d",i);
        }
        else{
            fprintf(fp2,"%d",i);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

}