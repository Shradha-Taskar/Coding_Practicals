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
        Accept year from user as Year
        If (Year % 400 == 0) OR (Year % 4 == 0 AND Year % 100 != 0)
            Display "Leap Year"
        Else
            Display "Not Leap Year"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description   : Used to check whether the given year is leap year or not
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("%d is a Leap Year\n", iYear);
    }
    else
    {
        printf("%d is not a Leap Year\n", iYear);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter year: ");
    scanf("%d", &iValue);

    CheckLeapYear(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2024   Output : Leap Year
//  Input : 2023   Output : Not Leap Year
//
///////////////////////////////////////////////////////////////////////////////////////////////
