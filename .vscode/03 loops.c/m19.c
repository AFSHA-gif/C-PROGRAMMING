/*
Q. Write a C program to calculate power of a number using loop.
*/

#include <stdio.h>

int main() {
    int base, exp, i;
    long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for(i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("Result = %ld", result);
    return 0;
}
