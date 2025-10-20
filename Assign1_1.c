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
        Perform division of iValue1 and iValue2
        Display the division on the screen
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
//  Function Name : DivisionOfTwoNumbers
//  Discription :   It is used to perform Division
//  Input :         int, int
//  Output :        int
//  Author :        Shradha Dattatray Taskar
//  Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 < 1)

    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//     
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d", iRet);

    return 0;
}
