#include <iostream>

using namespace std;

template <typename T> int size_in_bytes(const T& a){
    return sizeof(a)*8;
};

int main(int argc, char *argv[]){
    cout << size_in_bytes(1) << endl;
    cout << size_in_bytes(10.5) << endl;
    cout << size_in_bytes(10.5f) << endl;
    cout << size_in_bytes('a') << endl;
    cout << size_in_bytes("Abdo") << endl;
}
