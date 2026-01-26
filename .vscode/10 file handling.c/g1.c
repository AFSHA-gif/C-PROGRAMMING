/*
Q. Write a C program to create a file and write data into it.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "w");
    if(fp == NULL) {
        printf("File cannot be created");
        return 0;
    }

    printf("Enter text: ");
    gets(str);

    fputs(str, fp);
    fclose(fp);

    printf("Data written successfully");
    return 0;
}
