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
        If No > 100
            Display "Greater"
        Otherwise
            Display "Smaller"
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//     Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description   : Used to check whether number is greater than 100 or not
//  Input         : Integer
//  Output        : Boolean
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
        return true;
    else
        return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 101   Output : Greater
//  Input : 39    Output : Smaller
//
///////////////////////////////////////////////////////////////////////////////////////////////
