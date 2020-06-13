#include<iostream>

void setEqual(int *a, int *b) {

    printf("setEqual: a (0x%x) = %x, point to %d, b (0x%x) = %x, point to %d\n", &a, a, *a, &b, b, *b);
    
    printf("setEqual change value the address point to *a = 3\n");
    *a = 3;
    printf("setEqual: a (0x%x) = %x, point to %d, b (0x%x) = %x, point to %d\n", &a, a, *a, &b, b, *b);

    printf("setEqual: set a = b\n");
    a = b;
    printf("setEqual: a (0x%x) = %x, point to %d, b (0x%x) = %x, point to %d\n", &a, a, *a, &b, b, *b);
}

void setAddressEqual(int **a, int **b) {
    
    printf("setAddressEqual: set a = b\n");
    *a = *b;

}

int main() {
    int a = 5;
    int b = 10;

    
    printf("Main: \na (0x%x) = %d, \nb (0x%x) = %d\n", &a, a, &b, b);
    
    setEqual(&a, &b);

    printf("Main: \na (0x%x) = %d, \nb (0x%x) = %d\n", &a, a, &b, b);

    int *aa = &a;
    int *bb = &b;
    std::cout << "----Change the address int pointer store----" << std::endl;
    printf("Main: \naa (0x%x) = %x, value is %d, \nbb (0x%x) = %x, value is %d\n", &aa, aa, *aa, &bb, bb, *bb);
    setAddressEqual(&aa, &bb);
    
    printf("Main: \na (0x%x) = %d, \nb (0x%x) = %d\n", &a, a, &b, b);

    printf("Main: \naa (0x%x) = %x, value is %d, \nbb (0x%x) = %x, value is %d\n", &aa, aa, *aa, &bb, bb, *bb);

}