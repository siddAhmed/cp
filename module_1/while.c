//While loop example
#include <stdio.h>

int main ()
{
    int i=1, a;
    printf("Enter the number:");
    scanf("%d", &a);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", a, i, a*i);
        ++i;
    }
    return 0;
}