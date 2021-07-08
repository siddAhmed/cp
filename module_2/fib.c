// Program to print the first 10 digits of the fibonacci series
#include <stdio.h>

int main()
{
    int n=10, fib_a=0, fib_b=1, count, latest_digit;
    printf("%d\n", fib_a);
    printf("%d\n", fib_b);
    for (count=3; count<=n; count++)
    {
        latest_digit = fib_a + fib_b;
        printf("%d\n", latest_digit);
        fib_a = fib_b;
        fib_b = latest_digit;
    
    }
}