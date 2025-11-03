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
        Accept area in square feet from user as SqFeet
        Convert to square meters = SqFeet * 0.0929
        Display result
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
//  Function Name : SquareMeter
//  Description   : Used to convert area from square feet to square meter
//  Input         : Integer
//  Output        : Double (Returns area in square meter)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;
    dSqMeter = iValue * 0.0929;
    return dSqMeter;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %.6lf\n", dRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5   Output : 0.464515
//  Input : 7   Output : 0.650321
//
///////////////////////////////////////////////////////////////////////////////////////////////
