/*
Q. Write a C program to write structure data to a file.
*/

#include <stdio.h>

struct student {
    int roll;
    char name[50];
};

int main() {
    FILE *fp;
    struct student s;

    fp = fopen("student.txt", "w");

    scanf("%d %s", &s.roll, s.name);
    fprintf(fp, "%d %s", s.roll, s.name);

    fclose(fp);
    return 0;
}
