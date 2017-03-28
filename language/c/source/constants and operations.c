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
 * @kTopicDesEnd
 * constants and operations
 */
int main(int argc, char* argv[]) {
    int x = 1234, y = 02322, z = 0x4D2;

    printf("%d\t%o\t%x\n", x, x, x); // print format

    printf("%d\t%d\t%d\n", x, y, z);
}
// kTopicEnd
