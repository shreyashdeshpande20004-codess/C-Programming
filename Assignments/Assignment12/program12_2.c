#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    long long iNum = iNo;
    int iDigit = 0;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    do
    {
        iDigit = iNum % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNum = iNum / 10;
    }
    while(iNum != 0);

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}