/*
Q. Write a C program to count number of words in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i, words = 1;

    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ')
            words++;
    }

    printf("Number of words = %d", words);
    return 0;
}
