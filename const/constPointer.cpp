#include<iostream>

int main() {
    char c = 'a';
    char cc = 'b';

    const char* c1 = &c;
    char const *c2 = &cc;

    printf("c1 = %c, c2 = %c\n", *c1, *c2);

    // WRONG! Can not modify the value it point to
    // *c1 = 'c';
    // *c2 = 'd';

    c1 = c2;
    printf("c1 = %c, c2 = %c\n", *c1, *c2);
    c1 = &c;
    c2 = c1;
    
    printf("c1 = %c, c2 = %c\n", *c1, *c2);

    char* const c3 = &c;
    printf("c3 = %c\n", *c3);
    *c3 = 'c';
    printf("c3 = %c\n", *c3);


    // WRONG! char* is a const pointer, cannot change where it point to
    // c3 = c2;
    // printf("c3 = %c\n", *c3);
    
}