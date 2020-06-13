#include<iostream>

void setEqual(int &a, int &b) {
    printf("setEqual: \n  a (0x%x): %d\n  b (0x%x): %d\n", &a, a, &b, b);
    a = b;
    printf("setEqual: set a = b\n");
    
    printf("setEqual: \n  a (0x%x): %d\n  b (0x%x): %d\n", &a, a, &b, b);
}

int main() {
    int a = 5;
    int b = 10;

    printf("Main: \n  a (0x%x): %d\n  b (0x%x): %d\n", &a, a, &b, b);
    setEqual(a, b);

    printf("Main: \n  a (0x%x): %d\n  b (0x%x): %d\n", &a, a, &b, b);

}