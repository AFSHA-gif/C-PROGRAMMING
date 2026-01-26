//PROGRAM TO CHECK A GIVEN NUMBER IS DIVISBLE EITHER BY 2 OR 3
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if((n%2==0) || (n%3==0))
    {
        printf("%d is divisible .",n);
    }
    else
    {
        printf("%d is not divisble .",n);
    }
    return 0;
}