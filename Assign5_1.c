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
        If No < 0 then convert it into positive
        If No % 2 == 0
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

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Used to check whether number is even or odd
//  Input         : Integer
//  Output        : Void (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if(num < 0)
    {
        num = -num;
    }

    if(num % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5   Output : Odd Number
//  Input : 10  Output : Even Number
//  Input : -8  Output : Even Number
//
///////////////////////////////////////////////////////////////////////////////////////////////
