/* Suppose a file named "Num.txt" contains a list in integers.
Write a program to extract the prime numbers only from that file and write them on "Prime.txt" file. */
#include <stdio.h>
int main()
{
    int num, i;
    FILE *fp, *fp1;
    fp = fopen("num.txt", "r");
    fp1 = fopen("prime.txt", "w");
    if (fp == NULL)
    {
        printf("Error in file opening");
    }
    while ((fscanf(fp, "%d", &num)) == 1)
    {
        int count = 0;
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            fprintf(fp1, "%d", num);
        }
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}