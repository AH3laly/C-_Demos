/**
 * This is a program to read two integers and determin whether the first is,
 * a multiple of the second.
 * 
 * Solution By: Abdelrahman Helaly
 */

// Question:
// Write a program that reads in two integers and determines and prints,
// if the first is a multiple of the second (Hint: Use the modulus operator.)


#include <iostream>

using namespace std;

int main(){

    int first, second;
    cout << "Please enter two integers when prompted." << endl;

    cout << "First number: ";
    cin >> first;

    cout << "Second number: ";
    cin >> second;

    if(second % first == 0){
        cout << first << " is a multiple of " << second << endl;
    } else {
        cout << first << " is NOT a multiple of " << second << endl;
    }

    return 0;
}