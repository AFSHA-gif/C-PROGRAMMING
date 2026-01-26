/*
Q. Write a C program to demonstrate pointer to pointer.
*/

#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("%d", **pp);
    return 0;
}
