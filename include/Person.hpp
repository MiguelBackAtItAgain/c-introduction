#pragma once  // Prevents multiple inclusion
#include <string>

class Person {

    public:
        Person (std::string name, int age);
        void greet(); 

    private:
        std::string name;
        int age;

};
