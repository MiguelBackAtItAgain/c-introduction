#include <iostream>
#include "Person.hpp"

Person::Person(std::string n, int a) : name(n), age(a) {}

void Person::greet() {
    std::cout << "Hello, I'm " << name << " and I'm " << age << " years old." << std::endl;
}