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
        Loop i from 1 to No
            Display "*" symbol
        Loop j from 1 to No
            Display "#" symbol
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
//  Function Name : Display
//  Description   : Used to display pattern of * and # as per number
//  Input         : Integer
//  Output        : Void (Displays pattern)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5   Output : * * * * * # # # # #
//  Input : 6   Output : * * * * * * # # # # # #
//  Input : -5  Output : * * * * * # # # # #
//  Input : 2   Output : * * # #
//
///////////////////////////////////////////////////////////////////////////////////////////////
