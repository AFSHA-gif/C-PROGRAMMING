/*
Q. Write a C program to demonstrate a function with arguments and with return value.
*/

#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Result = %d", multiply(x, y));
    return 0;
}
