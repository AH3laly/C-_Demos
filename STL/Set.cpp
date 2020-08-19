#include <iostream>
#include <set>

using namespace std;

int main(int argc, char * argv[]){
    set<int> s;
    int temp = 1;

    cout << "Insert Elements To Set" << endl;
    while(temp > 0){
        cout << "Enter a Number: ";
        cin>>temp;
        s.insert(temp);
    }

    temp = 1;
    cout << "Remove Elements From Set" << endl;
    while(temp > 0){
        cout << "Enter a Number: ";
        cin>>temp;
        s.erase(temp);
    }

    cout << "Print Set elements" << endl;
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    return 0;
}