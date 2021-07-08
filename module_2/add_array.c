// write a program to add two multi-dimensional arrays

#include <stdio.h>

int main()
{
    int rows, columns, i, j;
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &rows, &columns);
    int arr1[rows][columns], arr2[rows][columns], sum[rows][columns];
    for (i=0; i<rows; i++)
    {
        for (j=0; j<columns; j++)
        {
            printf("\nEnter a1[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // For the second array
    for (i=0; i<rows; i++)
    {
        for (j=0; j<columns; j++)
        {
            printf("\nEnter a2[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Adding the arrays
    for (i=0; i<rows; i++)
    {
        for (j=0; j<columns; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing the summed array
    printf("The sum of the arrays is:\n");
    for (i=0; i<rows; i++)
    {
        for (j=0; j<columns; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}