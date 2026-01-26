/*C program to calculate energy bill.
Read the starting and ending meter readings.
The charges are as follows: 
No. of Units Consumed
Charges
0 units – 200 units-Rs. 5.50 per unit
200 units – 400 units-Rs. 700 + Rs. 6.00 per unit in excess of 200
400 units – 600 units-Rs. 1400 + Rs. 7.50 per unit in excess of 400
Above 600 units - Rs. 1850 + Rs. 9.00 per unit in excess of 600*/
#include <stdio.h>

int main()
{
    int start, end, units;
    float bill;

    printf("Enter starting meter reading: ");
    scanf("%d", &start);

    printf("Enter ending meter reading: ");
    scanf("%d", &end);

    units = end - start;

    if (units >= 0 && units <= 200)
    {
        bill = units * 5.50;
    }
    else if (units > 200 && units <= 400)
    {
        bill = 700 + (units - 200) * 6.00;
    }
    else if (units > 400 && units <= 600)
    {
        bill = 1400 + (units - 400) * 7.50;
    }
    else if (units > 600)
    {
        bill = 1850 + (units - 600) * 9.00;
    }
    else
    {
        printf("Invalid meter readings\n");
        return 0;
    }

    printf("Units Consumed = %d\n", units);
    printf("Total Energy Bill = Rs %.2f\n", bill);

    return 0;
}