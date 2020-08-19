#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

    int number1[3] = {12,454};
    int* number2 = number1;

    cout<<"number1: "<<number1<<endl;
    cout<<"number2: "<<number2<<endl;
    cout<<"&number1: "<<&number1<<endl;
    cout<<"&number2: "<<&number2<<endl;
    cout<<"*number2: "<<*number2<<endl;
    cout<<"sizeof(number1): "<<sizeof(number1)<<endl;
    cout<<"sizeof(number2): "<<sizeof(number2)<<endl;

    return 0;
}