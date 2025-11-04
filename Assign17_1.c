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
        If No < 0 then convert to positive
        Initialize Sum = 0
        While No != 0
            Extract digit = No % 10
            Add digit to Sum
            No = No / 10
        Display Sum
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumOfDigits
//  Description   : Used to calculate sum of digits of a given number
//  Input         : Integer
//  Output        : Integer (Returns Sum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int SumOfDigits(int iNo)
{
    int iDigit = 0, iSum
