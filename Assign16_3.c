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
        Initialize Fact = 1
        For i = 1 to No
            Fact = Fact * i
        Display Fact
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindFactorial
//  Description   : Used to calculate factorial of a given number
//  Input         : Integer
//  Output        : Integer (Returns Factorial)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindFactorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FindFactorial(iValue);

    printf("Factorial of %d is: %d\n", iValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5   Output : 120
//  Input : 4   Output : 24
//
///////////////////////////////////////////////////////////////////////////////////////////////
