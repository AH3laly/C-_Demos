/**
 * This is a program to read a sorted array and removes all duplicates.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write a program that search a sorted array and removes all duplicates


#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char students[][10] = {
        "Ahmed",
        "Ali",
        "Abdo",
        "David",
        "Zidane",
        "Diana",
        "Ali",
        "Dode",
        "Abdo",
        "Ali",
        "Fatima",
        "Maryam",
        "Abdo",
        "Ali",
        "Zidane"
    };

    int studentsCount = sizeof(students)/sizeof(students[0]);

    char resultArray[studentsCount][20];
    int resultArray_i = 0;

    int elementFound = 0;
    
    int i,j;

    // Initialize resultArray to Zero 
    int jj=0;
    for(j=0; j<studentsCount; j++){
        for(jj=0; jj<20; jj++){
            resultArray[j][jj] = '\0';
        }
    }

    for(i=0; i<studentsCount; i++){
        
        // Search resultArray for students[i]
        for(j=0; j<resultArray_i; j++){
             if(strcmp(students[i], resultArray[j]) == 0){
                 elementFound = 1;
                 break;
             }
        }
        if(elementFound == 0){ // students[i] doesn't exist in resultArray
            strcpy(resultArray[resultArray_i], students[i]);
            resultArray_i++;
        }

        elementFound = 0;
    }

    // Print Two Arrays
    for(i=0; i<studentsCount; i++){
        cout << students[i] << "  ";
    }
    cout << endl;
    for(i=0; i<studentsCount; i++){
            cout << resultArray[i] << "  ";
    }
    cout << endl;

    return 0;
}