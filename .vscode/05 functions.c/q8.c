/*
Q. Write a C program to swap two numbers using function (call by reference).
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swap: x=%d y=%d", x, y);
    return 0;
}
