//PROGRAM THAT CALCULATE YOUR TOTAL MARKS, PERCENTAGE AND GRADE
#include<stdio.h>
int main() {
    int a,b,c,d,e,total,p;
    printf("Enter your marks of 5 subjects :");
    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
    total = a+b+c+d+e;
    p = (total*100/500);
    printf("The total marks obtain (out of 500) is %d\n and percentage is %d\n",total,p);
    if((p<=100) &&(p>90))
    {
        printf("\nGRADE IS A+");
    }
     else if((p<=90) &&(p>80))
    {
        printf("\nGRADE IS A");
    } 
    else if((p<=80) &&(p>70))
    {
        printf("\nGRADE IS B+");
    }
    else if((p<=70) &&(p>60))
    {
        printf("\nGRADE IS B");
    }
     else if((p<=60) &&(p>50))
    {
        printf("\nGRADE IS C");
    }
    else
    {
        printf("\nGRADE IS F");
    }
    
    return 0;
}
