#include <iostream>

int main() {
    char c[] = "abcdefg";
    char *s = c;

    printf("original: %s\n", s);
    printf("%c\n", *s++);
    printf("after *s++: %s\n", s);
    printf("%c\n", *(s++));
    printf("after *(s++): %s\n", s);
    printf("%c\n", (*s)++);
    printf("after (*s)++: %s\n", s);
    printf("%c\n", *++s);
    printf("after *++s: %s\n", s);
    printf("%c\n", *(++s));
    printf("after *(++s): %s\n", s);
    printf("%c\n", ++*s);
    printf("after ++*s: %s\n", s);
    printf("%c\n", ++(*s));
    printf("after ++(*s): %s\n", s);
}