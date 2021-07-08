// Write a program to print the sum of numbers using a function

#include <stdio.h>

void addNumbers(int a, int b);
int main()
{
    int n1, n2, sum;

    printf("Enter the two numbers:");
    scanf("%d %d", &n1, &n2);
    addNumbers(n1, n2);
}

void addNumbers(int a, int b)
{
    printf("%d\n", a + b);
}