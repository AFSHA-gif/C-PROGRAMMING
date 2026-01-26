/*
Q. Write a C program to find factorial of a number using function.
*/

#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    int i;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Factorial = %ld", factorial(n));
    return 0;
}
