#include <stdio.h>

/**
 * format %c %d %u unsigned int %ld %s %f ...
 *
 * int printf(const char *format, ...)
 *
 * format:
 *
 * c        character
 * d or i   signed decimal integer
 * e        scientific notation using e character 
 * E        scientific notaiton using E character
 * f        decimal floating point
 * g        uses the shorter of %e or %f
 * G        uses the shorter of %E or %f
 * o        signed octal
 * s        string of characters
 * u        unsigned decimal integer
 * x        unsigned hexadecimal integer
 * X        unsigned hexadecimal integer (capital letters)
 * p        pointer address
 * n        nothing printed
 * %        character
 */
int main(void) {
    printf("6 digit int: %.2f\n", 0.123456789);
    printf("%lu\n", 12345ul);
    printf("%s\n", "hello" "," "world");
    printf("%0x\n", ~0x55);

    int *p = {1, 2, 3};
    printf("%p\n", p);
}
