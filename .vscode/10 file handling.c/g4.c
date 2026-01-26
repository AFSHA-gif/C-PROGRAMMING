/*
Q. Write a C program to count number of characters, words and lines in a file.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;

    fp = fopen("data.txt", "r");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == ' ')
            words++;
        if(ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Characters=%d Words=%d Lines=%d", chars, words + 1, lines + 1);
    return 0;
}
