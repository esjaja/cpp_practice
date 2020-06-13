#include<iostream>
using namespace std;

int add(int a, int b) {
    cout << "add" << endl;
    return a + b;
}

int multiply(int a, int b) {
    cout << "multiply" << endl;
    return a * b;
}

typedef int (*OperationFunc) (int, int);

int main() {

    // Following 2 lines are same
    // int (*op) (int, int);
    OperationFunc op;

    int a = 5;
    int b = 3;

    printf("&add = %x\n", &add);
    printf("add = %x\n", add);


    op = add;
    printf("op = %x\n", op);
    printf("*op = %x\n", *op);
    printf("&op = %x\n", &op);

    cout << (*op)(a, b) << endl;

    op = multiply;

    cout << (*op)(a, b) << endl;

}