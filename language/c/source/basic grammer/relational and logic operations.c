// kTopicStart
#include<stdio.h>

/**
 * relational and logical operations
 */
int main(int argc, char* argv[]) {
    int a = 1, b = 2, c = 3, d = 3;

    int ret1 = (a < b && b < c && c < d);
    int ret2 = (a < b && b < c && c <= d);
    int ret3 = ((a < b && b < c) || c < d);
    printf("ret1:\t%d\n", ret1);
    printf("ret2:\t%d\n", ret2);
    printf("ret3:\t%d\n", ret3);
}

// kTopicEnd
