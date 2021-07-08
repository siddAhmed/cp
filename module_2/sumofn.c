// Sum of n numbers using a mathematical formula

#include <stdio.h>

int main()
{
    int sum, n;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("sum is %d\n", sum);
}