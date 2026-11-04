#include<stdio.h>

int Count(int iNo)
{
    long long iNum = iNo;
    int iDigit = 0;
    int iCount = 0;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    do
    {
        iDigit = iNum % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNum = iNum / 10;
    }
    while(iNum != 0);

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}