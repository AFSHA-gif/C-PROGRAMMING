/*
Write a program to simulate a simple calculator using switch case.
(Menu driven)
*/

#include <stdio.h>

int main()
{
    int a, b;
    char choice;

    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter * for multiplication\n");
    printf("Enter / for division\n");
    printf("Enter %% for remainder\n");

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case '+': printf("Sum = %d", a + b);
         break;
        case '-': printf("Difference = %d", a - b);
         break;
        case '*': printf("Product = %d", a * b); 
         break;
        case '/': printf("Quotient = %d", a / b);
         break;
        case '%': printf("Remainder = %d", a % b);
         break;
        default: printf("Invalid choice");
    }

    return 0;
}