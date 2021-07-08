/* write a program to accept 10 elements in an array 
and display the smallest number in the array */

#include <stdio.h>

int main()
{
    int i, smallest_int, inp_arr[10];
    printf("Enter the 10 elements of the array:\n");
    for (i=0; i<=9; i++)
    {
        scanf("%d", &inp_arr[i]);
    }
    
    smallest_int = inp_arr[0];
    for (i=1; i<=9; i++)
    {
        if (inp_arr[i] < smallest_int)
        {
            smallest_int = inp_arr[i];
        }

    }
    printf("The smalle integer from the array is %d\n", smallest_int);

}