#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for(i = 0; i < len; i++) {
        printf(" 0x%.2x", start[i]);
    }
    printf("\n");
}

void show_int (int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer (void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes (int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

void practice2D2 () {
    int val = 0x12345678;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
}

void inplace_swap (int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void practice2D7 () {
    int x = 0x98FDECBA;
    printf("%x\n", x | ~0xFF); // 0xFFFFFFBA
    printf("%x\n", x ^ 0xFF); // 0x98FDEC45
    printf("%x\n", x & ~0xFF); // 0x98FDEC00
}

void practice2D8 () {
    int x = 0b00110011;
    int m = 0b11110000;
    // bic
    printf("0x%x\n", x & m);
    // bis
    printf("0x%x\n", x | m);
}

void practice2D10 () {
    int x = 0b00101001;
    int y = 0b00101011;
    int z = 0b00101001;
    printf("0x%x\n", !(x ^ y));
    printf("0x%x\n", !(x ^ z));
}

void practice2D11 () {
    int x = 0x55;
    printf("0x%x\n", x << 3);
    printf("0x%x\n", x >> 2);
}

int main(void) {
    test_show_bytes(0x12345678);
    practice2D2();
    const char *s = "ABCDEF";
    show_bytes((byte_pointer) s, strlen(s));

    int a = 20, b = 30;
    inplace_swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    practice2D7();
    practice2D8();
    practice2D10();
    practice2D11();
}
