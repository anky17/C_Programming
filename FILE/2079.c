/* Suppose a file named "Num.txt" contains a list of integer. Write a program to extract the prime
numbers only from the file and write them on "Prime.txt" file. */

#include <stdio.h>
int main()
{
    FILE *ptr, *prime;
    int num, count;
    ptr = fopen("Num.txt", "r");
    prime = fopen("Prime.txt", "w");
    while ((fscanf(ptr, "%d", &num)) == 1)
    {
        count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            fprintf(prime, "%d", num);
        }
    }
    fclose(ptr);
    fclose(prime);
    return 0;
}