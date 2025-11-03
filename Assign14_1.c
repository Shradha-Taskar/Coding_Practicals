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
        If No < 0 then convert it into positive
        Loop while No != 0
            Extract last digit = No % 10
            Display digit
            No = No / 10
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
//  Function Name : DisplayDigit
//  Description   : Used to display digits of number in reverse order
//  Input         : Integer
//  Output        : Void (Displays digits)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2395   Output : 5 9 3 2
//  Input : 1018   Output : 8 1 0 1
//  Input : -1018  Output : 8 1 0 1
//  Input : 9000   Output : 0 0 0 9
//
///////////////////////////////////////////////////////////////////////////////////////////////
