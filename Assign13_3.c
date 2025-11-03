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
        Loop i from 1 to No
            Display i * 2
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
//  Function Name : DisplayEvenMultiple
//  Description   : Used to display first N even numbers
//  Input         : Integer
//  Output        : Void (Displays multiples of 2)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenMultiple(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
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

    DisplayEvenMultiple(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 5   Output : 2 4 6 8 10
//  Input : -4  Output : 2 4 6 8
//  Input : 0   Output : (no output)
//
///////////////////////////////////////////////////////////////////////////////////////////////
