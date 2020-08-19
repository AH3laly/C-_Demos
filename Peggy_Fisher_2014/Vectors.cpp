#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){

    vector<long> v;

    //Push Elements to the Vector
    v.push_back(10);
    v.push_back(454);
    v.push_back(954);
    v.push_back(541);
    v.push_back(557);
    v.push_back(7854);

    //Print Vector Elements
    if(v.empty()==false){
        for(auto it : v){
            cout<<it<<endl;
        }
        cout<<"v.capacity(): "<<v.capacity()<<endl;
        cout<<"v.size(): "<<v.size()<<endl;
    }
    
    //Pop last Element
    v.pop_back();

    //Print Vector Elements
    if(v.empty()==false){
        for(auto it : v){
            cout<<it<<endl;
        }
        cout<<"v.capacity(): "<<v.capacity()<<endl;
        cout<<"v.size(): "<<v.size()<<endl;
    }

    //Clear the Vector
    v.clear();

    //Print Vector Elements
    if(v.empty()==false){
        for(auto it : v){
            cout<<it<<endl;
        }
        cout<<"v.capacity(): "<<v.capacity()<<endl;
        cout<<"v.size(): "<<v.size()<<endl;
    }

    return 0;
}