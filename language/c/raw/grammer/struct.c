#include <stdio.h>

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

int main(void) {
    struct StudentType student = {
        11,
        "ddchen",
        "m",
        100,
        {1990, 8, 25}
    };

    printf("num: %d\n", student.num);

    struct StudentType students[] = {
        {12, "kino", "f", 100},
        {12, "kino", "f", 100}
    };
    struct StudentType *pStudent = students;

    printf("%s\n", pStudent->name);

    for(pStudent = students;pStudent < students + 2;pStudent++) {
        printf("%s\n", pStudent -> name);
    }
}
