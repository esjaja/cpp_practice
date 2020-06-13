#include<iostream>
#include<cstring>
int main() {
    char s[] = "hello\0 motor";

    char str1[16] = {0};
    char str2[16] = {0};

    printf("sizeof s : %d\n", sizeof(s));
    printf("sizeof str1: %d, str2: %d\n", sizeof(str1), sizeof(str2));
    
    memcpy(str1, s, sizeof(s));
    printf("%s, sizeof str1 %d\n", str1+6, sizeof(str1));
    strncpy(str2, s, sizeof(s));
    printf("%s, sizeof str2 %d\n", str2, sizeof(str2));
}