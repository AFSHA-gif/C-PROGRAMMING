/*
Q. Write a C program to check whether a number is Strong number or not.
*/

#include <stdio.h>

int main() {
    int n, temp, rem, i;
    long sum = 0, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(n != 0) {
        rem = n % 10;
        fact = 1;
        for(i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if(sum == temp)
        printf("Strong number");
    else
        printf("Not a Strong number");

    return 0;
}
