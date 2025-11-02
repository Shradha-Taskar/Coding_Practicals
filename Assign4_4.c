/*
    Algorithm

    START
        Accept number from user as No
        If No < 0 then convert it into positive
        Initialize sum = 0
        From i = 1 to No-1
            If No % i != 0
                sum = sum + i
        Return sum
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description   : Returns summation of all non-factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int i = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non-factors is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 12   Output : 50
//  Input : 10   Output : 37
//
///////////////////////////////////////////////////////////////////////////////////////////////
