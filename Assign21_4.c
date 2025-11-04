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
        If No <= 0 then stop
        Initialize Count = 0
        For i = 1 to No/2
            If No % i == 0
                Increment Count
        Display Count
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountFactors
//  Description   : Used to count total number of factors of a given number
//  Input         : Integer
//  Output        : Integer (Returns Count)
//  Author        : Shradha Dattatray Taskar
//  Date          : 04/11/2024
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0, iCount = 0;

    if(iNo <= 0)
    {
        return 0;
    }

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);

    printf("Total number of factors are: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 20   Output : 5
//  Input : 12   Output : 5
//
///////////////////////////////////////////////////////////////////////////////////////////////
