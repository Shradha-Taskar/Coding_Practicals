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
                If i % 2 != 0
                    Sum = Sum + i
            Display Sum
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
//  Function Name  : RangeSumOdd
//  Description   : Used to calculate sum of odd numbers within a range
//  Input         : Integer, Integer
//  Output        : Integer (Returns sum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumOdd(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
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

    iRet = RangeSumOdd(iValue1, iValue2);

    if(iRet != 0)
    {
        printf("Addition of odd numbers is: %d\n", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 23 30   Output : 168
//  Input : 10 18   Output : 56
//  Input : -10 2   Output : -24
//  Input : 90 18   Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////////////////////////
