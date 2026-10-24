/*
2 — Check Admission Eligibility
Problem Statement: A student is eligible for admission if the student's marks are at least 60 and age is at
least 17 years. Accept both values and determine eligibility. Negative age or marks outside 0–100 must be
treated as invalid input.
Expected Output:
• Input: 75 18 → Eligible for Admission
• Input: 55 19 → Not Eligible
• Input: 80 16 → Not Eligible
*/

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarkss, int iAgee)
{
    if((fMarkss >= 60) && (iAgee >= 17))
    {
        printf("eligible for admission\n");
    }
    else
    {
        printf("not eligible for admission\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    int iAge = 0;

    printf("Enter marks and age: \n");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}