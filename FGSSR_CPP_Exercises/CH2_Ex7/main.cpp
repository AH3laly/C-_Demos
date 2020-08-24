/**
 * This is a program to test your skills at CPP Operator Precedence,
 * You have to expect the correct output.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 */


// Question:
// Determins the output of the following:

#include <iostream>

using namespace std;

int main(){

// A:
    {
        int X = 2;
        int Y;
        Y = X++ + 2;
        cout << Y << endl;
        cout << X << endl;
        cout << endl;
    }
    
// B:
    {
        int X = 2;
        int Y;
        Y = X++ + ++X;
        cout << endl;
    }

    int Y;
    // C:
    Y = 2*(2+(6*5))+5*10/2;

    // D:
    Y = 1+6*2+20/((2*2)+1)-7;

    // E:
    Y = 3*5-2*3+10/(2-7)%4;

    return 0;
}

// Solution:

// ################## Try your Own First #############################


/*
A:
    cout << Y << endl;     4
    cout << X << endl;     3

B:
    Y = 6

C:
    Y = 2*(2+(6*5))+5*10/2
    Y = 2 (2+30) + 25
    Y = 2 (32) + 25
    Y = 64 + 25
    Y = 89

D:
    Y = 1+6*2+20/((2*2)+1)-7;
    Y = 1+12+20/((4)+1)-7
    Y = 13+20/5-7
    Y = 13+4-7
    Y = 10

E:
    Y = 3*5-2*3+10/(2-7)%4;
    Y = 15-6+10/(2-7)%4
    Y = 9+10/-5%4
    Y = 9-5%4
    Y = 9-2
    Y = 8
*/