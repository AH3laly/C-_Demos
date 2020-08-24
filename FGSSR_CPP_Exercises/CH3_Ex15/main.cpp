/**
 * This is a program to calculate the exponent of integer numbers.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write a C++ program to that calculate the exponent X^n,
// Where X and n are integer variables, the result is stored in an integer variable p.


#include <iostream>

using namespace std;

int main(){

    int i, X, n, p = 1;

    cout << "Enter Integer Number: ";
    cin >> X;
    
    cout << "Enter exponent Integer: ";
    cin >> n;

    for(i=1; i<=n; i++){
        p*=X;
    }

    cout << "Result: " << p << endl;
    return 0;
}