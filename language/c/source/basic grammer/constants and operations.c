// kTopicStart
#include <stdio.h>

/**
 * @kTopicDesStart
 * ### constant representations
 *
 * - constant example
 *
 * |  example   | type       |
 * |------------|:-----------|
 * |  1234      |    int     |
 * |  1234L     |  long int  |
 * |  1234U     |  unsigned int  |
 * |  1234UL    |  unsigned long |
 * |  01234     |  octal     |
 * |  0xA123    |  hex       |
 * |  1.3       |  double    |
 * |  1.3f      |  float     |
 * |  1.3L      |  long double |
 * |  'a'       |  character constant |
 * |  "abcd"    |  string constant |
 *
 * \0 for NUL, \n for newline, 't for tag ......
 *
 * `"x" is the concatenation of X and \0`
 *
 * - constant expression
 * 
 * Constant expression will be evaluated at compile-time, no runtime overhead.
 *
 * - symbolic constants
 *
 * `define`
 *
 * `enum`
 *
 * @kTopicDesEnd
 * constants and operations
 */
# define NAME   "ddchen"
# define AGE    27

enum Boolean {FALSE, TRUE};

enum {GREEN=2, YELLOW, WHITE, RED=4, BLUE};

int main(int argc, char* argv[]) {
    int x = 1234, y = 02322, z = 0x4D2;

    printf("%d\t%o\t%x\n", x, x, x); // print format

    printf("%d\t%d\t%d\n", x, y, z);

    printf("name is %s and age is %d\n", NAME, AGE);

    enum Boolean fal = FALSE;

    printf("default enumeration lists values: %d\t%d\n", fal, TRUE);
    printf("color list enumeration: %d\t%d\t%d\t%d\t%d\t", GREEN, YELLOW, WHITE, RED, BLUE);
}
// kTopicEnd
