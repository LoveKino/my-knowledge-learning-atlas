#include <stdio.h>

/**
 * basic type
 *      char int float double void (c89)
 *      _Bool _Complex _Imaginmary (c99)
 *
 * signed unsigned long short long long
 */

int main (void) {
    // int 2 or 4 bytes
    printf("int length %lu \n", sizeof(int));
    // char 1 byte
    printf("char length %lu \n", sizeof(char));
    // short 2 bytes
    printf("short length %lu \n", sizeof(short));
    // long
    printf("long length %lu \n", sizeof(long));
    // double
    printf("double length %lu \n", sizeof(double));
    // float
    printf("float length %lu \n", sizeof(float));
}
