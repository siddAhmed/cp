#include <stdio.h>

int main()
{
    int input, flag=0, count;
    printf("Enter the number:");
    scanf("%d", &input);
    for (count=2; count<=input/2; count++)
    {
        if (input % count == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number\n", input);
    }
    if (flag == 1)
    {
        printf("%d is not a prime number\n", input);
    }
    return 0;
}