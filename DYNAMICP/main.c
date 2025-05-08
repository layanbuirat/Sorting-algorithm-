//LEYAN BURAIT
// 1211439
//#1
#include <stdio.h>
#include <stdlib.h>

// Fibonacci Series using Space Optimized Method
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
// Recursion Approach to Find and Print Nth Fibonacci Numbers:
int fib_Recursion(int n)
{
    if (n <= 1)
        return n;
    return fib_Recursion(n - 1) + fib_Recursion(n - 2);
}
int fib_DP(int n)
{
    /* Declare an array to store Fibonacci numbers. */
    int f[n + 2]; // 1 extra to handle case, n = 0
    int i;

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++) {
        /* Add the previous 2 numbers in the series
           and store it */
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main()
{
    int n ;
    printf("enter the number of n \n");
    scanf("%d" , &n);
    //printf("Fibonacci Series using Space Optimized Method\n\n") ;
    //printf("%d\n", fib(n));
    //getchar();
    //printf("Recursion Approach to Find and Print Nth Fibonacci Numbers\n\n") ;
    //printf("%dth Fibonacci Number: %d\n", n, fib_Recursion(n));
    printf("Dynamic Programming Approach to Find and Print Nth Fibonacci Numbers\n") ;
     printf("%d", fib_DP(n));
    getchar();

    return 0;
}
