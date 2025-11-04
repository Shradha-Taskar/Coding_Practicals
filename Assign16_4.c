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
        Initialize Rev = 0
        While No != 0
            Digit = No % 10
            Rev = Rev * 10 + Digit
            No = No / 10
        Display Rev
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ReverseNumber
//  Description   : Used to reverse the given number
//  Input         : Integer
//  Output        : Integer (Returns Reversed number)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int ReverseNumber(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse of number is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 1234   Output : 4321
//  Input : 9876   Output : 6789
//
///////////////////////////////////////////////////////////////////////////////////////////////
