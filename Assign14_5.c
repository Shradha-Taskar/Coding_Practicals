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
        Initialize Count = 0
        While No != 0
            Extract digit = No % 10
            If digit > 5
                Increment Count
            No = No / 10
        Display Count
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
//  Function Name : CountGreaterThanFive
//  Description   : Used to count digits greater than 5 in given number
//  Input         : Integer
//  Output        : Integer (Returns count)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountGreaterThanFive(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 5)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
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

    iRet = CountGreaterThanFive(iValue);

    printf("Digits greater than 5 are: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2395   Output : 1
//  Input : 1018   Output : 0
//  Input : 9000   Output : 1
//  Input : 56672  Output : 3
//
///////////////////////////////////////////////////////////////////////////////////////////////
