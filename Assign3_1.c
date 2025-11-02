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
        If No is negative, convert it into positive
        Initialize counter iCnt to 1
        Repeat until iCnt <= No
            Print (2 * iCnt)
            Increment iCnt
        Stop
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
//  Function Name : PrintEven
//  Description   : It is used to print given number of even numbers
//  Input         : Integer
//  Output        : None (Display on screen)
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", 2 * iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//  Entry point function
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//  Test Cases
//  Input : 7   Output : 2 4 6 8 10 12 14
///////////////////////////////////////////////////////////////////////////////////////////////
