/**
 * baisc c language parts
 */

/**
 *
 * 计算机的存储器分段：程序区、数据区。。。
 * 数据存储区分为静态数据存储区和动态数据存储区，动态数据存储区又分为堆和堆栈。堆栈空间由操作系统提供，管理堆栈的效率比堆明显高很多。
 *
 * float 阶符 阶码(P) 数符 尾数(D)
 * N = ± D * 2 ^ (±p)
 */

#include <stdio.h>
#include <math.h>

/**
 * basic type
 *      char int float double void (c89)
 *      _Bool _Complex _Imaginmary (c99)
 * signed unsigned long short long long (c99)
 */

void typeLength (void) {
    // int 2 or 4 bytes
    printf("int length %lu \n", sizeof(int));
    // char 1 bytes
    printf("char length %lu \n", sizeof(char));
    // short 2 bytes
    printf("short length %lu \n", sizeof(short));
    // long 8 bytes
    printf("long length %lu \n", sizeof(long));
    // double 8 bytes
    printf("double length %lu \n", sizeof(double));
    // floar 4 bytes
    printf("float length %lu \n", sizeof(float));
}

// macro
// #define 定义的宏名在编译前的编译预处理阶段用字符串替换宏名得到常量
#define TOP 0

const int SINT_MAX = 65535;

void simpleIO (void) {
    printf("%s\n", "simple io");
    char ch;
    while((ch = getchar()) != EOF) {
        putchar(ch);
    }
}

// static is inner link, only visible to this file.
// normal function and external variable are visible to all files.
static int onlyInThisFile = 3;

/**
 * %c
 * %d
 * %u unsigned int
 * %ld
 * %s
 * %f
 */
void outputControllSymbol (void) {
    printf("6 digit int: %.2f\n", 0.123456789);
}

void printConst (void) {
    printf("%lu\n", 12345ul);
    printf("%lu\n", 0xful);
    // default is double, unless add f
    printf("%f\n", 1.2e-3);
    printf("%f\n", 1.2e-3f);
    // string. the last one is '\0'
    // auto join
    printf("%s\n", "hello" "," "world");
    printf("%d\n", 0 == '\0');
    enum boolean {false, true};
    // const volatile
    printf("%d\n", 20 / 6);
    printf("%d\n", 20 % 6);

    printf("%d\n", 6 < 3 ? 2:3 < 4 ? 5:6);
    printf("%0x\n", ~0x55);
    printf("%0x\n", 0x93 >> 1);
    printf("%d", onlyInThisFile);
}

void variableScope () {
    char a = '1';
    int y;
    {
        char a = '2';
        y = a;
    }
    printf("%c   %c\n", a, y);
}

void StrCpy(char* pDest, char *pSrc) {
    while((*pDest++ = *pSrc++) != '\0'){
        ;
    }
}

int isNegative(float x) {
    if(fabs(x) <= 1.0E-6) {
        return 0;
    } else {
        return x >= 0 ? 1:-1;
    }
}

void pointer (void) {
    int x = 10;
    int* pi = &x;
    int** ppi = &pi;
    *pi = *pi + 10;
    printf("%d  %d\n", x, **ppi);
    // void type pointer can point to any type
    int a[3] = {1, 2, 3};
    int * pa = a; // pa = &a[0]
    printf("%d\n", *(pa+1));
}

/**
 * struct
 */
struct DateType {
    int year;
    int month;
    int day;
};

struct StudentType {
    int num;
    char *name;
    char sex[3];
    float score;
    struct DateType birthday;
};

struct StudentType boy, girl;

void printStruct (void) {
    boy.num = 200;
    struct StudentType student = {
        11,
        "ddchen",
        "m",
        100,
        {1990, 8, 25}
    };
    printf("num:%d\n", student.num);

    struct StudentType students[] = {
        {12, "kino", "f", 100},
        {12, "kino", "f", 100}
    };
    struct StudentType anotherStudent = student;
    struct StudentType *p = &anotherStudent;
    printf("%s\n", p->name);

    struct StudentType *pStudent;
    for(pStudent = students;pStudent < students + 2;pStudent++) {
        printf("%s\n", pStudent -> name);
    }
}

int main (void) {
    printf("%d\n", 01777);// eight digit hex
    printf("%d\n", 0x1777); // 16 digit hex

    typeLength();
    outputControllSymbol();
    printf("%d\n", TOP);
    printf("%d\n", SINT_MAX);

    char* pDest;
    StrCpy(pDest, "hello world!");
    printf("%s\n", pDest);

    printConst();
    printf("%d\n", isNegative(200));
    printf("%c\n", (char)300324);
    variableScope();
    pointer();
    printStruct();
    return 0;
}
