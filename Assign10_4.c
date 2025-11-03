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
        Accept temperature in Fahrenheit from user as F
        Calculate Celsius = (F - 32) * (5.0 / 9.0)
        Display Celsius
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
//  Function Name : FhtoCs
//  Description   : Used to convert temperature from Fahrenheit to Celsius
//  Input         : Float
//  Output        : Double (Returns Celsius value)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    return dCelsius;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %.5lf\n", dRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10   Output : -12.22222
//  Input : 34   Output : 1.11111
//
///////////////////////////////////////////////////////////////////////////////////////////////
