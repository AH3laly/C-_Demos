/**
 * This is a program to determine if a number is a perfect number or not.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// An integer number is said to be a perfect number if it's factors including 1,
// (but not the number itself) , sum to the number. for example
// :6 is a perfect number because 6= 1+2+3. Write a program that determines,
// if parameter number is a perfect number.


#include <iostream>

using namespace std;

int main(){

    long i, input, sum = 1;

    cout << "Enter a number to determine if it's a Perfect Number: ";
    cin >> input;

    for(i=input-1; i>1; i--){
        if(input%i == 0){
            sum+=input/i;
        }
    }

    if(sum == input){
        cout << input << " is a Perfect Number." << endl;
    } else {
        cout << input << " is NOT a Perfect Number." << endl;
    }

    return 0;
}