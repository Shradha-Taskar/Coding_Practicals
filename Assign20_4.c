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
        Initialize Max = 0
        While No != 0
            Digit = No % 10
            If Digit > Max
                Max = Digit
            No = No / 10
        Display Max
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargestDigit
//  Description   : Used to find the largest digit in given number
//  Input         : Integer
//  Output        : Integer (Returns Largest Digit)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindLargestDigit(int iNo)
{
    int iDigit = 0, iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FindLargestDigit(iValue);

    printf("Largest digit is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 83429   Output : 9
//  Input : 45671   Output : 7
//
///////////////////////////////////////////////////////////////////////////////////////////////
