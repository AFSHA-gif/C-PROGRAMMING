/*
Q. Write a C program to find factorial of a given number using loop.
*/

#include <stdio.h>

int main() {
    int n, i;
    long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %ld", fact);
    return 0;
}
