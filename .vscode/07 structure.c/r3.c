/*
Q. Write a C program to pass structure to a function.
*/

#include <stdio.h>

struct student {
    int roll;
};

void display(struct student s) {
    printf("Roll=%d", s.roll);
}

int main() {
    struct student s1;
    scanf("%d", &s1.roll);
    display(s1);
    return 0;
}
