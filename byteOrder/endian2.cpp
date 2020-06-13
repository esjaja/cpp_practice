#include<iostream>

int main() {
    char c[5] = {0};
    int *a = (int*) &c;

    c[0] = 0x61;
    c[1] = 0x62;
    c[2] = 0x63;
    c[3] = 0x64;
    c[4] = '\0';

    printf("%x\n", c[3]);
    printf("%s", a);
}