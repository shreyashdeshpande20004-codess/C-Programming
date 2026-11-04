#include<stdio.h>

int CountFour(int iNo)
{
    long long iNum = iNo;
    int iDigit = 0;
    int iCount = 0;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    while(iNum != 0)
    {
        iDigit = iNum % 10;

        if(iDigit == 4)
        {
            iCount++;
        }

        iNum = iNum / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);

    return 0;
}