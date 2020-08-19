#include <iostream>

using namespace std;


// Declare a function

int addValues(int a = 10, int b = 5);


int main(int argc, char* argv[]){
    cout<<"Calling Method Without Paramaeters: "<<addValues()<<endl;
    cout<<"Calling Method With Paramaeters: "<<addValues(50, 60)<<endl;

}

int addValues(int a, int b){
    return a+b;
}