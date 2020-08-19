#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger {
private:
    int i;
public:
    MyInteger(){
        std::cout << "MyInteger Constructed" << std::endl;
    }
    ~MyInteger(){
        std::cout << "MyInteger Destructed" << std::endl;
    }
    void set(int);
    int get() const;
};

#endif