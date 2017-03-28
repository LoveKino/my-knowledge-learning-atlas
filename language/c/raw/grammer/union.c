#include <stdio.h>

/**
 * union's members share one memory
 *
 * length of union variable equals the longest member.
 */

int main(void) {
    union ClassOrOfficeType {
        int clas;
        char office[10];
    };

    union ClassOrOfficeType classOrOffice;
}
