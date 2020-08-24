/**
 * This is a program to calculate and print the product of,
 * the odd integers from 1 to 15.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write a program that calculates and prints the product of the odd numbers,
// From 1 to 15.

#include <iostream>

using namespace std;

int main(){

    // product must be initialized to avoid issues with the first use of it.
    int i, product = 1;

    for(i=1; i<= 15; i++){
        
        if(i%2 == 1){
            // This is an Odd number
            product *= i;
        }
    }

    cout << "Product: " << product << endl;

    return 0;
}