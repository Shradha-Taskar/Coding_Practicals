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
        Initialize Sum = 0
        While No != 0
            Extract digit = No % 10
            If digit is odd
                Add to Sum
            No = No / 10
        Display Sum
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
//  Function Name : OddSum
//  Description   : Used to calculate sum of odd digits in given number
//  Input         : Integer
//  Output        : Integer (Returns sum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int OddSum(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iSum += iDigit;
        }
        iNo = iNo / 10;
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
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddSum(iValue);

    printf("Sum of odd digits is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2395   Output : 17
//  Input : 1018   Output : 2
//  Input : 8462   Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////
