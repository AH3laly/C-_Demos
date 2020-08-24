/**
 * This is a program to calculate the time to Cut the grass of a rectangular Yard,
 * There is a rectanular house situated in the Yard.
 * The speed factor is 2 square meters a second
 * 
 * By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write a program that reads in the length and width of a rectangular yard,
// and the length and width of a rectangular house situated in the yard.
// You program should compute the time required to cut the grass at the rate of,
// 2 square meters a second.


// Algorithem Rules:
// (House Width) sould be smaller than (Yard Width)
// (House Length) sould be smaller than (Yard Length)

#include <iostream>
#include <stdio.h>

#define calculate_cut_time(area) (area/2) 

using namespace std;

int main(int argc, char *argv[]){

    cout << "Welcome the This Program :)" << endl;

    cout << "Please enter the following required information:" << endl;

    // Declare main variables, h for House , y for Yard
    int h_width, h_length, y_width, y_length;
    float grass_area;

    // Request Yard Width
    cout << "Yard Width:";
    scanf("%i", &y_width);

    // Request Yard Length
    cout << "Yard Length:";
    scanf("%i", &y_length);

    // Request House Width
    cout << "House Width:";
    scanf("%i", &h_width);
    while(h_width >= y_width) {
        cout << "Error: House Width must be smaller than Yard Width." << endl;
        cout << "House Width:";
        scanf("%i", &h_width);
    }

    // Request House Width
    cout << "House Length:";
    scanf("%i", &h_length);
    while(h_length >= y_length) {
        cout << "Error: House Length must be smaller than Yard Length." << endl;
        cout << "House Length:";
        scanf("%i", &h_length);
    }

    // Subtract house Area from Yard Area to get Grassed Area
    grass_area = (y_width * y_length) - (h_width * h_length);

    printf("The total grass area: %f Square Meters.\n", grass_area);
    printf("Time to cut grass area: %f Seconds\n", calculate_cut_time(grass_area));


    return 0;
}