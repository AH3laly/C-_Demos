#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]){

    fstream f;
    char line[255];

    // Add Line to the file
    // ios::out instead of ios::app will overwrite the file
    {
        if(f.fail()){
            throw "Error Opei=ning file.";
        }
        f.open("file_operations.txt", ios::app);
        f<<time(0)<<endl;
        f.close();
    }

    // Read the file
    {
        if(f.fail()){
            throw "Error Opei=ning file.";
        }
        f.open("file_operations.txt", ios::in);
        while(!f.eof()){
            f.getline(line, 255);
            cout<<line<<endl;
        }
    }
    return 0;
}