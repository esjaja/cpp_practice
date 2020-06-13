#include<iostream>

int main() {

    char s[] = "0123456";
    char *c = (char*) &s;

    printf("original string: %s\n", c);
    printf("POSTFIX (p++)\n");
    printf("*c++ = %c, string: %s\n", *c++, c);
    printf("*(c++) = %c, string: %s\n", *(c++), c);
    printf("(*c)++ = %c, string: %s\n", (*c)++, c);
    printf("PREFIX (++p)\n");
    printf("++*c = %c, string: %s\n", ++*c, c);
    printf("++(*c) = %c, string: %s\n", ++(*c), c);
    printf("*++c = %c, string: %s\n", *++c, c);
    printf("*(++c) = %c, string: %s\n", *(++c), c);
}