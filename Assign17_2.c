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
        If No < 0 then convert to positive
        Store original number in Temp
        Initialize Rev = 0
        While No != 0
            Digit = No % 10
            Rev = Rev * 10 + Digit
            No = No / 10
        If Temp == Rev
            Display "Palindrome Number"
        Else
            Display "Not Palindrome"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPalindrome
//  Description   : Used to check whether number is palindrome or not
//  Input         : Integer
//  Output        : None (Displays Result)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0, iTemp = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iTemp)
    {
        printf("%d is a Palindrome Number\n", iTemp);
    }
    else
    {
        printf("%d is not a Palindrome Number\n", iTemp);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckPalindrome(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 121   Output : Palindrome
//  Input : 123   Output : Not Palindrome
//
///////////////////////////////////////////////////////////////////////////////////////////////
