//PROGRAM TO CHECK WHEATHER THE GIVEN NUMBER IS EVEN OR NOT
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if(n%2==0)
    {
     printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
    return 0;
}