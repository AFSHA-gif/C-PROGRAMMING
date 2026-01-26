/*
Q. Write a C program to append data to an existing file.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "a");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }

    gets(str);
    fputs(str, fp);

    fclose(fp);
    printf("Data appended successfully");
    return 0;
}
