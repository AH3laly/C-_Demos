#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[]){

    queue<int> st;
    for (int i=1; i<=20; i++){
        st.push(i);
    }
    
    while(st.size() > 0){
        cout << st.front() << endl;
        st.pop();
    }
}