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
        Accept total marks and obtained marks from user as Total and Obtained
        If Total is 0 then return 0 (to avoid division by zero)
        Calculate percentage = (Obtained / Total) * 100
        Display calculated percentage
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
//  Function Name : Percentage
//  Description   : Used to calculate percentage from total and obtained marks
//  Input         : Integer, Integer
//  Output        : Float (returns percentage)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fResult = 0.0;

    if(iTotal == 0)
    {
        return 0.0;
    }

    fResult = ((float)iObtained / (float)iTotal) * 100.0;

    return fResult;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fRet = 0.0;

    printf("Enter total marks: ");
    scanf("%d", &iTotalMarks);

    printf("Enter obtained marks: ");
    scanf("%d", &iObtainedMarks);

    fRet = Percentage(iTotalMarks, iObtainedMarks);

    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 1000 745   Output : 74.50%
//  Input : 500 400    Output : 80.00%
//  Input : 750 0      Output : 0.00%
//  Input : 0 200      Output : 0.00%
//
///////////////////////////////////////////////////////////////////////////////////////////////
