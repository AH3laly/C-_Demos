#include <iostream>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person {
    
    public:
        Person();
        ~Person();
        void setName(string);
        string getName();

    private:
        string name;
};

#endif