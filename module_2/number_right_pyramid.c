// Write a program in to display the pattern of a right angled triangle using an asterisk

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n:");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}