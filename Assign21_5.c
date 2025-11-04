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
        For i = 1 to N
            If (i % 2 == 0) AND (i % 3 == 0)
                Display i
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintDivisibleBy2and3
//  Description   : Used to print all numbers from 1 to N that are divisible by both 2 and 3
//  Input         : Integer
//  Output        : None (Displays numbers)
//  Author        : Shradha Dattatray Taskar
//  Date          : 04/11/2024
//
///////////////////////////////////////////////////////////////////////////////////////////////

void PrintDivisibleBy2and3(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Numbers divisible by both 2 and 3 up to %d are:\n", iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2 == 0) && (iCnt % 3 == 0))
        {
            printf("%d ", iCnt);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintDivisibleBy2and3(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 30   Output : 6 12 18 24 30
//  Input : 20   Output : 6 12 18
//
///////////////////////////////////////////////////////////////////////////////////////////////
