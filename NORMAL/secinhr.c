#include<stdio.h>
int main()
{
    int t,hr,min,sec;
    printf("Enter the time in second:");
    scanf("%d",&t);
    hr=t/3600;
    min=(t%3600)/60;
    sec=(t%3600)%60;
    printf("%d hour %d minutes %d seconds",hr,min,sec);
    return 0;
}
