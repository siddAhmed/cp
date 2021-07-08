// 


#include <stdio.h>

int main()
{
    //r is the result 
    int i, r=0, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i=1; i < n+1; i++)
    {
        r += i;
        printf("i=%d r=%d n=%d\n", i, r, n);
        // i += 1
    }
    printf("Result is = %d\n", r);
}