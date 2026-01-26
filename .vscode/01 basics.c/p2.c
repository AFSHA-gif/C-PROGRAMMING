#include<stdio.h>
int main() {
    int a, b, c;
    printf("enter two numbers :");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("The interchange value is %d and %d", a, b);
    return 0;
}