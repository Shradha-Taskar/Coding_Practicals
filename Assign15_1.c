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
            If digit is even
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
//  Function Name : CountEven
//  Description   : Used to count even digits in given number
//  Input         : Integer
//  Output        : Integer (Returns count)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("Count of even digits is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2395   Output : 1
//  Input : 1018   Output : 2
//  Input : 8462   Output : 4
//  Input : -8462  Output : 4
//
///////////////////////////////////////////////////////////////////////////////////////////////
