#include "Product.h"

Product::Product(){
    cout << "Product Class Constructed" << endl;
};

Product::~Product(){
    cout << "Product Class Destructed" << endl;
};

string Product::getName(){
    return name;
};

void Product::setName(string nameToSet){
    name = nameToSet;
};