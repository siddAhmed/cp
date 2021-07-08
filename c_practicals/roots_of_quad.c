#include <math.h>
#include <stdio.h>
 
/* Write a program to obtain roots of second order quadratic equations of the form
ax^2 + bx + c */
 
int main()
{
    //Defining the required variables
    float a, b, c;
    float temp, discriminant, root1, root2;
 
    //Initialising the variables by taking input
    printf("Enter the constants separated by a space: ");
    scanf("%f %f %f", &a, &b, &c);
 
    //Calculating the discriminant and the roots
    discriminant = sqrt(pow(b, 2) - (4 * a * c));
    root1 = ((-b) + discriminant) / (2 *a);
    root2 = ((-b) - discriminant) / (2 *a);
    
    //Printing the results
    printf("First root = %f\n", root1);
    printf("Second root = %f\n", root2);
    return 0;
}
