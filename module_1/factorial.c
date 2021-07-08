#include <stdio.h>

int main()
{
    int count, n, result=1;
    printf("Enter n:");
    scanf("%d", &n);
    for (count=1; count<=n; count++)
    {
        result *= count;
    }
    printf("Factorial of %d = %d\n", n, result);
    return 0;
}