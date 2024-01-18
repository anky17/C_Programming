// nTH TERM OF FIBONACCI SERIES.

#include <stdio.h>
int fib(int);
int main()
{
    int num, f;
    printf("Enter any number:");
    scanf("%d", &num);
    f = fib(num);
    printf("The %dth term of fibonacci series is %d", num, f);
}
int fib(int z)
{
    if (z == 1)  
        return 0;
    else if (z == 2)
        return 1;
    else
        return (fib(z - 1) + fib(z - 2));
}
/*
Absolutely! Let's break down how the code works step by step to find the 5th term (`z = 5`) of the Fibonacci series
using the recursive algorithm `return (fib(z - 1) + fib(z - 2))`.

For `z = 5`, it goes through the following sequence of recursive calls:

1. `fib(5)`: This is the initial call.
   - It computes `fib(4)` + `fib(3)`.

2. `fib(4)`: (Subproblem 1)
   - It computes `fib(3)` + `fib(2)`.

3. `fib(3)`: (Subproblem 2)
   - It computes `fib(2)` + `fib(1)`.

4. `fib(2)`: (Base case)
   - `fib(2)` is a base case, known to be `1`.

5. `fib(1)`: (Base case)
   - `fib(1)` is a base case, known to be `0`.

Now, let's backtrack and compute the missing values:

   - `fib(3)` (Subproblem 2) was computed as `fib(2)` + `fib(1)` = `1` + `0` = `1`.
   - `fib(4)` (Subproblem 1) was computed as `fib(3)` + `fib(2)` = `1` + `1` = `2`.
   - Finally, `fib(5)` (initial call) was computed as `fib(4)` + `fib(3)` = `2` + `1` = `3`.

Therefore, using the recursive approach `return (fib(z - 1) + fib(z - 2))`, 
the 5th term of the Fibonacci series (`fib(5)`) is calculated as `3`.*/

