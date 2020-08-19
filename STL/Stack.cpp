#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char *argv[]){

    stack<int> st;
    for (int i=1; i<=20; i++){
        st.push(i);
    }
    
    while(st.size() > 0){
        cout << st.top() << endl;
        st.pop();
    }
}