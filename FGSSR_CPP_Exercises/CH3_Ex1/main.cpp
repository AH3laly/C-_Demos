/**
 * This is a program to print the larger number of two numbers.
 * Solution By: Abdelrahman Helaly
 */

// Question:
// Write a program that asks the user to enter two integers, 
// Obtains the number from the user, the prints the large number,
// followed by the words "is larger". If the numbers are equal,
// print the message "These number are equal."

#include <iostream>

using namespace std;

int main(){

    int number1 = 0, number2 = 0;

    cout << "Welcome to this program :)" << endl;
    cout << "Please enter two numbers when prompted to check the larger number." << endl;

    cout << "First Number: ";
    cin >> number1;

    cout << "Second Number: ";
    cin >> number2;

    if(number1 > number2) {
        cout << number1 << " is larger." << endl;
    } else if (number1 < number2){
        cout << number2 << " is larger." << endl;
    } else {
        cout << "These numbers are qual." << endl;
    }

    return 0;
}