#include <stdio.h>
int main() {
    
    int n, i = 1, count = 0;
    printf("Enter the number of prime number to be print: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are:\n", n);

    while(count < n)  // here we make a condition for the while loop to end the loop until the count variable is not greater than n.
    {
        int isPrime = 0; // to check the number of factors,i.e prime number have only 2 factor either 1 or the number itself.
        for(int j = 1; j <= i; j++)  /* since we have to check n prime number,j(initially j=1) is the variable which divides 
                                      the variable i(initially i=1) from 1 to j=i in every loop(i.e upto j=i) */
        {
            if(i % j == 0) // if i is exactly divided by j then the value of isPrime is incremented by 1.
            {
              isPrime++;
            }
        }
        if(isPrime == 2) //since prime number have two factors, if the isPrime will be equal to 2, then we will print the i as prime.
        {
            printf("%d ", i);
            count++;  /* and the value of count will be increased only if  the  if(isPrime == 2) becomes true and the prime 
                      number will displayed in the console screen else the value of count will be same */
        }
        i++;  // this is the update for the i in for loop until n prime number is counted. 
    }
    return 0;
}
