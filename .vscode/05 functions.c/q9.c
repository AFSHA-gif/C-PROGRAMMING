/*
Q. Write a C program to find largest element in an array using function.
*/

#include <stdio.h>

int largest(int a[], int n) {
    int i, max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];
    return max;
}

int main() {
    int a[100], n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Largest = %d", largest(a, n));
    return 0;
}
