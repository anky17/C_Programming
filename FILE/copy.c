// WAP that reads data from a file input.txt and writes to output.txt file

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error in file opening");
        exit(1);
    }
    while ((fscanf(fp1, "%c", &ch)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
