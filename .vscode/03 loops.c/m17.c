/*
Q. Write a C program to print all prime numbers between 1 and N.
*/

#include <stdio.h>

int main() {
    int i, j, n, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    return 0;
}
