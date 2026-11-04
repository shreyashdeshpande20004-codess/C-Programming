#include<stdio.h>

void DisplayDigit(int iNo)
{
    long long iDigit = 0;
    long long iNum = iNo;

    if(iNum < 0)
    {
        iNum = -iNum;
    }

    do
    {
        iDigit = iNum % 10;
        printf("%lld\n", iDigit);
        iNum = iNum / 10;
    }
    while(iNum != 0);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}