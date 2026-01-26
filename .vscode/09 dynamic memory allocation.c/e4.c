/*
Q. Write a C program to find sum of array elements using dynamic memory allocation.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i, sum = 0;

    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        sum += p[i];
    }

    printf("Sum=%d", sum);
    free(p);
    return 0;
}
