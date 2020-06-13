#include<iostream>
#include "templateFunction.hpp"

template <class T>
T add(T num1, T num2) {
    return num1 + num2;
}

template <class T>
T mul(T mul1, T mul2) {
    return mul1 * mul2;
}

int main() {

    std::cout << add(5, 3) << std::endl;
    std::cout << add(5.5, 3.3) << std::endl;

}