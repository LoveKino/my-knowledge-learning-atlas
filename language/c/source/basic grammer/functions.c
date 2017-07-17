// kTopicStart
#include<stdio.h>

int add(int x, int y); // prototype, we can put this in head file
int add3(int x, int y, int z);

int add(int x, int y) { // definition
    return x  + y;
}

int add3(int x, int y, int z) {
    return add(add(x, y),z);
}

/**
 * @kTopicDesStart
 * function prototypes and function definition
 * @kTopicDesEnd
 *
 * functions
 */
int main(void) {
    printf("add 3 and 4: %d\n", add(3, 4));
    printf("add 3, 4 and 5: %d\n", add3(3, 4, 5));
}
// kTopicEnd
