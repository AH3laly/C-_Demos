/**
 * This is a program to collect 20 integers and count the numbers,
 * greater than or equal to 600.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Declare an array and write a segment of code to:
// - Read 20 integer test scores into array.
// - Count the number of scores greater than or equal to 60.


#include <iostream>

using namespace std;

int main(){

    // input[21] array to hold 20 numbers and one bye for the null terminator
    int i, input[21], count = 0;

    cout << "Enter 20 numbers separated by spaces: ";
    for(i = 0; i<20; i++){
        cin >> input[i];
        if(input[i] >= 60){
            count+=input[i];
        }
    }

    cout << "Array Elements: " << endl;
    for(i = 0; i<20; i++){
        cout << input[i] << " ";
    }

    cout << endl << "The Count of scores >= 60: " << count << endl;

    return 0;
}