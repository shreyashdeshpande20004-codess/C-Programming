/*
1 — Check Whether a Number Is Positive or Negative
Problem Statement: Write a C program that accepts an integer from the user and determines whether the
entered number is positive, negative, or zero.
Expected Output:
• Input: 15 → Positive Number
• Input: -8 → Negative Number
• Input: 0 → Zero
*/

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo >0)
    {
        printf("Positive number\n");
    }
    else if(iNo <0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero number");

    }


}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
