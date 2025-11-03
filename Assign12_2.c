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
        Accept starting and ending points as Start and End
        If Start > End
            Display "Invalid range"
        Otherwise
            Loop i from Start to End
                If i % 2 != 0
                    Display i
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//    Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : RangeOddDisplay
//  Description   : Used to display odd numbers from given range
//  Input         : Integer, Integer
//  Output        : Void (Displays odd numbers)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void RangeOddDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
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
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeOddDisplay(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 23 35   Output : 23 25 27 29 31 33 35
//  Input : 10 18   Output : 11 13 15 17
//  Input : 90 18   Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////////////////////////
