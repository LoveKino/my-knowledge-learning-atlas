#include <stdio.h>

#define R 1

#ifndef _THIS_HEAD_FILE
#define _THIS_HEAD_FILE
// headers include command
// global types
// global variables
// functions
#endif

int main (void) {
#ifdef NUM
    printf("defined number\n");
#else
    printf("not define number\n");
#endif

#if R
    printf("R is not 0\n");
#else
    printf("R is 0\n");
#endif
};
