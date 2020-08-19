#include "building.h"

building::building(){
    cout<<"Building Constructor"<<endl;
    this->id = rand();
    this->name = "New Building";
    this->floors = 5;
}
building::building(int id, string name, int floor){
    this->id = id;
    this->name = name;
    this->floors;
}

building::~building(){
    cout<<"Building Destructor"<<endl;
}