/**
 * This is a program to calculate the factorial of a number entered by the user.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write C++ program that calculate factorial of a number n that the user will enter.
// Where the factorial (n!) for the nonnegative integer(n) = n * (n-1) * (n-2) * ... * 2 * 1


#include <iostream>

using namespace std;

int main(){

    int i, input;
    long factorial = 1;

    cout << "Enter a number to calculate the factorial: ";
    cin >> input;

    for(i=input; i>=1; i--){
        cout << "Calculating factorial of: " << i << endl;
        factorial*=i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}