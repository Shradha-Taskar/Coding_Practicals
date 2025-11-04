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
        If No <= 1 then display "Not Prime"
        Initialize flag = 0
        For i = 2 to No/2
            If No % i == 0
                flag = 1
                Break
        If flag == 0
            Display "Prime Number"
        Else
            Display "Not Prime"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description   : Used to check whether a given number is prime or not
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckPrime(int iNo)
{
    int iCnt = 0, iFlag = 0;

    if(iNo <= 1)
    {
        printf("%d is not a Prime Number\n", iNo);
        return;
    }

    for(iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFlag = 1;
            break;
        }
    }

    if(iFlag == 0)
    {
        printf("%d is a Prime Number\n", iNo);
    }
    else
    {
        printf("%d is not a Prime Number\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckPrime(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 11   Output : Prime Number
//  Input : 10   Output : Not Prime Number
//
///////////////////////////////////////////////////////////////////////////////////////////////
