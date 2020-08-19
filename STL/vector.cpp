#include <iostream>
#include <vector>

using namespace std;

void print(const vector <int>& my_vector){

    cout << "Vector Content { ";
    for(const int &num : my_vector){
        cout << num << " ";
    }
    cout << " }\n\n";
}
int main(int argc, char *argv[]){

    // Using Vectors
    vector<int> numbers;
    int value;

    // Vector Push Back
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

    //Reset Vector
    numbers.clear();
    
    // Vector Push Front
    cout << "Pushing Front." << endl;
    value = 0;
    while(value>=0){
        cout << "Enter a number or -1 to Exit." << endl;
        cin>>value;
        if(value>0){
            numbers.insert(numbers.begin(), value);
        }
    }
    print(numbers);
    
    int index;
    // Vector Insert Value
    cout << "Inserting Value." << endl;
    index = 0;
    value = 0;
    cout << "Enter Element Index:" << endl;
    cin>>index;
    cout << "Enter Element Value:" << endl;
    cin>>value;
    numbers.insert(numbers.begin() + index, value);
    
    print(numbers);

    // Vector Edit Value
    cout << "Editing Value." << endl;
    index = 0;
    value = 0;
    cout << "Enter Element Index:" << endl;
    cin>>index;
    cout << "Enter New Value:" << endl;
    cin>>value;
    numbers[index] = value;
    
    print(numbers);
    return 0;
}
