// Do while loop example problem
/* Write a program to develop a simple calculator that accepts 2 numbers from 
the keyboard display a menu to the user and get the user's choice
perform the operation and display the result using switch statement */

#include <stdio.h>

int main ()
{
    // Program exits if flag is set to 2
    int flag=1;
    do {
        float num1, num2;
        int choice;
        printf("Enter the two numbers seprated by a space: ");
        scanf("%f %f", &num1, &num2);
        printf("Enter your choice of operator: \n1. Addition \n2.Substraction \n3. Multiplication \n4. Division \n> ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                break;
            default:
                printf("%d is not a valid choice\n", choice);
                break;
        }
        printf("Do you want to run another operation? (1.Continue 2.Exit) \n> ");
        scanf("%d", &flag);
    } while (flag != 2);
    return 0;
}