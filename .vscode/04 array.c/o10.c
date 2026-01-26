/*
Q. Write a C program to read and display elements of a three dimensional array.
*/

#include <stdio.h>

int main() {
    int a[5][5][5];
    int i, j, k, x, y, z;

    printf("Enter dimensions (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    for(i = 0; i < x; i++)
        for(j = 0; j < y; j++)
            for(k = 0; k < z; k++)
                scanf("%d", &a[i][j][k]);

    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            for(k = 0; k < z; k++)
                printf("%d ", a[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
