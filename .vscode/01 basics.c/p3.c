//PROGRAM FOR SWAPPING OF TWO NUMBERS WITHOUT USING THE THIRD VARIABLE
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The interchange value is %d and %d", a , b);
    return 0;
}