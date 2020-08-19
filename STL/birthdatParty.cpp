#include <iostream>
#include "Child.h"
#include <vector>
#include <list>
#include <fstream>

using namespace std;

#define USE_VECTOR
//#define USE_LIST


#ifdef USE_VECTOR
    typedef vector<Child> my_container;
#elif defined USE_LIST
    typedef list<Child> my_container;
#endif

void load_children_file(my_container & children){
    string in_string;
    ifstream in_file("Children.txt");
    if(in_file.is_open()){
        Child temp;
        while (getline(in_file, in_string))
        {
            temp.setName(in_string);
            getline(in_file, in_string);
            temp.setGender(in_string);
            getline(in_file, in_string);
            temp.setAge(stoi(in_string));
            children.push_back(temp);
        }
        in_file.close();
    } else {
        cout << "Unable to open the file.";
    }
};
void child_visit(my_container &children, string name, string gender, int age){
    children.push_back(Child(name, gender, age));
    cout << name << " Arrived." << endl;
}

void child_leave(my_container &children, string name){
    int i = 0;
    for(Child &ch : children){
        if(ch.getName() == name){
            children.erase(children.begin() + i);
            cout << name << " Left." << endl;
            break;
        }
        i++;
    }
}

void list_children(my_container &children){
    for(Child &ch : children){
        cout << "Child Info: " << ch.getName() << " " << ch.getGender() << " " << ch.getAge() << endl; 
    }
}

int main(int argc, char *argv[]){
    
    my_container children;
    load_children_file(children);

    list_children(children);
    return 0;
    child_visit(children, "Dode", "Female", 40 );
    list_children(children);
    
    child_visit(children, "Ahmed", "Male", 30 );
    list_children(children);

    child_visit(children, "Abdo", "Male", 35 );
    list_children(children);

    child_leave(children, "Abdo");
    list_children(children);

    child_leave(children, "Ahmed");
    list_children(children);

    child_leave(children, "Dode");
    list_children(children);

}
