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
        Accept base and exponent from user as Base, Exp
        Initialize Result = 1
        For i = 1 to Exp
            Result = Result * Base
        Display Result
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePower
//  Description   : Used to calculate power of a number using loops
//  Input         : Integer (Base), Integer (Exponent)
//  Output        : Integer (Returns Result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CalculatePower(int iBase, int iExp)
{
    int iCnt = 0, iResult = 1;

    for(iCnt = 1; iCnt <= iExp; iCnt++)
    {
        iResult = iResult * iBase;
    }

    return iResult;
}

int main()
{
    int iBase = 0, iExp = 0, iRet = 0;

    printf("Enter base: ");
    scanf("%d", &iBase);

    printf("Enter exponent: ");
    scanf("%d", &iExp);

    iRet = CalculatePower(iBase, iExp);

    printf("Result is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : Base = 2, Exp = 5   Output : 32
//  Input : Base = 3, Exp = 4   Output : 81
//
///////////////////////////////////////////////////////////////////////////////////////////////
