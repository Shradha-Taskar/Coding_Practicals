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
        Accept number from user as N
        If N < 0 then convert to positive
        Initialize Sum = 0
        For i = 1 to N
            If i % 2 == 0
                Sum = Sum + i
        Display Sum
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumEvenNumbers
//  Description   : Used to calculate sum of all even numbers up to N
//  Input         : Integer
//  Output        : Integer (Returns Sum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int SumEvenNumbers(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumEvenNumbers(iValue);

    printf("Sum of all even numbers up to %d is: %d\n", iValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10   Output : 30
//  Input : 6    Output : 12
//
///////////////////////////////////////////////////////////////////////////////////////////////
