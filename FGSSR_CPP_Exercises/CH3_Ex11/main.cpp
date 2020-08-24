/**
 * This is a program to print all positive numbers < 40 that are dividable by 4.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write C++ program for an algorithm that print all the positive numbers < 40,
// That are dividable by 4,
// From 1 to 100.

#include <iostream>

using namespace std;

int main(){

    int i;

    for(i=0; i<40; i++){
        if(i%4 == 0){
            // i is dividable by 4
            cout << i << endl;
        }
    }

    return 0;
}

// Solution Notes:
// Modulus of two (%2) for any odd number is 1
// Number is dividable by 5 if it's Modulus of five equal to 0
// So: IF (Number%5 == 0) Then it's dividable by 5