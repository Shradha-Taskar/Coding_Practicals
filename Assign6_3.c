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
        Accept two numbers from user as No1 and No2
        If both numbers are equal
            Display "Equal"
        Otherwise
            Display "Not Equal"
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
//  Function Name : ChkEqual
//  Description   : Used to check whether two numbers are equal or not
//  Input         : Integer, Integer
//  Output        : Boolean
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10 10   Output : Equal
//  Input : 10 12   Output : Not Equal
//  Input : 10 -10  Output : Not Equal
//
///////////////////////////////////////////////////////////////////////////////////////////////
