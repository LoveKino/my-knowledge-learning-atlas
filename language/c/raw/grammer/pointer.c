#include <stdio.h>

int Min (int a, int b) {
    return a > b? b: a;
};

int main(void) {
    int x = 10;
    int* pi = &x;
    int** ppi = &pi;
    *pi = *pi + 10;
    printf("%d  %d\n", x, **ppi);
    // void type pointer can point to any type
    int a[3] = {1, 2, 3};
    int *pa = a;
    printf("%d\n", *(pa + 1));

    // function pointer
    int (*pMin) (int a, int b);
    pMin = Min;
    int z = (*pMin)(4, 5);
    printf("%d\n", z);
};
