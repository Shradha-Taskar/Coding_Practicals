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
        Accept range from user as Start and End
        If Start > End
            Display "Invalid range"
        Otherwise
            Loop i from Start to End
                If i is divisible by 2 and 5
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
//  Function Name  : RangeDisplayDivisible
//  Description   : Used to display numbers divisible by both 2 and 5
//  Input         : Integer, Integer
//  Output        : Void (Displays numbers)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayDivisible(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2 == 0) && (iCnt % 5 == 0))
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

    RangeDisplayDivisible(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 23 100   Output : 30 40 50 60 70 80 90 100
//  Input : 10 18    Output : 10
//  Input : 90 18    Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////////////////////////
