#include<iostream>
using namespace std;

typedef int (*OperationFunc) (int, int);


int add(int a, int b) {
    cout << "add"<<endl;
    return a + b;
}

int mul(int a, int b) {
    cout << "mul" << endl;
    return a * b;
}

int doOperation(int a, int b, OperationFunc func) {
    return (*func) (a, b);
}

int main() {
    OperationFunc op[2] = {add, mul};
    int a = 5;
    int b = 3;
    cout << (*op[0])(a, b) << endl;
    cout << (*op[1])(a, b) << endl;

    cout << doOperation(800, -800, add) << endl;
    cout << doOperation(80, 0, mul) << endl;

    // cout << "Enter two value:" << endl;
    // cout << "Enter a: " << endl;
    // cin >> a;
    // cout << "Enter b: " << endl;
    // cin >> b;

    // int op_index;
    // cout << "Enter operation (1) add, (2) mul" << endl;
    // cin >> op_index;
    // op_index--;
    // cout << doOperation(a, b, op[op_index]) << endl;
}