#include<stdio.h>


typedef int (*OperationFunc) (int, int);


int add(int a, int b) {
    printf("add\n");
    return a + b;
}

int mul(int a, int b) {
    printf("mul\n");
    return a * b;
}

int main() {
    OperationFunc op;

    int a = 5;
    int b = 3;
    
    op = &add;

    printf("%d\n", (*op)(a, b));

    op = &mul;

    printf("%d\n", (*op)(a,b));
    

}