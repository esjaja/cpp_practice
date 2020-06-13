#include<iostream>

template <class T>
T add(T num1, T num2) {
    return num1 + num2;
}

template <class T>
T mul(T num1, T num2) {
    return num1 * num2;
}

// C++11
template <class T>
using OperationFunc = T (*) (T, T);

template <class T, class T1>
T doOperation(T num1, T num2, T1 op) {
    return op(num1, num2);
}


int main() {
    OperationFunc<int> op[2] = {add, mul};
    std::cout << doOperation(5.5, 3.5, op[1]) << std::endl;

}