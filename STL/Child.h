#include <iostream>

using namespace std;

#ifndef CHILD_H
#define CHILD_H

class Child {
public:
    Child();
    Child(string, string, int);
    ~Child();
    string const getName();
    void setName(string);
    string const getGender();
    void setGender(string);
    int const getAge();
    void setAge(int);
private:
    string name;
    string gender;
    int age;
    int id;
};

#endif