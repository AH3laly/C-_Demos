/**
 * This is a program to print all odd numbers that are dividable by 5 from 1 to 100.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write C++ program that prints all odd numbers that are dividable by 5,
// From 1 to 100.

#include <iostream>

using namespace std;

int main(){

    int i;

    for(i=1; i<= 100; i++){
        
        if(i%2 == 1 && i%5 == 0){
            // i is an Odd number and dividable by 5
            cout << i << endl;
        }
    }

    return 0;
}

// Solution Notes:
// Modulus of two (%2) for any odd number is 1
// Number is dividable by 5 if it's Modulus of five equal to 0
// So: IF (Number%5 == 0) Then it's dividable by 5