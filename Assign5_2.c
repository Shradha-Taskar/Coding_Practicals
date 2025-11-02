/*
    Algorithm

    START
        Accept two numbers from user as No1 and No2
        If No1 > No2
            Return No1
        Otherwise
            Return No2
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description   : Returns the maximum among two numbers
//  Input         : Integer, Integer
//  Output        : Integer
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1 = 0, num2 = 0, result = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);

    printf("Maximum number is: %d\n", result);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10 20   Output : 20
//  Input : 7 3     Output : 7
//  Input : -5 -10  Output : -5
//
///////////////////////////////////////////////////////////////////////////////////////////////
