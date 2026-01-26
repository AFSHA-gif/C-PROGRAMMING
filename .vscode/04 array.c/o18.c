/*
Q. Write a C program to check whether a matrix is symmetric or not.
*/

#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("Not a symmetric matrix");
        return 0;
    }

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric matrix");
    else
        printf("Not a symmetric matrix");

    return 0;
}
