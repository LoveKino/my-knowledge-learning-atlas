#include <stdio.h>

#undef EXPR
#define EXPR(x) (x * x + 3)

#undef SQR
#define SQR(x) (x) * (x)

#undef SQRE
#define SQRE(x) x * x

#undef SQRF
#define SQRF(x) ((x) * (x))

int main (void) {
    int y = 2 * EXPR(5) + 2;
    printf("%d\n", y);

    int x = 3;
    int z = SQR(x + 1); // (x + 1) * (x + 1)
    int w = SQRE(x + 1);

    printf("%d\n", z);
    printf("%d\n", w); // x + 1 * x + 1
    // another error try
    int u = 9/SQR(x + 1); // 9/(x + 1) * (x + 1)

    printf("%d\n", u);
};
