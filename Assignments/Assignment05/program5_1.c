/*
1 — Find the Greatest of Three Numbers
Problem Statement: Accept three integers and determine the greatest number among them. The program
must also work correctly when two or all three numbers are equal.
Expected Output:
• Input: 10 50 30 → 50 is Greatest
• Input: 40 40 20 → 40 is Greatest
• Input: 15 15 15 → 15 is Greatest
*/

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
// Write your logic here
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("The  number %d is greater\n",iFirst);
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("The  number %d is greater\n",iSecond);
    }
    else 
    {
        printf("The  number %d is greater\n",iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}