/* Write a program to print the mathematical table of a given number
using loops */
#include <stdio.h>

int main()
{
    int i, number=0;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (i=1; i<=10; i++)
    {
        printf("%d\n", (number * i));
    }
    return 0;
}