#include <iostream>

using namespace std;

#ifndef WELCOME_PRODUCT_H
#define WELCOME_PRODUCT_H

class Product {
    private:
        string name;
        string description;

    public:
        Product();
        virtual ~Product();
        string getName();
        void setName(string);
};

#endif