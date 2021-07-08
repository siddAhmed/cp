#include <stdio.h>

int main()
{
    int num1, num2, result;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    // Ternary operation to decide the greater number
    (num1 > num2) ? (printf("%d \n", num1)): (printf("%d \n", num2));
    return 0;
}