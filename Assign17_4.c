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
        Accept three numbers from user as A, B, C
        If A < B and A < C
            Display A as Minimum
        Else if B < C
            Display B as Minimum
        Else
            Display C as Minimum
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMin
//  Description   : Used to find minimum among three numbers
//  Input         : Integer, Integer, Integer
//  Output        : Integer (Returns Minimum)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindMin(int iNo1, int iNo2, int iNo3)
{
    int iMin = iNo1;

    if(iNo2 < iMin)
    {
        iMin = iNo2;
    }
    if(iNo3 < iMin)
    {
        iMin = iNo3;
    }

    return iMin;
}

int main()
{
    int iA = 0, iB = 0, iC = 0, iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &iA, &iB, &iC);

    iRet = FindMin(iA, iB, iC);

    printf("Minimum number is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 3 7 2   Output : 2
//  Input : 9 4 6   Output : 4
//
///////////////////////////////////////////////////////////////////////////////////////////////
