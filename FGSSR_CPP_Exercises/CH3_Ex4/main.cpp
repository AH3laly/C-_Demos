/**
 * This is a program to print whether the input number is Odd or Even.
 * Solution By: Abdelrahman Helaly
 */

// Question:
// Write a program that read an integer and determines and prints,
// whether it is odd or even.


#include <iostream>

using namespace std;

int main(){

    int input;
    cout << "Please enter an integer: ";
    cin >> input;

    if(input%2 == 0){
        cout << input << " is even." << endl;
    } else {
        cout << input << " is odd." << endl;
    }
    
    return 0;
}