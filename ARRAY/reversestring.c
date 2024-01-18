
#include <stdio.h>
#include <string.h>
int main()
{
    { 
     // Variable declare gareko   
        char string[100];
        char reverseString[100];
     // Asking user to enter the string of their desire   
       
        printf("Enter any  string: ");
        scanf("%s", &string[100]);
     
     // Word ko length kati cha check gareko 
      
        int length = strlen(string);

        for (int i = 0; i < length; i++)
        {

            reverseString[length - i - 1] = string[i];
            
        }
        printf("Reverse string of %s is %s\n", string, reverseString);
    }
    return 0;
}
// clang reversestring.c -o aaa && ./aaa
//github ma code rakne
// repository
// git push
// git pull
