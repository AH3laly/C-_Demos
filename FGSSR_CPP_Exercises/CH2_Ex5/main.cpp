/**
 * This is a program computes the summation and multiplication of two numbers.
 * By: Abdelrahman Helalt <AH3laly@gmail.com>
 */


// Question:
// Draw a flowchart and write a program that computes the summation and 
// multiplication of two numbers.

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int num1, num2, result;
    // op for operator
    char op;

    cout << "Welcome to this program :)" << endl;
    cout << "Please enter two numbers and operator when prompted." << endl;

    cout << "First number:";
    cin >> num1;

    cout << "Second Number:";
    cin >> num2;

    cout << "Operator (+ or *):";
    cin >> op;
    
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            cout << "Error: Invalid operator, available values are (* and +)" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}