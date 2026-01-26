/*
Q. Write a C program to delete an element from a 1D array.
*/

#include <stdio.h>

int main() {
    int a[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
