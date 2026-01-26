//PROGRAM TO PRINT THE BIGGER NUMBER BETWEEN TWO NUMBERS
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("%d is greatest.",a);
    }
    else
    {
        printf("%d is greatest.",b);
    }
    return 0;
}