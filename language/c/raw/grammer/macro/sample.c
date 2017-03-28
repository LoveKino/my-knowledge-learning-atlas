#include <stdio.h>

#define P 13
#define EXPR x * x + P * x

int main (void) {
    int x = 10;
    int y = 2 * EXPR + 4;
    int z = 2 * (EXPR) + 4;

    printf("%d\n", y);
    printf("%d\n", z);
    printf("EXPR");
};

#undef EXPR
