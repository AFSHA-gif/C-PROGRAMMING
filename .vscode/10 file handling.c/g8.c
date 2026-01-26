/*
Q. Write a C program to write and read data using binary file.
*/

#include <stdio.h>

struct student {
    int roll;
    char name[50];
};

int main() {
    FILE *fp;
    struct student s1 = {1, "Amit"}, s2;

    fp = fopen("stud.dat", "wb");
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("stud.dat", "rb");
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("%d %s", s2.roll, s2.name);
    return 0;
}
