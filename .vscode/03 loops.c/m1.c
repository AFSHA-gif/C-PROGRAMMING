/*
Q. Write a C program to print numbers from 1 to N using a loop.
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
