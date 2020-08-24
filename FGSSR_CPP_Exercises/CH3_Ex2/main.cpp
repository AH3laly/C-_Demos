/**
 * This is a program to print the largest and lowest numbers of thee numbers.
 * Solution By: Abdelrahman Helaly
 */

// Question:
// Write a program that imputs three integers from the keyboard, 
// and prints the smallest and the largest of these numbers.
// The screen dialogue should appear as follows:
// | Input three different integers: 13 27 14
// | Smallest is 13
// | Largest is 27

#include <iostream>

using namespace std;

int main(){

    int number1 = 0, number2 = 0, number3 = 0, largest, smallest;
    cout << "Input three different integers: ";
    cin >> number1;
    cin >> number2;
    cin >> number3;
    
    // Compare number1 to number2 to determine the larger and smaller
    if(number1 > number2) {
        largest = number1;
        smallest = number2;
    } else {
        largest = number2;
        smallest = number1;
    }

    // Compare result to number3
    if(number3 > largest){
        largest = number3;
    }
    if(number3 < smallest){
        smallest = number3;
    }

    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;
    
    return 0;
}