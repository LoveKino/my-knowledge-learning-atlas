#include<stdio.h>

struct PackedDataType {
    unsigned a: 2;
    unsigned : 0; // next pack will store from next byte
    unsigned b: 6;
    unsigned c: 5;
    unsigned d: 3;
    unsigned e: 8;
    unsigned f: 4;
    unsigned g: 4;
};

int main(void) {
    printf("%d\n", 0 & 0);
    printf("%d\n", 0 & 1);
    printf("%d\n", 1 & 0);
    printf("%d\n", 1 & 1);
    printf("%d\n", 0b10001001 & 0b10000101);

    printf("%d\n", 0 | 0);
    printf("%d\n", 0 | 1);
    printf("%d\n", 1 | 0);
    printf("%d\n", 1 | 1);

    printf("%d\n", 0 ^ 0);
    printf("%d\n", 0 ^ 1);
    printf("%d\n", 1 ^ 0);
    printf("%d\n", 1 ^ 1);

    printf("%d\n", ~9);
    printf("%d\n", 3 << 4);
    printf("%d\n", 15 >> 2);
};
