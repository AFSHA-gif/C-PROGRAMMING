//PROGRAM TO CHECK THE WHETHER THE GIVEN NUMBER IS BUZZ NUMBER OR NOT.A  BUZZ NUMBER IS A NUMBER WHICH IS WITH THE 7 OR DIVISIBLE BY 7
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if((n%7==0)||(n%10==7))
    {
     printf("%d is buzz number",n);
    }
    else
    {
        printf("%d is not buzz number",n);
    }
    return 0;
}