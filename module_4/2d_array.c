// Incomplete
#include <stdio.h>

int main()
{
    int arr[3][3], i, j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }

    }

    // Printing the 2d array
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


}