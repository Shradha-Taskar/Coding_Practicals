/*
    Algorithm

    START
        Accept one number from user as No
        If No > 0
            Display "Positive Number"
        Else if No < 0
            Display "Negative Number"
        Else
            Display "Zero"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description   : Used to check whether number is positive, negative, or zero
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Positive Number\n");
    }
    else if(num < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5   Output : Positive Number
//  Input : -3  Output : Negative Number
//  Input : 0   Output : Zero
//
///////////////////////////////////////////////////////////////////////////////////////////////
