/*
    Algorithm

    START
        Accept number from user as No
        If No is negative, convert it to positive
        For i = 1 to No-1
            If No % i != 0
                Display i
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description   : Displays all non-factors of a number
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 12   Output : 5 7 8 9 10 11
//  Input : 13   Output : 2 3 4 5 6 7 8 9 10 11 12
//  Input : 10   Output : 3 4 6 7 8 9
//
///////////////////////////////////////////////////////////////////////////////////////////////
