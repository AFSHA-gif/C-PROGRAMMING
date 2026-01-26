/*
Q. Write a C program to define a structure and display its members.
*/

#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s;

    scanf("%d", &s.roll);
    scanf("%s", s.name);
    scanf("%f", &s.marks);

    printf("Roll=%d Name=%s Marks=%.2f", s.roll, s.name, s.marks);
    return 0;
}
