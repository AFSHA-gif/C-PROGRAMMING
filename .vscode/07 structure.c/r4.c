/*
Q. Write a C program to access structure members using pointer.
*/

#include <stdio.h>

struct student {
    int roll;
};

int main() {
    struct student s;
    struct student *ptr = &s;

    scanf("%d", &ptr->roll);
    printf("Roll=%d", ptr->roll);

    return 0;
}
