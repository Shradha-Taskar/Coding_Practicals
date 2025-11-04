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
        If (No % 5 == 0) AND (No % 11 == 0)
            Display "Divisible by 5 and 11"
        Else
            Display "Not Divisible by 5 and 11"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisible
//  Description   : Used to check whether number is divisible by both 5 and 11
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckDivisible(int iNo)
{
    if((iNo % 5 == 0) && (iNo % 11 == 0))
    {
        printf("%d is divisible by both 5 and 11\n", iNo);
    }
    else
    {
        printf("%d is not divisible by both 5 and 11\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 55   Output : Divisible by 5 and 11
//  Input : 50   Output : Not Divisible by both 5 and 11
//
///////////////////////////////////////////////////////////////////////////////////////////////
