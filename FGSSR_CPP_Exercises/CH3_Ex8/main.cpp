/**
 * This is a program to simulate a simple calculator.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write a program that simulates a simple calculator (Using if, switch).

#include <iostream>

using namespace std;

int main(){

    float number1, number2;
    // op for Operator
    char op;
 
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter Operator (+ - / *): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> number2;

    switch(op){
        case '+':
            cout << number1 + number2;
            break;
        case '-':
            cout << number1 - number2;
            break;
        case '/':
            cout << number1 / number2;
            break;
        case '*':
            cout << number1 * number2;
            break;
        default:
            cout << endl <<"Error: Invalid Operator." << endl;
    }
    
    cout << endl;

    return 0;
}