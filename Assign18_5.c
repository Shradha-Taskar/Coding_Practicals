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
        If No > 0
            Display "Positive Number"
        Else if No < 0
            Display "Negative Number"
        Else
            Display "Zero"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSign
//  Description   : Used to check whether number is positive, negative, or zero
//  Input         : Integer
//  Output        : None (Displays result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckSign(int iNo)
{
    if(iNo > 0)
    {
        printf("%d is Positive Number\n", iNo);
    }
    else if(iNo < 0)
    {
        printf("%d is Negative Number\n", iNo);
    }
    else
    {
        printf("Number is Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckSign(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : -8   Output : Negative Number
//  Input : 15   Output : Positive Number
//  Input : 0    Output : Zero
//
///////////////////////////////////////////////////////////////////////////////////////////////
