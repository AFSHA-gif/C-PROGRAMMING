/*
Q. Write a C program to find the sum of first N natural numbers using loop.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
