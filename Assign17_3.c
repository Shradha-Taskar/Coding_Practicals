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
        Accept two numbers from user as A and B
        If A > B
            Display A as Maximum
        Else
            Display B as Maximum
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description   : Used to find maximum between two numbers
//  Input         : Integer, Integer
//  Output        : Integer (Returns Maximum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter two numbers: ");
    scanf("%d%d", &iValue1, &iValue2);

    iRet = FindMax(iValue1, iValue2);

    printf("Maximum number is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 20 15   Output : 20
//  Input : 10 25   Output : 25
//
///////////////////////////////////////////////////////////////////////////////////////////////
