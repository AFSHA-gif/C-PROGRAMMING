/*
Q. Write a C program to find length of a string using function.
*/

#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

int main() {
    char str[100];
    gets(str);
    printf("Length = %d", stringLength(str));
    return 0;
}
