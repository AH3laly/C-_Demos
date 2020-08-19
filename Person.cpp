#include "Person.h"

Person::Person(){
    cout << "Welcome To Person" << std::endl;
}
Person::~Person(){
    cout << "Good bye from Person" << std::endl;
}

void Person::setName(string p_name){
    name = p_name;
}
string Person::getName(){
    return name;
}