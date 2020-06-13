#include<iostream>
#include "templateFunction.hpp"

template <class T>
T add(T num1, T num2) {
    return num1 + num2;
}

template <class T>
T mul(T num1, T num2) {
    return num1 * num2;
}

// specialization
template <>
int add(int num1, int num2) {
    std::cout << "add: if typename is int, just return num1 " << std::endl;
    return num1;
}


int main() {
    std::cout << add<double>(5.5, 3) << std::endl;
    std::cout << add(0, 5) << std::endl;
}