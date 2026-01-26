/*
Q. Write a C program to demonstrate a function without arguments and with return value.
*/

#include <stdio.h>

int getNumber() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    int num = getNumber();
    printf("Number = %d", num);
    return 0;
}
