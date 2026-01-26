/*
Q. Write a C program to swap two numbers using function (call by value).
*/

#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: a=%d b=%d", a, b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);
    return 0;
}
