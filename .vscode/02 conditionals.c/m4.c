//PROGRAM TO CHECK A GIVEN NUMBER IS DIVISBLE BY BOTH 5 & 7 OR NOT
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if((n%5==0) &&(n%7==0))
    {
        printf("%d is divisible by both.",n);
    }
    else
    {
        printf("%d is not divisble by both.",n);
    }
    return 0;
}
