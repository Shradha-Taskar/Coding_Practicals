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
            Digit = No % 10
            If Digit % 2 == 0
                EvenSum += Digit
            Else
                OddSum += Digit
            No = No / 10
        Display EvenSum and OddSum
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumEvenOddDigits
//  Description   : Used to find sum of even and odd digits separately
//  Input         : Integer
//  Output        : None (Displays sums)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void SumEvenOddDigits(int iNo)
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

    printf("Sum of Even digits: %d\n", iEvenSum);
    printf("Sum of Odd digits : %d\n", iOddSum);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    SumEvenOddDigits(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 123456   Output : Even Sum = 12, Odd Sum = 9
//  Input : 987654   Output : Even Sum = 20, Odd Sum = 24
//
///////////////////////////////////////////////////////////////////////////////////////////////
