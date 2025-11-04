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
        Initialize EvenCount = 0, OddCount = 0
        For i = 1 to N
            If i % 2 == 0
                Increment EvenCount
            Else
                Increment OddCount
        Display EvenCount and OddCount
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEvenOddRange
//  Description   : Used to count how many even and odd numbers are present between 1 and N
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 04/11/2024
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CountEvenOddRange(int iNo)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }

    printf("Even numbers between 1 and %d: %d\n", iNo, iEvenCnt);
    printf("Odd numbers between 1 and %d: %d\n", iNo, iOddCnt);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CountEvenOddRange(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10   Output : Even = 5, Odd = 5
//  Input : 7    Output : Even = 3, Odd = 4
//
///////////////////////////////////////////////////////////////////////////////////////////////
