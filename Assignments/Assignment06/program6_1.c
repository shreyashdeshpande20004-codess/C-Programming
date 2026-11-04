/*
1 — Calculate Electricity Bill
Problem Statement: Accept the number of electricity units consumed and calculate the total bill using the
following slab-wise rates. Each slab rate applies only to units within that slab.

Units
consumed Rate
First 100 units ₹5 per unit
Next 100 units ₹7 per unit
Above 200 units ₹10 per unit



Negative unit consumption is invalid.
Expected Output:
• Input: 80 → Bill = 400.00
• Input: 150 → Bill = 850.00
• Input: 250 → Bill = 1700.00
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnitss)
{
    float fBill = 0.0f;
    
    if(iUnitss < 0)
    {
        printf("Invalid");
    }
    else if(iUnitss <= 100)
    {
         fBill = iUnitss * 5.0f;
         printf("%f",fBill);

    }
    else if(iUnitss <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnitss - 100) * 7.0f);
        printf("%f",fBill);
    }
    else
    {
        fBill = (100 * 5.0f) + ((200 - 100) * 7.0f) +((iUnitss - 200) * 10.0f);
        printf("%f",fBill);
    }
// Write your logic here
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: \n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);
    return EXIT_SUCCESS;
}