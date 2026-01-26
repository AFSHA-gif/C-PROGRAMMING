//PROGRM TO CHECK WHETHER A CHARACTER IS UPPERCASE OR LOWERCASE
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
    {
        printf("%c is from lowercase",ch);
    }
    else if((ch>='A')&&(ch<='Z'))
    {
        printf("%c is from uppercase",ch);
    }
    else{
        printf("%c is not belong to alphabet ",ch);
    }
    return 0;
}