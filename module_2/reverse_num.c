#include <stdio.h>

int main()
{
    int input, mod, rev_num=0;
    printf("Enter the number:");
    scanf("%d", &input);
    while (input > 0)
    {
        rev_num = (rev_num * 10) + (input % 10);
        input /= 10;
    }
    printf("%d\n", rev_num);
    return 0;
}