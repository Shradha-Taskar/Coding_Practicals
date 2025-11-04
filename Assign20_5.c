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
        Initialize Min = 9
        While No != 0
            Digit = No % 10
            If Digit < Min
                Min = Digit
            No = No / 10
        Display Min
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindSmallestDigit
//  Description   : Used to find the smallest digit in given number
//  Input         : Integer
//  Output        : Integer (Returns Smallest Digit)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindSmallestDigit(int iNo)
{
    int iDigit = 0, iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FindSmallestDigit(iValue);

    printf("Smallest digit is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 45872   Output : 2
//  Input : 90356   Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////
