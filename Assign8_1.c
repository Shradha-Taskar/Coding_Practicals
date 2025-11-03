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
        Accept one number from user as No
        If No < 50
            Display "Small"
        Else if No >= 50 and No < 100
            Display "Medium"
        Else
            Display "Large"
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
//  Function Name : Number
//  Description   : Used to check range of number and display size category
//  Input         : Integer
//  Output        : Void (Displays "Small", "Medium" or "Large")
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
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

    Number(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 25   Output : Small
//  Input : 75   Output : Medium
//  Input : 120  Output : Large
//
///////////////////////////////////////////////////////////////////////////////////////////////
