/**
 * This is a program convert Temprature degrees from Fahrenheit to Celsius
 * Used Formula: celsius = (5/9) * (Fahenheit - 32)
 * By: Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question:
// Write a program to convert a temperature in degrees Fahernheit to degrees,
// Celsius. Use the formula:
// Celsius = (5/9) * (Fahrenheit - 32)


#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]){

    float f_degree, c_degree;
    printf("Please enter the Fahernheit Degree: ");
    scanf("%f", &f_degree);
    printf("Converting Degree %f Fahrenheit to Celsius .....\n", f_degree);
    c_degree = (5.0/9.0) * (f_degree - 32);
    printf("Result: %f\n\n", c_degree);


    return 0;
}