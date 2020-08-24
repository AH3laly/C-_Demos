/**
 * This is a program to check if a number is aprime number.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// An integer is said to be prime if it is divisible only by one and itself,
// For example: 2,3,5,7 and 11 are prime, but 4,6,8,9 are not prime.
// Write an algorithm and a program that determines if a number is prime.


#include <iostream>

using namespace std;

int main(){

    int i, input, flag = 1;

    // Flag is raised assuming the number is Prime,
    // Until the condition in the for loop negate that.

    cout << "Enter a number to check if it is Prime: ";
    cin >> input;

    for(i = input-1; i > 1; i--){
        if(input%i == 0){
            // The number is divisible by i, So Lower the flag
            flag = 0;
        }
    }

    if(flag == 1){
        cout << "It's a Prime number." << endl;
    } else {
        cout << "It's NOT a Prime number." << endl;
    }

    return 0;
}

// Algorithm:
/*
Input X
Flag = 1

FOR [Assign I = X-1 ; While I > 1 ; Decrement I by 1 ]
    IF [X%I == 0]
        Then
        Assign Flag = 0
    End IF
End FOR

IF [Flag equals 1]
    Output "The number is Prime"
ELSE IF
    Output "The number is NOT Prime"
END IF

*/