#include<iostream>

typedef union {
  uint32_t l;
  unsigned char c[4];
} EndianTest;

// 輸出位元組順序
void printBytes(uint32_t x) {
  EndianTest et;
  et.l = x;
  for (int i = 0; i < 4; i++) {
    printf("0x%02X ", et.c[i]);
  }
  printf("\n");
}
int main() {

    // Check endian by union
    uint32_t a = 0x12345678;
    // MSB: 0x12
    // LSB: 0x78
    printf("0x%x\n", a);
    printBytes(a);

    // i = ec
    int i = 0x6563;
    // c[0] = 0x63 = c
    // c[1] = 0x65 = e
    char *c = (char*) &i;

    printf("%x\n", c[0]);
    printf("%s\n", c);
    printf("%x: 0x%x\n", &i, i);
    printf("%x: 0x%x\n", &c[0], c[0]);
    printf("%x: 0x%x\n", &c[1], c[1]);



    int num = 0x1234ABCD;
    char *ptrNum = (char*) &num;
    printf("%p\n", (void*) ptrNum);
    for(int i = 0; i < 4; i++) 
        printf("%p: %02x\n", (void *) (ptrNum + i), (unsigned char) *(ptrNum + i));


    char s[] = "DCBA";
    int *si = (int*) s;
    printf("%s\n", (char*)si);
    printf("0x%08x\n", *si);

    int some_i = 1;
    char *some_c = (char*) &some_i;
    printf("0x%08x\n", some_i);
    printf("%d\n", some_i);
    printf("0x%02x\n", *some_c);
    if(*some_c)
        printf("Little Endian");
    else
    {
        printf("Big Endian");
    }
    
}