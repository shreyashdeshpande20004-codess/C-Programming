/*
4 — Check Divisibility by 3 and 5
Problem Statement: Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5,
or neither.
Expected Output:
• Input: 15 → Divisible by Both
• Input: 9 → Divisible by 3 Only
• Input: 10 → Divisible by 5 Only
• Input: 7 → Not Divisible by Either
*/

#include <stdio.h>
#include <stdlib.h>


void CheckMultipleDivisibility(int iNo)
{
// Write your logic here
    if((iNo %3 == 0) && (iNo % 5 ==0))
    {
        printf("Divisible by 3 and 5");

    }
    else if(iNo % 5 ==0)
    {
        printf("Divisible by 5");
    }
    else if(iNo % 3==0)
    {
        printf("divisible by 3");
    }
    else
    {
        printf("Not divisible by 3 and 5");
    }
}
int main(void)
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}