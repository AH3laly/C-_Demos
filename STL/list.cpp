#include <iostream>
#include <list>

using namespace std;

void print(const list <int>& my_list){

    cout << "List Content { ";
    for(const int &num : my_list){
        cout << num << " ";
    }
    cout << " }\n\n";
}
int main(int argc, char *argv[]){

    // Using Lists
    list<int> numbers;
    int value;

    // List Push Back
    cout << "Pushing Back." << endl;
    value = 0;
    while(value>=0){
        cout << "Enter a number or -1 to Exit." << endl;
        cin>>value;
        if(value>0){
            numbers.push_back(value);
        }
    }
    print(numbers);

    //Reset List
    numbers.clear();
    
    // List Push Front
    cout << "Pushing Front." << endl;
    value = 0;
    while(value>=0){
        cout << "Enter a number or -1 to Exit." << endl;
        cin>>value;
        if(value>0){
            numbers.push_front(value);
        }
    }
    print(numbers);
    
    return 0;
}
