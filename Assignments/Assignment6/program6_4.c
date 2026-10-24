/*
4 — Check Triangle Validity
Problem Statement: Accept three integer values representing the lengths of the sides of a triangle. Determine
whether they can form a valid triangle. All sides must be positive, and the sum of any two sides must be
greater than the third side.
Expected Output:
• Input: 3 4 5 → Valid Triangle
• Input: 1 2 3 → Invalid Triangle
• Input: 0 4 5 → Invalid Triangle
*/

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSidee1, int iSidee2, int iSidee3)
{
    if((iSidee1 <=0) || (iSidee2 <= 0) || (iSidee3 <= 0))
    {
        printf("Invalid Triangle\n");
    }
    else if((iSidee1 + iSidee2 > iSidee3)&&
            (iSidee1 + iSidee3 > iSidee2)&&
            (iSidee2 + iSidee3) > iSidee1)
            {
                printf("Valid Triangle\n");
            }
    else
    {
        printf("invalid traingle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: \n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}