#include <iostream>

using namespace std;


// Declare a function

void callByRef(int &numberToCange){
    numberToCange = 0;
}

void callByVal(int numberToCange){
    numberToCange = 0;
}

int main(int argc, char* argv[]){
    int my_int = 50;
    cout<<"Original Value: "<<my_int<<endl;
    callByVal(my_int);
    cout<<"After Calling By Value: "<<my_int<<endl;
    callByRef(my_int);
    cout<<"After Calling By Reference: "<<my_int<<endl;

}

