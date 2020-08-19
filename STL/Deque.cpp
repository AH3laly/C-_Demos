#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char *argv[]){

    deque<int> deq;
    deq.push_front(1);
    deq.push_back(2);
    deq.push_back(3);
    deq.push_back(4);
    deq.push_back(5);
    int first, last;

    cout << deq.front() << " : " << deq.back() << endl;
    deq.pop_front();
    cout << deq.front() << " : " << deq.back() << endl;
    deq.pop_back();
    cout << deq.front() << " : " << deq.back() << endl;
    return 0;
}