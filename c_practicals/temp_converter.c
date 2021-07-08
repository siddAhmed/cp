//Program to convert temprature in Centigrade to Fahrenheit and vice versa
#include <stdio.h>

int main ()
{
    //Defining the required variables
    float C, F, temp_c, temp_f;

    //Initialising the variables by taking input
    printf("Enter temprature in Celcius: ");
    scanf("%f", &C);

    //Calculating the temprature in Fahrenheit
    temp_f = (C * 9/5) + 32;

    //Printing the temprature in Fahrenheit
    printf("Temprature in faranheit = %f\n", temp_f); 

    //Taking input for temprature in Fahrenheit
    printf("Enter temprature in Fahrenheit: ");
    scanf("%f", &F);

    //Calculating temprature in Celsius
    temp_c = (F - 32) * 5/9;

    //Printing temprature in celsius
    printf("Temprature in celsius = %f\n", temp_c);
    return 0;
}