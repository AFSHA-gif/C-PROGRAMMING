/*
Q. Write a C program to read and print a string.
*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("String is: %s", str);
    return 0;
}
