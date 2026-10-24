/*
3 — Find the Greater of Two Numbers
Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal,
display an appropriate message.
Expected Output:
• Input: 10 20 → 20 is Greater

• Input: 50 30 → 50 is Greater

• Input: 15 15 → Both Numbers Are Equal
*/

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("The %d number is greater \n",iFirst);
    }
    else if(iFirst < iSecond)
    {
        printf("The %d number is greater\n",iSecond);
    }
    else
    {
        printf("Both numbers are equal");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: \n");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}