/*
    Algorithm

    START
        Accept number from user as No
        If No < 0 convert it into positive
        Initialize SumFact = 0, SumNonFact = 0
        For i = 1 to No-1
            If No % i == 0
                SumFact = SumFact + i
            Else
                SumNonFact = SumNonFact + i
        Return (SumFact - SumNonFact)
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description   : Returns difference between summation of factors and non-factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int i = 0, iSumFact = 0, iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 12   Output : -34  (16 - 50)
//  Input : 10   Output : -29  (8 - 37)
//
///////////////////////////////////////////////////////////////////////////////////////////////
