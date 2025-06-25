#include <iostream>
#include "Person.hpp"

int main() {

    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;

    Person p(name, age);
    p.greet();

    return 0;

}
