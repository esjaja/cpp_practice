#include<iostream>

union A{
    int a;
    char b[4];
};

int main() {
    A aa;
    // aa.b[0] = 'a';
    // aa.b[1] = 'b';
    // aa.b[2] = 'y';
    // aa.b[3] = 'z';
    aa.a = 0x61626364;
    printf("sizeof A = %d\n", sizeof(aa.a));
    printf("%s\n", aa.b);
    printf("0x%lx\n", aa.a);
    printf("%d\n", aa.a);
}