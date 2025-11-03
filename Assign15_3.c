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
            If digit is even
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
//  Function Name : EvenSum
//  Description   : Used to calculate sum of even digits in given number
//  Input         : Integer
//  Output        : Integer (Returns sum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int EvenSum(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    iRet = EvenSum(iValue);

    printf("Sum of even digits is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2395   Output : 2
//  Input : 1018   Output : 8
//  Input : 8462   Output : 20
//
///////////////////////////////////////////////////////////////////////////////////////////////
