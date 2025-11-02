/*
    Algorithm

    START
        Accept year from user as Y
        If (Y % 4 == 0 AND Y % 100 != 0) OR (Y % 400 == 0)
            Display "Leap Year"
        Otherwise
            Display "Not a Leap Year"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description   : Checks whether the entered year is leap year or not
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int yr = 0;

    printf("Enter year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2024  Output : Leap Year
//  Input : 2023  Output : Not a Leap Year
//  Input : 2000  Output : Leap Year
//  Input : 1900  Output : Not a Leap Year
//
///////////////////////////////////////////////////////////////////////////////////////////////
