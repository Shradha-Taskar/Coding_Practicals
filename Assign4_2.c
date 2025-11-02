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
        If No is negative, convert it to positive
        For i = No/2 down to 1
            If No % i == 0
                Display i
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description   : Displays factors of a number in decreasing order
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo / 2; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 12   Output : 6 4 3 2 1
//  Input : 13   Output : 1
//  Input : 10   Output : 5 2 1
//
///////////////////////////////////////////////////////////////////////////////////////////////
