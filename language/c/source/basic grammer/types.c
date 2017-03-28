// kTopicStart tar=gcc
/**
 * @kTopicDesStart
 * ### basic data types
 *
 * - Data types
 *
 * |   type             size                              |
 * |----------------|:------------------------------------|
 * | char           | usually 8-bits (1 byte)             |
 * | int            | usually natural word size (16, 32, 64bits)  |
 * | short int      | at least 16-bits                    |
 * | long  int      | at least 32-bits                    |
 * | float          | usually 32-bits                     |
 * | double         | usually 64-bits                     |
 * | long double    | usually at least 64-bits            |
 *
 * `short int <= int <= long int`
 *
 * `float <= double <= long double`
 *
 *  ### `sizeof`
 *
 *  Get the size of type in number of characters
 *
 *  ### type conversions and casts
 *
 *  `v1 op v2`
 *
 *  - `long double > double > float > int > short and char`
 *
 *  - `signed -> unsigned`
 *
 *  - assignment to a "narrower" operand is possible, although information may be lost.
 *  @kTopicDesEnd
 *
 * types.c
 *
 * print the range of values for certain data types
 */

#include <stdio.h>
#include <limits.h> /* integer specifications */
#include <float.h> /* floating-point specifications */

int main(void) {
    // get the range of types

    printf("[range of types]------------------------------\n");
    printf("Integer range: \t%d\t%d\n", INT_MIN, INT_MAX);
    printf("Long range: \t%ld\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Float range: \t%e\t%e\n", FLT_MIN, FLT_MAX);
    printf("Double range: \t%e\t%e\n", DBL_MIN, DBL_MAX);
    printf("Long double range: \t%e\t%e\n", LDBL_MIN, LDBL_MAX);
    printf("Float-Double epsilon: \t%e\t%e\n", FLT_EPSILON, DBL_EPSILON);
    printf("\n");

    // print the size of types

    printf("[sizeof]--------------------------------------\n");
    printf("void\tchar\tshort\tint\tlong\tfloat\tdouble\n");
    printf("%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t\n", 
            sizeof(void), sizeof(char), sizeof(short), sizeof(int),
            sizeof(long), sizeof(float), sizeof(double));
    printf("\n");

    // type convertion
    
    printf("[type convertion]------------------------------\n");
    int a = -10; 
    unsigned int c = 9;
    double b = 20.34;
    int narrow = 0.5 + 7 / 4.0;

    printf("int + double: %f\n", a + b);
    printf("signed + unsigned: %u\n", a + c);
    printf("narrow: %d", narrow);
}
// kTopicEnd
