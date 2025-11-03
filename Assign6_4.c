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
        Accept three numbers from user as No1, No2, and No3
        If any number is 0 then treat it as 1 for multiplication (ignore it)
        Multiply all three numbers
        Display multiplication result
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
//  Function Name : Multiply
//  Description   : Used to perform multiplication of three numbers
//  Input         : Integer, Integer, Integer
//  Output        : Integer (returns multiplication)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    return iNo1 * iNo2 * iNo3;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5 4 7      Output : 140
//  Input : 5 0 7      Output : 35
//  Input : 5 0 0      Output : 5
//  Input : 0 0 0      Output : 0
//
///////////////////////////////////////////////////////////////////////////////////////////////
