/*
Q. Write a C program to demonstrate pointer basics.
*/

#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value=%d Address=%p", *p, p);
    return 0;
}
