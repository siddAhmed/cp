// Write a program to find whether the given number entered is even or odd.

#include <stdio.h>

int main()
{
    int number=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number % 2 == 0)
    {
        printf("%d is an even number \n", number);
    }
    else
    {
        printf("%d id an odd number \n", number);
    }
    return 0;
}