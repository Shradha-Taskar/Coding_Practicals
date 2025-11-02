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
        Accept one number from the user as No
        If the input is negative, convert it into positive
        If No is divisible by 2
            Display "Even Number"
        Otherwise
            Display "Odd Number"
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//     Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : It is used to check whether the entered number is even or odd
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    if(iNo % 2== 0)
    {
        printf("Even number \n");
    }
    else
    {
        printf("odd number");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//     
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", & iValue);

    bRet = ChkEven(iValue);

    // Display result 

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 10      Output : Even Number
//  Input : 5       Output : Odd Number
//  Input : -4      Output : Even Number
//  Input : 0       Output : Even Number
//
///////////////////////////////////////////////////////////////////////////////////////////////
