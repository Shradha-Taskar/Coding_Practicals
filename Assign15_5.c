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
        Accept number from user as No
        If No < 0 then convert to positive
        Initialize EvenSum = 0, OddSum = 0
        While No != 0
            Extract digit = No % 10
            If digit is even
                Add to EvenSum
            Else
                Add to OddSum
            No = No / 10
        Calculate Difference = EvenSum - OddSum
        Display Difference
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
//  Function Name : EvenOddDiff
//  Description   : Used to calculate difference between even and odd digit sums
//  Input         : Integer
//  Output        : Integer (Returns difference)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int EvenOddDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNo = iNo / 10;
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
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenOddDiff(iValue);

    printf("Difference between even and odd digit sum is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2395   Output : -15
//  Input : 1018   Output : 6
//  Input : 8440   Output : 16
//
///////////////////////////////////////////////////////////////////////////////////////////////
