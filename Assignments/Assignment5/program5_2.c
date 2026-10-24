/*
    2 — Check Leap Year
    Problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar
    rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than
    or equal to zero invalid.
    Expected Output:
    • Input: 2024 → Leap Year
    • Input: 1900 → Not a Leap Year

    • Input: 2000 → Leap Year
*/

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYearr)
{
    if((iYearr % 4==0) && (iYearr % 100 !=0))
    {
        printf("The year %d is leap year",iYearr);
    }
    else
    {
        printf("The year %d is not a leap year",iYearr);
    }

}

int main()
{
    int iYear = 0;

    printf("Enter year: \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}