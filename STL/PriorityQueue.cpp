#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[]){

    priority_queue<int> prq;
    prq.push(100);
    prq.push(500);
    prq.push(4);
    prq.push(400);
    prq.push(4);
    
    // Print the Max Value which is 500
    cout << prq.top() << endl;
    prq.pop();
    // Print the Max Value which is 400 after popping the previous max value
    cout << prq.top() << endl;
}