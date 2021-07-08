#include <stdio.h>

int main ()
{
    //defining the required variables
    double p, n, r, SI;
    //Initialising the variables by taking input
    printf("Enter principle amount: ");
    scanf("%lf", &p);
    printf("Enter Number of years: ");
    scanf("%lf", &n);
    printf("Enter rate of interest: ");
    scanf("%lf", &r);
    //Calculating Simple Interest
    SI = (p * n) * (r / 100);
    //Printing the simple interest
    printf("Simple interest = Rs %f\n", SI);
    return 0;
}