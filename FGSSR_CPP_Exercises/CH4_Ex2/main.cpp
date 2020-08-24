/**
 * This is a program to read a list of 50 numbers and:
 * - Place the even numbers into array called even.
 * - Place odd number into array called odd.
 * - Place negative number into array called negative.
 * greater than or equal to 600.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write a program that reads a list of 50 numbers from the keyboard,
// Place the even numbers into array called even, place the odd number into,
// array called odd, and negative number into array called negative,
// Print all three arrays after all numbers hav been read.


#include <iostream>
#include <cstring>

#define NUMBER_OF_DIGITS 20

using namespace std;

int main(){

    // input[21] array to hold 20 numbers and one bye for the null terminator
    int i, buffer;
    int even[NUMBER_OF_DIGITS], odd[NUMBER_OF_DIGITS], negative[NUMBER_OF_DIGITS];
    int even_i=0, odd_i=0, negative_i=0;

    cout << "Enter " << NUMBER_OF_DIGITS << " numbers separated by spaces: ";
    for(i = 0; i<NUMBER_OF_DIGITS; i++){
        
        cin >> buffer;

        if(buffer < 0){ // The number is Negative
            negative[negative_i] = buffer;
            negative_i++;
        } else if(buffer%2 == 0){ // The number is Even
            even[even_i] = buffer;
            even_i++;
        } else { // the number is Odd
            odd[odd_i] = buffer;
            odd_i++;
        }
    }

    // Print All Arrays

    // Print Negative numbers
    cout << endl <<"Negative Numbers: ";
    for(i=0; i<negative_i; i++) {
        cout << negative[i] << " ";
    }

    // Print Even Numbers
    cout << endl <<"Even  Numbers: ";
    for(i=0; i<even_i; i++) {
        cout << even[i] << " ";
    }

    // Print Odd Numbers
    cout << endl <<"Odd  Numbers: ";
    for(i=0; i<odd_i; i++) {
        cout << odd[i] << " ";
    }

    cout << endl;
    return 0;
}