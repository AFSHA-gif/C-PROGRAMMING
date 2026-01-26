/*
Q. Write a C program to reallocate memory using realloc().
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i, newSize;

    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);

    scanf("%d", &newSize);
    p = (int *)realloc(p, newSize * sizeof(int));

    for(i = n; i < newSize; i++)
        scanf("%d", &p[i]);

    for(i = 0; i < newSize; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}
