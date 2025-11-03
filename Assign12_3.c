/*
step 1: understand the problem statement
step 2: write the algorithm
step 3: decide the programming language
step 4: write the program
step 5: test the program
*/

/*
    Algorithm

    START
        Accept starting and ending points as Start and End
        If Start > End
            Display "Invalid range"
        Otherwise
            Loop i from Start to End
                If i % 2 == 0
                    SumEven = SumEven + i
                Else
                    SumOdd = SumOdd + i
            Difference = SumEven - SumOdd
            Display Difference
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : RangeDiff
//  Description   : Used to calculate difference between sum of even and odd numbers in range
//  Input         : Integer, Integer
//  Output        : Integer (Returns difference)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int RangeDiff(int iStart, int iEnd)
{
    int iCnt = 0;
    int iEvenSum = 0, iOddSum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenSum += iCnt;
        }
        else
        {
            iOddSum += iCnt;
        }
    }

    return (iEvenSum - iOddSum);
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeDiff(iValue1, iValue2);

    printf("Difference is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 23 30   Output : -4
//  Input : 10 18   Output : 5
//  Input : 90 18   Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////////////////////////
