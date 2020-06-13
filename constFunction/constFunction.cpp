#include<iostream>
using namespace std;

// same as int randomNum(), because return is an assignment to variable
const int randomNum() {
    return rand();
}

int* const constPointerRandomNum() {
    int *i = new int;
    *i = rand();
    return i;
}

void changePointer(int * const p, int *pp) {
    // p = pp;
    *p = 1; 
}

int main() {
    int i = randomNum();
    const int const_i = randomNum();

    cout << i << ", " << const_i << endl;
    i = randomNum();
    // const_i = randomNum();
    cout << i << ", " << const_i << endl;


    int *p = constPointerRandomNum();
    int *pp = &i;
    cout << *p << endl;
    p = pp;
    cout << *p << endl;
    cout << *pp << endl;
    *p = 5;
    cout << *p << endl;
    cout << *pp << endl;

    *pp = 10;
    changePointer(p, pp);
    cout << *p << endl;
}