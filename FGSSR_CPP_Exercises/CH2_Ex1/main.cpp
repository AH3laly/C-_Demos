/**
 * This is a program to calculate the Area and Circumference of a Circle,
 * Used Formulas:
 * area = π * radius * radius
 * circumfence = 2 * π * radius
 * π = 3.14
 * 
 * Written By: Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question:
// Write a program that asks the user to enter the radius of a circle and then,
// computes and isplays the circles's area and circumference. Use the formulas:
// area = π * radius * radius
// circumference = 2 * π * radius


#include <iostream>
#include <stdio.h>

#define PI 3.14

using namespace std;

int main(){

    float radius;
    printf("Please enter Radius value: ");
    scanf("%f", &radius);
    printf("\nCalculating Radius %f ...\n", radius);
    printf("Circle Area: %f\n", (PI * radius * radius));
    printf("Circle Circumference: %f \n\n",(2 * PI * radius));
    
    return 0;
}


