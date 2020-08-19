#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <iomanip> // Input/Output Mainipulation
#include <cstdlib>
#include <cctype> // Helps to deal with characters
#include <ctime>

using namespace std;


void sum_numbers(int nums[], int &result){
    cout<<sizeof(*nums)<<endl;
    /*for(auto n = 0; n < sizeof(nums)/sizeof(nums[0]); n++){
        result+=*nums;
    }*/
}
int main(int argc, char *argv[]){

    {
       int nums[] = {1,1,1,5};
        int result = 0;
        sum_numbers(nums, result);
        cout<<result<<endl;
    }
    return 0;
    //string function
    {
        string name = "Abdo";
        cout<<"name.substr(1) while name=Abdo: "<<name.substr(1,1)<<endl;
        name = "Ahmed";
        cout<<"name.substr(1) while name=Ahmed: "<<name.substr(1)<<endl;
        cout<<"name.length while name=Ahmed: "<<name.length()<<endl;
    }
    //cmath functions
    {
        cout<<"Square Root of 16:"<<sqrt(16)<<endl;
        cout<<"Power 3 of 6:"<<pow(6,3)<<endl;
        cout<<"Sin of 30:"<<sin(120)<<endl;
        cout<<"Sin of 30:"<<cos(120)<<endl;
        cout<<"Absolute number of the float 52.32541:"<<fabs(52.32541)<<endl;
    }
    //iomanip (io Manipulation) functions
    {
        //fixed, setprecision(2) to use fixed decimal with two numbers after the period
        cout<<"Fixed of 125.3254: "<<fixed<<setprecision(2)<<125.3254<<endl;

        // setw(13) to Set Width
        // left to make the content float left
        //setfill(':') to set the empty space with :
        cout <<left<<setw(13)<<setfill(':')<<"foobar"<< endl; // Prints foobar:::::::

        // setw(13) to Set Width
        // right to make the content float right
        //setfill(':') to set the empty space with :
        cout <<right<<setw(13)<<setfill(':')<<"foobar"<< endl; // Prints :::::::foobar
    }
    // cstdlib functions
    {
        //rand() Generates Random Number.
        cout<<"Random Number: "<<rand()<<endl;

        //srand(int num) see the random number seed
        srand(time(0));
        cout<<"Random Number with srand(time(0)): "<<rand()<<endl;

        //abs(int num) returns the absolute number
        //cout<<"Abs of 150.214: "<<abs(150.214f)<<endl;

    }
    // cctype functions
    {
        // bool isalpha(char c) Checks if the character is alphabetic
        cout<<"isalpha('A'): "<<isalpha('A')<<endl;
        cout<<"isalpha('a'): "<<isalpha('a')<<endl;
        cout<<"isalpha('1'): "<<isalpha('1')<<endl;

        // bool isdigit(char c) Checks if the character is digit
        cout<<"isdigit('A'): "<<isdigit('A')<<endl;
        cout<<"isdigit('a'): "<<isdigit('a')<<endl;
        cout<<"isdigit('1'): "<<isdigit('1')<<endl;

        // bool islower(char c) Checks if the character is in lower case
        cout<<"islower('A'): "<<islower('A')<<endl;
        cout<<"islower('a'): "<<islower('a')<<endl;

        // bool isupper(char c) Checks if the character is in upper  case
        cout<<"isupper('A'): "<<isupper('A')<<endl;
        cout<<"isupper('a'): "<<isupper('a')<<endl;

        // bool isspace(char c) Checks if the character is a space
        cout<<"isspace(' '): "<<isspace(' ')<<endl;
        cout<<"isspace('a'): "<<isspace('a')<<endl;
    }
    // ctime work with time
    {
        cout<<"time(0): "<<time(0)<<endl;
    }
    return 0;
    double temp;
    double result = 0;
    cout<<"Welcome.\nPlease enter numbers to sum, Enter 0 to exit:"<<endl;
    while(temp != 0){
        cin>>temp;
        result+=static_cast<double>(temp);
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
    return 0;
}
