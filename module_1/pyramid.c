// Write a program to print a pyramind pattern 
/*
rows => 5
    *
   * *
  * * *
 * * * *
* * * * * 

rows => 3
  *
 * *
* * *

*/

#include <stdio.h>

int main()
{
    int n, i, j, spaces;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        // Printing the spaces
        for (spaces = n - i; spaces > 0; spaces--)
        {
            printf(" ");
        }

        // Printing the asterisk(s)
        for (j=i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

}