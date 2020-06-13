#include<iostream>

void setEqual(int a, int b) {

    printf("setEqual: a (0x%x) = %d, b (0x%x) = %d\n", &a, a, &b, b);

    a = b;

    printf("setEqual: Set a = b\n");
    printf("setEqual: a (0x%x) = %d, b (0x%x) = %d\n", &a, a, &b, b);
}


int main() {

    int a = 5;
    int b = 10;

    printf("Main: a (0x%x) = %d, b (0x%x) = %d\n", &a, a, &b, b);

    setEqual(a, b);

    printf("Main: a (0x%x) = %d, b (0x%x) = %d\n", &a, a, &b, b);

}