/*
Q. Write a C program to print numbers from 1 to N using do while loop.
*/

#include <stdio.h>

int main() {
    int i = 1, n;
    printf("Enter N: ");
    scanf("%d", &n);

    do {
        printf("%d ", i);
        i++;
    } while(i <= n);

    return 0;
}
