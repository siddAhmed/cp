#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n:");
    scanf("%d", &n);
    for (i=1; j<=n; i++)
    {
        for (j=1; j<=10; j++)
        {
            printf("%d\t", i * j);
        }
    printf("\n");    
    }
}