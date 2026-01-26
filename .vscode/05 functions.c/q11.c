/*
Q. Write a C program to find factorial of a number using recursion.
*/

#include <stdio.h>

long fact(int n) {
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Factorial = %ld", fact(n));
    return 0;
}
