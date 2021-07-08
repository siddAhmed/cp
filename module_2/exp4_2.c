// Write a program to add all the digits of a number

#include <stdio.h>

int add_num(int num);

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Sum of the digits is: %d\n", add_num(num));

}

int add_num(int num)
{
    int temp = num, sum = 0;

    while (temp != 0)
    {
        int end_digit = temp % 10;
        sum += end_digit;
        temp /= 10;
    }

    return sum;
}