/*
W.A.P. to calculate the factorial of a give number using a recursive function
---------------------------------- Algorithm ----------------------------------
START
DECLARE function prototype factorial with a integer argument n
DECLARE factorial
    IF n == 0 THEN
        RETURN 1
    IF n == 1 THEN
        RETURN 1
    ELSE
        RETURN (n * CALL factorial(n -1))
    ENDIF
DECLARE main
    READ/INPUT the number (input)
    PRINT the factorial of input is CALL factorial(input)
END

*/

#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int input, result;
    printf("Enter the number:");
    scanf("%d", &input);

    printf("The factorial of %d is %d \n", input, factorial(input));
    return 0;
}


