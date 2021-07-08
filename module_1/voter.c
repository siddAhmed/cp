#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Ternary operation to decide the eligibility
    (age>18)? (printf("You are eligible \n")): (printf("Not eligible \n"));
    return 0;
}