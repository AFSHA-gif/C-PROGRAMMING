/*
Q. Write a C program to count frequency of each element in an array.
*/

#include <stdio.h>

int main() {
    int a[100], freq[100] = {0}, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }

    for(i = 0; i < n; i++) {
        if(freq[a[i]] != 0) {
            printf("%d occurs %d times\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
    }

    return 0;
}
