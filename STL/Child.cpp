#include "Child.h"

Child::Child(){
    // Initialize Default values for a Child
    name = "";
    gender = "";
    age = 0;
}

Child::Child(string _name, string _gender, int _age){
    name = _name;
    gender = _gender;
    age =_age;
}

string const Child::getName() {
    return name;
}

void Child::setName(string _name) {
    name = _name;
}

string const Child::getGender(){
    return gender;
}

void Child::setGender(string _gender){
    gender = _gender;
}

int const Child::getAge(){
    return age;
}

void Child::setAge(int _age){
    age = _age;
}

Child::~Child(){
    //cout << "Child Removed." << endl;
}