/*
Q. Write a C program to read structure data from a file.
*/

#include <stdio.h>

struct student {
    int roll;
    char name[50];
};

int main() {
    FILE *fp;
    struct student s;

    fp = fopen("student.txt", "r");

    fscanf(fp, "%d %s", &s.roll, s.name);
    printf("%d %s", s.roll, s.name);

    fclose(fp);
    return 0;
}
