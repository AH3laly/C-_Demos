#include <iostream>
#include <string>
#include <utility>
#include "Person.h"
#include "MyInteger.h"
#include "Product.h"


//using namespace Welcome;

int main(int argc, char *argv[]){

    MyInteger a;
    for(int i = 0; i<=10; i++){
        a.set(i);
        std::cout << a.get()*10 << std::endl;
    }

    std::pair <int, char> PART1;
    PART1.first = 10;
    PART1.second = 'H';

    std::pair <int, std::string> pr = std::pair<int, std::string>(50, "Abdo Mohamed");
    
    Person p;
    p.setName("Abdelrahman Helaly");
    auto personName = p.getName();
    std::cout << "Hello World" << personName << std::endl;
    //delete &p;
    
    Product product;
    product.setName("No Product Name");
    std::cout << product.getName() << std::endl;
    product.setName("Cisco 3500 L3");
    std::cout << product.getName() << std::endl;
    

    return 0;
}