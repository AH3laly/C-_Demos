/**
 * This is a program to convert Weight in Pounds to Kilograms,
 * Used formula: pount = 0.453592
 * By: Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question:
// Write a program to read in the weight (in pounds) of an object and then,
// computes and prints it's weight in kilograms. (Hint: 1 -pound equals 0.453592 Kilograms)

#include <iostream>
#include <stdio.h>

#define formula(w) w*0.453592

using namespace std;
int main(int argc, char *argv[]){

    cout << "Please enter wieght in Pounds: ";
    float weight = 0;
    scanf("%f", &weight);
    cout << "Converting Pounds to Kilograms ....." << endl;
    cout << "Result: " << formula(weight) << endl << endl;
    return 0;
}