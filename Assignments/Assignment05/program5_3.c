/*
3 — Calculate Student Grade
Problem Statement: Accept the marks of a student out of 100 and display the grade according to the
following criteria. Marks outside 0–100 are invalid.

Expected Output:
• Input: 85 → Grade B
• Input: 35 → Fail
• Input: 105 → Invalid Marks
*/

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarkss)
{
    if((fMarkss >100) || (fMarkss <0))
    {
        printf("invalid marks");
    }
    else if(fMarkss >= 90)
    {
        printf("Grade A");
    }
    else if(fMarkss >= 75)
    {
        printf("Grade B");
    }
    else if(fMarkss >= 60)
    {
        printf("Grade c");
    }
    else if(fMarkss>= 40)
    {
        printf("grade d");
    }
    else
    {
        printf("fail");
    }
  
// Write your logic here
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: \n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);
    return EXIT_SUCCESS;
}
