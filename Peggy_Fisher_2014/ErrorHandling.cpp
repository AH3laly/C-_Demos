#include <iostream>
#include <fstream>

using namespace std;

class myException {
    public:
    myException(int code, string message, int line){
        this->code = code;
        this->message = message;
        this->line = line;
    }
    int getCode(){
        return this->code;
    }
    string getMessage(){
        return this->message;
    }
    int getLine(){
        return this->line;
    }
    private:
        int code;
        int line;
        string message;
};

int main(int argc, char* argv[]){

    try {
        throw myException(10, "Hello", 124);
    } catch(myException e){
        cout<<"Code: "<<e.getCode()<<" Message: "<<e.getMessage()<<" Line: "<<e.getLine()<<endl;
    }
    
    return 0;
}