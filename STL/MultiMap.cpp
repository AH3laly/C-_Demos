#include <iostream>
#include <map>

using namespace std;


int main(int argc, char *argv[]){

    // This line declars myMap with type map \
    it accepts integer as a key and string as avalue

    multimap<int, string> myMap;
    pair<int, string> p;

    int temp = 0;
    string str;

    cout << "Etering Elements to Map." << endl;
    while(temp >= 0){
        cout << "Enter a Key: ";
        getline(cin, str);
        temp = stoi(str);
        if(temp >= 0){
            p.first = temp;
            cout << "Enter a Value: ";
            getline(cin, str);
            p.second = str;
            myMap.insert(p);
        }
    }

    cout << "Printing Map Contents" << endl;
    for(auto it = myMap.begin(); it != myMap.end(); it++){
        cout << it->first << " -> " << it->second << endl;
    }


    cout << "Removing Elements From Map." << endl;
    temp = 0;
    while(temp >= 0){
        cout << "Enter a Key: ";
        getline(cin, str);
        temp = stoi(str);
        if(temp >= 0){
            myMap.erase(temp);
        }
    }

    cout << "Printing Map Contents" << endl;
    for(auto it = myMap.begin(); it != myMap.end(); it++){
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}