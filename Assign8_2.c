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
        Accept one digit from user as No
        If No < 0 then convert to positive
        If No between 0 and 9
            Display corresponding word
        Else
            Display "Invalid Number"
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
//  Function Name : Display
//  Description   : Used to print digit in word form
//  Input         : Integer
//  Output        : Void (Displays word)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0: printf("Zero\n"); break;
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
        default: printf("Invalid Number\n"); break;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter single digit number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 9   Output : Nine
//  Input : -3  Output : Three
//  Input : 12  Output : Invalid Number
//
///////////////////////////////////////////////////////////////////////////////////////////////
