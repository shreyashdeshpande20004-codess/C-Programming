/*
5 — Calculate Employee Bonus
Problem Statement: Accept an employee's monthly salary and completed years of service. Calculate the
bonus using these rules: more than 10 years of service earns a bonus of 15% of monthly salary; 5 to 10 years
earns 10%; less than 5 years earns 5%. Salary must be positive and years of service cannot be negative.
Expected Output:
• Input: 30000 12 → Bonus = 4500.00
• Input: 20000 7 → Bonus = 2000.00
• Input: 10000 2 → Bonus = 500.00
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalaryy, int iYearss)
{
    float fBonus = 0.0f;

    if((fSalaryy <= 0) || (iYearss< 0))
    {
        printf("Invalid input\n");
    }
    else if(iYearss >10)
    {
        fBonus = fSalaryy * 0.15f;
        printf("%f",fBonus);
    }
    else if((iYearss > 5) && (iYearss <= 10))
    {
        fBonus = fSalaryy * 0.10f;
        printf("%f",fBonus);
    }
    else
    {
        fBonus = fSalaryy * 0.5f;
        printf("%f",fBonus);
    } 



}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: \n");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}