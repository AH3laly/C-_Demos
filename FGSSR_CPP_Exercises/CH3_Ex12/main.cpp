/**
 * This is a program to calculate the sum and the average of 10 numbers.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write C++ program for an algorithm to calculate the sum and the average,
// of a list of 10 numbers entered by the user.

#include <iostream>

using namespace std;

int main(){

    int i, input, average, sum = 0;
    
    cout << "Enter ten numbers separated by spaces: ";

    for(i=1; i<=10; i++){
        cin >> input;
        sum += input;
    }

    average = sum / 10;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}