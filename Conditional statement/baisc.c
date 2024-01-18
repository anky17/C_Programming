#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>0){
        printf("Entered age is %d\n",age);
    }
    else{
        printf("Invalid age");
    }
    return 0;
}