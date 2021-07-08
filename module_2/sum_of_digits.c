/* Algorithm
START   
DEFINE function prototype sum_of_digits with 
integer parameter a
DEFINE function sum_of_digits
    DEFINE and initialise variable sum to 0
    WHILE a > 0
        sum = sum % 10
        a = a / 10
        ENDWHILE        
    return sum
DEFINE main
    READ/INPUT number (num)
    PRINT the sum of digit of num is CALL sum_of_digits 
    with argument num
END
*/

#include <stdio.h>

int sum_of_digits(int a);

int sum_of_digits(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("The sum of digits of %d is %d\n", num, sum_of_digits(num));
}

