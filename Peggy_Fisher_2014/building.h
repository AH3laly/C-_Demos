#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <ctime>

using namespace std;

class building {
private:
    int id;
    string name;
    int floors;
public:
    building(){};
    building(int, string, int){};
    ~building(){};
};

#endif