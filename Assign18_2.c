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
        Accept number from user as N
        If N < 0 then convert to positive
        For i = 1 to N
            If i % 2 == 0
                Display i
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEvenNumbers
//  Description   : Used to print all even numbers up to given number
//  Input         : Integer
//  Output        : None (Displays numbers)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void PrintEvenNumbers(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Even numbers up to %d are:\n", iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEvenNumbers(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10   Output : 2 4 6 8 10
//  Input : 7    Output : 2 4 6
//
///////////////////////////////////////////////////////////////////////////////////////////////
