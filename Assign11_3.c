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
        Accept starting and ending range as Start and End
        If Start < 0 or End < 0 or Start > End
            Display "Invalid range"
        Otherwise
            Initialize Sum = 0
            Loop i from Start to End
                Sum = Sum + i
            Return Sum
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//     Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Used to calculate sum of all numbers between range
//  Input         : Integer, Integer
//  Output        : Integer (Returns addition)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
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

    iRet = RangeSum(iValue1, iValue2);

    if(iRet != 0)
    {
        printf("Addition is: %d\n", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 23 30   Output : 212
//  Input : 10 18   Output : 126
//  Input : -10 2   Output : Invalid range
//  Input : 90 18   Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////////////////////////
