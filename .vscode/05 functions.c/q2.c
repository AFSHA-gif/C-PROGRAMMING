/*
Q. Write a C program to demonstrate a function with arguments and without return value.
*/

#include <stdio.h>

void add(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    add(x, y);
    return 0;
}
