/*
3 — Calculate Shopping Discount
Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying
the following discount. Negative purchase amounts are invalid.

Purchase Amount Discount
Below ₹1000 0%
₹1000 to below ₹5000 10%
₹5000 and above 20%

Expected Output:
• Input: 800 → Payable Amount = 800.00
• Input: 2000 → Payable Amount = 1800.00
• Input: 6000 → Payable Amount = 4800.00
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmountt)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmountt < 0)
    {
        printf("Invalid amount");
    }
    else if(fAmountt <1000)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmountt - fDiscount;
        printf("payable amount is : %f",fFinalAmount);
    }
    else if(fAmountt < 5000)
    {
        fDiscount = fAmountt * 0.10f;
        fFinalAmount = fAmountt - fDiscount;
        printf("payable amount is : %f",fFinalAmount);
    }
    else
    {
        fDiscount = fAmountt * 0.20f;
        fFinalAmount = fAmountt - fDiscount;
        
        printf("Payable amount is : %f",fFinalAmount);
    }

}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}