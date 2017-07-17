// kTopicStart

/**
 * branching and iteration
 */
#include<stdio.h>

int main(int argc, char* argv[]) {
    int a = 4, b = 5, c = 20, d = 6;
    if(a < b) {
        c--;
    } else if(a == b){
        c += 4;
    } else {
        c++;
    }

    // conditional expression
    int e = (a < b) ? --d: ++d;

    printf("c: %d\n", c);
    printf("e: %d\n", e);

    switch (a + 2) {
        case 6:
            printf("case 1\n");
            break;
        case 5:
            printf("case 2\n");
            break;
        default:
            printf("default case\n");
    }

    // while loop
    int n = 4;

    while(n) {
        printf("while loop print %d\n", n--);
    }

    // do-while loop
    int m = 2;
    do {
        printf("execute do block\n");
        m--;
    } while(m);

    // for loop
    for(int w = 1; w > 0; w--) {
        printf("for loop %d\n", w);
    }

    // break and continue
    int con = 0;
    while(1) {
        if(con > 3) {
            break;
        } else if(con > 2) {
            con++;
            continue;
        }
        printf("break and condition\n");
        con++;
    }

    // GOTO
    int r = 10;
    r++;
    goto result;
    r++;
    result: printf("goto line: %d", r);
}
// kTopicEnd
