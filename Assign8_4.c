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
        If No < 0 then convert it into positive
        Loop i from 1 to 10
            Display No * i
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
//  Function Name : Table
//  Description   : Used to display multiplication table of given number
//  Input         : Integer
//  Output        : Void (Displays table)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
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

    Table(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 2   Output : 2 4 6 8 10 12 14 16 18 20
//  Input : 5   Output : 5 10 15 20 25 30 35 40 45 50
//  Input : -5  Output : 5 10 15 20 25 30 35 40 45 50
//
///////////////////////////////////////////////////////////////////////////////////////////////
