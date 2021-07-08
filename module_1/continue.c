// Example for the continue statement
// Write a program that prints even numbers from 1 to 20 except 16

#include <stdio.h>

int main ()
{
    // Print numbers till 
    int i;
    for (i=1; i<=20; i++)
    {
        if (i==16)
        {
            continue;
        }
        else if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}