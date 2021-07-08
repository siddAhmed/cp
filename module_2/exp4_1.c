// Write a program to print the smaller number of two numbers

#include <stdio.h>

double min(double x, double y);

double min(double x, double y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    double num1, num2, result;
    printf("Enter the two numbers:");
    scanf("%lf %lf", &num1, &num2);
    result = min(num1, num2);
    printf("The smaller value is: %lf\n", result);
    return 0;
}
