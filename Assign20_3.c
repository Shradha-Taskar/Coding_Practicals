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
        Initialize Sum = 0
        For i = 1 to No/2
            If No % i == 0
                Sum = Sum + i
        If Sum == No
            Display "Perfect Number"
        Else
            Display "Not Perfect Number"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description   : Used to check whether number is perfect or not
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo <= 0)
    {
        printf("Invalid number.\n");
        return;
    }

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        printf("%d is a Perfect Number\n", iNo);
    }
    else
    {
        printf("%d is not a Perfect Number\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckPerfect(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 6   Output : Perfect Number
//  Input : 10  Output : Not Perfect Number
//
///////////////////////////////////////////////////////////////////////////////////////////////
