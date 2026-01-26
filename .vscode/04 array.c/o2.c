/*
Q. Write a C program to find sum and average of elements of 1D array.
*/

#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\nAverage = %.2f", sum, avg);
    return 0;
}
