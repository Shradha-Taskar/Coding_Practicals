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
        If No % 2 == 0
            Display "Even Number"
        Else
            Display "Odd Number"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Used to check whether given number is even or odd
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        printf("%d is Even Number\n", iNo);
    }
    else
    {
        printf("%d is Odd Number\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 7   Output : Odd Number
//  Input : 10  Output : Even Number
//
///////////////////////////////////////////////////////////////////////////////////////////////
