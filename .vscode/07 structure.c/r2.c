/*
Q. Write a C program to store and display information of multiple students using array of structures.
*/

#include <stdio.h>

struct student {
    int roll;
    char name[50];
};

int main() {
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    for(i = 0; i < 3; i++) {
        printf("%d %s\n", s[i].roll, s[i].name);
    }

    return 0;
}
