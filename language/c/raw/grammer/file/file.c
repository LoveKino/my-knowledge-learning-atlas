#include <stdio.h>

/**
 * r
 * w
 * a
 * t text
 * b binary
 * + read and write
 *
 * fgetc/fputc
 * fgets/fputs
 * fread/fwrite
 * fscanf/fprintf
 * rewind move the pointer to the head of file
 * fseek
 *
 * fputs got a response. If success, return written char, or return EOF.
 *
 * char *fgets(char *string, int n, FILE *stream)
 * if meet EOF or \n, will end automatically
 *
 * int fputs(const char *string, FILE *stream)
 *
 * int fseek(FILE *stream, long offset, int origin)
 */

int main(void) {
    FILE *fp;
    // file not exist
    if((fp = fopen("test_none.txt", "rt")) == NULL) {
        printf("error when open file\n");
    }

    // fgetc
    FILE *fp2 = fopen("grammer/file/test.txt", "rt");
    printf("%d\n", fp2 == NULL);
    char ch = fgetc(fp2);
    while(feof(fp2) == 0) {
        putchar(ch);
        ch = fgetc(fp2);
    }
    fclose(fp2);

    // fwrite
    typedef struct {
        int num;
        char name[18];
        char sex[6];
        int age;
    } StudentType;
    
    StudentType student = {
        100,
        "ddchen",
        "male",
        26
    };
    
    FILE *pFile = fopen("grammer/file/test2.txt", "wt+");

    printf("%d\n", pFile == NULL);
    fwrite(&student, sizeof(StudentType), 1, pFile);

    fclose(pFile);

    // fread
    FILE *pFile2 = fopen("grammer/file/test2.txt", "rt");
    printf("%d\n", pFile2 == NULL);
    StudentType stup={};
    fread(&stup, sizeof(StudentType), 1, pFile2);
    printf("%s\n", stup.name);

    fclose(pFile2);
};
