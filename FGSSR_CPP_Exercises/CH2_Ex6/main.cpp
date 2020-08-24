/**
 * This is a program to calculate the dozens and remaining of apples.
 * By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Draw a flowchart and write a program that for a specific number of apples,
// entered by the user determines dozens of apples exist and how many extra,
// apples will remain.

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int numOfApples, dozens, remains;
    cout << "Welcome to this Program :)" << endl;
    cout << "Please enter the number of apples:";
    cin >> numOfApples;

    if(numOfApples <= 0){
        cout << "No Apples to calculate." << endl;
        return 0;
    }

    dozens = numOfApples / 10;
    remains = numOfApples % 10;

    cout << "Dozens: " << dozens << endl;
    cout << "Remains: " << remains << endl;

    return 0;
}